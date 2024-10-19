// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from llama_msgs:msg/LogitBiasArray.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__MSG__DETAIL__LOGIT_BIAS_ARRAY__TRAITS_HPP_
#define LLAMA_MSGS__MSG__DETAIL__LOGIT_BIAS_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "llama_msgs/msg/detail/logit_bias_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'data'
#include "llama_msgs/msg/detail/logit_bias__traits.hpp"

namespace llama_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LogitBiasArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
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
  const LogitBiasArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LogitBiasArray & msg, bool use_flow_style = false)
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
  const llama_msgs::msg::LogitBiasArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  llama_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use llama_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const llama_msgs::msg::LogitBiasArray & msg)
{
  return llama_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<llama_msgs::msg::LogitBiasArray>()
{
  return "llama_msgs::msg::LogitBiasArray";
}

template<>
inline const char * name<llama_msgs::msg::LogitBiasArray>()
{
  return "llama_msgs/msg/LogitBiasArray";
}

template<>
struct has_fixed_size<llama_msgs::msg::LogitBiasArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<llama_msgs::msg::LogitBiasArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<llama_msgs::msg::LogitBiasArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLAMA_MSGS__MSG__DETAIL__LOGIT_BIAS_ARRAY__TRAITS_HPP_
