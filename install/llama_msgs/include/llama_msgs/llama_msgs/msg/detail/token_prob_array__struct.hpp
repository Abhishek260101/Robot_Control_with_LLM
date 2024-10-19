// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from llama_msgs:msg/TokenProbArray.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__MSG__DETAIL__TOKEN_PROB_ARRAY__STRUCT_HPP_
#define LLAMA_MSGS__MSG__DETAIL__TOKEN_PROB_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'data'
#include "llama_msgs/msg/detail/token_prob__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__llama_msgs__msg__TokenProbArray __attribute__((deprecated))
#else
# define DEPRECATED__llama_msgs__msg__TokenProbArray __declspec(deprecated)
#endif

namespace llama_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TokenProbArray_
{
  using Type = TokenProbArray_<ContainerAllocator>;

  explicit TokenProbArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->chosen_token = 0l;
    }
  }

  explicit TokenProbArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->chosen_token = 0l;
    }
  }

  // field types and members
  using _data_type =
    std::vector<llama_msgs::msg::TokenProb_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<llama_msgs::msg::TokenProb_<ContainerAllocator>>>;
  _data_type data;
  using _chosen_token_type =
    int32_t;
  _chosen_token_type chosen_token;

  // setters for named parameter idiom
  Type & set__data(
    const std::vector<llama_msgs::msg::TokenProb_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<llama_msgs::msg::TokenProb_<ContainerAllocator>>> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__chosen_token(
    const int32_t & _arg)
  {
    this->chosen_token = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    llama_msgs::msg::TokenProbArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const llama_msgs::msg::TokenProbArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<llama_msgs::msg::TokenProbArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<llama_msgs::msg::TokenProbArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      llama_msgs::msg::TokenProbArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<llama_msgs::msg::TokenProbArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      llama_msgs::msg::TokenProbArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<llama_msgs::msg::TokenProbArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<llama_msgs::msg::TokenProbArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<llama_msgs::msg::TokenProbArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__llama_msgs__msg__TokenProbArray
    std::shared_ptr<llama_msgs::msg::TokenProbArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__llama_msgs__msg__TokenProbArray
    std::shared_ptr<llama_msgs::msg::TokenProbArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TokenProbArray_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    if (this->chosen_token != other.chosen_token) {
      return false;
    }
    return true;
  }
  bool operator!=(const TokenProbArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TokenProbArray_

// alias to use template instance with default allocator
using TokenProbArray =
  llama_msgs::msg::TokenProbArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace llama_msgs

#endif  // LLAMA_MSGS__MSG__DETAIL__TOKEN_PROB_ARRAY__STRUCT_HPP_
