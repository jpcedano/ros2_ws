// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from signal_msg:msg/SignalDecomposed.idl
// generated code does not contain a copyright notice

#ifndef SIGNAL_MSG__MSG__DETAIL__SIGNAL_DECOMPOSED__TRAITS_HPP_
#define SIGNAL_MSG__MSG__DETAIL__SIGNAL_DECOMPOSED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "signal_msg/msg/detail/signal_decomposed__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace signal_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const SignalDecomposed & msg,
  std::ostream & out)
{
  out << "{";
  // member: signaltype
  {
    out << "signaltype: ";
    rosidl_generator_traits::value_to_yaml(msg.signaltype, out);
    out << ", ";
  }

  // member: amplitude
  {
    out << "amplitude: ";
    rosidl_generator_traits::value_to_yaml(msg.amplitude, out);
    out << ", ";
  }

  // member: frequency
  {
    out << "frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.frequency, out);
    out << ", ";
  }

  // member: offset
  {
    out << "offset: ";
    rosidl_generator_traits::value_to_yaml(msg.offset, out);
    out << ", ";
  }

  // member: phase
  {
    out << "phase: ";
    rosidl_generator_traits::value_to_yaml(msg.phase, out);
    out << ", ";
  }

  // member: time
  {
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SignalDecomposed & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: signaltype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signaltype: ";
    rosidl_generator_traits::value_to_yaml(msg.signaltype, out);
    out << "\n";
  }

  // member: amplitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "amplitude: ";
    rosidl_generator_traits::value_to_yaml(msg.amplitude, out);
    out << "\n";
  }

  // member: frequency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.frequency, out);
    out << "\n";
  }

  // member: offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset: ";
    rosidl_generator_traits::value_to_yaml(msg.offset, out);
    out << "\n";
  }

  // member: phase
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "phase: ";
    rosidl_generator_traits::value_to_yaml(msg.phase, out);
    out << "\n";
  }

  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SignalDecomposed & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace signal_msg

namespace rosidl_generator_traits
{

[[deprecated("use signal_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const signal_msg::msg::SignalDecomposed & msg,
  std::ostream & out, size_t indentation = 0)
{
  signal_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use signal_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const signal_msg::msg::SignalDecomposed & msg)
{
  return signal_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<signal_msg::msg::SignalDecomposed>()
{
  return "signal_msg::msg::SignalDecomposed";
}

template<>
inline const char * name<signal_msg::msg::SignalDecomposed>()
{
  return "signal_msg/msg/SignalDecomposed";
}

template<>
struct has_fixed_size<signal_msg::msg::SignalDecomposed>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<signal_msg::msg::SignalDecomposed>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<signal_msg::msg::SignalDecomposed>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SIGNAL_MSG__MSG__DETAIL__SIGNAL_DECOMPOSED__TRAITS_HPP_
