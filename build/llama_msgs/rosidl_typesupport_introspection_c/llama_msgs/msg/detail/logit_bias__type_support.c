// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from llama_msgs:msg/LogitBias.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "llama_msgs/msg/detail/logit_bias__rosidl_typesupport_introspection_c.h"
#include "llama_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "llama_msgs/msg/detail/logit_bias__functions.h"
#include "llama_msgs/msg/detail/logit_bias__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void llama_msgs__msg__LogitBias__rosidl_typesupport_introspection_c__LogitBias_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  llama_msgs__msg__LogitBias__init(message_memory);
}

void llama_msgs__msg__LogitBias__rosidl_typesupport_introspection_c__LogitBias_fini_function(void * message_memory)
{
  llama_msgs__msg__LogitBias__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember llama_msgs__msg__LogitBias__rosidl_typesupport_introspection_c__LogitBias_message_member_array[2] = {
  {
    "token",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llama_msgs__msg__LogitBias, token),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bias",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llama_msgs__msg__LogitBias, bias),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers llama_msgs__msg__LogitBias__rosidl_typesupport_introspection_c__LogitBias_message_members = {
  "llama_msgs__msg",  // message namespace
  "LogitBias",  // message name
  2,  // number of fields
  sizeof(llama_msgs__msg__LogitBias),
  llama_msgs__msg__LogitBias__rosidl_typesupport_introspection_c__LogitBias_message_member_array,  // message members
  llama_msgs__msg__LogitBias__rosidl_typesupport_introspection_c__LogitBias_init_function,  // function to initialize message memory (memory has to be allocated)
  llama_msgs__msg__LogitBias__rosidl_typesupport_introspection_c__LogitBias_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t llama_msgs__msg__LogitBias__rosidl_typesupport_introspection_c__LogitBias_message_type_support_handle = {
  0,
  &llama_msgs__msg__LogitBias__rosidl_typesupport_introspection_c__LogitBias_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_llama_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, msg, LogitBias)() {
  if (!llama_msgs__msg__LogitBias__rosidl_typesupport_introspection_c__LogitBias_message_type_support_handle.typesupport_identifier) {
    llama_msgs__msg__LogitBias__rosidl_typesupport_introspection_c__LogitBias_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &llama_msgs__msg__LogitBias__rosidl_typesupport_introspection_c__LogitBias_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
