// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from llama_msgs:msg/Message.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__MSG__DETAIL__MESSAGE__STRUCT_H_
#define LLAMA_MSGS__MSG__DETAIL__MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'role'
// Member 'content'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Message in the package llama_msgs.
typedef struct llama_msgs__msg__Message
{
  rosidl_runtime_c__String role;
  rosidl_runtime_c__String content;
} llama_msgs__msg__Message;

// Struct for a sequence of llama_msgs__msg__Message.
typedef struct llama_msgs__msg__Message__Sequence
{
  llama_msgs__msg__Message * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llama_msgs__msg__Message__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLAMA_MSGS__MSG__DETAIL__MESSAGE__STRUCT_H_
