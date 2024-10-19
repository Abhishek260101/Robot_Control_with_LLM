// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from llama_msgs:srv/FormatChatMessages.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__SRV__DETAIL__FORMAT_CHAT_MESSAGES__TRAITS_HPP_
#define LLAMA_MSGS__SRV__DETAIL__FORMAT_CHAT_MESSAGES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "llama_msgs/srv/detail/format_chat_messages__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'messages'
#include "llama_msgs/msg/detail/message__traits.hpp"

namespace llama_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const FormatChatMessages_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: messages
  {
    if (msg.messages.size() == 0) {
      out << "messages: []";
    } else {
      out << "messages: [";
      size_t pending_items = msg.messages.size();
      for (auto item : msg.messages) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: add_ass
  {
    out << "add_ass: ";
    rosidl_generator_traits::value_to_yaml(msg.add_ass, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FormatChatMessages_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: messages
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.messages.size() == 0) {
      out << "messages: []\n";
    } else {
      out << "messages:\n";
      for (auto item : msg.messages) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: add_ass
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "add_ass: ";
    rosidl_generator_traits::value_to_yaml(msg.add_ass, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FormatChatMessages_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace llama_msgs

namespace rosidl_generator_traits
{

[[deprecated("use llama_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const llama_msgs::srv::FormatChatMessages_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  llama_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use llama_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const llama_msgs::srv::FormatChatMessages_Request & msg)
{
  return llama_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<llama_msgs::srv::FormatChatMessages_Request>()
{
  return "llama_msgs::srv::FormatChatMessages_Request";
}

template<>
inline const char * name<llama_msgs::srv::FormatChatMessages_Request>()
{
  return "llama_msgs/srv/FormatChatMessages_Request";
}

template<>
struct has_fixed_size<llama_msgs::srv::FormatChatMessages_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<llama_msgs::srv::FormatChatMessages_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<llama_msgs::srv::FormatChatMessages_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace llama_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const FormatChatMessages_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: formatted_prompt
  {
    out << "formatted_prompt: ";
    rosidl_generator_traits::value_to_yaml(msg.formatted_prompt, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FormatChatMessages_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: formatted_prompt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "formatted_prompt: ";
    rosidl_generator_traits::value_to_yaml(msg.formatted_prompt, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FormatChatMessages_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace llama_msgs

namespace rosidl_generator_traits
{

[[deprecated("use llama_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const llama_msgs::srv::FormatChatMessages_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  llama_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use llama_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const llama_msgs::srv::FormatChatMessages_Response & msg)
{
  return llama_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<llama_msgs::srv::FormatChatMessages_Response>()
{
  return "llama_msgs::srv::FormatChatMessages_Response";
}

template<>
inline const char * name<llama_msgs::srv::FormatChatMessages_Response>()
{
  return "llama_msgs/srv/FormatChatMessages_Response";
}

template<>
struct has_fixed_size<llama_msgs::srv::FormatChatMessages_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<llama_msgs::srv::FormatChatMessages_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<llama_msgs::srv::FormatChatMessages_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<llama_msgs::srv::FormatChatMessages>()
{
  return "llama_msgs::srv::FormatChatMessages";
}

template<>
inline const char * name<llama_msgs::srv::FormatChatMessages>()
{
  return "llama_msgs/srv/FormatChatMessages";
}

template<>
struct has_fixed_size<llama_msgs::srv::FormatChatMessages>
  : std::integral_constant<
    bool,
    has_fixed_size<llama_msgs::srv::FormatChatMessages_Request>::value &&
    has_fixed_size<llama_msgs::srv::FormatChatMessages_Response>::value
  >
{
};

template<>
struct has_bounded_size<llama_msgs::srv::FormatChatMessages>
  : std::integral_constant<
    bool,
    has_bounded_size<llama_msgs::srv::FormatChatMessages_Request>::value &&
    has_bounded_size<llama_msgs::srv::FormatChatMessages_Response>::value
  >
{
};

template<>
struct is_service<llama_msgs::srv::FormatChatMessages>
  : std::true_type
{
};

template<>
struct is_service_request<llama_msgs::srv::FormatChatMessages_Request>
  : std::true_type
{
};

template<>
struct is_service_response<llama_msgs::srv::FormatChatMessages_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LLAMA_MSGS__SRV__DETAIL__FORMAT_CHAT_MESSAGES__TRAITS_HPP_
