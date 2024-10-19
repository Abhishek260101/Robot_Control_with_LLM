// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from llama_msgs:msg/TokenProb.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__MSG__DETAIL__TOKEN_PROB__BUILDER_HPP_
#define LLAMA_MSGS__MSG__DETAIL__TOKEN_PROB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "llama_msgs/msg/detail/token_prob__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace llama_msgs
{

namespace msg
{

namespace builder
{

class Init_TokenProb_token_text
{
public:
  explicit Init_TokenProb_token_text(::llama_msgs::msg::TokenProb & msg)
  : msg_(msg)
  {}
  ::llama_msgs::msg::TokenProb token_text(::llama_msgs::msg::TokenProb::_token_text_type arg)
  {
    msg_.token_text = std::move(arg);
    return std::move(msg_);
  }

private:
  ::llama_msgs::msg::TokenProb msg_;
};

class Init_TokenProb_probability
{
public:
  explicit Init_TokenProb_probability(::llama_msgs::msg::TokenProb & msg)
  : msg_(msg)
  {}
  Init_TokenProb_token_text probability(::llama_msgs::msg::TokenProb::_probability_type arg)
  {
    msg_.probability = std::move(arg);
    return Init_TokenProb_token_text(msg_);
  }

private:
  ::llama_msgs::msg::TokenProb msg_;
};

class Init_TokenProb_token
{
public:
  Init_TokenProb_token()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TokenProb_probability token(::llama_msgs::msg::TokenProb::_token_type arg)
  {
    msg_.token = std::move(arg);
    return Init_TokenProb_probability(msg_);
  }

private:
  ::llama_msgs::msg::TokenProb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::llama_msgs::msg::TokenProb>()
{
  return llama_msgs::msg::builder::Init_TokenProb_token();
}

}  // namespace llama_msgs

#endif  // LLAMA_MSGS__MSG__DETAIL__TOKEN_PROB__BUILDER_HPP_
