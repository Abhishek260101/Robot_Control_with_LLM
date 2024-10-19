// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from llama_msgs:msg/LoRA.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__MSG__DETAIL__LO_RA__TRAITS_HPP_
#define LLAMA_MSGS__MSG__DETAIL__LO_RA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "llama_msgs/msg/detail/lo_ra__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace llama_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LoRA & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: path
  {
    out << "path: ";
    rosidl_generator_traits::value_to_yaml(msg.path, out);
    out << ", ";
  }

  // member: scale
  {
    out << "scale: ";
    rosidl_generator_traits::value_to_yaml(msg.scale, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LoRA & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path: ";
    rosidl_generator_traits::value_to_yaml(msg.path, out);
    out << "\n";
  }

  // member: scale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scale: ";
    rosidl_generator_traits::value_to_yaml(msg.scale, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LoRA & msg, bool use_flow_style = false)
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
  const llama_msgs::msg::LoRA & msg,
  std::ostream & out, size_t indentation = 0)
{
  llama_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use llama_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const llama_msgs::msg::LoRA & msg)
{
  return llama_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<llama_msgs::msg::LoRA>()
{
  return "llama_msgs::msg::LoRA";
}

template<>
inline const char * name<llama_msgs::msg::LoRA>()
{
  return "llama_msgs/msg/LoRA";
}

template<>
struct has_fixed_size<llama_msgs::msg::LoRA>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<llama_msgs::msg::LoRA>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<llama_msgs::msg::LoRA>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLAMA_MSGS__MSG__DETAIL__LO_RA__TRAITS_HPP_
