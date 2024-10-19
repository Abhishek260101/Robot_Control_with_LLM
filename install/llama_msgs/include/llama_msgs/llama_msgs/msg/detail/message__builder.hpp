// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from llama_msgs:msg/Message.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__MSG__DETAIL__MESSAGE__BUILDER_HPP_
#define LLAMA_MSGS__MSG__DETAIL__MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "llama_msgs/msg/detail/message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace llama_msgs
{

namespace msg
{

namespace builder
{

class Init_Message_content
{
public:
  explicit Init_Message_content(::llama_msgs::msg::Message & msg)
  : msg_(msg)
  {}
  ::llama_msgs::msg::Message content(::llama_msgs::msg::Message::_content_type arg)
  {
    msg_.content = std::move(arg);
    return std::move(msg_);
  }

private:
  ::llama_msgs::msg::Message msg_;
};

class Init_Message_role
{
public:
  Init_Message_role()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Message_content role(::llama_msgs::msg::Message::_role_type arg)
  {
    msg_.role = std::move(arg);
    return Init_Message_content(msg_);
  }

private:
  ::llama_msgs::msg::Message msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::llama_msgs::msg::Message>()
{
  return llama_msgs::msg::builder::Init_Message_role();
}

}  // namespace llama_msgs

#endif  // LLAMA_MSGS__MSG__DETAIL__MESSAGE__BUILDER_HPP_
