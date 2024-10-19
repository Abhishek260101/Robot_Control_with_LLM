// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from llama_msgs:msg/TokenProb.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__MSG__DETAIL__TOKEN_PROB__TRAITS_HPP_
#define LLAMA_MSGS__MSG__DETAIL__TOKEN_PROB__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "llama_msgs/msg/detail/token_prob__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace llama_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TokenProb & msg,
  std::ostream & out)
{
  out << "{";
  // member: token
  {
    out << "token: ";
    rosidl_generator_traits::value_to_yaml(msg.token, out);
    out << ", ";
  }

  // member: probability
  {
    out << "probability: ";
    rosidl_generator_traits::value_to_yaml(msg.probability, out);
    out << ", ";
  }

  // member: token_text
  {
    out << "token_text: ";
    rosidl_generator_traits::value_to_yaml(msg.token_text, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TokenProb & msg,
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

  // member: probability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "probability: ";
    rosidl_generator_traits::value_to_yaml(msg.probability, out);
    out << "\n";
  }

  // member: token_text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "token_text: ";
    rosidl_generator_traits::value_to_yaml(msg.token_text, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TokenProb & msg, bool use_flow_style = false)
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
  const llama_msgs::msg::TokenProb & msg,
  std::ostream & out, size_t indentation = 0)
{
  llama_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use llama_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const llama_msgs::msg::TokenProb & msg)
{
  return llama_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<llama_msgs::msg::TokenProb>()
{
  return "llama_msgs::msg::TokenProb";
}

template<>
inline const char * name<llama_msgs::msg::TokenProb>()
{
  return "llama_msgs/msg/TokenProb";
}

template<>
struct has_fixed_size<llama_msgs::msg::TokenProb>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<llama_msgs::msg::TokenProb>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<llama_msgs::msg::TokenProb>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLAMA_MSGS__MSG__DETAIL__TOKEN_PROB__TRAITS_HPP_
