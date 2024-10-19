// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from llama_msgs:srv/Tokenize.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__SRV__DETAIL__TOKENIZE__STRUCT_HPP_
#define LLAMA_MSGS__SRV__DETAIL__TOKENIZE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__llama_msgs__srv__Tokenize_Request __attribute__((deprecated))
#else
# define DEPRECATED__llama_msgs__srv__Tokenize_Request __declspec(deprecated)
#endif

namespace llama_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Tokenize_Request_
{
  using Type = Tokenize_Request_<ContainerAllocator>;

  explicit Tokenize_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->prompt = "";
    }
  }

  explicit Tokenize_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : prompt(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->prompt = "";
    }
  }

  // field types and members
  using _prompt_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _prompt_type prompt;

  // setters for named parameter idiom
  Type & set__prompt(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->prompt = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    llama_msgs::srv::Tokenize_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const llama_msgs::srv::Tokenize_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<llama_msgs::srv::Tokenize_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<llama_msgs::srv::Tokenize_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      llama_msgs::srv::Tokenize_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<llama_msgs::srv::Tokenize_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      llama_msgs::srv::Tokenize_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<llama_msgs::srv::Tokenize_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<llama_msgs::srv::Tokenize_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<llama_msgs::srv::Tokenize_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__llama_msgs__srv__Tokenize_Request
    std::shared_ptr<llama_msgs::srv::Tokenize_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__llama_msgs__srv__Tokenize_Request
    std::shared_ptr<llama_msgs::srv::Tokenize_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tokenize_Request_ & other) const
  {
    if (this->prompt != other.prompt) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tokenize_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tokenize_Request_

// alias to use template instance with default allocator
using Tokenize_Request =
  llama_msgs::srv::Tokenize_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace llama_msgs


#ifndef _WIN32
# define DEPRECATED__llama_msgs__srv__Tokenize_Response __attribute__((deprecated))
#else
# define DEPRECATED__llama_msgs__srv__Tokenize_Response __declspec(deprecated)
#endif

namespace llama_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Tokenize_Response_
{
  using Type = Tokenize_Response_<ContainerAllocator>;

  explicit Tokenize_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Tokenize_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _tokens_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _tokens_type tokens;

  // setters for named parameter idiom
  Type & set__tokens(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->tokens = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    llama_msgs::srv::Tokenize_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const llama_msgs::srv::Tokenize_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<llama_msgs::srv::Tokenize_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<llama_msgs::srv::Tokenize_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      llama_msgs::srv::Tokenize_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<llama_msgs::srv::Tokenize_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      llama_msgs::srv::Tokenize_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<llama_msgs::srv::Tokenize_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<llama_msgs::srv::Tokenize_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<llama_msgs::srv::Tokenize_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__llama_msgs__srv__Tokenize_Response
    std::shared_ptr<llama_msgs::srv::Tokenize_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__llama_msgs__srv__Tokenize_Response
    std::shared_ptr<llama_msgs::srv::Tokenize_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tokenize_Response_ & other) const
  {
    if (this->tokens != other.tokens) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tokenize_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tokenize_Response_

// alias to use template instance with default allocator
using Tokenize_Response =
  llama_msgs::srv::Tokenize_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace llama_msgs

namespace llama_msgs
{

namespace srv
{

struct Tokenize
{
  using Request = llama_msgs::srv::Tokenize_Request;
  using Response = llama_msgs::srv::Tokenize_Response;
};

}  // namespace srv

}  // namespace llama_msgs

#endif  // LLAMA_MSGS__SRV__DETAIL__TOKENIZE__STRUCT_HPP_
