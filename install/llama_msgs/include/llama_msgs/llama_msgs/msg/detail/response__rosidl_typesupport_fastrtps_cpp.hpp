// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from llama_msgs:msg/Response.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__MSG__DETAIL__RESPONSE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define LLAMA_MSGS__MSG__DETAIL__RESPONSE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "llama_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "llama_msgs/msg/detail/response__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace llama_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_llama_msgs
cdr_serialize(
  const llama_msgs::msg::Response & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_llama_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  llama_msgs::msg::Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_llama_msgs
get_serialized_size(
  const llama_msgs::msg::Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_llama_msgs
max_serialized_size_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace llama_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_llama_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, llama_msgs, msg, Response)();

#ifdef __cplusplus
}
#endif

#endif  // LLAMA_MSGS__MSG__DETAIL__RESPONSE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
