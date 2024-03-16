// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from signal_msg:msg/SignalDecomposed.idl
// generated code does not contain a copyright notice

#ifndef SIGNAL_MSG__MSG__DETAIL__SIGNAL_DECOMPOSED__BUILDER_HPP_
#define SIGNAL_MSG__MSG__DETAIL__SIGNAL_DECOMPOSED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "signal_msg/msg/detail/signal_decomposed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace signal_msg
{

namespace msg
{

namespace builder
{

class Init_SignalDecomposed_time
{
public:
  explicit Init_SignalDecomposed_time(::signal_msg::msg::SignalDecomposed & msg)
  : msg_(msg)
  {}
  ::signal_msg::msg::SignalDecomposed time(::signal_msg::msg::SignalDecomposed::_time_type arg)
  {
    msg_.time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::signal_msg::msg::SignalDecomposed msg_;
};

class Init_SignalDecomposed_phase
{
public:
  explicit Init_SignalDecomposed_phase(::signal_msg::msg::SignalDecomposed & msg)
  : msg_(msg)
  {}
  Init_SignalDecomposed_time phase(::signal_msg::msg::SignalDecomposed::_phase_type arg)
  {
    msg_.phase = std::move(arg);
    return Init_SignalDecomposed_time(msg_);
  }

private:
  ::signal_msg::msg::SignalDecomposed msg_;
};

class Init_SignalDecomposed_offset
{
public:
  explicit Init_SignalDecomposed_offset(::signal_msg::msg::SignalDecomposed & msg)
  : msg_(msg)
  {}
  Init_SignalDecomposed_phase offset(::signal_msg::msg::SignalDecomposed::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return Init_SignalDecomposed_phase(msg_);
  }

private:
  ::signal_msg::msg::SignalDecomposed msg_;
};

class Init_SignalDecomposed_frequency
{
public:
  explicit Init_SignalDecomposed_frequency(::signal_msg::msg::SignalDecomposed & msg)
  : msg_(msg)
  {}
  Init_SignalDecomposed_offset frequency(::signal_msg::msg::SignalDecomposed::_frequency_type arg)
  {
    msg_.frequency = std::move(arg);
    return Init_SignalDecomposed_offset(msg_);
  }

private:
  ::signal_msg::msg::SignalDecomposed msg_;
};

class Init_SignalDecomposed_amplitude
{
public:
  explicit Init_SignalDecomposed_amplitude(::signal_msg::msg::SignalDecomposed & msg)
  : msg_(msg)
  {}
  Init_SignalDecomposed_frequency amplitude(::signal_msg::msg::SignalDecomposed::_amplitude_type arg)
  {
    msg_.amplitude = std::move(arg);
    return Init_SignalDecomposed_frequency(msg_);
  }

private:
  ::signal_msg::msg::SignalDecomposed msg_;
};

class Init_SignalDecomposed_signaltype
{
public:
  Init_SignalDecomposed_signaltype()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SignalDecomposed_amplitude signaltype(::signal_msg::msg::SignalDecomposed::_signaltype_type arg)
  {
    msg_.signaltype = std::move(arg);
    return Init_SignalDecomposed_amplitude(msg_);
  }

private:
  ::signal_msg::msg::SignalDecomposed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::signal_msg::msg::SignalDecomposed>()
{
  return signal_msg::msg::builder::Init_SignalDecomposed_signaltype();
}

}  // namespace signal_msg

#endif  // SIGNAL_MSG__MSG__DETAIL__SIGNAL_DECOMPOSED__BUILDER_HPP_
