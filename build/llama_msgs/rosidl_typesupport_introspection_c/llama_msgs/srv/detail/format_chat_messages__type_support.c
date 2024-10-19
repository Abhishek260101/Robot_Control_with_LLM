// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from llama_msgs:srv/FormatChatMessages.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "llama_msgs/srv/detail/format_chat_messages__rosidl_typesupport_introspection_c.h"
#include "llama_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "llama_msgs/srv/detail/format_chat_messages__functions.h"
#include "llama_msgs/srv/detail/format_chat_messages__struct.h"


// Include directives for member types
// Member `messages`
#include "llama_msgs/msg/message.h"
// Member `messages`
#include "llama_msgs/msg/detail/message__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void llama_msgs__srv__FormatChatMessages_Request__rosidl_typesupport_introspection_c__FormatChatMessages_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  llama_msgs__srv__FormatChatMessages_Request__init(message_memory);
}

void llama_msgs__srv__FormatChatMessages_Request__rosidl_typesupport_introspection_c__FormatChatMessages_Request_fini_function(void * message_memory)
{
  llama_msgs__srv__FormatChatMessages_Request__fini(message_memory);
}

size_t llama_msgs__srv__FormatChatMessages_Request__rosidl_typesupport_introspection_c__size_function__FormatChatMessages_Request__messages(
  const void * untyped_member)
{
  const llama_msgs__msg__Message__Sequence * member =
    (const llama_msgs__msg__Message__Sequence *)(untyped_member);
  return member->size;
}

const void * llama_msgs__srv__FormatChatMessages_Request__rosidl_typesupport_introspection_c__get_const_function__FormatChatMessages_Request__messages(
  const void * untyped_member, size_t index)
{
  const llama_msgs__msg__Message__Sequence * member =
    (const llama_msgs__msg__Message__Sequence *)(untyped_member);
  return &member->data[index];
}

void * llama_msgs__srv__FormatChatMessages_Request__rosidl_typesupport_introspection_c__get_function__FormatChatMessages_Request__messages(
  void * untyped_member, size_t index)
{
  llama_msgs__msg__Message__Sequence * member =
    (llama_msgs__msg__Message__Sequence *)(untyped_member);
  return &member->data[index];
}

void llama_msgs__srv__FormatChatMessages_Request__rosidl_typesupport_introspection_c__fetch_function__FormatChatMessages_Request__messages(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const llama_msgs__msg__Message * item =
    ((const llama_msgs__msg__Message *)
    llama_msgs__srv__FormatChatMessages_Request__rosidl_typesupport_introspection_c__get_const_function__FormatChatMessages_Request__messages(untyped_member, index));
  llama_msgs__msg__Message * value =
    (llama_msgs__msg__Message *)(untyped_value);
  *value = *item;
}

void llama_msgs__srv__FormatChatMessages_Request__rosidl_typesupport_introspection_c__assign_function__FormatChatMessages_Request__messages(
  void * untyped_member, size_t index, const void * untyped_value)
{
  llama_msgs__msg__Message * item =
    ((llama_msgs__msg__Message *)
    llama_msgs__srv__FormatChatMessages_Request__rosidl_typesupport_introspection_c__get_function__FormatChatMessages_Request__messages(untyped_member, index));
  const llama_msgs__msg__Message * value =
    (const llama_msgs__msg__Message *)(untyped_value);
  *item = *value;
}

