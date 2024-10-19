// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from llama_msgs:srv/FormatChatMessages.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__SRV__DETAIL__FORMAT_CHAT_MESSAGES__BUILDER_HPP_
#define LLAMA_MSGS__SRV__DETAIL__FORMAT_CHAT_MESSAGES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "llama_msgs/srv/detail/format_chat_messages__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace llama_msgs
{

namespace srv
{

namespace builder
{

class Init_FormatChatMessages_Request_add_ass
{
public:
  explicit Init_FormatChatMessages_Request_add_ass(::llama_msgs::srv::FormatChatMessages_Request & msg)
  : msg_(msg)
  {}
  ::llama_msgs::srv::FormatChatMessages_Request add_ass(::llama_msgs::srv::FormatChatMessages_Request::_add_ass_type arg)
  {
    msg_.add_ass = std::move(arg);
    return std::move(msg_);
  }

private:
  ::llama_msgs::srv::FormatChatMessages_Request msg_;
};

class Init_FormatChatMessages_Request_messages
{
public:
  Init_FormatChatMessages_Request_messages()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FormatChatMessages_Request_add_ass messages(::llama_msgs::srv::FormatChatMessages_Request::_messages_type arg)
  {
    msg_.messages = std::move(arg);
    return Init_FormatChatMessages_Request_add_ass(msg_);
  }

private:
  ::llama_msgs::srv::FormatChatMessages_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::llama_msgs::srv::FormatChatMessages_Request>()
{
  return llama_msgs::srv::builder::Init_FormatChatMessages_Request_messages();
}

}  // namespace llama_msgs


namespace llama_msgs
{

namespace srv
{

namespace builder
{

class Init_FormatChatMessages_Response_formatted_prompt
{
public:
  Init_FormatChatMessages_Response_formatted_prompt()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::llama_msgs::srv::FormatChatMessages_Response formatted_prompt(::llama_msgs::srv::FormatChatMessages_Response::_formatted_prompt_type arg)
  {
    msg_.formatted_prompt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::llama_msgs::srv::FormatChatMessages_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::llama_msgs::srv::FormatChatMessages_Response>()
{
  return llama_msgs::srv::builder::Init_FormatChatMessages_Response_formatted_prompt();
}

}  // namespace llama_msgs

#endif  // LLAMA_MSGS__SRV__DETAIL__FORMAT_CHAT_MESSAGES__BUILDER_HPP_
