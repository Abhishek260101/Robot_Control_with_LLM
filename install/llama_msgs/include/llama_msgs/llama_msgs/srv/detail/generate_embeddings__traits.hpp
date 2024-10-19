// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from llama_msgs:srv/GenerateEmbeddings.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__SRV__DETAIL__GENERATE_EMBEDDINGS__TRAITS_HPP_
#define LLAMA_MSGS__SRV__DETAIL__GENERATE_EMBEDDINGS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "llama_msgs/srv/detail/generate_embeddings__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace llama_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GenerateEmbeddings_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: prompt
  {
    out << "prompt: ";
    rosidl_generator_traits::value_to_yaml(msg.prompt, out);
    out << ", ";
  }

  // member: normalize
  {
    out << "normalize: ";
    rosidl_generator_traits::value_to_yaml(msg.normalize, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GenerateEmbeddings_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: prompt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prompt: ";
    rosidl_generator_traits::value_to_yaml(msg.prompt, out);
    out << "\n";
  }

  // member: normalize
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "normalize: ";
    rosidl_generator_traits::value_to_yaml(msg.normalize, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GenerateEmbeddings_Request & msg, bool use_flow_style = false)
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
  const llama_msgs::srv::GenerateEmbeddings_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  llama_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use llama_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const llama_msgs::srv::GenerateEmbeddings_Request & msg)
{
  return llama_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<llama_msgs::srv::GenerateEmbeddings_Request>()
{
  return "llama_msgs::srv::GenerateEmbeddings_Request";
}

template<>
inline const char * name<llama_msgs::srv::GenerateEmbeddings_Request>()
{
  return "llama_msgs/srv/GenerateEmbeddings_Request";
}

template<>
struct has_fixed_size<llama_msgs::srv::GenerateEmbeddings_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<llama_msgs::srv::GenerateEmbeddings_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<llama_msgs::srv::GenerateEmbeddings_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace llama_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GenerateEmbeddings_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: embeddings
  {
    if (msg.embeddings.size() == 0) {
      out << "embeddings: []";
    } else {
      out << "embeddings: [";
      size_t pending_items = msg.embeddings.size();
      for (auto item : msg.embeddings) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: n_tokens
  {
    out << "n_tokens: ";
    rosidl_generator_traits::value_to_yaml(msg.n_tokens, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GenerateEmbeddings_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: embeddings
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.embeddings.size() == 0) {
      out << "embeddings: []\n";
    } else {
      out << "embeddings:\n";
      for (auto item : msg.embeddings) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: n_tokens
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "n_tokens: ";
    rosidl_generator_traits::value_to_yaml(msg.n_tokens, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GenerateEmbeddings_Response & msg, bool use_flow_style = false)
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
  const llama_msgs::srv::GenerateEmbeddings_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  llama_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use llama_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const llama_msgs::srv::GenerateEmbeddings_Response & msg)
{
  return llama_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<llama_msgs::srv::GenerateEmbeddings_Response>()
{
  return "llama_msgs::srv::GenerateEmbeddings_Response";
}

template<>
inline const char * name<llama_msgs::srv::GenerateEmbeddings_Response>()
{
  return "llama_msgs/srv/GenerateEmbeddings_Response";
}

template<>
struct has_fixed_size<llama_msgs::srv::GenerateEmbeddings_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<llama_msgs::srv::GenerateEmbeddings_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<llama_msgs::srv::GenerateEmbeddings_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<llama_msgs::srv::GenerateEmbeddings>()
{
  return "llama_msgs::srv::GenerateEmbeddings";
}

template<>
inline const char * name<llama_msgs::srv::GenerateEmbeddings>()
{
  return "llama_msgs/srv/GenerateEmbeddings";
}

template<>
struct has_fixed_size<llama_msgs::srv::GenerateEmbeddings>
  : std::integral_constant<
    bool,
    has_fixed_size<llama_msgs::srv::GenerateEmbeddings_Request>::value &&
    has_fixed_size<llama_msgs::srv::GenerateEmbeddings_Response>::value
  >
{
};

template<>
struct has_bounded_size<llama_msgs::srv::GenerateEmbeddings>
  : std::integral_constant<
    bool,
    has_bounded_size<llama_msgs::srv::GenerateEmbeddings_Request>::value &&
    has_bounded_size<llama_msgs::srv::GenerateEmbeddings_Response>::value
  >
{
};

template<>
struct is_service<llama_msgs::srv::GenerateEmbeddings>
  : std::true_type
{
};

template<>
struct is_service_request<llama_msgs::srv::GenerateEmbeddings_Request>
  : std::true_type
{
};

template<>
struct is_service_response<llama_msgs::srv::GenerateEmbeddings_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LLAMA_MSGS__SRV__DETAIL__GENERATE_EMBEDDINGS__TRAITS_HPP_