bool llama_msgs__srv__FormatChatMessages_Request__rosidl_typesupport_introspection_c__resize_function__FormatChatMessages_Request__messages(
  void * untyped_member, size_t size)
{
  llama_msgs__msg__Message__Sequence * member =
    (llama_msgs__msg__Message__Sequence *)(untyped_member);
  llama_msgs__msg__Message__Sequence__fini(member);
  return llama_msgs__msg__Message__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember llama_msgs__srv__FormatChatMessages_Request__rosidl_typesupport_introspection_c__FormatChatMessages_Request_message_member_array[2] = {
  {
    "messages",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llama_msgs__srv__FormatChatMessages_Request, messages),  // bytes offset in struct
    NULL,  // default value
    llama_msgs__srv__FormatChatMessages_Request__rosidl_typesupport_introspection_c__size_function__FormatChatMessages_Request__messages,  // size() function pointer
    llama_msgs__srv__FormatChatMessages_Request__rosidl_typesupport_introspection_c__get_const_function__FormatChatMessages_Request__messages,  // get_const(index) function pointer
    llama_msgs__srv__FormatChatMessages_Request__rosidl_typesupport_introspection_c__get_function__FormatChatMessages_Request__messages,  // get(index) function pointer
    llama_msgs__srv__FormatChatMessages_Request__rosidl_typesupport_introspection_c__fetch_function__FormatChatMessages_Request__messages,  // fetch(index, &value) function pointer
    llama_msgs__srv__FormatChatMessages_Request__rosidl_typesupport_introspection_c__assign_function__FormatChatMessages_Request__messages,  // assign(index, value) function pointer
    llama_msgs__srv__FormatChatMessages_Request__rosidl_typesupport_introspection_c__resize_function__FormatChatMessages_Request__messages  // resize(index) function pointer
  },
  {
    "add_ass",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llama_msgs__srv__FormatChatMessages_Request, add_ass),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers llama_msgs__srv__FormatChatMessages_Request__rosidl_typesupport_introspection_c__FormatChatMessages_Request_message_members = {
  "llama_msgs__srv",  // message namespace
  "FormatChatMessages_Request",  // message name
  2,  // number of fields
  sizeof(llama_msgs__srv__FormatChatMessages_Request),
  llama_msgs__srv__FormatChatMessages_Request__rosidl_typesupport_introspection_c__FormatChatMessages_Request_message_member_array,  // message members
  llama_msgs__srv__FormatChatMessages_Request__rosidl_typesupport_introspection_c__FormatChatMessages_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  llama_msgs__srv__FormatChatMessages_Request__rosidl_typesupport_introspection_c__FormatChatMessages_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t llama_msgs__srv__FormatChatMessages_Request__rosidl_typesupport_introspection_c__FormatChatMessages_Request_message_type_support_handle = {
  0,
  &llama_msgs__srv__FormatChatMessages_Request__rosidl_typesupport_introspection_c__FormatChatMessages_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_llama_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, srv, FormatChatMessages_Request)() {
  llama_msgs__srv__FormatChatMessages_Request__rosidl_typesupport_introspection_c__FormatChatMessages_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, msg, Message)();
  if (!llama_msgs__srv__FormatChatMessages_Request__rosidl_typesupport_introspection_c__FormatChatMessages_Request_message_type_support_handle.typesupport_identifier) {
    llama_msgs__srv__FormatChatMessages_Request__rosidl_typesupport_introspection_c__FormatChatMessages_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &llama_msgs__srv__FormatChatMessages_Request__rosidl_typesupport_introspection_c__FormatChatMessages_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "llama_msgs/srv/detail/format_chat_messages__rosidl_typesupport_introspection_c.h"
// already included above
// #include "llama_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "llama_msgs/srv/detail/format_chat_messages__functions.h"
// already included above
// #include "llama_msgs/srv/detail/format_chat_messages__struct.h"


// Include directives for member types
// Member `formatted_prompt`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void llama_msgs__srv__FormatChatMessages_Response__rosidl_typesupport_introspection_c__FormatChatMessages_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  llama_msgs__srv__FormatChatMessages_Response__init(message_memory);
}

void llama_msgs__srv__FormatChatMessages_Response__rosidl_typesupport_introspection_c__FormatChatMessages_Response_fini_function(void * message_memory)
{
  llama_msgs__srv__FormatChatMessages_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember llama_msgs__srv__FormatChatMessages_Response__rosidl_typesupport_introspection_c__FormatChatMessages_Response_message_member_array[1] = {
  {
    "formatted_prompt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llama_msgs__srv__FormatChatMessages_Response, formatted_prompt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers llama_msgs__srv__FormatChatMessages_Response__rosidl_typesupport_introspection_c__FormatChatMessages_Response_message_members = {
  "llama_msgs__srv",  // message namespace
  "FormatChatMessages_Response",  // message name
  1,  // number of fields
  sizeof(llama_msgs__srv__FormatChatMessages_Response),
  llama_msgs__srv__FormatChatMessages_Response__rosidl_typesupport_introspection_c__FormatChatMessages_Response_message_member_array,  // message members
  llama_msgs__srv__FormatChatMessages_Response__rosidl_typesupport_introspection_c__FormatChatMessages_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  llama_msgs__srv__FormatChatMessages_Response__rosidl_typesupport_introspection_c__FormatChatMessages_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t llama_msgs__srv__FormatChatMessages_Response__rosidl_typesupport_introspection_c__FormatChatMessages_Response_message_type_support_handle = {
  0,
  &llama_msgs__srv__FormatChatMessages_Response__rosidl_typesupport_introspection_c__FormatChatMessages_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_llama_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, srv, FormatChatMessages_Response)() {
  if (!llama_msgs__srv__FormatChatMessages_Response__rosidl_typesupport_introspection_c__FormatChatMessages_Response_message_type_support_handle.typesupport_identifier) {
    llama_msgs__srv__FormatChatMessages_Response__rosidl_typesupport_introspection_c__FormatChatMessages_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &llama_msgs__srv__FormatChatMessages_Response__rosidl_typesupport_introspection_c__FormatChatMessages_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "llama_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "llama_msgs/srv/detail/format_chat_messages__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers llama_msgs__srv__detail__format_chat_messages__rosidl_typesupport_introspection_c__FormatChatMessages_service_members = {
  "llama_msgs__srv",  // service namespace
  "FormatChatMessages",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // llama_msgs__srv__detail__format_chat_messages__rosidl_typesupport_introspection_c__FormatChatMessages_Request_message_type_support_handle,
  NULL  // response message
  // llama_msgs__srv__detail__format_chat_messages__rosidl_typesupport_introspection_c__FormatChatMessages_Response_message_type_support_handle
};

static rosidl_service_type_support_t llama_msgs__srv__detail__format_chat_messages__rosidl_typesupport_introspection_c__FormatChatMessages_service_type_support_handle = {
  0,
  &llama_msgs__srv__detail__format_chat_messages__rosidl_typesupport_introspection_c__FormatChatMessages_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, srv, FormatChatMessages_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, srv, FormatChatMessages_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_llama_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, srv, FormatChatMessages)() {
  if (!llama_msgs__srv__detail__format_chat_messages__rosidl_typesupport_introspection_c__FormatChatMessages_service_type_support_handle.typesupport_identifier) {
    llama_msgs__srv__detail__format_chat_messages__rosidl_typesupport_introspection_c__FormatChatMessages_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)llama_msgs__srv__detail__format_chat_messages__rosidl_typesupport_introspection_c__FormatChatMessages_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, srv, FormatChatMessages_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llama_msgs, srv, FormatChatMessages_Response)()->data;
  }

  return &llama_msgs__srv__detail__format_chat_messages__rosidl_typesupport_introspection_c__FormatChatMessages_service_type_support_handle;
}
