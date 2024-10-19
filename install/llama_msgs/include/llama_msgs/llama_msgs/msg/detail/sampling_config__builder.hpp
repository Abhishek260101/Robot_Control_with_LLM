// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from llama_msgs:msg/SamplingConfig.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__MSG__DETAIL__SAMPLING_CONFIG__BUILDER_HPP_
#define LLAMA_MSGS__MSG__DETAIL__SAMPLING_CONFIG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "llama_msgs/msg/detail/sampling_config__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace llama_msgs
{

namespace msg
{

namespace builder
{

class Init_SamplingConfig_use_penalty_prompt_tokens
{
public:
  explicit Init_SamplingConfig_use_penalty_prompt_tokens(::llama_msgs::msg::SamplingConfig & msg)
  : msg_(msg)
  {}
  ::llama_msgs::msg::SamplingConfig use_penalty_prompt_tokens(::llama_msgs::msg::SamplingConfig::_use_penalty_prompt_tokens_type arg)
  {
    msg_.use_penalty_prompt_tokens = std::move(arg);
    return std::move(msg_);
  }

private:
  ::llama_msgs::msg::SamplingConfig msg_;
};

class Init_SamplingConfig_penalty_prompt_tokens
{
public:
  explicit Init_SamplingConfig_penalty_prompt_tokens(::llama_msgs::msg::SamplingConfig & msg)
  : msg_(msg)
  {}
  Init_SamplingConfig_use_penalty_prompt_tokens penalty_prompt_tokens(::llama_msgs::msg::SamplingConfig::_penalty_prompt_tokens_type arg)
  {
    msg_.penalty_prompt_tokens = std::move(arg);
    return Init_SamplingConfig_use_penalty_prompt_tokens(msg_);
  }

private:
  ::llama_msgs::msg::SamplingConfig msg_;
};

class Init_SamplingConfig_grammar_schema
{
public:
  explicit Init_SamplingConfig_grammar_schema(::llama_msgs::msg::SamplingConfig & msg)
  : msg_(msg)
  {}
  Init_SamplingConfig_penalty_prompt_tokens grammar_schema(::llama_msgs::msg::SamplingConfig::_grammar_schema_type arg)
  {
    msg_.grammar_schema = std::move(arg);
    return Init_SamplingConfig_penalty_prompt_tokens(msg_);
  }

private:
  ::llama_msgs::msg::SamplingConfig msg_;
};

class Init_SamplingConfig_grammar
{
public:
  explicit Init_SamplingConfig_grammar(::llama_msgs::msg::SamplingConfig & msg)
  : msg_(msg)
  {}
  Init_SamplingConfig_grammar_schema grammar(::llama_msgs::msg::SamplingConfig::_grammar_type arg)
  {
    msg_.grammar = std::move(arg);
    return Init_SamplingConfig_grammar_schema(msg_);
  }

private:
  ::llama_msgs::msg::SamplingConfig msg_;
};

class Init_SamplingConfig_samplers_sequence
{
public:
  explicit Init_SamplingConfig_samplers_sequence(::llama_msgs::msg::SamplingConfig & msg)
  : msg_(msg)
  {}
  Init_SamplingConfig_grammar samplers_sequence(::llama_msgs::msg::SamplingConfig::_samplers_sequence_type arg)
  {
    msg_.samplers_sequence = std::move(arg);
    return Init_SamplingConfig_grammar(msg_);
  }

private:
  ::llama_msgs::msg::SamplingConfig msg_;
};

class Init_SamplingConfig_penalize_nl
{
public:
  explicit Init_SamplingConfig_penalize_nl(::llama_msgs::msg::SamplingConfig & msg)
  : msg_(msg)
  {}
  Init_SamplingConfig_samplers_sequence penalize_nl(::llama_msgs::msg::SamplingConfig::_penalize_nl_type arg)
  {
    msg_.penalize_nl = std::move(arg);
    return Init_SamplingConfig_samplers_sequence(msg_);
  }

private:
  ::llama_msgs::msg::SamplingConfig msg_;
};

class Init_SamplingConfig_mirostat_tau
{
public:
  explicit Init_SamplingConfig_mirostat_tau(::llama_msgs::msg::SamplingConfig & msg)
  : msg_(msg)
  {}
  Init_SamplingConfig_penalize_nl mirostat_tau(::llama_msgs::msg::SamplingConfig::_mirostat_tau_type arg)
  {
    msg_.mirostat_tau = std::move(arg);
    return Init_SamplingConfig_penalize_nl(msg_);
  }

private:
  ::llama_msgs::msg::SamplingConfig msg_;
};

class Init_SamplingConfig_mirostat_eta
{
public:
  explicit Init_SamplingConfig_mirostat_eta(::llama_msgs::msg::SamplingConfig & msg)
  : msg_(msg)
  {}
  Init_SamplingConfig_mirostat_tau mirostat_eta(::llama_msgs::msg::SamplingConfig::_mirostat_eta_type arg)
  {
    msg_.mirostat_eta = std::move(arg);
    return Init_SamplingConfig_mirostat_tau(msg_);
  }

private:
  ::llama_msgs::msg::SamplingConfig msg_;
};

class Init_SamplingConfig_mirostat
{
public:
  explicit Init_SamplingConfig_mirostat(::llama_msgs::msg::SamplingConfig & msg)
  : msg_(msg)
  {}
  Init_SamplingConfig_mirostat_eta mirostat(::llama_msgs::msg::SamplingConfig::_mirostat_type arg)
  {
    msg_.mirostat = std::move(arg);
    return Init_SamplingConfig_mirostat_eta(msg_);
  }

private:
  ::llama_msgs::msg::SamplingConfig msg_;
};

class Init_SamplingConfig_penalty_present
{
public:
  explicit Init_SamplingConfig_penalty_present(::llama_msgs::msg::SamplingConfig & msg)
  : msg_(msg)
  {}
  Init_SamplingConfig_mirostat penalty_present(::llama_msgs::msg::SamplingConfig::_penalty_present_type arg)
  {
    msg_.penalty_present = std::move(arg);
    return Init_SamplingConfig_mirostat(msg_);
  }

private:
  ::llama_msgs::msg::SamplingConfig msg_;
};

class Init_SamplingConfig_penalty_freq
{
public:
  explicit Init_SamplingConfig_penalty_freq(::llama_msgs::msg::SamplingConfig & msg)
  : msg_(msg)
  {}
  Init_SamplingConfig_penalty_present penalty_freq(::llama_msgs::msg::SamplingConfig::_penalty_freq_type arg)
  {
    msg_.penalty_freq = std::move(arg);
    return Init_SamplingConfig_penalty_present(msg_);
  }

private:
  ::llama_msgs::msg::SamplingConfig msg_;
};

class Init_SamplingConfig_penalty_repeat
{
public:
  explicit Init_SamplingConfig_penalty_repeat(::llama_msgs::msg::SamplingConfig & msg)
  : msg_(msg)
  {}
  Init_SamplingConfig_penalty_freq penalty_repeat(::llama_msgs::msg::SamplingConfig::_penalty_repeat_type arg)
  {
    msg_.penalty_repeat = std::move(arg);
    return Init_SamplingConfig_penalty_freq(msg_);
  }

private:
  ::llama_msgs::msg::SamplingConfig msg_;
};

class Init_SamplingConfig_penalty_last_n
{
public:
  explicit Init_SamplingConfig_penalty_last_n(::llama_msgs::msg::SamplingConfig & msg)
  : msg_(msg)
  {}
  Init_SamplingConfig_penalty_repeat penalty_last_n(::llama_msgs::msg::SamplingConfig::_penalty_last_n_type arg)
  {
    msg_.penalty_last_n = std::move(arg);
    return Init_SamplingConfig_penalty_repeat(msg_);
  }

private:
  ::llama_msgs::msg::SamplingConfig msg_;
};

class Init_SamplingConfig_typical_p
{
public:
  explicit Init_SamplingConfig_typical_p(::llama_msgs::msg::SamplingConfig & msg)
  : msg_(msg)
  {}
  Init_SamplingConfig_penalty_last_n typical_p(::llama_msgs::msg::SamplingConfig::_typical_p_type arg)
  {
    msg_.typical_p = std::move(arg);
    return Init_SamplingConfig_penalty_last_n(msg_);
  }

private:
  ::llama_msgs::msg::SamplingConfig msg_;
};

class Init_SamplingConfig_tfs_z
{
public:
  explicit Init_SamplingConfig_tfs_z(::llama_msgs::msg::SamplingConfig & msg)
  : msg_(msg)
  {}
  Init_SamplingConfig_typical_p tfs_z(::llama_msgs::msg::SamplingConfig::_tfs_z_type arg)
  {
    msg_.tfs_z = std::move(arg);
    return Init_SamplingConfig_typical_p(msg_);
  }

private:
  ::llama_msgs::msg::SamplingConfig msg_;
};

class Init_SamplingConfig_min_p
{
public:
  explicit Init_SamplingConfig_min_p(::llama_msgs::msg::SamplingConfig & msg)
  : msg_(msg)
  {}
  Init_SamplingConfig_tfs_z min_p(::llama_msgs::msg::SamplingConfig::_min_p_type arg)
  {
    msg_.min_p = std::move(arg);
    return Init_SamplingConfig_tfs_z(msg_);
  }

private:
  ::llama_msgs::msg::SamplingConfig msg_;
};

class Init_SamplingConfig_top_p
{
public:
  explicit Init_SamplingConfig_top_p(::llama_msgs::msg::SamplingConfig & msg)
  : msg_(msg)
  {}
  Init_SamplingConfig_min_p top_p(::llama_msgs::msg::SamplingConfig::_top_p_type arg)
  {
    msg_.top_p = std::move(arg);
    return Init_SamplingConfig_min_p(msg_);
  }

private:
  ::llama_msgs::msg::SamplingConfig msg_;
};

class Init_SamplingConfig_top_k
{
public:
  explicit Init_SamplingConfig_top_k(::llama_msgs::msg::SamplingConfig & msg)
  : msg_(msg)
  {}
  Init_SamplingConfig_top_p top_k(::llama_msgs::msg::SamplingConfig::_top_k_type arg)
  {
    msg_.top_k = std::move(arg);
    return Init_SamplingConfig_top_p(msg_);
  }

private:
  ::llama_msgs::msg::SamplingConfig msg_;
};

class Init_SamplingConfig_dynatemp_exponent
{
public:
  explicit Init_SamplingConfig_dynatemp_exponent(::llama_msgs::msg::SamplingConfig & msg)
  : msg_(msg)
  {}
  Init_SamplingConfig_top_k dynatemp_exponent(::llama_msgs::msg::SamplingConfig::_dynatemp_exponent_type arg)
  {
    msg_.dynatemp_exponent = std::move(arg);
    return Init_SamplingConfig_top_k(msg_);
  }

private:
  ::llama_msgs::msg::SamplingConfig msg_;
};

class Init_SamplingConfig_dynatemp_range
{
public:
  explicit Init_SamplingConfig_dynatemp_range(::llama_msgs::msg::SamplingConfig & msg)
  : msg_(msg)
  {}
  Init_SamplingConfig_dynatemp_exponent dynatemp_range(::llama_msgs::msg::SamplingConfig::_dynatemp_range_type arg)
  {
    msg_.dynatemp_range = std::move(arg);
    return Init_SamplingConfig_dynatemp_exponent(msg_);
  }

private:
  ::llama_msgs::msg::SamplingConfig msg_;
};

class Init_SamplingConfig_temp
{
public:
  explicit Init_SamplingConfig_temp(::llama_msgs::msg::SamplingConfig & msg)
  : msg_(msg)
  {}
  Init_SamplingConfig_dynatemp_range temp(::llama_msgs::msg::SamplingConfig::_temp_type arg)
  {
    msg_.temp = std::move(arg);
    return Init_SamplingConfig_dynatemp_range(msg_);
  }

private:
  ::llama_msgs::msg::SamplingConfig msg_;
};

class Init_SamplingConfig_logit_bias
{
public:
  explicit Init_SamplingConfig_logit_bias(::llama_msgs::msg::SamplingConfig & msg)
  : msg_(msg)
  {}
  Init_SamplingConfig_temp logit_bias(::llama_msgs::msg::SamplingConfig::_logit_bias_type arg)
  {
    msg_.logit_bias = std::move(arg);
    return Init_SamplingConfig_temp(msg_);
  }

private:
  ::llama_msgs::msg::SamplingConfig msg_;
};

class Init_SamplingConfig_ignore_eos
{
public:
  explicit Init_SamplingConfig_ignore_eos(::llama_msgs::msg::SamplingConfig & msg)
  : msg_(msg)
  {}
  Init_SamplingConfig_logit_bias ignore_eos(::llama_msgs::msg::SamplingConfig::_ignore_eos_type arg)
  {
    msg_.ignore_eos = std::move(arg);
    return Init_SamplingConfig_logit_bias(msg_);
  }

private:
  ::llama_msgs::msg::SamplingConfig msg_;
};

class Init_SamplingConfig_min_keep
{
public:
  explicit Init_SamplingConfig_min_keep(::llama_msgs::msg::SamplingConfig & msg)
  : msg_(msg)
  {}
  Init_SamplingConfig_ignore_eos min_keep(::llama_msgs::msg::SamplingConfig::_min_keep_type arg)
  {
    msg_.min_keep = std::move(arg);
    return Init_SamplingConfig_ignore_eos(msg_);
  }

private:
  ::llama_msgs::msg::SamplingConfig msg_;
};

class Init_SamplingConfig_n_probs
{
public:
  explicit Init_SamplingConfig_n_probs(::llama_msgs::msg::SamplingConfig & msg)
  : msg_(msg)
  {}
  Init_SamplingConfig_min_keep n_probs(::llama_msgs::msg::SamplingConfig::_n_probs_type arg)
  {
    msg_.n_probs = std::move(arg);
    return Init_SamplingConfig_min_keep(msg_);
  }

private:
  ::llama_msgs::msg::SamplingConfig msg_;
};

class Init_SamplingConfig_n_prev
{
public:
  Init_SamplingConfig_n_prev()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SamplingConfig_n_probs n_prev(::llama_msgs::msg::SamplingConfig::_n_prev_type arg)
  {
    msg_.n_prev = std::move(arg);
    return Init_SamplingConfig_n_probs(msg_);
  }

private:
  ::llama_msgs::msg::SamplingConfig msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::llama_msgs::msg::SamplingConfig>()
{
  return llama_msgs::msg::builder::Init_SamplingConfig_n_prev();
}

}  // namespace llama_msgs

#endif  // LLAMA_MSGS__MSG__DETAIL__SAMPLING_CONFIG__BUILDER_HPP_
