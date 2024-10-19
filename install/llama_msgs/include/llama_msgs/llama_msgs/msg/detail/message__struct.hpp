// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from llama_msgs:msg/Message.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__MSG__DETAIL__MESSAGE__STRUCT_HPP_
#define LLAMA_MSGS__MSG__DETAIL__MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__llama_msgs__msg__Message __attribute__((deprecated))
#else
# define DEPRECATED__llama_msgs__msg__Message __declspec(deprecated)
#endif

namespace llama_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Message_
{
  using Type = Message_<ContainerAllocator>;

  explicit Message_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->role = "";
      this->content = "";
    }
  }

  explicit Message_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : role(_alloc),
    content(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->role = "";
      this->content = "";
    }
  }

  // field types and members
  using _role_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _role_type role;
  using _content_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _content_type content;

  // setters for named parameter idiom
  Type & set__role(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->role = _arg;
    return *this;
  }
  Type & set__content(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->content = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    llama_msgs::msg::Message_<ContainerAllocator> *;
  using ConstRawPtr =
    const llama_msgs::msg::Message_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<llama_msgs::msg::Message_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<llama_msgs::msg::Message_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      llama_msgs::msg::Message_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<llama_msgs::msg::Message_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      llama_msgs::msg::Message_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<llama_msgs::msg::Message_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<llama_msgs::msg::Message_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<llama_msgs::msg::Message_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__llama_msgs__msg__Message
    std::shared_ptr<llama_msgs::msg::Message_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__llama_msgs__msg__Message
    std::shared_ptr<llama_msgs::msg::Message_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Message_ & other) const
  {
    if (this->role != other.role) {
      return false;
    }
    if (this->content != other.content) {
      return false;
    }
    return true;
  }
  bool operator!=(const Message_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Message_

// alias to use template instance with default allocator
using Message =
  llama_msgs::msg::Message_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace llama_msgs

#endif  // LLAMA_MSGS__MSG__DETAIL__MESSAGE__STRUCT_HPP_
