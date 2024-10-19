// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from llama_msgs:srv/FormatChatMessages.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__SRV__DETAIL__FORMAT_CHAT_MESSAGES__STRUCT_HPP_
#define LLAMA_MSGS__SRV__DETAIL__FORMAT_CHAT_MESSAGES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'messages'
#include "llama_msgs/msg/detail/message__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__llama_msgs__srv__FormatChatMessages_Request __attribute__((deprecated))
#else
# define DEPRECATED__llama_msgs__srv__FormatChatMessages_Request __declspec(deprecated)
#endif

namespace llama_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FormatChatMessages_Request_
{
  using Type = FormatChatMessages_Request_<ContainerAllocator>;

  explicit FormatChatMessages_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->add_ass = true;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->add_ass = false;
    }
  }

  explicit FormatChatMessages_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->add_ass = true;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->add_ass = false;
    }
  }

  // field types and members
  using _messages_type =
    std::vector<llama_msgs::msg::Message_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<llama_msgs::msg::Message_<ContainerAllocator>>>;
  _messages_type messages;
  using _add_ass_type =
    bool;
  _add_ass_type add_ass;

  // setters for named parameter idiom
  Type & set__messages(
    const std::vector<llama_msgs::msg::Message_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<llama_msgs::msg::Message_<ContainerAllocator>>> & _arg)
  {
    this->messages = _arg;
    return *this;
  }
  Type & set__add_ass(
    const bool & _arg)
  {
    this->add_ass = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    llama_msgs::srv::FormatChatMessages_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const llama_msgs::srv::FormatChatMessages_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<llama_msgs::srv::FormatChatMessages_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<llama_msgs::srv::FormatChatMessages_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      llama_msgs::srv::FormatChatMessages_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<llama_msgs::srv::FormatChatMessages_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      llama_msgs::srv::FormatChatMessages_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<llama_msgs::srv::FormatChatMessages_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<llama_msgs::srv::FormatChatMessages_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<llama_msgs::srv::FormatChatMessages_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__llama_msgs__srv__FormatChatMessages_Request
    std::shared_ptr<llama_msgs::srv::FormatChatMessages_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__llama_msgs__srv__FormatChatMessages_Request
    std::shared_ptr<llama_msgs::srv::FormatChatMessages_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FormatChatMessages_Request_ & other) const
  {
    if (this->messages != other.messages) {
      return false;
    }
    if (this->add_ass != other.add_ass) {
      return false;
    }
    return true;
  }
  bool operator!=(const FormatChatMessages_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FormatChatMessages_Request_

// alias to use template instance with default allocator
using FormatChatMessages_Request =
  llama_msgs::srv::FormatChatMessages_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace llama_msgs


#ifndef _WIN32
# define DEPRECATED__llama_msgs__srv__FormatChatMessages_Response __attribute__((deprecated))
#else
# define DEPRECATED__llama_msgs__srv__FormatChatMessages_Response __declspec(deprecated)
#endif

namespace llama_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FormatChatMessages_Response_
{
  using Type = FormatChatMessages_Response_<ContainerAllocator>;

  explicit FormatChatMessages_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->formatted_prompt = "";
    }
  }

  explicit FormatChatMessages_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : formatted_prompt(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->formatted_prompt = "";
    }
  }

  // field types and members
  using _formatted_prompt_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _formatted_prompt_type formatted_prompt;

  // setters for named parameter idiom
  Type & set__formatted_prompt(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->formatted_prompt = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    llama_msgs::srv::FormatChatMessages_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const llama_msgs::srv::FormatChatMessages_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<llama_msgs::srv::FormatChatMessages_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<llama_msgs::srv::FormatChatMessages_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      llama_msgs::srv::FormatChatMessages_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<llama_msgs::srv::FormatChatMessages_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      llama_msgs::srv::FormatChatMessages_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<llama_msgs::srv::FormatChatMessages_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<llama_msgs::srv::FormatChatMessages_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<llama_msgs::srv::FormatChatMessages_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__llama_msgs__srv__FormatChatMessages_Response
    std::shared_ptr<llama_msgs::srv::FormatChatMessages_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__llama_msgs__srv__FormatChatMessages_Response
    std::shared_ptr<llama_msgs::srv::FormatChatMessages_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FormatChatMessages_Response_ & other) const
  {
    if (this->formatted_prompt != other.formatted_prompt) {
      return false;
    }
    return true;
  }
  bool operator!=(const FormatChatMessages_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FormatChatMessages_Response_

// alias to use template instance with default allocator
using FormatChatMessages_Response =
  llama_msgs::srv::FormatChatMessages_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace llama_msgs

namespace llama_msgs
{

namespace srv
{

struct FormatChatMessages
{
  using Request = llama_msgs::srv::FormatChatMessages_Request;
  using Response = llama_msgs::srv::FormatChatMessages_Response;
};

}  // namespace srv

}  // namespace llama_msgs

#endif  // LLAMA_MSGS__SRV__DETAIL__FORMAT_CHAT_MESSAGES__STRUCT_HPP_
