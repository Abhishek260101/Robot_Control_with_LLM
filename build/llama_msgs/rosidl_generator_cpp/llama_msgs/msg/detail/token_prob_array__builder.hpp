// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from llama_msgs:msg/TokenProbArray.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__MSG__DETAIL__TOKEN_PROB_ARRAY__BUILDER_HPP_
#define LLAMA_MSGS__MSG__DETAIL__TOKEN_PROB_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "llama_msgs/msg/detail/token_prob_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace llama_msgs
{

namespace msg
{

namespace builder
{

class Init_TokenProbArray_chosen_token
{
public:
  explicit Init_TokenProbArray_chosen_token(::llama_msgs::msg::TokenProbArray & msg)
  : msg_(msg)
  {}
  ::llama_msgs::msg::TokenProbArray chosen_token(::llama_msgs::msg::TokenProbArray::_chosen_token_type arg)
  {
    msg_.chosen_token = std::move(arg);
    return std::move(msg_);
  }

private:
  ::llama_msgs::msg::TokenProbArray msg_;
};

class Init_TokenProbArray_data
{
public:
  Init_TokenProbArray_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TokenProbArray_chosen_token data(::llama_msgs::msg::TokenProbArray::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_TokenProbArray_chosen_token(msg_);
  }

private:
  ::llama_msgs::msg::TokenProbArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::llama_msgs::msg::TokenProbArray>()
{
  return llama_msgs::msg::builder::Init_TokenProbArray_data();
}

}  // namespace llama_msgs

#endif  // LLAMA_MSGS__MSG__DETAIL__TOKEN_PROB_ARRAY__BUILDER_HPP_
