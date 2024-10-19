// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from llama_msgs:srv/FormatChatMessages.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "llama_msgs/srv/detail/format_chat_messages__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace llama_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void FormatChatMessages_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) llama_msgs::srv::FormatChatMessages_Request(_init);
}

void FormatChatMessages_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<llama_msgs::srv::FormatChatMessages_Request *>(message_memory);
  typed_message->~FormatChatMessages_Request();
}

size_t size_function__FormatChatMessages_Request__messages(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<llama_msgs::msg::Message> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FormatChatMessages_Request__messages(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<llama_msgs::msg::Message> *>(untyped_member);
  return &member[index];
}

void * get_function__FormatChatMessages_Request__messages(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<llama_msgs::msg::Message> *>(untyped_member);
  return &member[index];
}

void fetch_function__FormatChatMessages_Request__messages(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const llama_msgs::msg::Message *>(
    get_const_function__FormatChatMessages_Request__messages(untyped_member, index));
  auto & value = *reinterpret_cast<llama_msgs::msg::Message *>(untyped_value);
  value = item;
}

void assign_function__FormatChatMessages_Request__messages(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<llama_msgs::msg::Message *>(
    get_function__FormatChatMessages_Request__messages(untyped_member, index));
  const auto & value = *reinterpret_cast<const llama_msgs::msg::Message *>(untyped_value);
  item = value;
}

void resize_function__FormatChatMessages_Request__messages(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<llama_msgs::msg::Message> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FormatChatMessages_Request_message_member_array[2] = {
  {
    "messages",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<llama_msgs::msg::Message>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llama_msgs::srv::FormatChatMessages_Request, messages),  // bytes offset in struct
    nullptr,  // default value
    size_function__FormatChatMessages_Request__messages,  // size() function pointer
    get_const_function__FormatChatMessages_Request__messages,  // get_const(index) function pointer
    get_function__FormatChatMessages_Request__messages,  // get(index) function pointer
    fetch_function__FormatChatMessages_Request__messages,  // fetch(index, &value) function pointer
    assign_function__FormatChatMessages_Request__messages,  // assign(index, value) function pointer
    resize_function__FormatChatMessages_Request__messages  // resize(index) function pointer
  },
  {
    "add_ass",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llama_msgs::srv::FormatChatMessages_Request, add_ass),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FormatChatMessages_Request_message_members = {
  "llama_msgs::srv",  // message namespace
  "FormatChatMessages_Request",  // message name
  2,  // number of fields
  sizeof(llama_msgs::srv::FormatChatMessages_Request),
  FormatChatMessages_Request_message_member_array,  // message members
  FormatChatMessages_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  FormatChatMessages_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FormatChatMessages_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FormatChatMessages_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace llama_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<llama_msgs::srv::FormatChatMessages_Request>()
{
  return &::llama_msgs::srv::rosidl_typesupport_introspection_cpp::FormatChatMessages_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, llama_msgs, srv, FormatChatMessages_Request)() {
  return &::llama_msgs::srv::rosidl_typesupport_introspection_cpp::FormatChatMessages_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "llama_msgs/srv/detail/format_chat_messages__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace llama_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void FormatChatMessages_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) llama_msgs::srv::FormatChatMessages_Response(_init);
}

void FormatChatMessages_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<llama_msgs::srv::FormatChatMessages_Response *>(message_memory);
  typed_message->~FormatChatMessages_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FormatChatMessages_Response_message_member_array[1] = {
  {
    "formatted_prompt",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llama_msgs::srv::FormatChatMessages_Response, formatted_prompt),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FormatChatMessages_Response_message_members = {
  "llama_msgs::srv",  // message namespace
  "FormatChatMessages_Response",  // message name
  1,  // number of fields
  sizeof(llama_msgs::srv::FormatChatMessages_Response),
  FormatChatMessages_Response_message_member_array,  // message members
  FormatChatMessages_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  FormatChatMessages_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FormatChatMessages_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FormatChatMessages_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace llama_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<llama_msgs::srv::FormatChatMessages_Response>()
{
  return &::llama_msgs::srv::rosidl_typesupport_introspection_cpp::FormatChatMessages_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, llama_msgs, srv, FormatChatMessages_Response)() {
  return &::llama_msgs::srv::rosidl_typesupport_introspection_cpp::FormatChatMessages_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "llama_msgs/srv/detail/format_chat_messages__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace llama_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers FormatChatMessages_service_members = {
  "llama_msgs::srv",  // service namespace
  "FormatChatMessages",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<llama_msgs::srv::FormatChatMessages>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t FormatChatMessages_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FormatChatMessages_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace llama_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<llama_msgs::srv::FormatChatMessages>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::llama_msgs::srv::rosidl_typesupport_introspection_cpp::FormatChatMessages_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::llama_msgs::srv::FormatChatMessages_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::llama_msgs::srv::FormatChatMessages_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, llama_msgs, srv, FormatChatMessages)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<llama_msgs::srv::FormatChatMessages>();
}

#ifdef __cplusplus
}
#endif
