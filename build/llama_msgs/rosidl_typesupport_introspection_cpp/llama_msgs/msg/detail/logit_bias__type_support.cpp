// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from llama_msgs:msg/LogitBias.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "llama_msgs/msg/detail/logit_bias__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace llama_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LogitBias_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) llama_msgs::msg::LogitBias(_init);
}

void LogitBias_fini_function(void * message_memory)
{
  auto typed_message = static_cast<llama_msgs::msg::LogitBias *>(message_memory);
  typed_message->~LogitBias();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LogitBias_message_member_array[2] = {
  {
    "token",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llama_msgs::msg::LogitBias, token),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bias",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llama_msgs::msg::LogitBias, bias),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LogitBias_message_members = {
  "llama_msgs::msg",  // message namespace
  "LogitBias",  // message name
  2,  // number of fields
  sizeof(llama_msgs::msg::LogitBias),
  LogitBias_message_member_array,  // message members
  LogitBias_init_function,  // function to initialize message memory (memory has to be allocated)
  LogitBias_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LogitBias_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LogitBias_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace llama_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<llama_msgs::msg::LogitBias>()
{
  return &::llama_msgs::msg::rosidl_typesupport_introspection_cpp::LogitBias_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, llama_msgs, msg, LogitBias)() {
  return &::llama_msgs::msg::rosidl_typesupport_introspection_cpp::LogitBias_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
