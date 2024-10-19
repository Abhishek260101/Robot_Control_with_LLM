// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from llama_msgs:msg/LogitBiasArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "llama_msgs/msg/detail/logit_bias_array__rosidl_typesupport_introspection_c.h"
#include "llama_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "llama_msgs/msg/detail/logit_bias_array__functions.h"
#include "llama_msgs/msg/detail/logit_bias_array__struct.h"


// Include directives for member types
// Member `data`
#include "llama_msgs/msg/logit_bias.h"
// Member `data`
#include "llama_msgs/msg/detail/logit_bias__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void llama_msgs__msg__LogitBiasArray__rosidl_typesupport_introspection_c__LogitBiasArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  llama_msgs__msg__LogitBiasArray__init(message_memory);
}

void llama_msgs__msg__LogitBiasArray__rosidl_typesupport_introspection_c__LogitBiasArray_fini_function(void * message_memory)
{
  llama_msgs__msg__LogitBiasArray__fini(message_memory);
}

size_t llama_msgs__msg__LogitBiasArray__rosidl_typesupport_introspection_c__size_function__LogitBiasArray__data(
  const void * untyped_member)
{
  const llama_msgs__msg__LogitBias__Sequence * member =
    (const llama_msgs__msg__LogitBias__Sequence *)(untyped_member);
  return member->size;
}

const void * llama_msgs__msg__LogitBiasArray__rosidl_typesupport_introspection_c__get_const_function__LogitBiasArray__data(
  const void * untyped_member, size_t index)
{
  const llama_msgs__msg__LogitBias__Sequence * member =
    (const llama_msgs__msg__LogitBias__Sequence *)(untyped_member);
  return &member->data[index];
}

void * llama_msgs__msg__LogitBiasArray__rosidl_typesupport_introspection_c__get_function__LogitBiasArray__data(
  void * untyped_member, size_t index)
{
  llama_msgs__msg__LogitBias__Sequence * member =
    (llama_msgs__msg__LogitBias__Sequence *)(untyped_member);
  return &member->data[index];
}

void llama_msgs__msg__LogitBiasArray__rosidl_typesupport_introspection_c__fetch_function__LogitBiasArray__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const llama_msgs__msg__LogitBias * item =
    ((const llama_msgs__msg__LogitBias *)
    llama_msgs__msg__LogitBiasArray__rosidl_typesupport_introspection_c__get_const_function__LogitBiasArray__data(untyped_member, index));
  llama_msgs__msg__LogitBias * value =
    (llama_msgs__msg__LogitBias *)(untyped_value);
  *value = *item;
}

void llama_msgs__msg__LogitBiasArray__rosidl_typesupport_introspection_c__assign_function__LogitBiasArray__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  llama_msgs__msg__LogitBias * item =
    ((llama_msgs__msg__LogitBias *)
    llama_msgs__msg__LogitBiasArray__rosidl_typesupport_introspection_c__get_function__LogitBiasArray__data(untyped_member, index));
  const llama_msgs__msg__LogitBias * value =
    (const llama_msgs__msg__LogitBias *)(untyped_value);
  *item = *value;
}

bool llama_msgs__msg__LogitBiasArray__rosidl_typesupport_introspection_c__resize_function__LogitBiasArray__data(
  void * untyped_member, size_t size)
{
  llama_msgs__msg__LogitBias__Sequence * member =
    (llama_msgs__msg__LogitBias__Sequence *)(untyped_member);
  llama_msgs__msg__LogitBias__Sequence__fini(member);
  return llama_msgs__msg__LogitBias__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember llama_msgs__msg__LogitBiasArray__rosidl_typesupport_introspection_c__LogitBiasArray_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llama_msgs__msg__LogitBiasArray, data),  // bytes offset in struct
    NULL,  // default value
    llama_msgs__msg__LogitBiasArray__rosidl_typesupport_introspection_c__size_function__LogitBiasArray__data,  // size() function pointer
    llama_msgs__msg__LogitBiasArray__rosidl_typesupport_introspection_c__get_const_function__LogitBiasArray__data,  // get_const(index) function pointer
    llama_msgs__msg__LogitBiasArray__rosidl_typesupport_introspection_c__get_function__LogitBiasArray__data,  // get(index) function pointer
    llama_msgs__msg__LogitBiasArray__rosidl_typesupport_introspection_c__fetch_function__LogitBiasArray__data,  // fetch(index, &value) function pointer
    llama_msgs__msg__LogitBiasArray__rosidl_typesupport_introspection_c__assign_function__LogitBiasArray__data,  // assign(index, value) function pointer
    llama_msgs__msg__LogitBiasArray__rosidl_typesupport_introspection_c__resize_function__LogitBiasArray__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers llama_msgs__msg__LogitBiasArray__rosidl_typesupport_introspection_c__LogitBiasArray_message_members = {
  "llama_msgs__msg",  // message namespace
  "LogitBiasArray",  // message name
  1,  // number of fields
  sizeof(llama_msgs__msg__LogitBiasArray),
  llama_msgs__msg__LogitBiasArray__rosidl_typesupport_introspection_c__LogitBiasArray_message_member_array,  // message members
  llama_msgs__msg__LogitBiasArray__rosidl_typesupport_introspection_c__LogitBiasArray_init_function,  // function to initialize message memory (memory has to be allocated)
  llama_msgs__msg__LogitBiasArray__rosidl_typesupport_introspection_c__LogitBiasArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t llama_msgs__msg__LogitBiasArray__rosidl_typesupport_introspection_c__LogitBiasArray_message_type_support_handle = {
  0,
  &llama_msgs__msg__LogitBiasArray__rosidl_typesupport_introspection_c__LogitBiasArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_llama_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, msg, LogitBiasArray)() {
  llama_msgs__msg__LogitBiasArray__rosidl_typesupport_introspection_c__LogitBiasArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, msg, LogitBias)();
  if (!llama_msgs__msg__LogitBiasArray__rosidl_typesupport_introspection_c__LogitBiasArray_message_type_support_handle.typesupport_identifier) {
    llama_msgs__msg__LogitBiasArray__rosidl_typesupport_introspection_c__LogitBiasArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &llama_msgs__msg__LogitBiasArray__rosidl_typesupport_introspection_c__LogitBiasArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
