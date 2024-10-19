// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from llama_msgs:msg/Response.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__MSG__DETAIL__RESPONSE__STRUCT_H_
#define LLAMA_MSGS__MSG__DETAIL__RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'text'
#include "rosidl_runtime_c/string.h"
// Member 'tokens'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'probs'
#include "llama_msgs/msg/detail/token_prob_array__struct.h"

/// Struct defined in msg/Response in the package llama_msgs.
typedef struct llama_msgs__msg__Response
{
  rosidl_runtime_c__String text;
  rosidl_runtime_c__int32__Sequence tokens;
  llama_msgs__msg__TokenProbArray__Sequence probs;
} llama_msgs__msg__Response;

// Struct for a sequence of llama_msgs__msg__Response.
typedef struct llama_msgs__msg__Response__Sequence
{
  llama_msgs__msg__Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llama_msgs__msg__Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLAMA_MSGS__MSG__DETAIL__RESPONSE__STRUCT_H_
