// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from llama_msgs:srv/ListLoRAs.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__SRV__DETAIL__LIST_LO_R_AS__BUILDER_HPP_
#define LLAMA_MSGS__SRV__DETAIL__LIST_LO_R_AS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "llama_msgs/srv/detail/list_lo_r_as__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace llama_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::llama_msgs::srv::ListLoRAs_Request>()
{
  return ::llama_msgs::srv::ListLoRAs_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace llama_msgs


namespace llama_msgs
{

namespace srv
{

namespace builder
{

class Init_ListLoRAs_Response_loras
{
public:
  Init_ListLoRAs_Response_loras()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::llama_msgs::srv::ListLoRAs_Response loras(::llama_msgs::srv::ListLoRAs_Response::_loras_type arg)
  {
    msg_.loras = std::move(arg);
    return std::move(msg_);
  }

private:
  ::llama_msgs::srv::ListLoRAs_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::llama_msgs::srv::ListLoRAs_Response>()
{
  return llama_msgs::srv::builder::Init_ListLoRAs_Response_loras();
}

}  // namespace llama_msgs

#endif  // LLAMA_MSGS__SRV__DETAIL__LIST_LO_R_AS__BUILDER_HPP_
