// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from llama_msgs:msg/Response.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__MSG__DETAIL__RESPONSE__BUILDER_HPP_
#define LLAMA_MSGS__MSG__DETAIL__RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "llama_msgs/msg/detail/response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace llama_msgs
{

namespace msg
{

namespace builder
{

class Init_Response_probs
{
public:
  explicit Init_Response_probs(::llama_msgs::msg::Response & msg)
  : msg_(msg)
  {}
  ::llama_msgs::msg::Response probs(::llama_msgs::msg::Response::_probs_type arg)
  {
    msg_.probs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::llama_msgs::msg::Response msg_;
};

class Init_Response_tokens
{
public:
  explicit Init_Response_tokens(::llama_msgs::msg::Response & msg)
  : msg_(msg)
  {}
  Init_Response_probs tokens(::llama_msgs::msg::Response::_tokens_type arg)
  {
    msg_.tokens = std::move(arg);
    return Init_Response_probs(msg_);
  }

private:
  ::llama_msgs::msg::Response msg_;
};

class Init_Response_text
{
public:
  Init_Response_text()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Response_tokens text(::llama_msgs::msg::Response::_text_type arg)
  {
    msg_.text = std::move(arg);
    return Init_Response_tokens(msg_);
  }

private:
  ::llama_msgs::msg::Response msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::llama_msgs::msg::Response>()
{
  return llama_msgs::msg::builder::Init_Response_text();
}

}  // namespace llama_msgs

#endif  // LLAMA_MSGS__MSG__DETAIL__RESPONSE__BUILDER_HPP_
