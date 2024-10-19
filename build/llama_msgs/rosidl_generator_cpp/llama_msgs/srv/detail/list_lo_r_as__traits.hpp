// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from llama_msgs:srv/ListLoRAs.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__SRV__DETAIL__LIST_LO_R_AS__TRAITS_HPP_
#define LLAMA_MSGS__SRV__DETAIL__LIST_LO_R_AS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "llama_msgs/srv/detail/list_lo_r_as__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace llama_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ListLoRAs_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ListLoRAs_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ListLoRAs_Request & msg, bool use_flow_style = false)
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
  const llama_msgs::srv::ListLoRAs_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  llama_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use llama_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const llama_msgs::srv::ListLoRAs_Request & msg)
{
  return llama_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<llama_msgs::srv::ListLoRAs_Request>()
{
  return "llama_msgs::srv::ListLoRAs_Request";
}

template<>
inline const char * name<llama_msgs::srv::ListLoRAs_Request>()
{
  return "llama_msgs/srv/ListLoRAs_Request";
}

template<>
struct has_fixed_size<llama_msgs::srv::ListLoRAs_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<llama_msgs::srv::ListLoRAs_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<llama_msgs::srv::ListLoRAs_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'loras'
#include "llama_msgs/msg/detail/lo_ra__traits.hpp"

namespace llama_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ListLoRAs_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: loras
  {
    if (msg.loras.size() == 0) {
      out << "loras: []";
    } else {
      out << "loras: [";
      size_t pending_items = msg.loras.size();
      for (auto item : msg.loras) {
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
  const ListLoRAs_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: loras
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.loras.size() == 0) {
      out << "loras: []\n";
    } else {
      out << "loras:\n";
      for (auto item : msg.loras) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ListLoRAs_Response & msg, bool use_flow_style = false)
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
  const llama_msgs::srv::ListLoRAs_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  llama_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use llama_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const llama_msgs::srv::ListLoRAs_Response & msg)
{
  return llama_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<llama_msgs::srv::ListLoRAs_Response>()
{
  return "llama_msgs::srv::ListLoRAs_Response";
}

template<>
inline const char * name<llama_msgs::srv::ListLoRAs_Response>()
{
  return "llama_msgs/srv/ListLoRAs_Response";
}

template<>
struct has_fixed_size<llama_msgs::srv::ListLoRAs_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<llama_msgs::srv::ListLoRAs_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<llama_msgs::srv::ListLoRAs_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<llama_msgs::srv::ListLoRAs>()
{
  return "llama_msgs::srv::ListLoRAs";
}

template<>
inline const char * name<llama_msgs::srv::ListLoRAs>()
{
  return "llama_msgs/srv/ListLoRAs";
}

template<>
struct has_fixed_size<llama_msgs::srv::ListLoRAs>
  : std::integral_constant<
    bool,
    has_fixed_size<llama_msgs::srv::ListLoRAs_Request>::value &&
    has_fixed_size<llama_msgs::srv::ListLoRAs_Response>::value
  >
{
};

template<>
struct has_bounded_size<llama_msgs::srv::ListLoRAs>
  : std::integral_constant<
    bool,
    has_bounded_size<llama_msgs::srv::ListLoRAs_Request>::value &&
    has_bounded_size<llama_msgs::srv::ListLoRAs_Response>::value
  >
{
};

template<>
struct is_service<llama_msgs::srv::ListLoRAs>
  : std::true_type
{
};

template<>
struct is_service_request<llama_msgs::srv::ListLoRAs_Request>
  : std::true_type
{
};

template<>
struct is_service_response<llama_msgs::srv::ListLoRAs_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LLAMA_MSGS__SRV__DETAIL__LIST_LO_R_AS__TRAITS_HPP_
