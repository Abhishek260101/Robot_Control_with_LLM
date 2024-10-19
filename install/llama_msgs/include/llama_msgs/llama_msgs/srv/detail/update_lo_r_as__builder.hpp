// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from llama_msgs:srv/UpdateLoRAs.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__SRV__DETAIL__UPDATE_LO_R_AS__BUILDER_HPP_
#define LLAMA_MSGS__SRV__DETAIL__UPDATE_LO_R_AS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "llama_msgs/srv/detail/update_lo_r_as__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace llama_msgs
{

namespace srv
{

namespace builder
{

class Init_UpdateLoRAs_Request_loras
{
public:
  Init_UpdateLoRAs_Request_loras()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::llama_msgs::srv::UpdateLoRAs_Request loras(::llama_msgs::srv::UpdateLoRAs_Request::_loras_type arg)
  {
    msg_.loras = std::move(arg);
    return std::move(msg_);
  }

private:
  ::llama_msgs::srv::UpdateLoRAs_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::llama_msgs::srv::UpdateLoRAs_Request>()
{
  return llama_msgs::srv::builder::Init_UpdateLoRAs_Request_loras();
}

}  // namespace llama_msgs


namespace llama_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::llama_msgs::srv::UpdateLoRAs_Response>()
{
  return ::llama_msgs::srv::UpdateLoRAs_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace llama_msgs

#endif  // LLAMA_MSGS__SRV__DETAIL__UPDATE_LO_R_AS__BUILDER_HPP_
