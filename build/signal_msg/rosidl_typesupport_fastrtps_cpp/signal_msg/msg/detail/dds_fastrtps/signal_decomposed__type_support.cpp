// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from signal_msg:msg/SignalDecomposed.idl
// generated code does not contain a copyright notice
#include "signal_msg/msg/detail/signal_decomposed__rosidl_typesupport_fastrtps_cpp.hpp"
#include "signal_msg/msg/detail/signal_decomposed__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace signal_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_signal_msg
cdr_serialize(
  const signal_msg::msg::SignalDecomposed & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: signaltype
  cdr << ros_message.signaltype;
  // Member: amplitude
  cdr << ros_message.amplitude;
  // Member: frequency
  cdr << ros_message.frequency;
  // Member: offset
  cdr << ros_message.offset;
  // Member: phase
  cdr << ros_message.phase;
  // Member: time
  cdr << ros_message.time;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_signal_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  signal_msg::msg::SignalDecomposed & ros_message)
{
  // Member: signaltype
  cdr >> ros_message.signaltype;

  // Member: amplitude
  cdr >> ros_message.amplitude;

  // Member: frequency
  cdr >> ros_message.frequency;

  // Member: offset
  cdr >> ros_message.offset;

  // Member: phase
  cdr >> ros_message.phase;

  // Member: time
  cdr >> ros_message.time;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_signal_msg
get_serialized_size(
  const signal_msg::msg::SignalDecomposed & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: signaltype
  {
    size_t item_size = sizeof(ros_message.signaltype);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: amplitude
  {
    size_t item_size = sizeof(ros_message.amplitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: frequency
  {
    size_t item_size = sizeof(ros_message.frequency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: offset
  {
    size_t item_size = sizeof(ros_message.offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: phase
  {
    size_t item_size = sizeof(ros_message.phase);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: time
  {
    size_t item_size = sizeof(ros_message.time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_signal_msg
max_serialized_size_SignalDecomposed(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: signaltype
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: amplitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: frequency
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: phase
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = signal_msg::msg::SignalDecomposed;
    is_plain =
      (
      offsetof(DataType, time) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SignalDecomposed__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const signal_msg::msg::SignalDecomposed *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SignalDecomposed__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<signal_msg::msg::SignalDecomposed *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SignalDecomposed__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const signal_msg::msg::SignalDecomposed *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SignalDecomposed__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SignalDecomposed(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SignalDecomposed__callbacks = {
  "signal_msg::msg",
  "SignalDecomposed",
  _SignalDecomposed__cdr_serialize,
  _SignalDecomposed__cdr_deserialize,
  _SignalDecomposed__get_serialized_size,
  _SignalDecomposed__max_serialized_size
};

static rosidl_message_type_support_t _SignalDecomposed__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SignalDecomposed__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace signal_msg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_signal_msg
const rosidl_message_type_support_t *
get_message_type_support_handle<signal_msg::msg::SignalDecomposed>()
{
  return &signal_msg::msg::typesupport_fastrtps_cpp::_SignalDecomposed__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, signal_msg, msg, SignalDecomposed)() {
  return &signal_msg::msg::typesupport_fastrtps_cpp::_SignalDecomposed__handle;
}

#ifdef __cplusplus
}
#endif
