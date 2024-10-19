// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from llama_msgs:action/GenerateResponse.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__ACTION__DETAIL__GENERATE_RESPONSE__STRUCT_H_
#define LLAMA_MSGS__ACTION__DETAIL__GENERATE_RESPONSE__STRUCT_H_

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
// Member 'stop'
#include "rosidl_runtime_c/string.h"
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.h"
// Member 'sampling_config'
#include "llama_msgs/msg/detail/sampling_config__struct.h"

/// Struct defined in action/GenerateResponse in the package llama_msgs.
typedef struct llama_msgs__action__GenerateResponse_Goal
{
  /// prompt
  rosidl_runtime_c__String prompt;
  /// image for VLMs
  sensor_msgs__msg__Image image;
  /// stop list
  rosidl_runtime_c__String__Sequence stop;
  /// whether to reset the context
  bool reset;
  /// sampling config
  llama_msgs__msg__SamplingConfig sampling_config;
} llama_msgs__action__GenerateResponse_Goal;

// Struct for a sequence of llama_msgs__action__GenerateResponse_Goal.
typedef struct llama_msgs__action__GenerateResponse_Goal__Sequence
{
  llama_msgs__action__GenerateResponse_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llama_msgs__action__GenerateResponse_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
#include "llama_msgs/msg/detail/response__struct.h"

/// Struct defined in action/GenerateResponse in the package llama_msgs.
typedef struct llama_msgs__action__GenerateResponse_Result
{
  /// final response
  llama_msgs__msg__Response response;
} llama_msgs__action__GenerateResponse_Result;

// Struct for a sequence of llama_msgs__action__GenerateResponse_Result.
typedef struct llama_msgs__action__GenerateResponse_Result__Sequence
{
  llama_msgs__action__GenerateResponse_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llama_msgs__action__GenerateResponse_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'partial_response'
#include "llama_msgs/msg/detail/partial_response__struct.h"

/// Struct defined in action/GenerateResponse in the package llama_msgs.
typedef struct llama_msgs__action__GenerateResponse_Feedback
{
  /// partial response
  llama_msgs__msg__PartialResponse partial_response;
} llama_msgs__action__GenerateResponse_Feedback;

// Struct for a sequence of llama_msgs__action__GenerateResponse_Feedback.
typedef struct llama_msgs__action__GenerateResponse_Feedback__Sequence
{
  llama_msgs__action__GenerateResponse_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llama_msgs__action__GenerateResponse_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "llama_msgs/action/detail/generate_response__struct.h"

/// Struct defined in action/GenerateResponse in the package llama_msgs.
typedef struct llama_msgs__action__GenerateResponse_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  llama_msgs__action__GenerateResponse_Goal goal;
} llama_msgs__action__GenerateResponse_SendGoal_Request;

// Struct for a sequence of llama_msgs__action__GenerateResponse_SendGoal_Request.
typedef struct llama_msgs__action__GenerateResponse_SendGoal_Request__Sequence
{
  llama_msgs__action__GenerateResponse_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llama_msgs__action__GenerateResponse_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/GenerateResponse in the package llama_msgs.
typedef struct llama_msgs__action__GenerateResponse_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} llama_msgs__action__GenerateResponse_SendGoal_Response;

// Struct for a sequence of llama_msgs__action__GenerateResponse_SendGoal_Response.
typedef struct llama_msgs__action__GenerateResponse_SendGoal_Response__Sequence
{
  llama_msgs__action__GenerateResponse_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llama_msgs__action__GenerateResponse_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/GenerateResponse in the package llama_msgs.
typedef struct llama_msgs__action__GenerateResponse_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} llama_msgs__action__GenerateResponse_GetResult_Request;

// Struct for a sequence of llama_msgs__action__GenerateResponse_GetResult_Request.
typedef struct llama_msgs__action__GenerateResponse_GetResult_Request__Sequence
{
  llama_msgs__action__GenerateResponse_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llama_msgs__action__GenerateResponse_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "llama_msgs/action/detail/generate_response__struct.h"

/// Struct defined in action/GenerateResponse in the package llama_msgs.
typedef struct llama_msgs__action__GenerateResponse_GetResult_Response
{
  int8_t status;
  llama_msgs__action__GenerateResponse_Result result;
} llama_msgs__action__GenerateResponse_GetResult_Response;

// Struct for a sequence of llama_msgs__action__GenerateResponse_GetResult_Response.
typedef struct llama_msgs__action__GenerateResponse_GetResult_Response__Sequence
{
  llama_msgs__action__GenerateResponse_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llama_msgs__action__GenerateResponse_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "llama_msgs/action/detail/generate_response__struct.h"

/// Struct defined in action/GenerateResponse in the package llama_msgs.
typedef struct llama_msgs__action__GenerateResponse_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  llama_msgs__action__GenerateResponse_Feedback feedback;
} llama_msgs__action__GenerateResponse_FeedbackMessage;

// Struct for a sequence of llama_msgs__action__GenerateResponse_FeedbackMessage.
typedef struct llama_msgs__action__GenerateResponse_FeedbackMessage__Sequence
{
  llama_msgs__action__GenerateResponse_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llama_msgs__action__GenerateResponse_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLAMA_MSGS__ACTION__DETAIL__GENERATE_RESPONSE__STRUCT_H_
