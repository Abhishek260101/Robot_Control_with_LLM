// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from llama_msgs:msg/LoRA.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__MSG__DETAIL__LO_RA__STRUCT_H_
#define LLAMA_MSGS__MSG__DETAIL__LO_RA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'path'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/LoRA in the package llama_msgs.
typedef struct llama_msgs__msg__LoRA
{
  int32_t id;
  rosidl_runtime_c__String path;
  float scale;
} llama_msgs__msg__LoRA;

// Struct for a sequence of llama_msgs__msg__LoRA.
typedef struct llama_msgs__msg__LoRA__Sequence
{
  llama_msgs__msg__LoRA * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llama_msgs__msg__LoRA__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLAMA_MSGS__MSG__DETAIL__LO_RA__STRUCT_H_
