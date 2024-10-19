// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from llama_msgs:msg/Response.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "llama_msgs/msg/detail/response__rosidl_typesupport_introspection_c.h"
#include "llama_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "llama_msgs/msg/detail/response__functions.h"
#include "llama_msgs/msg/detail/response__struct.h"


// Include directives for member types
// Member `text`
#include "rosidl_runtime_c/string_functions.h"
// Member `tokens`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `probs`
#include "llama_msgs/msg/token_prob_array.h"
// Member `probs`
#include "llama_msgs/msg/detail/token_prob_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void llama_msgs__msg__Response__rosidl_typesupport_introspection_c__Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  llama_msgs__msg__Response__init(message_memory);
}

void llama_msgs__msg__Response__rosidl_typesupport_introspection_c__Response_fini_function(void * message_memory)
{
  llama_msgs__msg__Response__fini(message_memory);
}

size_t llama_msgs__msg__Response__rosidl_typesupport_introspection_c__size_function__Response__tokens(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * llama_msgs__msg__Response__rosidl_typesupport_introspection_c__get_const_function__Response__tokens(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * llama_msgs__msg__Response__rosidl_typesupport_introspection_c__get_function__Response__tokens(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void llama_msgs__msg__Response__rosidl_typesupport_introspection_c__fetch_function__Response__tokens(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    llama_msgs__msg__Response__rosidl_typesupport_introspection_c__get_const_function__Response__tokens(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void llama_msgs__msg__Response__rosidl_typesupport_introspection_c__assign_function__Response__tokens(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    llama_msgs__msg__Response__rosidl_typesupport_introspection_c__get_function__Response__tokens(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool llama_msgs__msg__Response__rosidl_typesupport_introspection_c__resize_function__Response__tokens(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t llama_msgs__msg__Response__rosidl_typesupport_introspection_c__size_function__Response__probs(
  const void * untyped_member)
{
  const llama_msgs__msg__TokenProbArray__Sequence * member =
    (const llama_msgs__msg__TokenProbArray__Sequence *)(untyped_member);
  return member->size;
}

const void * llama_msgs__msg__Response__rosidl_typesupport_introspection_c__get_const_function__Response__probs(
  const void * untyped_member, size_t index)
{
  const llama_msgs__msg__TokenProbArray__Sequence * member =
    (const llama_msgs__msg__TokenProbArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * llama_msgs__msg__Response__rosidl_typesupport_introspection_c__get_function__Response__probs(
  void * untyped_member, size_t index)
{
  llama_msgs__msg__TokenProbArray__Sequence * member =
    (llama_msgs__msg__TokenProbArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void llama_msgs__msg__Response__rosidl_typesupport_introspection_c__fetch_function__Response__probs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const llama_msgs__msg__TokenProbArray * item =
    ((const llama_msgs__msg__TokenProbArray *)
    llama_msgs__msg__Response__rosidl_typesupport_introspection_c__get_const_function__Response__probs(untyped_member, index));
  llama_msgs__msg__TokenProbArray * value =
    (llama_msgs__msg__TokenProbArray *)(untyped_value);
  *value = *item;
}

void llama_msgs__msg__Response__rosidl_typesupport_introspection_c__assign_function__Response__probs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  llama_msgs__msg__TokenProbArray * item =
    ((llama_msgs__msg__TokenProbArray *)
    llama_msgs__msg__Response__rosidl_typesupport_introspection_c__get_function__Response__probs(untyped_member, index));
  const llama_msgs__msg__TokenProbArray * value =
    (const llama_msgs__msg__TokenProbArray *)(untyped_value);
  *item = *value;
}

bool llama_msgs__msg__Response__rosidl_typesupport_introspection_c__resize_function__Response__probs(
  void * untyped_member, size_t size)
{
  llama_msgs__msg__TokenProbArray__Sequence * member =
    (llama_msgs__msg__TokenProbArray__Sequence *)(untyped_member);
  llama_msgs__msg__TokenProbArray__Sequence__fini(member);
  return llama_msgs__msg__TokenProbArray__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember llama_msgs__msg__Response__rosidl_typesupport_introspection_c__Response_message_member_array[3] = {
  {
    "text",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llama_msgs__msg__Response, text),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tokens",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llama_msgs__msg__Response, tokens),  // bytes offset in struct
    NULL,  // default value
    llama_msgs__msg__Response__rosidl_typesupport_introspection_c__size_function__Response__tokens,  // size() function pointer
    llama_msgs__msg__Response__rosidl_typesupport_introspection_c__get_const_function__Response__tokens,  // get_const(index) function pointer
    llama_msgs__msg__Response__rosidl_typesupport_introspection_c__get_function__Response__tokens,  // get(index) function pointer
    llama_msgs__msg__Response__rosidl_typesupport_introspection_c__fetch_function__Response__tokens,  // fetch(index, &value) function pointer
    llama_msgs__msg__Response__rosidl_typesupport_introspection_c__assign_function__Response__tokens,  // assign(index, value) function pointer
    llama_msgs__msg__Response__rosidl_typesupport_introspection_c__resize_function__Response__tokens  // resize(index) function pointer
  },
  {
    "probs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llama_msgs__msg__Response, probs),  // bytes offset in struct
    NULL,  // default value
    llama_msgs__msg__Response__rosidl_typesupport_introspection_c__size_function__Response__probs,  // size() function pointer
    llama_msgs__msg__Response__rosidl_typesupport_introspection_c__get_const_function__Response__probs,  // get_const(index) function pointer
    llama_msgs__msg__Response__rosidl_typesupport_introspection_c__get_function__Response__probs,  // get(index) function pointer
    llama_msgs__msg__Response__rosidl_typesupport_introspection_c__fetch_function__Response__probs,  // fetch(index, &value) function pointer
    llama_msgs__msg__Response__rosidl_typesupport_introspection_c__assign_function__Response__probs,  // assign(index, value) function pointer
    llama_msgs__msg__Response__rosidl_typesupport_introspection_c__resize_function__Response__probs  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers llama_msgs__msg__Response__rosidl_typesupport_introspection_c__Response_message_members = {
  "llama_msgs__msg",  // message namespace
  "Response",  // message name
  3,  // number of fields
  sizeof(llama_msgs__msg__Response),
  llama_msgs__msg__Response__rosidl_typesupport_introspection_c__Response_message_member_array,  // message members
  llama_msgs__msg__Response__rosidl_typesupport_introspection_c__Response_init_function,  // function to initialize message memory (memory has to be allocated)
  llama_msgs__msg__Response__rosidl_typesupport_introspection_c__Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t llama_msgs__msg__Response__rosidl_typesupport_introspection_c__Response_message_type_support_handle = {
  0,
  &llama_msgs__msg__Response__rosidl_typesupport_introspection_c__Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_llama_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, msg, Response)() {
  llama_msgs__msg__Response__rosidl_typesupport_introspection_c__Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, msg, TokenProbArray)();
  if (!llama_msgs__msg__Response__rosidl_typesupport_introspection_c__Response_message_type_support_handle.typesupport_identifier) {
    llama_msgs__msg__Response__rosidl_typesupport_introspection_c__Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &llama_msgs__msg__Response__rosidl_typesupport_introspection_c__Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
