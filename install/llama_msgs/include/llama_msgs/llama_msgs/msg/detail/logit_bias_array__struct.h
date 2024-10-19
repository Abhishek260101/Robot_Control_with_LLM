// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from llama_msgs:msg/LogitBiasArray.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__MSG__DETAIL__LOGIT_BIAS_ARRAY__STRUCT_H_
#define LLAMA_MSGS__MSG__DETAIL__LOGIT_BIAS_ARRAY__STRUCT_H_

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
#include "llama_msgs/msg/detail/logit_bias__struct.h"

/// Struct defined in msg/LogitBiasArray in the package llama_msgs.
typedef struct llama_msgs__msg__LogitBiasArray
{
  llama_msgs__msg__LogitBias__Sequence data;
} llama_msgs__msg__LogitBiasArray;

// Struct for a sequence of llama_msgs__msg__LogitBiasArray.
typedef struct llama_msgs__msg__LogitBiasArray__Sequence
{
  llama_msgs__msg__LogitBiasArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llama_msgs__msg__LogitBiasArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLAMA_MSGS__MSG__DETAIL__LOGIT_BIAS_ARRAY__STRUCT_H_
