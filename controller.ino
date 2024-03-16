#include <micro_ros_arduino.h>
#include <stdio.h>
#include <rcl/rcl.h>
#include <rcl/error_handling.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>
#include <std_msgs/msg/float32.h>
#include <Arduino.h>

#define IN1 27
#define IN2 14
#define ENA 12
#define encoderPinA 26
volatile int pulsos = 0;
const double pulsosPorRevolucion = 240.0;
double refRPM = 0;
float testeo = 5;
double controlSignal = 0;
float controlSignalOut = 0;
float controlSignalOut_pwm = 0;

rcl_publisher_t angular_speed_publisher;
std_msgs__msg__Float32 angular_speed_msg;

rcl_publisher_t refRPM_publisher;
std_msgs__msg__Float32 refRPM_msg;

rcl_subscription_t setpoint_subscriber;
std_msgs__msg__Float32 setpoint_msg;

rcl_allocator_t allocator;
rclc_support_t support;
rcl_node_t node;
rclc_executor_t executor;

rcl_timer_t timer;

const int freq = 10000;
const int ledChannel = 0;
const int resolution = 8;

float pwm_cycle = 0.0;

const float Kp = 1;
const float Ki = 0;
const float Kd = 0;
const float Ts = 0.1;

double integral = 0;
double previousError = 0;

void ISR_contadorPulsos() {
  pulsos++;
}

double computePID(double setpoint, double measuredValue) {
  double error = setpoint - measuredValue;
  double Pout = Kp * error;
  integral += error * Ts;
  double Iout = Ki * integral;
  double derivative = (error - previousError) / Ts;
  double Dout = Kd * derivative;
  double output = Pout + Iout + Dout;
  previousError = error;
  return output;
}

void timer_callback(rcl_timer_t* timer, int64_t last_call_time) {
  RCLC_UNUSED(last_call_time);
  if (timer != NULL) {
    unsigned long currentTime = millis();
    static unsigned long lastTime = 0;
    float deltaTime = currentTime - lastTime;
    double rpm = (pulsos / pulsosPorRevolucion) * (60.0 * 1000 / deltaTime);
    float velocidadAngular = rpm * (2.0 * PI) / 60.0;
    lastTime = currentTime;

    angular_speed_msg.data = velocidadAngular;
    pulsos = 0;

    refRPM = abs(pwm_cycle)*140;

    double measuredRPM = angular_speed_msg.data;
    controlSignal = computePID(refRPM, rpm);
    controlSignalOut = (float)controlSignal/140;

    rcl_publish(&angular_speed_publisher, &angular_speed_msg, NULL);
    rcl_publish(&refRPM_publisher, &refRPM_msg, NULL);

    if (pwm_cycle >= 0) {
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, HIGH);
    } else {
      digitalWrite(IN1, HIGH);
      digitalWrite(IN2, LOW);
    }

    controlSignalOut_pwm = constrain(controlSignalOut * 255.0, 0, 255);
    ledcWrite(ledChannel, controlSignalOut_pwm);
    refRPM_msg.data = controlSignalOut_pwm;
  }
}

void setpoint_callback(const void* msgin) {
  const std_msgs__msg__Float32* msg = (const std_msgs__msg__Float32*)msgin;
  pwm_cycle = msg->data;
}

void setup() {
  set_microros_transports();

  Serial.begin(9600);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(encoderPinA, INPUT_PULLUP);

  attachInterrupt(digitalPinToInterrupt(encoderPinA), ISR_contadorPulsos, RISING);

  ledcSetup(ledChannel, freq, resolution);
  ledcAttachPin(ENA, ledChannel);

  allocator = rcl_get_default_allocator();
  rclc_support_init(&support, 0, NULL, &allocator);
  rclc_node_init_default(&node, "control_node", "", &support);

  rclc_publisher_init_default(&angular_speed_publisher, &node, ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Float32), "/controller/angular_speed");
  rclc_publisher_init_default(&refRPM_publisher, &node, ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Float32), "/controller/refRPM_pwm");

  rclc_subscription_init_default(&setpoint_subscriber, &node, ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Float32), "/micro_ros_esp32/setpoint");

  rclc_timer_init_default(&timer, &support, RCL_MS_TO_NS(100), timer_callback);

  rclc_executor_init(&executor, &support.context, 2, &allocator);
  rclc_executor_add_subscription(&executor, &setpoint_subscriber, &setpoint_msg, &setpoint_callback, ON_NEW_DATA);
  rclc_executor_add_timer(&executor, &timer);
}

void loop() {
  rclc_executor_spin_some(&executor, RCL_MS_TO_NS(100));
}
