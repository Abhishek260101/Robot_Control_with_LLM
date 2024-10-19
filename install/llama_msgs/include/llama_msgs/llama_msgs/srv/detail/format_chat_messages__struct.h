// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from llama_msgs:srv/FormatChatMessages.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__SRV__DETAIL__FORMAT_CHAT_MESSAGES__STRUCT_H_
#define LLAMA_MSGS__SRV__DETAIL__FORMAT_CHAT_MESSAGES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'messages'
#include "llama_msgs/msg/detail/message__struct.h"

/// Struct defined in srv/FormatChatMessages in the package llama_msgs.
typedef struct llama_msgs__srv__FormatChatMessages_Request
{
  /// List of chat messages
  llama_msgs__msg__Message__Sequence messages;
  /// Add assistant prompt
  bool add_ass;
} llama_msgs__srv__FormatChatMessages_Request;

// Struct for a sequence of llama_msgs__srv__FormatChatMessages_Request.
typedef struct llama_msgs__srv__FormatChatMessages_Request__Sequence
{
  llama_msgs__srv__FormatChatMessages_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llama_msgs__srv__FormatChatMessages_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'formatted_prompt'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/FormatChatMessages in the package llama_msgs.
typedef struct llama_msgs__srv__FormatChatMessages_Response
{
  /// Prompt formatted by the model
  rosidl_runtime_c__String formatted_prompt;
} llama_msgs__srv__FormatChatMessages_Response;

// Struct for a sequence of llama_msgs__srv__FormatChatMessages_Response.
typedef struct llama_msgs__srv__FormatChatMessages_Response__Sequence
{
  llama_msgs__srv__FormatChatMessages_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llama_msgs__srv__FormatChatMessages_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLAMA_MSGS__SRV__DETAIL__FORMAT_CHAT_MESSAGES__STRUCT_H_
