// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from llama_msgs:msg/PartialResponse.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__MSG__DETAIL__PARTIAL_RESPONSE__BUILDER_HPP_
#define LLAMA_MSGS__MSG__DETAIL__PARTIAL_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "llama_msgs/msg/detail/partial_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace llama_msgs
{

namespace msg
{

namespace builder
{

class Init_PartialResponse_probs
{
public:
  explicit Init_PartialResponse_probs(::llama_msgs::msg::PartialResponse & msg)
  : msg_(msg)
  {}
  ::llama_msgs::msg::PartialResponse probs(::llama_msgs::msg::PartialResponse::_probs_type arg)
  {
    msg_.probs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::llama_msgs::msg::PartialResponse msg_;
};

class Init_PartialResponse_token
{
public:
  explicit Init_PartialResponse_token(::llama_msgs::msg::PartialResponse & msg)
  : msg_(msg)
  {}
  Init_PartialResponse_probs token(::llama_msgs::msg::PartialResponse::_token_type arg)
  {
    msg_.token = std::move(arg);
    return Init_PartialResponse_probs(msg_);
  }

private:
  ::llama_msgs::msg::PartialResponse msg_;
};

class Init_PartialResponse_text
{
public:
  Init_PartialResponse_text()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PartialResponse_token text(::llama_msgs::msg::PartialResponse::_text_type arg)
  {
    msg_.text = std::move(arg);
    return Init_PartialResponse_token(msg_);
  }

private:
  ::llama_msgs::msg::PartialResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::llama_msgs::msg::PartialResponse>()
{
  return llama_msgs::msg::builder::Init_PartialResponse_text();
}

}  // namespace llama_msgs

#endif  // LLAMA_MSGS__MSG__DETAIL__PARTIAL_RESPONSE__BUILDER_HPP_
