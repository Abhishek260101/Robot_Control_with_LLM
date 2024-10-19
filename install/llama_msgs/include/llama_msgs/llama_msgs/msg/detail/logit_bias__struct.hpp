// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from llama_msgs:msg/LogitBias.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__MSG__DETAIL__LOGIT_BIAS__STRUCT_HPP_
#define LLAMA_MSGS__MSG__DETAIL__LOGIT_BIAS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__llama_msgs__msg__LogitBias __attribute__((deprecated))
#else
# define DEPRECATED__llama_msgs__msg__LogitBias __declspec(deprecated)
#endif

namespace llama_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LogitBias_
{
  using Type = LogitBias_<ContainerAllocator>;

  explicit LogitBias_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->token = 0l;
      this->bias = 0.0f;
    }
  }

  explicit LogitBias_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->token = 0l;
      this->bias = 0.0f;
    }
  }

  // field types and members
  using _token_type =
    int32_t;
  _token_type token;
  using _bias_type =
    float;
  _bias_type bias;

  // setters for named parameter idiom
  Type & set__token(
    const int32_t & _arg)
  {
    this->token = _arg;
    return *this;
  }
  Type & set__bias(
    const float & _arg)
  {
    this->bias = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    llama_msgs::msg::LogitBias_<ContainerAllocator> *;
  using ConstRawPtr =
    const llama_msgs::msg::LogitBias_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<llama_msgs::msg::LogitBias_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<llama_msgs::msg::LogitBias_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      llama_msgs::msg::LogitBias_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<llama_msgs::msg::LogitBias_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      llama_msgs::msg::LogitBias_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<llama_msgs::msg::LogitBias_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<llama_msgs::msg::LogitBias_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<llama_msgs::msg::LogitBias_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__llama_msgs__msg__LogitBias
    std::shared_ptr<llama_msgs::msg::LogitBias_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__llama_msgs__msg__LogitBias
    std::shared_ptr<llama_msgs::msg::LogitBias_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LogitBias_ & other) const
  {
    if (this->token != other.token) {
      return false;
    }
    if (this->bias != other.bias) {
      return false;
    }
    return true;
  }
  bool operator!=(const LogitBias_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LogitBias_

// alias to use template instance with default allocator
using LogitBias =
  llama_msgs::msg::LogitBias_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace llama_msgs

#endif  // LLAMA_MSGS__MSG__DETAIL__LOGIT_BIAS__STRUCT_HPP_
