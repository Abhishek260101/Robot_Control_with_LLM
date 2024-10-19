// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from llama_msgs:srv/FormatChatMessages.idl
// generated code does not contain a copyright notice
#include "llama_msgs/srv/detail/format_chat_messages__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "llama_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "llama_msgs/srv/detail/format_chat_messages__struct.h"
#include "llama_msgs/srv/detail/format_chat_messages__functions.h"
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

#include "llama_msgs/msg/detail/message__functions.h"  // messages

// forward declare type support functions
size_t get_serialized_size_llama_msgs__msg__Message(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_llama_msgs__msg__Message(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, llama_msgs, msg, Message)();


using _FormatChatMessages_Request__ros_msg_type = llama_msgs__srv__FormatChatMessages_Request;

static bool _FormatChatMessages_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FormatChatMessages_Request__ros_msg_type * ros_message = static_cast<const _FormatChatMessages_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: messages
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, llama_msgs, msg, Message
      )()->data);
    size_t size = ros_message->messages.size;
    auto array_ptr = ros_message->messages.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: add_ass
  {
    cdr << (ros_message->add_ass ? true : false);
  }

  return true;
}

static bool _FormatChatMessages_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FormatChatMessages_Request__ros_msg_type * ros_message = static_cast<_FormatChatMessages_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: messages
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, llama_msgs, msg, Message
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->messages.data) {
      llama_msgs__msg__Message__Sequence__fini(&ros_message->messages);
    }
    if (!llama_msgs__msg__Message__Sequence__init(&ros_message->messages, size)) {
      fprintf(stderr, "failed to create array for field 'messages'");
      return false;
    }
    auto array_ptr = ros_message->messages.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: add_ass
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->add_ass = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_llama_msgs
size_t get_serialized_size_llama_msgs__srv__FormatChatMessages_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FormatChatMessages_Request__ros_msg_type * ros_message = static_cast<const _FormatChatMessages_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name messages
  {
    size_t array_size = ros_message->messages.size;
    auto array_ptr = ros_message->messages.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_llama_msgs__msg__Message(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name add_ass
  {
    size_t item_size = sizeof(ros_message->add_ass);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _FormatChatMessages_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_llama_msgs__srv__FormatChatMessages_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_llama_msgs
size_t max_serialized_size_llama_msgs__srv__FormatChatMessages_Request(
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

  // member: messages
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_llama_msgs__msg__Message(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: add_ass
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = llama_msgs__srv__FormatChatMessages_Request;
    is_plain =
      (
      offsetof(DataType, add_ass) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _FormatChatMessages_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_llama_msgs__srv__FormatChatMessages_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FormatChatMessages_Request = {
  "llama_msgs::srv",
  "FormatChatMessages_Request",
  _FormatChatMessages_Request__cdr_serialize,
  _FormatChatMessages_Request__cdr_deserialize,
  _FormatChatMessages_Request__get_serialized_size,
  _FormatChatMessages_Request__max_serialized_size
};

static rosidl_message_type_support_t _FormatChatMessages_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FormatChatMessages_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, llama_msgs, srv, FormatChatMessages_Request)() {
  return &_FormatChatMessages_Request__type_support;
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
// #include "llama_msgs/srv/detail/format_chat_messages__struct.h"
// already included above
// #include "llama_msgs/srv/detail/format_chat_messages__functions.h"
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

#include "rosidl_runtime_c/string.h"  // formatted_prompt
#include "rosidl_runtime_c/string_functions.h"  // formatted_prompt

// forward declare type support functions


using _FormatChatMessages_Response__ros_msg_type = llama_msgs__srv__FormatChatMessages_Response;

static bool _FormatChatMessages_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FormatChatMessages_Response__ros_msg_type * ros_message = static_cast<const _FormatChatMessages_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: formatted_prompt
  {
    const rosidl_runtime_c__String * str = &ros_message->formatted_prompt;
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

static bool _FormatChatMessages_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FormatChatMessages_Response__ros_msg_type * ros_message = static_cast<_FormatChatMessages_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: formatted_prompt
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->formatted_prompt.data) {
      rosidl_runtime_c__String__init(&ros_message->formatted_prompt);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->formatted_prompt,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'formatted_prompt'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_llama_msgs
size_t get_serialized_size_llama_msgs__srv__FormatChatMessages_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FormatChatMessages_Response__ros_msg_type * ros_message = static_cast<const _FormatChatMessages_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name formatted_prompt
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->formatted_prompt.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _FormatChatMessages_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_llama_msgs__srv__FormatChatMessages_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_llama_msgs
size_t max_serialized_size_llama_msgs__srv__FormatChatMessages_Response(
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

  // member: formatted_prompt
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
    using DataType = llama_msgs__srv__FormatChatMessages_Response;
    is_plain =
      (
      offsetof(DataType, formatted_prompt) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _FormatChatMessages_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_llama_msgs__srv__FormatChatMessages_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FormatChatMessages_Response = {
  "llama_msgs::srv",
  "FormatChatMessages_Response",
  _FormatChatMessages_Response__cdr_serialize,
  _FormatChatMessages_Response__cdr_deserialize,
  _FormatChatMessages_Response__get_serialized_size,
  _FormatChatMessages_Response__max_serialized_size
};

static rosidl_message_type_support_t _FormatChatMessages_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FormatChatMessages_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, llama_msgs, srv, FormatChatMessages_Response)() {
  return &_FormatChatMessages_Response__type_support;
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
#include "llama_msgs/srv/format_chat_messages.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t FormatChatMessages__callbacks = {
  "llama_msgs::srv",
  "FormatChatMessages",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, llama_msgs, srv, FormatChatMessages_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, llama_msgs, srv, FormatChatMessages_Response)(),
};

static rosidl_service_type_support_t FormatChatMessages__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &FormatChatMessages__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, llama_msgs, srv, FormatChatMessages)() {
  return &FormatChatMessages__handle;
}

#if defined(__cplusplus)
}
#endif
