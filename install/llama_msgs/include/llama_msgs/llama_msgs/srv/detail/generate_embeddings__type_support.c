// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from llama_msgs:srv/GenerateEmbeddings.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "llama_msgs/srv/detail/generate_embeddings__rosidl_typesupport_introspection_c.h"
#include "llama_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "llama_msgs/srv/detail/generate_embeddings__functions.h"
#include "llama_msgs/srv/detail/generate_embeddings__struct.h"


// Include directives for member types
// Member `prompt`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void llama_msgs__srv__GenerateEmbeddings_Request__rosidl_typesupport_introspection_c__GenerateEmbeddings_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  llama_msgs__srv__GenerateEmbeddings_Request__init(message_memory);
}

void llama_msgs__srv__GenerateEmbeddings_Request__rosidl_typesupport_introspection_c__GenerateEmbeddings_Request_fini_function(void * message_memory)
{
  llama_msgs__srv__GenerateEmbeddings_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember llama_msgs__srv__GenerateEmbeddings_Request__rosidl_typesupport_introspection_c__GenerateEmbeddings_Request_message_member_array[2] = {
  {
    "prompt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llama_msgs__srv__GenerateEmbeddings_Request, prompt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "normalize",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llama_msgs__srv__GenerateEmbeddings_Request, normalize),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers llama_msgs__srv__GenerateEmbeddings_Request__rosidl_typesupport_introspection_c__GenerateEmbeddings_Request_message_members = {
  "llama_msgs__srv",  // message namespace
  "GenerateEmbeddings_Request",  // message name
  2,  // number of fields
  sizeof(llama_msgs__srv__GenerateEmbeddings_Request),
  llama_msgs__srv__GenerateEmbeddings_Request__rosidl_typesupport_introspection_c__GenerateEmbeddings_Request_message_member_array,  // message members
  llama_msgs__srv__GenerateEmbeddings_Request__rosidl_typesupport_introspection_c__GenerateEmbeddings_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  llama_msgs__srv__GenerateEmbeddings_Request__rosidl_typesupport_introspection_c__GenerateEmbeddings_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t llama_msgs__srv__GenerateEmbeddings_Request__rosidl_typesupport_introspection_c__GenerateEmbeddings_Request_message_type_support_handle = {
  0,
  &llama_msgs__srv__GenerateEmbeddings_Request__rosidl_typesupport_introspection_c__GenerateEmbeddings_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_llama_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, srv, GenerateEmbeddings_Request)() {
  if (!llama_msgs__srv__GenerateEmbeddings_Request__rosidl_typesupport_introspection_c__GenerateEmbeddings_Request_message_type_support_handle.typesupport_identifier) {
    llama_msgs__srv__GenerateEmbeddings_Request__rosidl_typesupport_introspection_c__GenerateEmbeddings_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &llama_msgs__srv__GenerateEmbeddings_Request__rosidl_typesupport_introspection_c__GenerateEmbeddings_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "llama_msgs/srv/detail/generate_embeddings__rosidl_typesupport_introspection_c.h"
// already included above
// #include "llama_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "llama_msgs/srv/detail/generate_embeddings__functions.h"
// already included above
// #include "llama_msgs/srv/detail/generate_embeddings__struct.h"


// Include directives for member types
// Member `embeddings`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void llama_msgs__srv__GenerateEmbeddings_Response__rosidl_typesupport_introspection_c__GenerateEmbeddings_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  llama_msgs__srv__GenerateEmbeddings_Response__init(message_memory);
}

void llama_msgs__srv__GenerateEmbeddings_Response__rosidl_typesupport_introspection_c__GenerateEmbeddings_Response_fini_function(void * message_memory)
{
  llama_msgs__srv__GenerateEmbeddings_Response__fini(message_memory);
}

size_t llama_msgs__srv__GenerateEmbeddings_Response__rosidl_typesupport_introspection_c__size_function__GenerateEmbeddings_Response__embeddings(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * llama_msgs__srv__GenerateEmbeddings_Response__rosidl_typesupport_introspection_c__get_const_function__GenerateEmbeddings_Response__embeddings(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * llama_msgs__srv__GenerateEmbeddings_Response__rosidl_typesupport_introspection_c__get_function__GenerateEmbeddings_Response__embeddings(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void llama_msgs__srv__GenerateEmbeddings_Response__rosidl_typesupport_introspection_c__fetch_function__GenerateEmbeddings_Response__embeddings(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    llama_msgs__srv__GenerateEmbeddings_Response__rosidl_typesupport_introspection_c__get_const_function__GenerateEmbeddings_Response__embeddings(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void llama_msgs__srv__GenerateEmbeddings_Response__rosidl_typesupport_introspection_c__assign_function__GenerateEmbeddings_Response__embeddings(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    llama_msgs__srv__GenerateEmbeddings_Response__rosidl_typesupport_introspection_c__get_function__GenerateEmbeddings_Response__embeddings(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool llama_msgs__srv__GenerateEmbeddings_Response__rosidl_typesupport_introspection_c__resize_function__GenerateEmbeddings_Response__embeddings(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember llama_msgs__srv__GenerateEmbeddings_Response__rosidl_typesupport_introspection_c__GenerateEmbeddings_Response_message_member_array[2] = {
  {
    "embeddings",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llama_msgs__srv__GenerateEmbeddings_Response, embeddings),  // bytes offset in struct
    NULL,  // default value
    llama_msgs__srv__GenerateEmbeddings_Response__rosidl_typesupport_introspection_c__size_function__GenerateEmbeddings_Response__embeddings,  // size() function pointer
    llama_msgs__srv__GenerateEmbeddings_Response__rosidl_typesupport_introspection_c__get_const_function__GenerateEmbeddings_Response__embeddings,  // get_const(index) function pointer
    llama_msgs__srv__GenerateEmbeddings_Response__rosidl_typesupport_introspection_c__get_function__GenerateEmbeddings_Response__embeddings,  // get(index) function pointer
    llama_msgs__srv__GenerateEmbeddings_Response__rosidl_typesupport_introspection_c__fetch_function__GenerateEmbeddings_Response__embeddings,  // fetch(index, &value) function pointer
    llama_msgs__srv__GenerateEmbeddings_Response__rosidl_typesupport_introspection_c__assign_function__GenerateEmbeddings_Response__embeddings,  // assign(index, value) function pointer
    llama_msgs__srv__GenerateEmbeddings_Response__rosidl_typesupport_introspection_c__resize_function__GenerateEmbeddings_Response__embeddings  // resize(index) function pointer
  },
  {
    "n_tokens",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llama_msgs__srv__GenerateEmbeddings_Response, n_tokens),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers llama_msgs__srv__GenerateEmbeddings_Response__rosidl_typesupport_introspection_c__GenerateEmbeddings_Response_message_members = {
  "llama_msgs__srv",  // message namespace
  "GenerateEmbeddings_Response",  // message name
  2,  // number of fields
  sizeof(llama_msgs__srv__GenerateEmbeddings_Response),
  llama_msgs__srv__GenerateEmbeddings_Response__rosidl_typesupport_introspection_c__GenerateEmbeddings_Response_message_member_array,  // message members
  llama_msgs__srv__GenerateEmbeddings_Response__rosidl_typesupport_introspection_c__GenerateEmbeddings_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  llama_msgs__srv__GenerateEmbeddings_Response__rosidl_typesupport_introspection_c__GenerateEmbeddings_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t llama_msgs__srv__GenerateEmbeddings_Response__rosidl_typesupport_introspection_c__GenerateEmbeddings_Response_message_type_support_handle = {
  0,
  &llama_msgs__srv__GenerateEmbeddings_Response__rosidl_typesupport_introspection_c__GenerateEmbeddings_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_llama_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, srv, GenerateEmbeddings_Response)() {
  if (!llama_msgs__srv__GenerateEmbeddings_Response__rosidl_typesupport_introspection_c__GenerateEmbeddings_Response_message_type_support_handle.typesupport_identifier) {
    llama_msgs__srv__GenerateEmbeddings_Response__rosidl_typesupport_introspection_c__GenerateEmbeddings_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &llama_msgs__srv__GenerateEmbeddings_Response__rosidl_typesupport_introspection_c__GenerateEmbeddings_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "llama_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "llama_msgs/srv/detail/generate_embeddings__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers llama_msgs__srv__detail__generate_embeddings__rosidl_typesupport_introspection_c__GenerateEmbeddings_service_members = {
  "llama_msgs__srv",  // service namespace
  "GenerateEmbeddings",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // llama_msgs__srv__detail__generate_embeddings__rosidl_typesupport_introspection_c__GenerateEmbeddings_Request_message_type_support_handle,
  NULL  // response message
  // llama_msgs__srv__detail__generate_embeddings__rosidl_typesupport_introspection_c__GenerateEmbeddings_Response_message_type_support_handle
};

static rosidl_service_type_support_t llama_msgs__srv__detail__generate_embeddings__rosidl_typesupport_introspection_c__GenerateEmbeddings_service_type_support_handle = {
  0,
  &llama_msgs__srv__detail__generate_embeddings__rosidl_typesupport_introspection_c__GenerateEmbeddings_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, srv, GenerateEmbeddings_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, srv, GenerateEmbeddings_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_llama_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, srv, GenerateEmbeddings)() {
  if (!llama_msgs__srv__detail__generate_embeddings__rosidl_typesupport_introspection_c__GenerateEmbeddings_service_type_support_handle.typesupport_identifier) {
    llama_msgs__srv__detail__generate_embeddings__rosidl_typesupport_introspection_c__GenerateEmbeddings_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)llama_msgs__srv__detail__generate_embeddings__rosidl_typesupport_introspection_c__GenerateEmbeddings_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, srv, GenerateEmbeddings_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, srv, GenerateEmbeddings_Response)()->data;
  }

  return &llama_msgs__srv__detail__generate_embeddings__rosidl_typesupport_introspection_c__GenerateEmbeddings_service_type_support_handle;
}
