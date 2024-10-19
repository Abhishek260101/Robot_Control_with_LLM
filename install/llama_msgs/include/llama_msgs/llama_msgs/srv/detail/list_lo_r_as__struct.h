// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from llama_msgs:srv/ListLoRAs.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__SRV__DETAIL__LIST_LO_R_AS__STRUCT_H_
#define LLAMA_MSGS__SRV__DETAIL__LIST_LO_R_AS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ListLoRAs in the package llama_msgs.
typedef struct llama_msgs__srv__ListLoRAs_Request
{
  uint8_t structure_needs_at_least_one_member;
} llama_msgs__srv__ListLoRAs_Request;

// Struct for a sequence of llama_msgs__srv__ListLoRAs_Request.
typedef struct llama_msgs__srv__ListLoRAs_Request__Sequence
{
  llama_msgs__srv__ListLoRAs_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llama_msgs__srv__ListLoRAs_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'loras'
#include "llama_msgs/msg/detail/lo_ra__struct.h"

/// Struct defined in srv/ListLoRAs in the package llama_msgs.
typedef struct llama_msgs__srv__ListLoRAs_Response
{
  /// LoRAs loaded when launching llama_ros
  llama_msgs__msg__LoRA__Sequence loras;
} llama_msgs__srv__ListLoRAs_Response;

// Struct for a sequence of llama_msgs__srv__ListLoRAs_Response.
typedef struct llama_msgs__srv__ListLoRAs_Response__Sequence
{
  llama_msgs__srv__ListLoRAs_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llama_msgs__srv__ListLoRAs_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLAMA_MSGS__SRV__DETAIL__LIST_LO_R_AS__STRUCT_H_
