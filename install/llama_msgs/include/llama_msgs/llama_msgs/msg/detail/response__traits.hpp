// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from llama_msgs:msg/Response.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__MSG__DETAIL__RESPONSE__TRAITS_HPP_
#define LLAMA_MSGS__MSG__DETAIL__RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "llama_msgs/msg/detail/response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'probs'
#include "llama_msgs/msg/detail/token_prob_array__traits.hpp"

namespace llama_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: text
  {
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
    out << ", ";
  }

  // member: tokens
  {
    if (msg.tokens.size() == 0) {
      out << "tokens: []";
    } else {
      out << "tokens: [";
      size_t pending_items = msg.tokens.size();
      for (auto item : msg.tokens) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: probs
  {
    if (msg.probs.size() == 0) {
      out << "probs: []";
    } else {
      out << "probs: [";
      size_t pending_items = msg.probs.size();
      for (auto item : msg.probs) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
    out << "\n";
  }

  // member: tokens
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tokens.size() == 0) {
      out << "tokens: []\n";
    } else {
      out << "tokens:\n";
      for (auto item : msg.tokens) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: probs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.probs.size() == 0) {
      out << "probs: []\n";
    } else {
      out << "probs:\n";
      for (auto item : msg.probs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace llama_msgs

namespace rosidl_generator_traits
{

[[deprecated("use llama_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const llama_msgs::msg::Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  llama_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use llama_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const llama_msgs::msg::Response & msg)
{
  return llama_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<llama_msgs::msg::Response>()
{
  return "llama_msgs::msg::Response";
}

template<>
inline const char * name<llama_msgs::msg::Response>()
{
  return "llama_msgs/msg/Response";
}

template<>
struct has_fixed_size<llama_msgs::msg::Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<llama_msgs::msg::Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<llama_msgs::msg::Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLAMA_MSGS__MSG__DETAIL__RESPONSE__TRAITS_HPP_
