// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from llama_msgs:msg/Response.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__MSG__DETAIL__RESPONSE__STRUCT_HPP_
#define LLAMA_MSGS__MSG__DETAIL__RESPONSE__STRUCT_HPP_

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
# define DEPRECATED__llama_msgs__msg__Response __attribute__((deprecated))
#else
# define DEPRECATED__llama_msgs__msg__Response __declspec(deprecated)
#endif

namespace llama_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Response_
{
  using Type = Response_<ContainerAllocator>;

  explicit Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->text = "";
    }
  }

  explicit Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : text(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->text = "";
    }
  }

  // field types and members
  using _text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _text_type text;
  using _tokens_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _tokens_type tokens;
  using _probs_type =
    std::vector<llama_msgs::msg::TokenProbArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<llama_msgs::msg::TokenProbArray_<ContainerAllocator>>>;
  _probs_type probs;

  // setters for named parameter idiom
  Type & set__text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->text = _arg;
    return *this;
  }
  Type & set__tokens(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->tokens = _arg;
    return *this;
  }
  Type & set__probs(
    const std::vector<llama_msgs::msg::TokenProbArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<llama_msgs::msg::TokenProbArray_<ContainerAllocator>>> & _arg)
  {
    this->probs = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    llama_msgs::msg::Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const llama_msgs::msg::Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<llama_msgs::msg::Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<llama_msgs::msg::Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      llama_msgs::msg::Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<llama_msgs::msg::Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      llama_msgs::msg::Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<llama_msgs::msg::Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<llama_msgs::msg::Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<llama_msgs::msg::Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__llama_msgs__msg__Response
    std::shared_ptr<llama_msgs::msg::Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__llama_msgs__msg__Response
    std::shared_ptr<llama_msgs::msg::Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Response_ & other) const
  {
    if (this->text != other.text) {
      return false;
    }
    if (this->tokens != other.tokens) {
      return false;
    }
    if (this->probs != other.probs) {
      return false;
    }
    return true;
  }
  bool operator!=(const Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Response_

// alias to use template instance with default allocator
using Response =
  llama_msgs::msg::Response_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace llama_msgs

#endif  // LLAMA_MSGS__MSG__DETAIL__RESPONSE__STRUCT_HPP_
