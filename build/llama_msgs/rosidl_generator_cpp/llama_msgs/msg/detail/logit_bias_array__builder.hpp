// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from llama_msgs:msg/LogitBiasArray.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__MSG__DETAIL__LOGIT_BIAS_ARRAY__BUILDER_HPP_
#define LLAMA_MSGS__MSG__DETAIL__LOGIT_BIAS_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "llama_msgs/msg/detail/logit_bias_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace llama_msgs
{

namespace msg
{

namespace builder
{

class Init_LogitBiasArray_data
{
public:
  Init_LogitBiasArray_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::llama_msgs::msg::LogitBiasArray data(::llama_msgs::msg::LogitBiasArray::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::llama_msgs::msg::LogitBiasArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::llama_msgs::msg::LogitBiasArray>()
{
  return llama_msgs::msg::builder::Init_LogitBiasArray_data();
}

}  // namespace llama_msgs

#endif  // LLAMA_MSGS__MSG__DETAIL__LOGIT_BIAS_ARRAY__BUILDER_HPP_
