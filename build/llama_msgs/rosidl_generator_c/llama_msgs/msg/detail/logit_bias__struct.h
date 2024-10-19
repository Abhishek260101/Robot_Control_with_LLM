// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from llama_msgs:msg/LogitBias.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__MSG__DETAIL__LOGIT_BIAS__STRUCT_H_
#define LLAMA_MSGS__MSG__DETAIL__LOGIT_BIAS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/LogitBias in the package llama_msgs.
typedef struct llama_msgs__msg__LogitBias
{
  int32_t token;
  float bias;
} llama_msgs__msg__LogitBias;

// Struct for a sequence of llama_msgs__msg__LogitBias.
typedef struct llama_msgs__msg__LogitBias__Sequence
{
  llama_msgs__msg__LogitBias * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llama_msgs__msg__LogitBias__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLAMA_MSGS__MSG__DETAIL__LOGIT_BIAS__STRUCT_H_
