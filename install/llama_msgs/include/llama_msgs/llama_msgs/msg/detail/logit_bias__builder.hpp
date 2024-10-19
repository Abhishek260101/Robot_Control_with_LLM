// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from llama_msgs:msg/LogitBias.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__MSG__DETAIL__LOGIT_BIAS__BUILDER_HPP_
#define LLAMA_MSGS__MSG__DETAIL__LOGIT_BIAS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "llama_msgs/msg/detail/logit_bias__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace llama_msgs
{

namespace msg
{

namespace builder
{

class Init_LogitBias_bias
{
public:
  explicit Init_LogitBias_bias(::llama_msgs::msg::LogitBias & msg)
  : msg_(msg)
  {}
  ::llama_msgs::msg::LogitBias bias(::llama_msgs::msg::LogitBias::_bias_type arg)
  {
    msg_.bias = std::move(arg);
    return std::move(msg_);
  }

private:
  ::llama_msgs::msg::LogitBias msg_;
};

class Init_LogitBias_token
{
public:
  Init_LogitBias_token()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LogitBias_bias token(::llama_msgs::msg::LogitBias::_token_type arg)
  {
    msg_.token = std::move(arg);
    return Init_LogitBias_bias(msg_);
  }

private:
  ::llama_msgs::msg::LogitBias msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::llama_msgs::msg::LogitBias>()
{
  return llama_msgs::msg::builder::Init_LogitBias_token();
}

}  // namespace llama_msgs

#endif  // LLAMA_MSGS__MSG__DETAIL__LOGIT_BIAS__BUILDER_HPP_
