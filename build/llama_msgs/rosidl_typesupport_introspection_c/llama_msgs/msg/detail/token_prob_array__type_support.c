// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from llama_msgs:msg/TokenProbArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "llama_msgs/msg/detail/token_prob_array__rosidl_typesupport_introspection_c.h"
#include "llama_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "llama_msgs/msg/detail/token_prob_array__functions.h"
#include "llama_msgs/msg/detail/token_prob_array__struct.h"


// Include directives for member types
// Member `data`
#include "llama_msgs/msg/token_prob.h"
// Member `data`
#include "llama_msgs/msg/detail/token_prob__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void llama_msgs__msg__TokenProbArray__rosidl_typesupport_introspection_c__TokenProbArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  llama_msgs__msg__TokenProbArray__init(message_memory);
}

void llama_msgs__msg__TokenProbArray__rosidl_typesupport_introspection_c__TokenProbArray_fini_function(void * message_memory)
{
  llama_msgs__msg__TokenProbArray__fini(message_memory);
}

size_t llama_msgs__msg__TokenProbArray__rosidl_typesupport_introspection_c__size_function__TokenProbArray__data(
  const void * untyped_member)
{
  const llama_msgs__msg__TokenProb__Sequence * member =
    (const llama_msgs__msg__TokenProb__Sequence *)(untyped_member);
  return member->size;
}

const void * llama_msgs__msg__TokenProbArray__rosidl_typesupport_introspection_c__get_const_function__TokenProbArray__data(
  const void * untyped_member, size_t index)
{
  const llama_msgs__msg__TokenProb__Sequence * member =
    (const llama_msgs__msg__TokenProb__Sequence *)(untyped_member);
  return &member->data[index];
}

void * llama_msgs__msg__TokenProbArray__rosidl_typesupport_introspection_c__get_function__TokenProbArray__data(
  void * untyped_member, size_t index)
{
  llama_msgs__msg__TokenProb__Sequence * member =
    (llama_msgs__msg__TokenProb__Sequence *)(untyped_member);
  return &member->data[index];
}

void llama_msgs__msg__TokenProbArray__rosidl_typesupport_introspection_c__fetch_function__TokenProbArray__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const llama_msgs__msg__TokenProb * item =
    ((const llama_msgs__msg__TokenProb *)
    llama_msgs__msg__TokenProbArray__rosidl_typesupport_introspection_c__get_const_function__TokenProbArray__data(untyped_member, index));
  llama_msgs__msg__TokenProb * value =
    (llama_msgs__msg__TokenProb *)(untyped_value);
  *value = *item;
}

void llama_msgs__msg__TokenProbArray__rosidl_typesupport_introspection_c__assign_function__TokenProbArray__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  llama_msgs__msg__TokenProb * item =
    ((llama_msgs__msg__TokenProb *)
    llama_msgs__msg__TokenProbArray__rosidl_typesupport_introspection_c__get_function__TokenProbArray__data(untyped_member, index));
  const llama_msgs__msg__TokenProb * value =
    (const llama_msgs__msg__TokenProb *)(untyped_value);
  *item = *value;
}

bool llama_msgs__msg__TokenProbArray__rosidl_typesupport_introspection_c__resize_function__TokenProbArray__data(
  void * untyped_member, size_t size)
{
  llama_msgs__msg__TokenProb__Sequence * member =
    (llama_msgs__msg__TokenProb__Sequence *)(untyped_member);
  llama_msgs__msg__TokenProb__Sequence__fini(member);
  return llama_msgs__msg__TokenProb__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember llama_msgs__msg__TokenProbArray__rosidl_typesupport_introspection_c__TokenProbArray_message_member_array[2] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llama_msgs__msg__TokenProbArray, data),  // bytes offset in struct
    NULL,  // default value
    llama_msgs__msg__TokenProbArray__rosidl_typesupport_introspection_c__size_function__TokenProbArray__data,  // size() function pointer
    llama_msgs__msg__TokenProbArray__rosidl_typesupport_introspection_c__get_const_function__TokenProbArray__data,  // get_const(index) function pointer
    llama_msgs__msg__TokenProbArray__rosidl_typesupport_introspection_c__get_function__TokenProbArray__data,  // get(index) function pointer
    llama_msgs__msg__TokenProbArray__rosidl_typesupport_introspection_c__fetch_function__TokenProbArray__data,  // fetch(index, &value) function pointer
    llama_msgs__msg__TokenProbArray__rosidl_typesupport_introspection_c__assign_function__TokenProbArray__data,  // assign(index, value) function pointer
    llama_msgs__msg__TokenProbArray__rosidl_typesupport_introspection_c__resize_function__TokenProbArray__data  // resize(index) function pointer
  },
  {
    "chosen_token",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llama_msgs__msg__TokenProbArray, chosen_token),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers llama_msgs__msg__TokenProbArray__rosidl_typesupport_introspection_c__TokenProbArray_message_members = {
  "llama_msgs__msg",  // message namespace
  "TokenProbArray",  // message name
  2,  // number of fields
  sizeof(llama_msgs__msg__TokenProbArray),
  llama_msgs__msg__TokenProbArray__rosidl_typesupport_introspection_c__TokenProbArray_message_member_array,  // message members
  llama_msgs__msg__TokenProbArray__rosidl_typesupport_introspection_c__TokenProbArray_init_function,  // function to initialize message memory (memory has to be allocated)
  llama_msgs__msg__TokenProbArray__rosidl_typesupport_introspection_c__TokenProbArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t llama_msgs__msg__TokenProbArray__rosidl_typesupport_introspection_c__TokenProbArray_message_type_support_handle = {
  0,
  &llama_msgs__msg__TokenProbArray__rosidl_typesupport_introspection_c__TokenProbArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_llama_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, msg, TokenProbArray)() {
  llama_msgs__msg__TokenProbArray__rosidl_typesupport_introspection_c__TokenProbArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, msg, TokenProb)();
  if (!llama_msgs__msg__TokenProbArray__rosidl_typesupport_introspection_c__TokenProbArray_message_type_support_handle.typesupport_identifier) {
    llama_msgs__msg__TokenProbArray__rosidl_typesupport_introspection_c__TokenProbArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &llama_msgs__msg__TokenProbArray__rosidl_typesupport_introspection_c__TokenProbArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
