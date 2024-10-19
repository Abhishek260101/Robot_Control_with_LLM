// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from llama_msgs:action/GenerateResponse.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__ACTION__DETAIL__GENERATE_RESPONSE__TRAITS_HPP_
#define LLAMA_MSGS__ACTION__DETAIL__GENERATE_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "llama_msgs/action/detail/generate_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__traits.hpp"
// Member 'sampling_config'
#include "llama_msgs/msg/detail/sampling_config__traits.hpp"

namespace llama_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const GenerateResponse_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: prompt
  {
    out << "prompt: ";
    rosidl_generator_traits::value_to_yaml(msg.prompt, out);
    out << ", ";
  }

  // member: image
  {
    out << "image: ";
    to_flow_style_yaml(msg.image, out);
    out << ", ";
  }

  // member: stop
  {
    if (msg.stop.size() == 0) {
      out << "stop: []";
    } else {
      out << "stop: [";
      size_t pending_items = msg.stop.size();
      for (auto item : msg.stop) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: reset
  {
    out << "reset: ";
    rosidl_generator_traits::value_to_yaml(msg.reset, out);
    out << ", ";
  }

  // member: sampling_config
  {
    out << "sampling_config: ";
    to_flow_style_yaml(msg.sampling_config, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GenerateResponse_Goal & msg,
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

  // member: image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image:\n";
    to_block_style_yaml(msg.image, out, indentation + 2);
  }

  // member: stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.stop.size() == 0) {
      out << "stop: []\n";
    } else {
      out << "stop:\n";
      for (auto item : msg.stop) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: reset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reset: ";
    rosidl_generator_traits::value_to_yaml(msg.reset, out);
    out << "\n";
  }

  // member: sampling_config
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sampling_config:\n";
    to_block_style_yaml(msg.sampling_config, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GenerateResponse_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace llama_msgs

namespace rosidl_generator_traits
{

[[deprecated("use llama_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const llama_msgs::action::GenerateResponse_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  llama_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use llama_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const llama_msgs::action::GenerateResponse_Goal & msg)
{
  return llama_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<llama_msgs::action::GenerateResponse_Goal>()
{
  return "llama_msgs::action::GenerateResponse_Goal";
}

template<>
inline const char * name<llama_msgs::action::GenerateResponse_Goal>()
{
  return "llama_msgs/action/GenerateResponse_Goal";
}

template<>
struct has_fixed_size<llama_msgs::action::GenerateResponse_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<llama_msgs::action::GenerateResponse_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<llama_msgs::action::GenerateResponse_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'response'
#include "llama_msgs/msg/detail/response__traits.hpp"

namespace llama_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const GenerateResponse_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: response
  {
    out << "response: ";
    to_flow_style_yaml(msg.response, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GenerateResponse_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "response:\n";
    to_block_style_yaml(msg.response, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GenerateResponse_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace llama_msgs

namespace rosidl_generator_traits
{

[[deprecated("use llama_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const llama_msgs::action::GenerateResponse_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  llama_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use llama_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const llama_msgs::action::GenerateResponse_Result & msg)
{
  return llama_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<llama_msgs::action::GenerateResponse_Result>()
{
  return "llama_msgs::action::GenerateResponse_Result";
}

template<>
inline const char * name<llama_msgs::action::GenerateResponse_Result>()
{
  return "llama_msgs/action/GenerateResponse_Result";
}

template<>
struct has_fixed_size<llama_msgs::action::GenerateResponse_Result>
  : std::integral_constant<bool, has_fixed_size<llama_msgs::msg::Response>::value> {};

template<>
struct has_bounded_size<llama_msgs::action::GenerateResponse_Result>
  : std::integral_constant<bool, has_bounded_size<llama_msgs::msg::Response>::value> {};

template<>
struct is_message<llama_msgs::action::GenerateResponse_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'partial_response'
#include "llama_msgs/msg/detail/partial_response__traits.hpp"

namespace llama_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const GenerateResponse_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: partial_response
  {
    out << "partial_response: ";
    to_flow_style_yaml(msg.partial_response, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GenerateResponse_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: partial_response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "partial_response:\n";
    to_block_style_yaml(msg.partial_response, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GenerateResponse_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace llama_msgs

namespace rosidl_generator_traits
{

[[deprecated("use llama_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const llama_msgs::action::GenerateResponse_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  llama_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use llama_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const llama_msgs::action::GenerateResponse_Feedback & msg)
{
  return llama_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<llama_msgs::action::GenerateResponse_Feedback>()
{
  return "llama_msgs::action::GenerateResponse_Feedback";
}

template<>
inline const char * name<llama_msgs::action::GenerateResponse_Feedback>()
{
  return "llama_msgs/action/GenerateResponse_Feedback";
}

template<>
struct has_fixed_size<llama_msgs::action::GenerateResponse_Feedback>
  : std::integral_constant<bool, has_fixed_size<llama_msgs::msg::PartialResponse>::value> {};

template<>
struct has_bounded_size<llama_msgs::action::GenerateResponse_Feedback>
  : std::integral_constant<bool, has_bounded_size<llama_msgs::msg::PartialResponse>::value> {};

template<>
struct is_message<llama_msgs::action::GenerateResponse_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "llama_msgs/action/detail/generate_response__traits.hpp"

namespace llama_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const GenerateResponse_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GenerateResponse_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GenerateResponse_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace llama_msgs

namespace rosidl_generator_traits
{

[[deprecated("use llama_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const llama_msgs::action::GenerateResponse_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  llama_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use llama_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const llama_msgs::action::GenerateResponse_SendGoal_Request & msg)
{
  return llama_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<llama_msgs::action::GenerateResponse_SendGoal_Request>()
{
  return "llama_msgs::action::GenerateResponse_SendGoal_Request";
}

template<>
inline const char * name<llama_msgs::action::GenerateResponse_SendGoal_Request>()
{
  return "llama_msgs/action/GenerateResponse_SendGoal_Request";
}

template<>
struct has_fixed_size<llama_msgs::action::GenerateResponse_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<llama_msgs::action::GenerateResponse_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<llama_msgs::action::GenerateResponse_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<llama_msgs::action::GenerateResponse_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<llama_msgs::action::GenerateResponse_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace llama_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const GenerateResponse_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GenerateResponse_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GenerateResponse_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace llama_msgs

namespace rosidl_generator_traits
{

[[deprecated("use llama_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const llama_msgs::action::GenerateResponse_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  llama_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use llama_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const llama_msgs::action::GenerateResponse_SendGoal_Response & msg)
{
  return llama_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<llama_msgs::action::GenerateResponse_SendGoal_Response>()
{
  return "llama_msgs::action::GenerateResponse_SendGoal_Response";
}

template<>
inline const char * name<llama_msgs::action::GenerateResponse_SendGoal_Response>()
{
  return "llama_msgs/action/GenerateResponse_SendGoal_Response";
}

template<>
struct has_fixed_size<llama_msgs::action::GenerateResponse_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<llama_msgs::action::GenerateResponse_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<llama_msgs::action::GenerateResponse_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<llama_msgs::action::GenerateResponse_SendGoal>()
{
  return "llama_msgs::action::GenerateResponse_SendGoal";
}

template<>
inline const char * name<llama_msgs::action::GenerateResponse_SendGoal>()
{
  return "llama_msgs/action/GenerateResponse_SendGoal";
}

template<>
struct has_fixed_size<llama_msgs::action::GenerateResponse_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<llama_msgs::action::GenerateResponse_SendGoal_Request>::value &&
    has_fixed_size<llama_msgs::action::GenerateResponse_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<llama_msgs::action::GenerateResponse_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<llama_msgs::action::GenerateResponse_SendGoal_Request>::value &&
    has_bounded_size<llama_msgs::action::GenerateResponse_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<llama_msgs::action::GenerateResponse_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<llama_msgs::action::GenerateResponse_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<llama_msgs::action::GenerateResponse_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace llama_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const GenerateResponse_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GenerateResponse_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GenerateResponse_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace llama_msgs

namespace rosidl_generator_traits
{

[[deprecated("use llama_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const llama_msgs::action::GenerateResponse_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  llama_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use llama_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const llama_msgs::action::GenerateResponse_GetResult_Request & msg)
{
  return llama_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<llama_msgs::action::GenerateResponse_GetResult_Request>()
{
  return "llama_msgs::action::GenerateResponse_GetResult_Request";
}

template<>
inline const char * name<llama_msgs::action::GenerateResponse_GetResult_Request>()
{
  return "llama_msgs/action/GenerateResponse_GetResult_Request";
}

template<>
struct has_fixed_size<llama_msgs::action::GenerateResponse_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<llama_msgs::action::GenerateResponse_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<llama_msgs::action::GenerateResponse_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "llama_msgs/action/detail/generate_response__traits.hpp"

namespace llama_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const GenerateResponse_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GenerateResponse_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GenerateResponse_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace llama_msgs

namespace rosidl_generator_traits
{

[[deprecated("use llama_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const llama_msgs::action::GenerateResponse_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  llama_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use llama_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const llama_msgs::action::GenerateResponse_GetResult_Response & msg)
{
  return llama_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<llama_msgs::action::GenerateResponse_GetResult_Response>()
{
  return "llama_msgs::action::GenerateResponse_GetResult_Response";
}

template<>
inline const char * name<llama_msgs::action::GenerateResponse_GetResult_Response>()
{
  return "llama_msgs/action/GenerateResponse_GetResult_Response";
}

template<>
struct has_fixed_size<llama_msgs::action::GenerateResponse_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<llama_msgs::action::GenerateResponse_Result>::value> {};

template<>
struct has_bounded_size<llama_msgs::action::GenerateResponse_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<llama_msgs::action::GenerateResponse_Result>::value> {};

template<>
struct is_message<llama_msgs::action::GenerateResponse_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<llama_msgs::action::GenerateResponse_GetResult>()
{
  return "llama_msgs::action::GenerateResponse_GetResult";
}

template<>
inline const char * name<llama_msgs::action::GenerateResponse_GetResult>()
{
  return "llama_msgs/action/GenerateResponse_GetResult";
}

template<>
struct has_fixed_size<llama_msgs::action::GenerateResponse_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<llama_msgs::action::GenerateResponse_GetResult_Request>::value &&
    has_fixed_size<llama_msgs::action::GenerateResponse_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<llama_msgs::action::GenerateResponse_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<llama_msgs::action::GenerateResponse_GetResult_Request>::value &&
    has_bounded_size<llama_msgs::action::GenerateResponse_GetResult_Response>::value
  >
{
};

template<>
struct is_service<llama_msgs::action::GenerateResponse_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<llama_msgs::action::GenerateResponse_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<llama_msgs::action::GenerateResponse_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "llama_msgs/action/detail/generate_response__traits.hpp"

namespace llama_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const GenerateResponse_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GenerateResponse_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GenerateResponse_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace llama_msgs

namespace rosidl_generator_traits
{

[[deprecated("use llama_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const llama_msgs::action::GenerateResponse_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  llama_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use llama_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const llama_msgs::action::GenerateResponse_FeedbackMessage & msg)
{
  return llama_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<llama_msgs::action::GenerateResponse_FeedbackMessage>()
{
  return "llama_msgs::action::GenerateResponse_FeedbackMessage";
}

template<>
inline const char * name<llama_msgs::action::GenerateResponse_FeedbackMessage>()
{
  return "llama_msgs/action/GenerateResponse_FeedbackMessage";
}

template<>
struct has_fixed_size<llama_msgs::action::GenerateResponse_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<llama_msgs::action::GenerateResponse_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<llama_msgs::action::GenerateResponse_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<llama_msgs::action::GenerateResponse_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<llama_msgs::action::GenerateResponse_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<llama_msgs::action::GenerateResponse>
  : std::true_type
{
};

template<>
struct is_action_goal<llama_msgs::action::GenerateResponse_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<llama_msgs::action::GenerateResponse_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<llama_msgs::action::GenerateResponse_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // LLAMA_MSGS__ACTION__DETAIL__GENERATE_RESPONSE__TRAITS_HPP_
