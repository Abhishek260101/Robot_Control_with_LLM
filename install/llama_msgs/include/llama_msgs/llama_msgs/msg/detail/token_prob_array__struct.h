// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from llama_msgs:msg/TokenProbArray.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__MSG__DETAIL__TOKEN_PROB_ARRAY__STRUCT_H_
#define LLAMA_MSGS__MSG__DETAIL__TOKEN_PROB_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "llama_msgs/msg/detail/token_prob__struct.h"

/// Struct defined in msg/TokenProbArray in the package llama_msgs.
typedef struct llama_msgs__msg__TokenProbArray
{
  llama_msgs__msg__TokenProb__Sequence data;
  int32_t chosen_token;
} llama_msgs__msg__TokenProbArray;

// Struct for a sequence of llama_msgs__msg__TokenProbArray.
typedef struct llama_msgs__msg__TokenProbArray__Sequence
{
  llama_msgs__msg__TokenProbArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llama_msgs__msg__TokenProbArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLAMA_MSGS__MSG__DETAIL__TOKEN_PROB_ARRAY__STRUCT_H_
