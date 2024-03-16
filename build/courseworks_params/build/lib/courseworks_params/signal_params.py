import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from std_msgs.msg import Float32


class My_Signal_Params(Node):
    def __init__(self):
        super().__init__('my_signal_params_node')
        self.declare_parameter('my_param', 10.00)
        self.pub = self.create_publisher(Float32, 'signal', 10)
        timer_period = 1.0
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.get_logger().info('Signal params node initialized')
        self.msg = Float32()

    def timer_callback(self):
        my_param = self.get_parameter('my_param').get_parameter_value().string_value
        self.msg.data = float(my_param)
        self.pub.publish(self.msg)

def main(args = None):
    rclpy.init(args=args)
    m_t_p = My_Signal_Params()
    rclpy.spin(m_t_p)
    m_t_p.destroy_node
    rclpy.shutdown()

if __name__ == '__main__':
    main()