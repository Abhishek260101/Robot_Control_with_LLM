// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from llama_msgs:action/GenerateResponse.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "llama_msgs/action/detail/generate_response__rosidl_typesupport_introspection_c.h"
#include "llama_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "llama_msgs/action/detail/generate_response__functions.h"
#include "llama_msgs/action/detail/generate_response__struct.h"


// Include directives for member types
// Member `prompt`
// Member `stop`
#include "rosidl_runtime_c/string_functions.h"
// Member `image`
#include "sensor_msgs/msg/image.h"
// Member `image`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"
// Member `sampling_config`
#include "llama_msgs/msg/sampling_config.h"
// Member `sampling_config`
#include "llama_msgs/msg/detail/sampling_config__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void llama_msgs__action__GenerateResponse_Goal__rosidl_typesupport_introspection_c__GenerateResponse_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  llama_msgs__action__GenerateResponse_Goal__init(message_memory);
}

void llama_msgs__action__GenerateResponse_Goal__rosidl_typesupport_introspection_c__GenerateResponse_Goal_fini_function(void * message_memory)
{
  llama_msgs__action__GenerateResponse_Goal__fini(message_memory);
}

size_t llama_msgs__action__GenerateResponse_Goal__rosidl_typesupport_introspection_c__size_function__GenerateResponse_Goal__stop(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * llama_msgs__action__GenerateResponse_Goal__rosidl_typesupport_introspection_c__get_const_function__GenerateResponse_Goal__stop(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * llama_msgs__action__GenerateResponse_Goal__rosidl_typesupport_introspection_c__get_function__GenerateResponse_Goal__stop(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void llama_msgs__action__GenerateResponse_Goal__rosidl_typesupport_introspection_c__fetch_function__GenerateResponse_Goal__stop(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    llama_msgs__action__GenerateResponse_Goal__rosidl_typesupport_introspection_c__get_const_function__GenerateResponse_Goal__stop(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void llama_msgs__action__GenerateResponse_Goal__rosidl_typesupport_introspection_c__assign_function__GenerateResponse_Goal__stop(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    llama_msgs__action__GenerateResponse_Goal__rosidl_typesupport_introspection_c__get_function__GenerateResponse_Goal__stop(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool llama_msgs__action__GenerateResponse_Goal__rosidl_typesupport_introspection_c__resize_function__GenerateResponse_Goal__stop(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember llama_msgs__action__GenerateResponse_Goal__rosidl_typesupport_introspection_c__GenerateResponse_Goal_message_member_array[5] = {
  {
    "prompt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llama_msgs__action__GenerateResponse_Goal, prompt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llama_msgs__action__GenerateResponse_Goal, image),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llama_msgs__action__GenerateResponse_Goal, stop),  // bytes offset in struct
    NULL,  // default value
    llama_msgs__action__GenerateResponse_Goal__rosidl_typesupport_introspection_c__size_function__GenerateResponse_Goal__stop,  // size() function pointer
    llama_msgs__action__GenerateResponse_Goal__rosidl_typesupport_introspection_c__get_const_function__GenerateResponse_Goal__stop,  // get_const(index) function pointer
    llama_msgs__action__GenerateResponse_Goal__rosidl_typesupport_introspection_c__get_function__GenerateResponse_Goal__stop,  // get(index) function pointer
    llama_msgs__action__GenerateResponse_Goal__rosidl_typesupport_introspection_c__fetch_function__GenerateResponse_Goal__stop,  // fetch(index, &value) function pointer
    llama_msgs__action__GenerateResponse_Goal__rosidl_typesupport_introspection_c__assign_function__GenerateResponse_Goal__stop,  // assign(index, value) function pointer
    llama_msgs__action__GenerateResponse_Goal__rosidl_typesupport_introspection_c__resize_function__GenerateResponse_Goal__stop  // resize(index) function pointer
  },
  {
    "reset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llama_msgs__action__GenerateResponse_Goal, reset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sampling_config",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llama_msgs__action__GenerateResponse_Goal, sampling_config),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers llama_msgs__action__GenerateResponse_Goal__rosidl_typesupport_introspection_c__GenerateResponse_Goal_message_members = {
  "llama_msgs__action",  // message namespace
  "GenerateResponse_Goal",  // message name
  5,  // number of fields
  sizeof(llama_msgs__action__GenerateResponse_Goal),
  llama_msgs__action__GenerateResponse_Goal__rosidl_typesupport_introspection_c__GenerateResponse_Goal_message_member_array,  // message members
  llama_msgs__action__GenerateResponse_Goal__rosidl_typesupport_introspection_c__GenerateResponse_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  llama_msgs__action__GenerateResponse_Goal__rosidl_typesupport_introspection_c__GenerateResponse_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t llama_msgs__action__GenerateResponse_Goal__rosidl_typesupport_introspection_c__GenerateResponse_Goal_message_type_support_handle = {
  0,
  &llama_msgs__action__GenerateResponse_Goal__rosidl_typesupport_introspection_c__GenerateResponse_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_llama_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, action, GenerateResponse_Goal)() {
  llama_msgs__action__GenerateResponse_Goal__rosidl_typesupport_introspection_c__GenerateResponse_Goal_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  llama_msgs__action__GenerateResponse_Goal__rosidl_typesupport_introspection_c__GenerateResponse_Goal_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, msg, SamplingConfig)();
  if (!llama_msgs__action__GenerateResponse_Goal__rosidl_typesupport_introspection_c__GenerateResponse_Goal_message_type_support_handle.typesupport_identifier) {
    llama_msgs__action__GenerateResponse_Goal__rosidl_typesupport_introspection_c__GenerateResponse_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &llama_msgs__action__GenerateResponse_Goal__rosidl_typesupport_introspection_c__GenerateResponse_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "llama_msgs/action/detail/generate_response__rosidl_typesupport_introspection_c.h"
// already included above
// #include "llama_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "llama_msgs/action/detail/generate_response__functions.h"
// already included above
// #include "llama_msgs/action/detail/generate_response__struct.h"


// Include directives for member types
// Member `response`
#include "llama_msgs/msg/response.h"
// Member `response`
#include "llama_msgs/msg/detail/response__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void llama_msgs__action__GenerateResponse_Result__rosidl_typesupport_introspection_c__GenerateResponse_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  llama_msgs__action__GenerateResponse_Result__init(message_memory);
}

void llama_msgs__action__GenerateResponse_Result__rosidl_typesupport_introspection_c__GenerateResponse_Result_fini_function(void * message_memory)
{
  llama_msgs__action__GenerateResponse_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember llama_msgs__action__GenerateResponse_Result__rosidl_typesupport_introspection_c__GenerateResponse_Result_message_member_array[1] = {
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llama_msgs__action__GenerateResponse_Result, response),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers llama_msgs__action__GenerateResponse_Result__rosidl_typesupport_introspection_c__GenerateResponse_Result_message_members = {
  "llama_msgs__action",  // message namespace
  "GenerateResponse_Result",  // message name
  1,  // number of fields
  sizeof(llama_msgs__action__GenerateResponse_Result),
  llama_msgs__action__GenerateResponse_Result__rosidl_typesupport_introspection_c__GenerateResponse_Result_message_member_array,  // message members
  llama_msgs__action__GenerateResponse_Result__rosidl_typesupport_introspection_c__GenerateResponse_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  llama_msgs__action__GenerateResponse_Result__rosidl_typesupport_introspection_c__GenerateResponse_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t llama_msgs__action__GenerateResponse_Result__rosidl_typesupport_introspection_c__GenerateResponse_Result_message_type_support_handle = {
  0,
  &llama_msgs__action__GenerateResponse_Result__rosidl_typesupport_introspection_c__GenerateResponse_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_llama_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, action, GenerateResponse_Result)() {
  llama_msgs__action__GenerateResponse_Result__rosidl_typesupport_introspection_c__GenerateResponse_Result_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, msg, Response)();
  if (!llama_msgs__action__GenerateResponse_Result__rosidl_typesupport_introspection_c__GenerateResponse_Result_message_type_support_handle.typesupport_identifier) {
    llama_msgs__action__GenerateResponse_Result__rosidl_typesupport_introspection_c__GenerateResponse_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &llama_msgs__action__GenerateResponse_Result__rosidl_typesupport_introspection_c__GenerateResponse_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "llama_msgs/action/detail/generate_response__rosidl_typesupport_introspection_c.h"
// already included above
// #include "llama_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "llama_msgs/action/detail/generate_response__functions.h"
// already included above
// #include "llama_msgs/action/detail/generate_response__struct.h"


// Include directives for member types
// Member `partial_response`
#include "llama_msgs/msg/partial_response.h"
// Member `partial_response`
#include "llama_msgs/msg/detail/partial_response__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void llama_msgs__action__GenerateResponse_Feedback__rosidl_typesupport_introspection_c__GenerateResponse_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  llama_msgs__action__GenerateResponse_Feedback__init(message_memory);
}

void llama_msgs__action__GenerateResponse_Feedback__rosidl_typesupport_introspection_c__GenerateResponse_Feedback_fini_function(void * message_memory)
{
  llama_msgs__action__GenerateResponse_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember llama_msgs__action__GenerateResponse_Feedback__rosidl_typesupport_introspection_c__GenerateResponse_Feedback_message_member_array[1] = {
  {
    "partial_response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llama_msgs__action__GenerateResponse_Feedback, partial_response),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers llama_msgs__action__GenerateResponse_Feedback__rosidl_typesupport_introspection_c__GenerateResponse_Feedback_message_members = {
  "llama_msgs__action",  // message namespace
  "GenerateResponse_Feedback",  // message name
  1,  // number of fields
  sizeof(llama_msgs__action__GenerateResponse_Feedback),
  llama_msgs__action__GenerateResponse_Feedback__rosidl_typesupport_introspection_c__GenerateResponse_Feedback_message_member_array,  // message members
  llama_msgs__action__GenerateResponse_Feedback__rosidl_typesupport_introspection_c__GenerateResponse_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  llama_msgs__action__GenerateResponse_Feedback__rosidl_typesupport_introspection_c__GenerateResponse_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t llama_msgs__action__GenerateResponse_Feedback__rosidl_typesupport_introspection_c__GenerateResponse_Feedback_message_type_support_handle = {
  0,
  &llama_msgs__action__GenerateResponse_Feedback__rosidl_typesupport_introspection_c__GenerateResponse_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_llama_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, action, GenerateResponse_Feedback)() {
  llama_msgs__action__GenerateResponse_Feedback__rosidl_typesupport_introspection_c__GenerateResponse_Feedback_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, msg, PartialResponse)();
  if (!llama_msgs__action__GenerateResponse_Feedback__rosidl_typesupport_introspection_c__GenerateResponse_Feedback_message_type_support_handle.typesupport_identifier) {
    llama_msgs__action__GenerateResponse_Feedback__rosidl_typesupport_introspection_c__GenerateResponse_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &llama_msgs__action__GenerateResponse_Feedback__rosidl_typesupport_introspection_c__GenerateResponse_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "llama_msgs/action/detail/generate_response__rosidl_typesupport_introspection_c.h"
// already included above
// #include "llama_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "llama_msgs/action/detail/generate_response__functions.h"
// already included above
// #include "llama_msgs/action/detail/generate_response__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "llama_msgs/action/generate_response.h"
// Member `goal`
// already included above
// #include "llama_msgs/action/detail/generate_response__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void llama_msgs__action__GenerateResponse_SendGoal_Request__rosidl_typesupport_introspection_c__GenerateResponse_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  llama_msgs__action__GenerateResponse_SendGoal_Request__init(message_memory);
}

void llama_msgs__action__GenerateResponse_SendGoal_Request__rosidl_typesupport_introspection_c__GenerateResponse_SendGoal_Request_fini_function(void * message_memory)
{
  llama_msgs__action__GenerateResponse_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember llama_msgs__action__GenerateResponse_SendGoal_Request__rosidl_typesupport_introspection_c__GenerateResponse_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llama_msgs__action__GenerateResponse_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llama_msgs__action__GenerateResponse_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers llama_msgs__action__GenerateResponse_SendGoal_Request__rosidl_typesupport_introspection_c__GenerateResponse_SendGoal_Request_message_members = {
  "llama_msgs__action",  // message namespace
  "GenerateResponse_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(llama_msgs__action__GenerateResponse_SendGoal_Request),
  llama_msgs__action__GenerateResponse_SendGoal_Request__rosidl_typesupport_introspection_c__GenerateResponse_SendGoal_Request_message_member_array,  // message members
  llama_msgs__action__GenerateResponse_SendGoal_Request__rosidl_typesupport_introspection_c__GenerateResponse_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  llama_msgs__action__GenerateResponse_SendGoal_Request__rosidl_typesupport_introspection_c__GenerateResponse_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t llama_msgs__action__GenerateResponse_SendGoal_Request__rosidl_typesupport_introspection_c__GenerateResponse_SendGoal_Request_message_type_support_handle = {
  0,
  &llama_msgs__action__GenerateResponse_SendGoal_Request__rosidl_typesupport_introspection_c__GenerateResponse_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_llama_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, action, GenerateResponse_SendGoal_Request)() {
  llama_msgs__action__GenerateResponse_SendGoal_Request__rosidl_typesupport_introspection_c__GenerateResponse_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  llama_msgs__action__GenerateResponse_SendGoal_Request__rosidl_typesupport_introspection_c__GenerateResponse_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, action, GenerateResponse_Goal)();
  if (!llama_msgs__action__GenerateResponse_SendGoal_Request__rosidl_typesupport_introspection_c__GenerateResponse_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    llama_msgs__action__GenerateResponse_SendGoal_Request__rosidl_typesupport_introspection_c__GenerateResponse_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &llama_msgs__action__GenerateResponse_SendGoal_Request__rosidl_typesupport_introspection_c__GenerateResponse_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "llama_msgs/action/detail/generate_response__rosidl_typesupport_introspection_c.h"
// already included above
// #include "llama_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "llama_msgs/action/detail/generate_response__functions.h"
// already included above
// #include "llama_msgs/action/detail/generate_response__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void llama_msgs__action__GenerateResponse_SendGoal_Response__rosidl_typesupport_introspection_c__GenerateResponse_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  llama_msgs__action__GenerateResponse_SendGoal_Response__init(message_memory);
}

void llama_msgs__action__GenerateResponse_SendGoal_Response__rosidl_typesupport_introspection_c__GenerateResponse_SendGoal_Response_fini_function(void * message_memory)
{
  llama_msgs__action__GenerateResponse_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember llama_msgs__action__GenerateResponse_SendGoal_Response__rosidl_typesupport_introspection_c__GenerateResponse_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llama_msgs__action__GenerateResponse_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llama_msgs__action__GenerateResponse_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers llama_msgs__action__GenerateResponse_SendGoal_Response__rosidl_typesupport_introspection_c__GenerateResponse_SendGoal_Response_message_members = {
  "llama_msgs__action",  // message namespace
  "GenerateResponse_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(llama_msgs__action__GenerateResponse_SendGoal_Response),
  llama_msgs__action__GenerateResponse_SendGoal_Response__rosidl_typesupport_introspection_c__GenerateResponse_SendGoal_Response_message_member_array,  // message members
  llama_msgs__action__GenerateResponse_SendGoal_Response__rosidl_typesupport_introspection_c__GenerateResponse_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  llama_msgs__action__GenerateResponse_SendGoal_Response__rosidl_typesupport_introspection_c__GenerateResponse_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t llama_msgs__action__GenerateResponse_SendGoal_Response__rosidl_typesupport_introspection_c__GenerateResponse_SendGoal_Response_message_type_support_handle = {
  0,
  &llama_msgs__action__GenerateResponse_SendGoal_Response__rosidl_typesupport_introspection_c__GenerateResponse_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_llama_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, action, GenerateResponse_SendGoal_Response)() {
  llama_msgs__action__GenerateResponse_SendGoal_Response__rosidl_typesupport_introspection_c__GenerateResponse_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!llama_msgs__action__GenerateResponse_SendGoal_Response__rosidl_typesupport_introspection_c__GenerateResponse_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    llama_msgs__action__GenerateResponse_SendGoal_Response__rosidl_typesupport_introspection_c__GenerateResponse_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &llama_msgs__action__GenerateResponse_SendGoal_Response__rosidl_typesupport_introspection_c__GenerateResponse_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "llama_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "llama_msgs/action/detail/generate_response__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers llama_msgs__action__detail__generate_response__rosidl_typesupport_introspection_c__GenerateResponse_SendGoal_service_members = {
  "llama_msgs__action",  // service namespace
  "GenerateResponse_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // llama_msgs__action__detail__generate_response__rosidl_typesupport_introspection_c__GenerateResponse_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // llama_msgs__action__detail__generate_response__rosidl_typesupport_introspection_c__GenerateResponse_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t llama_msgs__action__detail__generate_response__rosidl_typesupport_introspection_c__GenerateResponse_SendGoal_service_type_support_handle = {
  0,
  &llama_msgs__action__detail__generate_response__rosidl_typesupport_introspection_c__GenerateResponse_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, action, GenerateResponse_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, action, GenerateResponse_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_llama_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, action, GenerateResponse_SendGoal)() {
  if (!llama_msgs__action__detail__generate_response__rosidl_typesupport_introspection_c__GenerateResponse_SendGoal_service_type_support_handle.typesupport_identifier) {
    llama_msgs__action__detail__generate_response__rosidl_typesupport_introspection_c__GenerateResponse_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)llama_msgs__action__detail__generate_response__rosidl_typesupport_introspection_c__GenerateResponse_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, action, GenerateResponse_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, action, GenerateResponse_SendGoal_Response)()->data;
  }

  return &llama_msgs__action__detail__generate_response__rosidl_typesupport_introspection_c__GenerateResponse_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "llama_msgs/action/detail/generate_response__rosidl_typesupport_introspection_c.h"
// already included above
// #include "llama_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "llama_msgs/action/detail/generate_response__functions.h"
// already included above
// #include "llama_msgs/action/detail/generate_response__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void llama_msgs__action__GenerateResponse_GetResult_Request__rosidl_typesupport_introspection_c__GenerateResponse_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  llama_msgs__action__GenerateResponse_GetResult_Request__init(message_memory);
}

void llama_msgs__action__GenerateResponse_GetResult_Request__rosidl_typesupport_introspection_c__GenerateResponse_GetResult_Request_fini_function(void * message_memory)
{
  llama_msgs__action__GenerateResponse_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember llama_msgs__action__GenerateResponse_GetResult_Request__rosidl_typesupport_introspection_c__GenerateResponse_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llama_msgs__action__GenerateResponse_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers llama_msgs__action__GenerateResponse_GetResult_Request__rosidl_typesupport_introspection_c__GenerateResponse_GetResult_Request_message_members = {
  "llama_msgs__action",  // message namespace
  "GenerateResponse_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(llama_msgs__action__GenerateResponse_GetResult_Request),
  llama_msgs__action__GenerateResponse_GetResult_Request__rosidl_typesupport_introspection_c__GenerateResponse_GetResult_Request_message_member_array,  // message members
  llama_msgs__action__GenerateResponse_GetResult_Request__rosidl_typesupport_introspection_c__GenerateResponse_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  llama_msgs__action__GenerateResponse_GetResult_Request__rosidl_typesupport_introspection_c__GenerateResponse_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t llama_msgs__action__GenerateResponse_GetResult_Request__rosidl_typesupport_introspection_c__GenerateResponse_GetResult_Request_message_type_support_handle = {
  0,
  &llama_msgs__action__GenerateResponse_GetResult_Request__rosidl_typesupport_introspection_c__GenerateResponse_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_llama_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, action, GenerateResponse_GetResult_Request)() {
  llama_msgs__action__GenerateResponse_GetResult_Request__rosidl_typesupport_introspection_c__GenerateResponse_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!llama_msgs__action__GenerateResponse_GetResult_Request__rosidl_typesupport_introspection_c__GenerateResponse_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    llama_msgs__action__GenerateResponse_GetResult_Request__rosidl_typesupport_introspection_c__GenerateResponse_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &llama_msgs__action__GenerateResponse_GetResult_Request__rosidl_typesupport_introspection_c__GenerateResponse_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "llama_msgs/action/detail/generate_response__rosidl_typesupport_introspection_c.h"
// already included above
// #include "llama_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "llama_msgs/action/detail/generate_response__functions.h"
// already included above
// #include "llama_msgs/action/detail/generate_response__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "llama_msgs/action/generate_response.h"
// Member `result`
// already included above
// #include "llama_msgs/action/detail/generate_response__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void llama_msgs__action__GenerateResponse_GetResult_Response__rosidl_typesupport_introspection_c__GenerateResponse_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  llama_msgs__action__GenerateResponse_GetResult_Response__init(message_memory);
}

void llama_msgs__action__GenerateResponse_GetResult_Response__rosidl_typesupport_introspection_c__GenerateResponse_GetResult_Response_fini_function(void * message_memory)
{
  llama_msgs__action__GenerateResponse_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember llama_msgs__action__GenerateResponse_GetResult_Response__rosidl_typesupport_introspection_c__GenerateResponse_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llama_msgs__action__GenerateResponse_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llama_msgs__action__GenerateResponse_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers llama_msgs__action__GenerateResponse_GetResult_Response__rosidl_typesupport_introspection_c__GenerateResponse_GetResult_Response_message_members = {
  "llama_msgs__action",  // message namespace
  "GenerateResponse_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(llama_msgs__action__GenerateResponse_GetResult_Response),
  llama_msgs__action__GenerateResponse_GetResult_Response__rosidl_typesupport_introspection_c__GenerateResponse_GetResult_Response_message_member_array,  // message members
  llama_msgs__action__GenerateResponse_GetResult_Response__rosidl_typesupport_introspection_c__GenerateResponse_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  llama_msgs__action__GenerateResponse_GetResult_Response__rosidl_typesupport_introspection_c__GenerateResponse_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t llama_msgs__action__GenerateResponse_GetResult_Response__rosidl_typesupport_introspection_c__GenerateResponse_GetResult_Response_message_type_support_handle = {
  0,
  &llama_msgs__action__GenerateResponse_GetResult_Response__rosidl_typesupport_introspection_c__GenerateResponse_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_llama_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, action, GenerateResponse_GetResult_Response)() {
  llama_msgs__action__GenerateResponse_GetResult_Response__rosidl_typesupport_introspection_c__GenerateResponse_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, action, GenerateResponse_Result)();
  if (!llama_msgs__action__GenerateResponse_GetResult_Response__rosidl_typesupport_introspection_c__GenerateResponse_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    llama_msgs__action__GenerateResponse_GetResult_Response__rosidl_typesupport_introspection_c__GenerateResponse_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &llama_msgs__action__GenerateResponse_GetResult_Response__rosidl_typesupport_introspection_c__GenerateResponse_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "llama_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "llama_msgs/action/detail/generate_response__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers llama_msgs__action__detail__generate_response__rosidl_typesupport_introspection_c__GenerateResponse_GetResult_service_members = {
  "llama_msgs__action",  // service namespace
  "GenerateResponse_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // llama_msgs__action__detail__generate_response__rosidl_typesupport_introspection_c__GenerateResponse_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // llama_msgs__action__detail__generate_response__rosidl_typesupport_introspection_c__GenerateResponse_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t llama_msgs__action__detail__generate_response__rosidl_typesupport_introspection_c__GenerateResponse_GetResult_service_type_support_handle = {
  0,
  &llama_msgs__action__detail__generate_response__rosidl_typesupport_introspection_c__GenerateResponse_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, action, GenerateResponse_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, action, GenerateResponse_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_llama_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, action, GenerateResponse_GetResult)() {
  if (!llama_msgs__action__detail__generate_response__rosidl_typesupport_introspection_c__GenerateResponse_GetResult_service_type_support_handle.typesupport_identifier) {
    llama_msgs__action__detail__generate_response__rosidl_typesupport_introspection_c__GenerateResponse_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)llama_msgs__action__detail__generate_response__rosidl_typesupport_introspection_c__GenerateResponse_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, action, GenerateResponse_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, action, GenerateResponse_GetResult_Response)()->data;
  }

  return &llama_msgs__action__detail__generate_response__rosidl_typesupport_introspection_c__GenerateResponse_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "llama_msgs/action/detail/generate_response__rosidl_typesupport_introspection_c.h"
// already included above
// #include "llama_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "llama_msgs/action/detail/generate_response__functions.h"
// already included above
// #include "llama_msgs/action/detail/generate_response__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "llama_msgs/action/generate_response.h"
// Member `feedback`
// already included above
// #include "llama_msgs/action/detail/generate_response__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void llama_msgs__action__GenerateResponse_FeedbackMessage__rosidl_typesupport_introspection_c__GenerateResponse_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  llama_msgs__action__GenerateResponse_FeedbackMessage__init(message_memory);
}

void llama_msgs__action__GenerateResponse_FeedbackMessage__rosidl_typesupport_introspection_c__GenerateResponse_FeedbackMessage_fini_function(void * message_memory)
{
  llama_msgs__action__GenerateResponse_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember llama_msgs__action__GenerateResponse_FeedbackMessage__rosidl_typesupport_introspection_c__GenerateResponse_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llama_msgs__action__GenerateResponse_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llama_msgs__action__GenerateResponse_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers llama_msgs__action__GenerateResponse_FeedbackMessage__rosidl_typesupport_introspection_c__GenerateResponse_FeedbackMessage_message_members = {
  "llama_msgs__action",  // message namespace
  "GenerateResponse_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(llama_msgs__action__GenerateResponse_FeedbackMessage),
  llama_msgs__action__GenerateResponse_FeedbackMessage__rosidl_typesupport_introspection_c__GenerateResponse_FeedbackMessage_message_member_array,  // message members
  llama_msgs__action__GenerateResponse_FeedbackMessage__rosidl_typesupport_introspection_c__GenerateResponse_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  llama_msgs__action__GenerateResponse_FeedbackMessage__rosidl_typesupport_introspection_c__GenerateResponse_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t llama_msgs__action__GenerateResponse_FeedbackMessage__rosidl_typesupport_introspection_c__GenerateResponse_FeedbackMessage_message_type_support_handle = {
  0,
  &llama_msgs__action__GenerateResponse_FeedbackMessage__rosidl_typesupport_introspection_c__GenerateResponse_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_llama_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, action, GenerateResponse_FeedbackMessage)() {
  llama_msgs__action__GenerateResponse_FeedbackMessage__rosidl_typesupport_introspection_c__GenerateResponse_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  llama_msgs__action__GenerateResponse_FeedbackMessage__rosidl_typesupport_introspection_c__GenerateResponse_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, action, GenerateResponse_Feedback)();
  if (!llama_msgs__action__GenerateResponse_FeedbackMessage__rosidl_typesupport_introspection_c__GenerateResponse_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    llama_msgs__action__GenerateResponse_FeedbackMessage__rosidl_typesupport_introspection_c__GenerateResponse_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &llama_msgs__action__GenerateResponse_FeedbackMessage__rosidl_typesupport_introspection_c__GenerateResponse_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
