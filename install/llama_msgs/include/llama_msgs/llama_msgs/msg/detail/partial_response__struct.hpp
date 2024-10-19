// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from llama_msgs:msg/PartialResponse.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__MSG__DETAIL__PARTIAL_RESPONSE__STRUCT_HPP_
#define LLAMA_MSGS__MSG__DETAIL__PARTIAL_RESPONSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'probs'
#include "llama_msgs/msg/detail/token_prob_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__llama_msgs__msg__PartialResponse __attribute__((deprecated))
#else
# define DEPRECATED__llama_msgs__msg__PartialResponse __declspec(deprecated)
#endif

namespace llama_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PartialResponse_
{
  using Type = PartialResponse_<ContainerAllocator>;

  explicit PartialResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : probs(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->text = "";
      this->token = 0l;
    }
  }

  explicit PartialResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : text(_alloc),
    probs(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->text = "";
      this->token = 0l;
    }
  }

  // field types and members
  using _text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _text_type text;
  using _token_type =
    int32_t;
  _token_type token;
  using _probs_type =
    llama_msgs::msg::TokenProbArray_<ContainerAllocator>;
  _probs_type probs;

  // setters for named parameter idiom
  Type & set__text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->text = _arg;
    return *this;
  }
  Type & set__token(
    const int32_t & _arg)
  {
    this->token = _arg;
    return *this;
  }
  Type & set__probs(
    const llama_msgs::msg::TokenProbArray_<ContainerAllocator> & _arg)
  {
    this->probs = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    llama_msgs::msg::PartialResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const llama_msgs::msg::PartialResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<llama_msgs::msg::PartialResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<llama_msgs::msg::PartialResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      llama_msgs::msg::PartialResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<llama_msgs::msg::PartialResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      llama_msgs::msg::PartialResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<llama_msgs::msg::PartialResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<llama_msgs::msg::PartialResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<llama_msgs::msg::PartialResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__llama_msgs__msg__PartialResponse
    std::shared_ptr<llama_msgs::msg::PartialResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__llama_msgs__msg__PartialResponse
    std::shared_ptr<llama_msgs::msg::PartialResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PartialResponse_ & other) const
  {
    if (this->text != other.text) {
      return false;
    }
    if (this->token != other.token) {
      return false;
    }
    if (this->probs != other.probs) {
      return false;
    }
    return true;
  }
  bool operator!=(const PartialResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PartialResponse_

// alias to use template instance with default allocator
using PartialResponse =
  llama_msgs::msg::PartialResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace llama_msgs

#endif  // LLAMA_MSGS__MSG__DETAIL__PARTIAL_RESPONSE__STRUCT_HPP_
