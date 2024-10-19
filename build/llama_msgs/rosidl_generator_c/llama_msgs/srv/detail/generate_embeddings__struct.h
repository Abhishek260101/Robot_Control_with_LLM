// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from llama_msgs:srv/GenerateEmbeddings.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__SRV__DETAIL__GENERATE_EMBEDDINGS__STRUCT_H_
#define LLAMA_MSGS__SRV__DETAIL__GENERATE_EMBEDDINGS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'prompt'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GenerateEmbeddings in the package llama_msgs.
typedef struct llama_msgs__srv__GenerateEmbeddings_Request
{
  /// prompt
  rosidl_runtime_c__String prompt;
  /// whether to normalize embeddings
  bool normalize;
} llama_msgs__srv__GenerateEmbeddings_Request;

// Struct for a sequence of llama_msgs__srv__GenerateEmbeddings_Request.
typedef struct llama_msgs__srv__GenerateEmbeddings_Request__Sequence
{
  llama_msgs__srv__GenerateEmbeddings_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llama_msgs__srv__GenerateEmbeddings_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'embeddings'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/GenerateEmbeddings in the package llama_msgs.
typedef struct llama_msgs__srv__GenerateEmbeddings_Response
{
  /// embeddings
  rosidl_runtime_c__float__Sequence embeddings;
  /// tokens processed
  int32_t n_tokens;
} llama_msgs__srv__GenerateEmbeddings_Response;

// Struct for a sequence of llama_msgs__srv__GenerateEmbeddings_Response.
typedef struct llama_msgs__srv__GenerateEmbeddings_Response__Sequence
{
  llama_msgs__srv__GenerateEmbeddings_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llama_msgs__srv__GenerateEmbeddings_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLAMA_MSGS__SRV__DETAIL__GENERATE_EMBEDDINGS__STRUCT_H_
