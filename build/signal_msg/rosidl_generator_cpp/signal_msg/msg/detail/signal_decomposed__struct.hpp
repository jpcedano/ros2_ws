// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from signal_msg:msg/SignalDecomposed.idl
// generated code does not contain a copyright notice

#ifndef SIGNAL_MSG__MSG__DETAIL__SIGNAL_DECOMPOSED__STRUCT_HPP_
#define SIGNAL_MSG__MSG__DETAIL__SIGNAL_DECOMPOSED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__signal_msg__msg__SignalDecomposed __attribute__((deprecated))
#else
# define DEPRECATED__signal_msg__msg__SignalDecomposed __declspec(deprecated)
#endif

namespace signal_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SignalDecomposed_
{
  using Type = SignalDecomposed_<ContainerAllocator>;

  explicit SignalDecomposed_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->signaltype = 0l;
      this->amplitude = 0.0f;
      this->frequency = 0.0f;
      this->offset = 0.0f;
      this->phase = 0.0f;
      this->time = 0.0f;
    }
  }

  explicit SignalDecomposed_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->signaltype = 0l;
      this->amplitude = 0.0f;
      this->frequency = 0.0f;
      this->offset = 0.0f;
      this->phase = 0.0f;
      this->time = 0.0f;
    }
  }

  // field types and members
  using _signaltype_type =
    int32_t;
  _signaltype_type signaltype;
  using _amplitude_type =
    float;
  _amplitude_type amplitude;
  using _frequency_type =
    float;
  _frequency_type frequency;
  using _offset_type =
    float;
  _offset_type offset;
  using _phase_type =
    float;
  _phase_type phase;
  using _time_type =
    float;
  _time_type time;

  // setters for named parameter idiom
  Type & set__signaltype(
    const int32_t & _arg)
  {
    this->signaltype = _arg;
    return *this;
  }
  Type & set__amplitude(
    const float & _arg)
  {
    this->amplitude = _arg;
    return *this;
  }
  Type & set__frequency(
    const float & _arg)
  {
    this->frequency = _arg;
    return *this;
  }
  Type & set__offset(
    const float & _arg)
  {
    this->offset = _arg;
    return *this;
  }
  Type & set__phase(
    const float & _arg)
  {
    this->phase = _arg;
    return *this;
  }
  Type & set__time(
    const float & _arg)
  {
    this->time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    signal_msg::msg::SignalDecomposed_<ContainerAllocator> *;
  using ConstRawPtr =
    const signal_msg::msg::SignalDecomposed_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<signal_msg::msg::SignalDecomposed_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<signal_msg::msg::SignalDecomposed_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      signal_msg::msg::SignalDecomposed_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<signal_msg::msg::SignalDecomposed_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      signal_msg::msg::SignalDecomposed_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<signal_msg::msg::SignalDecomposed_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<signal_msg::msg::SignalDecomposed_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<signal_msg::msg::SignalDecomposed_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__signal_msg__msg__SignalDecomposed
    std::shared_ptr<signal_msg::msg::SignalDecomposed_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__signal_msg__msg__SignalDecomposed
    std::shared_ptr<signal_msg::msg::SignalDecomposed_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SignalDecomposed_ & other) const
  {
    if (this->signaltype != other.signaltype) {
      return false;
    }
    if (this->amplitude != other.amplitude) {
      return false;
    }
    if (this->frequency != other.frequency) {
      return false;
    }
    if (this->offset != other.offset) {
      return false;
    }
    if (this->phase != other.phase) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    return true;
  }
  bool operator!=(const SignalDecomposed_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SignalDecomposed_

// alias to use template instance with default allocator
using SignalDecomposed =
  signal_msg::msg::SignalDecomposed_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace signal_msg

#endif  // SIGNAL_MSG__MSG__DETAIL__SIGNAL_DECOMPOSED__STRUCT_HPP_
