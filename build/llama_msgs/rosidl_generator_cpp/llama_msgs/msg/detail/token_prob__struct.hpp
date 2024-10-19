// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from llama_msgs:msg/TokenProb.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__MSG__DETAIL__TOKEN_PROB__STRUCT_HPP_
#define LLAMA_MSGS__MSG__DETAIL__TOKEN_PROB__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__llama_msgs__msg__TokenProb __attribute__((deprecated))
#else
# define DEPRECATED__llama_msgs__msg__TokenProb __declspec(deprecated)
#endif

namespace llama_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TokenProb_
{
  using Type = TokenProb_<ContainerAllocator>;

  explicit TokenProb_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->token = 0l;
      this->probability = 0.0f;
      this->token_text = "";
    }
  }

  explicit TokenProb_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : token_text(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->token = 0l;
      this->probability = 0.0f;
      this->token_text = "";
    }
  }

  // field types and members
  using _token_type =
    int32_t;
  _token_type token;
  using _probability_type =
    float;
  _probability_type probability;
  using _token_text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _token_text_type token_text;

  // setters for named parameter idiom
  Type & set__token(
    const int32_t & _arg)
  {
    this->token = _arg;
    return *this;
  }
  Type & set__probability(
    const float & _arg)
  {
    this->probability = _arg;
    return *this;
  }
  Type & set__token_text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->token_text = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    llama_msgs::msg::TokenProb_<ContainerAllocator> *;
  using ConstRawPtr =
    const llama_msgs::msg::TokenProb_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<llama_msgs::msg::TokenProb_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<llama_msgs::msg::TokenProb_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      llama_msgs::msg::TokenProb_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<llama_msgs::msg::TokenProb_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      llama_msgs::msg::TokenProb_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<llama_msgs::msg::TokenProb_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<llama_msgs::msg::TokenProb_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<llama_msgs::msg::TokenProb_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__llama_msgs__msg__TokenProb
    std::shared_ptr<llama_msgs::msg::TokenProb_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__llama_msgs__msg__TokenProb
    std::shared_ptr<llama_msgs::msg::TokenProb_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TokenProb_ & other) const
  {
    if (this->token != other.token) {
      return false;
    }
    if (this->probability != other.probability) {
      return false;
    }
    if (this->token_text != other.token_text) {
      return false;
    }
    return true;
  }
  bool operator!=(const TokenProb_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TokenProb_

// alias to use template instance with default allocator
using TokenProb =
  llama_msgs::msg::TokenProb_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace llama_msgs

#endif  // LLAMA_MSGS__MSG__DETAIL__TOKEN_PROB__STRUCT_HPP_
