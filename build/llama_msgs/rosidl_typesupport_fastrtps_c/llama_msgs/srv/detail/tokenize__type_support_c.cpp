// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from llama_msgs:srv/Tokenize.idl
// generated code does not contain a copyright notice
#include "llama_msgs/srv/detail/tokenize__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "llama_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "llama_msgs/srv/detail/tokenize__struct.h"
#include "llama_msgs/srv/detail/tokenize__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // prompt
#include "rosidl_runtime_c/string_functions.h"  // prompt

// forward declare type support functions


using _Tokenize_Request__ros_msg_type = llama_msgs__srv__Tokenize_Request;

static bool _Tokenize_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Tokenize_Request__ros_msg_type * ros_message = static_cast<const _Tokenize_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: prompt
  {
    const rosidl_runtime_c__String * str = &ros_message->prompt;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _Tokenize_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Tokenize_Request__ros_msg_type * ros_message = static_cast<_Tokenize_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: prompt
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->prompt.data) {
      rosidl_runtime_c__String__init(&ros_message->prompt);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->prompt,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'prompt'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_llama_msgs
size_t get_serialized_size_llama_msgs__srv__Tokenize_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Tokenize_Request__ros_msg_type * ros_message = static_cast<const _Tokenize_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name prompt
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->prompt.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Tokenize_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_llama_msgs__srv__Tokenize_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_llama_msgs
size_t max_serialized_size_llama_msgs__srv__Tokenize_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: prompt
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = llama_msgs__srv__Tokenize_Request;
    is_plain =
      (
      offsetof(DataType, prompt) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Tokenize_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_llama_msgs__srv__Tokenize_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Tokenize_Request = {
  "llama_msgs::srv",
  "Tokenize_Request",
  _Tokenize_Request__cdr_serialize,
  _Tokenize_Request__cdr_deserialize,
  _Tokenize_Request__get_serialized_size,
  _Tokenize_Request__max_serialized_size
};

static rosidl_message_type_support_t _Tokenize_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Tokenize_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, llama_msgs, srv, Tokenize_Request)() {
  return &_Tokenize_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "llama_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "llama_msgs/srv/detail/tokenize__struct.h"
// already included above
// #include "llama_msgs/srv/detail/tokenize__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // tokens
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // tokens

// forward declare type support functions


using _Tokenize_Response__ros_msg_type = llama_msgs__srv__Tokenize_Response;

static bool _Tokenize_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Tokenize_Response__ros_msg_type * ros_message = static_cast<const _Tokenize_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: tokens
  {
    size_t size = ros_message->tokens.size;
    auto array_ptr = ros_message->tokens.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _Tokenize_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Tokenize_Response__ros_msg_type * ros_message = static_cast<_Tokenize_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: tokens
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->tokens.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->tokens);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->tokens, size)) {
      fprintf(stderr, "failed to create array for field 'tokens'");
      return false;
    }
    auto array_ptr = ros_message->tokens.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_llama_msgs
size_t get_serialized_size_llama_msgs__srv__Tokenize_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Tokenize_Response__ros_msg_type * ros_message = static_cast<const _Tokenize_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name tokens
  {
    size_t array_size = ros_message->tokens.size;
    auto array_ptr = ros_message->tokens.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Tokenize_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_llama_msgs__srv__Tokenize_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_llama_msgs
size_t max_serialized_size_llama_msgs__srv__Tokenize_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: tokens
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = llama_msgs__srv__Tokenize_Response;
    is_plain =
      (
      offsetof(DataType, tokens) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Tokenize_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_llama_msgs__srv__Tokenize_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Tokenize_Response = {
  "llama_msgs::srv",
  "Tokenize_Response",
  _Tokenize_Response__cdr_serialize,
  _Tokenize_Response__cdr_deserialize,
  _Tokenize_Response__get_serialized_size,
  _Tokenize_Response__max_serialized_size
};

static rosidl_message_type_support_t _Tokenize_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Tokenize_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, llama_msgs, srv, Tokenize_Response)() {
  return &_Tokenize_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "llama_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "llama_msgs/srv/tokenize.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Tokenize__callbacks = {
  "llama_msgs::srv",
  "Tokenize",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, llama_msgs, srv, Tokenize_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, llama_msgs, srv, Tokenize_Response)(),
};

static rosidl_service_type_support_t Tokenize__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Tokenize__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, llama_msgs, srv, Tokenize)() {
  return &Tokenize__handle;
}

#if defined(__cplusplus)
}
#endif
