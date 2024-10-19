// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interface:srv/GetTransform.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACE__SRV__DETAIL__GET_TRANSFORM__BUILDER_HPP_
#define ROBOT_INTERFACE__SRV__DETAIL__GET_TRANSFORM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_interface/srv/detail/get_transform__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_interface
{

namespace srv
{

namespace builder
{

class Init_GetTransform_Request_child_frame_id
{
public:
  explicit Init_GetTransform_Request_child_frame_id(::robot_interface::srv::GetTransform_Request & msg)
  : msg_(msg)
  {}
  ::robot_interface::srv::GetTransform_Request child_frame_id(::robot_interface::srv::GetTransform_Request::_child_frame_id_type arg)
  {
    msg_.child_frame_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interface::srv::GetTransform_Request msg_;
};

class Init_GetTransform_Request_frame_id
{
public:
  Init_GetTransform_Request_frame_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetTransform_Request_child_frame_id frame_id(::robot_interface::srv::GetTransform_Request::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_GetTransform_Request_child_frame_id(msg_);
  }

private:
  ::robot_interface::srv::GetTransform_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interface::srv::GetTransform_Request>()
{
  return robot_interface::srv::builder::Init_GetTransform_Request_frame_id();
}

}  // namespace robot_interface


namespace robot_interface
{

namespace srv
{

namespace builder
{

class Init_GetTransform_Response_success
{
public:
  explicit Init_GetTransform_Response_success(::robot_interface::srv::GetTransform_Response & msg)
  : msg_(msg)
  {}
  ::robot_interface::srv::GetTransform_Response success(::robot_interface::srv::GetTransform_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interface::srv::GetTransform_Response msg_;
};

class Init_GetTransform_Response_transform
{
public:
  Init_GetTransform_Response_transform()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetTransform_Response_success transform(::robot_interface::srv::GetTransform_Response::_transform_type arg)
  {
    msg_.transform = std::move(arg);
    return Init_GetTransform_Response_success(msg_);
  }

private:
  ::robot_interface::srv::GetTransform_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interface::srv::GetTransform_Response>()
{
  return robot_interface::srv::builder::Init_GetTransform_Response_transform();
}

}  // namespace robot_interface

#endif  // ROBOT_INTERFACE__SRV__DETAIL__GET_TRANSFORM__BUILDER_HPP_
