// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from llama_msgs:msg/SamplingConfig.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__MSG__DETAIL__SAMPLING_CONFIG__TRAITS_HPP_
#define LLAMA_MSGS__MSG__DETAIL__SAMPLING_CONFIG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "llama_msgs/msg/detail/sampling_config__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'logit_bias'
#include "llama_msgs/msg/detail/logit_bias_array__traits.hpp"

namespace llama_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SamplingConfig & msg,
  std::ostream & out)
{
  out << "{";
  // member: n_prev
  {
    out << "n_prev: ";
    rosidl_generator_traits::value_to_yaml(msg.n_prev, out);
    out << ", ";
  }

  // member: n_probs
  {
    out << "n_probs: ";
    rosidl_generator_traits::value_to_yaml(msg.n_probs, out);
    out << ", ";
  }

  // member: min_keep
  {
    out << "min_keep: ";
    rosidl_generator_traits::value_to_yaml(msg.min_keep, out);
    out << ", ";
  }

  // member: ignore_eos
  {
    out << "ignore_eos: ";
    rosidl_generator_traits::value_to_yaml(msg.ignore_eos, out);
    out << ", ";
  }

  // member: logit_bias
  {
    out << "logit_bias: ";
    to_flow_style_yaml(msg.logit_bias, out);
    out << ", ";
  }

  // member: temp
  {
    out << "temp: ";
    rosidl_generator_traits::value_to_yaml(msg.temp, out);
    out << ", ";
  }

  // member: dynatemp_range
  {
    out << "dynatemp_range: ";
    rosidl_generator_traits::value_to_yaml(msg.dynatemp_range, out);
    out << ", ";
  }

  // member: dynatemp_exponent
  {
    out << "dynatemp_exponent: ";
    rosidl_generator_traits::value_to_yaml(msg.dynatemp_exponent, out);
    out << ", ";
  }

  // member: top_k
  {
    out << "top_k: ";
    rosidl_generator_traits::value_to_yaml(msg.top_k, out);
    out << ", ";
  }

  // member: top_p
  {
    out << "top_p: ";
    rosidl_generator_traits::value_to_yaml(msg.top_p, out);
    out << ", ";
  }

  // member: min_p
  {
    out << "min_p: ";
    rosidl_generator_traits::value_to_yaml(msg.min_p, out);
    out << ", ";
  }

  // member: tfs_z
  {
    out << "tfs_z: ";
    rosidl_generator_traits::value_to_yaml(msg.tfs_z, out);
    out << ", ";
  }

  // member: typical_p
  {
    out << "typical_p: ";
    rosidl_generator_traits::value_to_yaml(msg.typical_p, out);
    out << ", ";
  }

  // member: penalty_last_n
  {
    out << "penalty_last_n: ";
    rosidl_generator_traits::value_to_yaml(msg.penalty_last_n, out);
    out << ", ";
  }

  // member: penalty_repeat
  {
    out << "penalty_repeat: ";
    rosidl_generator_traits::value_to_yaml(msg.penalty_repeat, out);
    out << ", ";
  }

  // member: penalty_freq
  {
    out << "penalty_freq: ";
    rosidl_generator_traits::value_to_yaml(msg.penalty_freq, out);
    out << ", ";
  }

  // member: penalty_present
  {
    out << "penalty_present: ";
    rosidl_generator_traits::value_to_yaml(msg.penalty_present, out);
    out << ", ";
  }

  // member: mirostat
  {
    out << "mirostat: ";
    rosidl_generator_traits::value_to_yaml(msg.mirostat, out);
    out << ", ";
  }

  // member: mirostat_eta
  {
    out << "mirostat_eta: ";
    rosidl_generator_traits::value_to_yaml(msg.mirostat_eta, out);
    out << ", ";
  }

  // member: mirostat_tau
  {
    out << "mirostat_tau: ";
    rosidl_generator_traits::value_to_yaml(msg.mirostat_tau, out);
    out << ", ";
  }

  // member: penalize_nl
  {
    out << "penalize_nl: ";
    rosidl_generator_traits::value_to_yaml(msg.penalize_nl, out);
    out << ", ";
  }

  // member: samplers_sequence
  {
    out << "samplers_sequence: ";
    rosidl_generator_traits::value_to_yaml(msg.samplers_sequence, out);
    out << ", ";
  }

  // member: grammar
  {
    out << "grammar: ";
    rosidl_generator_traits::value_to_yaml(msg.grammar, out);
    out << ", ";
  }

  // member: grammar_schema
  {
    out << "grammar_schema: ";
    rosidl_generator_traits::value_to_yaml(msg.grammar_schema, out);
    out << ", ";
  }

  // member: penalty_prompt_tokens
  {
    if (msg.penalty_prompt_tokens.size() == 0) {
      out << "penalty_prompt_tokens: []";
    } else {
      out << "penalty_prompt_tokens: [";
      size_t pending_items = msg.penalty_prompt_tokens.size();
      for (auto item : msg.penalty_prompt_tokens) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: use_penalty_prompt_tokens
  {
    out << "use_penalty_prompt_tokens: ";
    rosidl_generator_traits::value_to_yaml(msg.use_penalty_prompt_tokens, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SamplingConfig & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: n_prev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "n_prev: ";
    rosidl_generator_traits::value_to_yaml(msg.n_prev, out);
    out << "\n";
  }

  // member: n_probs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "n_probs: ";
    rosidl_generator_traits::value_to_yaml(msg.n_probs, out);
    out << "\n";
  }

  // member: min_keep
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_keep: ";
    rosidl_generator_traits::value_to_yaml(msg.min_keep, out);
    out << "\n";
  }

  // member: ignore_eos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ignore_eos: ";
    rosidl_generator_traits::value_to_yaml(msg.ignore_eos, out);
    out << "\n";
  }

  // member: logit_bias
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "logit_bias:\n";
    to_block_style_yaml(msg.logit_bias, out, indentation + 2);
  }

  // member: temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temp: ";
    rosidl_generator_traits::value_to_yaml(msg.temp, out);
    out << "\n";
  }

  // member: dynatemp_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dynatemp_range: ";
    rosidl_generator_traits::value_to_yaml(msg.dynatemp_range, out);
    out << "\n";
  }

  // member: dynatemp_exponent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dynatemp_exponent: ";
    rosidl_generator_traits::value_to_yaml(msg.dynatemp_exponent, out);
    out << "\n";
  }

  // member: top_k
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "top_k: ";
    rosidl_generator_traits::value_to_yaml(msg.top_k, out);
    out << "\n";
  }

  // member: top_p
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "top_p: ";
    rosidl_generator_traits::value_to_yaml(msg.top_p, out);
    out << "\n";
  }

  // member: min_p
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_p: ";
    rosidl_generator_traits::value_to_yaml(msg.min_p, out);
    out << "\n";
  }

  // member: tfs_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tfs_z: ";
    rosidl_generator_traits::value_to_yaml(msg.tfs_z, out);
    out << "\n";
  }

  // member: typical_p
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "typical_p: ";
    rosidl_generator_traits::value_to_yaml(msg.typical_p, out);
    out << "\n";
  }

  // member: penalty_last_n
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "penalty_last_n: ";
    rosidl_generator_traits::value_to_yaml(msg.penalty_last_n, out);
    out << "\n";
  }

  // member: penalty_repeat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "penalty_repeat: ";
    rosidl_generator_traits::value_to_yaml(msg.penalty_repeat, out);
    out << "\n";
  }

  // member: penalty_freq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "penalty_freq: ";
    rosidl_generator_traits::value_to_yaml(msg.penalty_freq, out);
    out << "\n";
  }

  // member: penalty_present
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "penalty_present: ";
    rosidl_generator_traits::value_to_yaml(msg.penalty_present, out);
    out << "\n";
  }

  // member: mirostat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mirostat: ";
    rosidl_generator_traits::value_to_yaml(msg.mirostat, out);
    out << "\n";
  }

  // member: mirostat_eta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mirostat_eta: ";
    rosidl_generator_traits::value_to_yaml(msg.mirostat_eta, out);
    out << "\n";
  }

  // member: mirostat_tau
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mirostat_tau: ";
    rosidl_generator_traits::value_to_yaml(msg.mirostat_tau, out);
    out << "\n";
  }

  // member: penalize_nl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "penalize_nl: ";
    rosidl_generator_traits::value_to_yaml(msg.penalize_nl, out);
    out << "\n";
  }

  // member: samplers_sequence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "samplers_sequence: ";
    rosidl_generator_traits::value_to_yaml(msg.samplers_sequence, out);
    out << "\n";
  }

  // member: grammar
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grammar: ";
    rosidl_generator_traits::value_to_yaml(msg.grammar, out);
    out << "\n";
  }

  // member: grammar_schema
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grammar_schema: ";
    rosidl_generator_traits::value_to_yaml(msg.grammar_schema, out);
    out << "\n";
  }

  // member: penalty_prompt_tokens
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.penalty_prompt_tokens.size() == 0) {
      out << "penalty_prompt_tokens: []\n";
    } else {
      out << "penalty_prompt_tokens:\n";
      for (auto item : msg.penalty_prompt_tokens) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: use_penalty_prompt_tokens
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_penalty_prompt_tokens: ";
    rosidl_generator_traits::value_to_yaml(msg.use_penalty_prompt_tokens, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SamplingConfig & msg, bool use_flow_style = false)
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
  const llama_msgs::msg::SamplingConfig & msg,
  std::ostream & out, size_t indentation = 0)
{
  llama_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use llama_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const llama_msgs::msg::SamplingConfig & msg)
{
  return llama_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<llama_msgs::msg::SamplingConfig>()
{
  return "llama_msgs::msg::SamplingConfig";
}

template<>
inline const char * name<llama_msgs::msg::SamplingConfig>()
{
  return "llama_msgs/msg/SamplingConfig";
}

template<>
struct has_fixed_size<llama_msgs::msg::SamplingConfig>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<llama_msgs::msg::SamplingConfig>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<llama_msgs::msg::SamplingConfig>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLAMA_MSGS__MSG__DETAIL__SAMPLING_CONFIG__TRAITS_HPP_
