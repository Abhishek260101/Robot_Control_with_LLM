// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from llama_msgs:srv/Tokenize.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__SRV__DETAIL__TOKENIZE__BUILDER_HPP_
#define LLAMA_MSGS__SRV__DETAIL__TOKENIZE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "llama_msgs/srv/detail/tokenize__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace llama_msgs
{

namespace srv
{

namespace builder
{

class Init_Tokenize_Request_prompt
{
public:
  Init_Tokenize_Request_prompt()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::llama_msgs::srv::Tokenize_Request prompt(::llama_msgs::srv::Tokenize_Request::_prompt_type arg)
  {
    msg_.prompt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::llama_msgs::srv::Tokenize_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::llama_msgs::srv::Tokenize_Request>()
{
  return llama_msgs::srv::builder::Init_Tokenize_Request_prompt();
}

}  // namespace llama_msgs


namespace llama_msgs
{

namespace srv
{

namespace builder
{

class Init_Tokenize_Response_tokens
{
public:
  Init_Tokenize_Response_tokens()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::llama_msgs::srv::Tokenize_Response tokens(::llama_msgs::srv::Tokenize_Response::_tokens_type arg)
  {
    msg_.tokens = std::move(arg);
    return std::move(msg_);
  }

private:
  ::llama_msgs::srv::Tokenize_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::llama_msgs::srv::Tokenize_Response>()
{
  return llama_msgs::srv::builder::Init_Tokenize_Response_tokens();
}

}  // namespace llama_msgs

#endif  // LLAMA_MSGS__SRV__DETAIL__TOKENIZE__BUILDER_HPP_
