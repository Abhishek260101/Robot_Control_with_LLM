// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from llama_msgs:msg/TokenProb.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__MSG__DETAIL__TOKEN_PROB__STRUCT_H_
#define LLAMA_MSGS__MSG__DETAIL__TOKEN_PROB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'token_text'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TokenProb in the package llama_msgs.
typedef struct llama_msgs__msg__TokenProb
{
  int32_t token;
  float probability;
  rosidl_runtime_c__String token_text;
} llama_msgs__msg__TokenProb;

// Struct for a sequence of llama_msgs__msg__TokenProb.
typedef struct llama_msgs__msg__TokenProb__Sequence
{
  llama_msgs__msg__TokenProb * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llama_msgs__msg__TokenProb__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLAMA_MSGS__MSG__DETAIL__TOKEN_PROB__STRUCT_H_
