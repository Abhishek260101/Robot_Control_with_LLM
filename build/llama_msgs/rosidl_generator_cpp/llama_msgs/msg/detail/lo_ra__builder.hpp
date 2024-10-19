// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from llama_msgs:msg/LoRA.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__MSG__DETAIL__LO_RA__BUILDER_HPP_
#define LLAMA_MSGS__MSG__DETAIL__LO_RA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "llama_msgs/msg/detail/lo_ra__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace llama_msgs
{

namespace msg
{

namespace builder
{

class Init_LoRA_scale
{
public:
  explicit Init_LoRA_scale(::llama_msgs::msg::LoRA & msg)
  : msg_(msg)
  {}
  ::llama_msgs::msg::LoRA scale(::llama_msgs::msg::LoRA::_scale_type arg)
  {
    msg_.scale = std::move(arg);
    return std::move(msg_);
  }

private:
  ::llama_msgs::msg::LoRA msg_;
};

class Init_LoRA_path
{
public:
  explicit Init_LoRA_path(::llama_msgs::msg::LoRA & msg)
  : msg_(msg)
  {}
  Init_LoRA_scale path(::llama_msgs::msg::LoRA::_path_type arg)
  {
    msg_.path = std::move(arg);
    return Init_LoRA_scale(msg_);
  }

private:
  ::llama_msgs::msg::LoRA msg_;
};

class Init_LoRA_id
{
public:
  Init_LoRA_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LoRA_path id(::llama_msgs::msg::LoRA::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_LoRA_path(msg_);
  }

private:
  ::llama_msgs::msg::LoRA msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::llama_msgs::msg::LoRA>()
{
  return llama_msgs::msg::builder::Init_LoRA_id();
}

}  // namespace llama_msgs

#endif  // LLAMA_MSGS__MSG__DETAIL__LO_RA__BUILDER_HPP_
