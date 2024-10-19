// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from llama_msgs:msg/LogitBias.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__MSG__DETAIL__LOGIT_BIAS__TRAITS_HPP_
#define LLAMA_MSGS__MSG__DETAIL__LOGIT_BIAS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "llama_msgs/msg/detail/logit_bias__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace llama_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LogitBias & msg,
  std::ostream & out)
{
  out << "{";
  // member: token
  {
    out << "token: ";
    rosidl_generator_traits::value_to_yaml(msg.token, out);
    out << ", ";
  }

  // member: bias
  {
    out << "bias: ";
    rosidl_generator_traits::value_to_yaml(msg.bias, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LogitBias & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: token
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "token: ";
    rosidl_generator_traits::value_to_yaml(msg.token, out);
    out << "\n";
  }

  // member: bias
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bias: ";
    rosidl_generator_traits::value_to_yaml(msg.bias, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LogitBias & msg, bool use_flow_style = false)
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
  const llama_msgs::msg::LogitBias & msg,
  std::ostream & out, size_t indentation = 0)
{
  llama_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use llama_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const llama_msgs::msg::LogitBias & msg)
{
  return llama_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<llama_msgs::msg::LogitBias>()
{
  return "llama_msgs::msg::LogitBias";
}

template<>
inline const char * name<llama_msgs::msg::LogitBias>()
{
  return "llama_msgs/msg/LogitBias";
}

template<>
struct has_fixed_size<llama_msgs::msg::LogitBias>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<llama_msgs::msg::LogitBias>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<llama_msgs::msg::LogitBias>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLAMA_MSGS__MSG__DETAIL__LOGIT_BIAS__TRAITS_HPP_
