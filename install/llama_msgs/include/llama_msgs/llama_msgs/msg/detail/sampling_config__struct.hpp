// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from llama_msgs:msg/SamplingConfig.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__MSG__DETAIL__SAMPLING_CONFIG__STRUCT_HPP_
#define LLAMA_MSGS__MSG__DETAIL__SAMPLING_CONFIG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'logit_bias'
#include "llama_msgs/msg/detail/logit_bias_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__llama_msgs__msg__SamplingConfig __attribute__((deprecated))
#else
# define DEPRECATED__llama_msgs__msg__SamplingConfig __declspec(deprecated)
#endif

namespace llama_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SamplingConfig_
{
  using Type = SamplingConfig_<ContainerAllocator>;

  explicit SamplingConfig_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : logit_bias(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->n_prev = 64l;
      this->n_probs = 1l;
      this->min_keep = 0l;
      this->ignore_eos = false;
      this->temp = 0.8f;
      this->dynatemp_range = 0.0f;
      this->dynatemp_exponent = 1.0f;
      this->top_k = 40l;
      this->top_p = 0.95f;
      this->min_p = 0.05f;
      this->tfs_z = 1.0f;
      this->typical_p = 1.0f;
      this->penalty_last_n = 64l;
      this->penalty_repeat = 1.0f;
      this->penalty_freq = 0.0f;
      this->penalty_present = 0.0f;
      this->mirostat = 0l;
      this->mirostat_eta = 0.1f;
      this->mirostat_tau = 5.0f;
      this->penalize_nl = false;
      this->samplers_sequence = "kfypmt";
      this->grammar = "";
      this->grammar_schema = "";
      this->use_penalty_prompt_tokens = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->n_prev = 0l;
      this->n_probs = 0l;
      this->min_keep = 0l;
      this->ignore_eos = false;
      this->temp = 0.0f;
      this->dynatemp_range = 0.0f;
      this->dynatemp_exponent = 0.0f;
      this->top_k = 0l;
      this->top_p = 0.0f;
      this->min_p = 0.0f;
      this->tfs_z = 0.0f;
      this->typical_p = 0.0f;
      this->penalty_last_n = 0l;
      this->penalty_repeat = 0.0f;
      this->penalty_freq = 0.0f;
      this->penalty_present = 0.0f;
      this->mirostat = 0l;
      this->mirostat_eta = 0.0f;
      this->mirostat_tau = 0.0f;
      this->penalize_nl = false;
      this->samplers_sequence = "";
      this->grammar = "";
      this->grammar_schema = "";
      this->use_penalty_prompt_tokens = false;
    }
  }

  explicit SamplingConfig_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : logit_bias(_alloc, _init),
    samplers_sequence(_alloc),
    grammar(_alloc),
    grammar_schema(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->n_prev = 64l;
      this->n_probs = 1l;
      this->min_keep = 0l;
      this->ignore_eos = false;
      this->temp = 0.8f;
      this->dynatemp_range = 0.0f;
      this->dynatemp_exponent = 1.0f;
      this->top_k = 40l;
      this->top_p = 0.95f;
      this->min_p = 0.05f;
      this->tfs_z = 1.0f;
      this->typical_p = 1.0f;
      this->penalty_last_n = 64l;
      this->penalty_repeat = 1.0f;
      this->penalty_freq = 0.0f;
      this->penalty_present = 0.0f;
      this->mirostat = 0l;
      this->mirostat_eta = 0.1f;
      this->mirostat_tau = 5.0f;
      this->penalize_nl = false;
      this->samplers_sequence = "kfypmt";
      this->grammar = "";
      this->grammar_schema = "";
      this->use_penalty_prompt_tokens = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->n_prev = 0l;
      this->n_probs = 0l;
      this->min_keep = 0l;
      this->ignore_eos = false;
      this->temp = 0.0f;
      this->dynatemp_range = 0.0f;
      this->dynatemp_exponent = 0.0f;
      this->top_k = 0l;
      this->top_p = 0.0f;
      this->min_p = 0.0f;
      this->tfs_z = 0.0f;
      this->typical_p = 0.0f;
      this->penalty_last_n = 0l;
      this->penalty_repeat = 0.0f;
      this->penalty_freq = 0.0f;
      this->penalty_present = 0.0f;
      this->mirostat = 0l;
      this->mirostat_eta = 0.0f;
      this->mirostat_tau = 0.0f;
      this->penalize_nl = false;
      this->samplers_sequence = "";
      this->grammar = "";
      this->grammar_schema = "";
      this->use_penalty_prompt_tokens = false;
    }
  }

  // field types and members
  using _n_prev_type =
    int32_t;
  _n_prev_type n_prev;
  using _n_probs_type =
    int32_t;
  _n_probs_type n_probs;
  using _min_keep_type =
    int32_t;
  _min_keep_type min_keep;
  using _ignore_eos_type =
    bool;
  _ignore_eos_type ignore_eos;
  using _logit_bias_type =
    llama_msgs::msg::LogitBiasArray_<ContainerAllocator>;
  _logit_bias_type logit_bias;
  using _temp_type =
    float;
  _temp_type temp;
  using _dynatemp_range_type =
    float;
  _dynatemp_range_type dynatemp_range;
  using _dynatemp_exponent_type =
    float;
  _dynatemp_exponent_type dynatemp_exponent;
  using _top_k_type =
    int32_t;
  _top_k_type top_k;
  using _top_p_type =
    float;
  _top_p_type top_p;
  using _min_p_type =
    float;
  _min_p_type min_p;
  using _tfs_z_type =
    float;
  _tfs_z_type tfs_z;
  using _typical_p_type =
    float;
  _typical_p_type typical_p;
  using _penalty_last_n_type =
    int32_t;
  _penalty_last_n_type penalty_last_n;
  using _penalty_repeat_type =
    float;
  _penalty_repeat_type penalty_repeat;
  using _penalty_freq_type =
    float;
  _penalty_freq_type penalty_freq;
  using _penalty_present_type =
    float;
  _penalty_present_type penalty_present;
  using _mirostat_type =
    int32_t;
  _mirostat_type mirostat;
  using _mirostat_eta_type =
    float;
  _mirostat_eta_type mirostat_eta;
  using _mirostat_tau_type =
    float;
  _mirostat_tau_type mirostat_tau;
  using _penalize_nl_type =
    bool;
  _penalize_nl_type penalize_nl;
  using _samplers_sequence_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _samplers_sequence_type samplers_sequence;
  using _grammar_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _grammar_type grammar;
  using _grammar_schema_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _grammar_schema_type grammar_schema;
  using _penalty_prompt_tokens_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _penalty_prompt_tokens_type penalty_prompt_tokens;
  using _use_penalty_prompt_tokens_type =
    bool;
  _use_penalty_prompt_tokens_type use_penalty_prompt_tokens;

  // setters for named parameter idiom
  Type & set__n_prev(
    const int32_t & _arg)
  {
    this->n_prev = _arg;
    return *this;
  }
  Type & set__n_probs(
    const int32_t & _arg)
  {
    this->n_probs = _arg;
    return *this;
  }
  Type & set__min_keep(
    const int32_t & _arg)
  {
    this->min_keep = _arg;
    return *this;
  }
  Type & set__ignore_eos(
    const bool & _arg)
  {
    this->ignore_eos = _arg;
    return *this;
  }
  Type & set__logit_bias(
    const llama_msgs::msg::LogitBiasArray_<ContainerAllocator> & _arg)
  {
    this->logit_bias = _arg;
    return *this;
  }
  Type & set__temp(
    const float & _arg)
  {
    this->temp = _arg;
    return *this;
  }
  Type & set__dynatemp_range(
    const float & _arg)
  {
    this->dynatemp_range = _arg;
    return *this;
  }
  Type & set__dynatemp_exponent(
    const float & _arg)
  {
    this->dynatemp_exponent = _arg;
    return *this;
  }
  Type & set__top_k(
    const int32_t & _arg)
  {
    this->top_k = _arg;
    return *this;
  }
  Type & set__top_p(
    const float & _arg)
  {
    this->top_p = _arg;
    return *this;
  }
  Type & set__min_p(
    const float & _arg)
  {
    this->min_p = _arg;
    return *this;
  }
  Type & set__tfs_z(
    const float & _arg)
  {
    this->tfs_z = _arg;
    return *this;
  }
  Type & set__typical_p(
    const float & _arg)
  {
    this->typical_p = _arg;
    return *this;
  }
  Type & set__penalty_last_n(
    const int32_t & _arg)
  {
    this->penalty_last_n = _arg;
    return *this;
  }
  Type & set__penalty_repeat(
    const float & _arg)
  {
    this->penalty_repeat = _arg;
    return *this;
  }
  Type & set__penalty_freq(
    const float & _arg)
  {
    this->penalty_freq = _arg;
    return *this;
  }
  Type & set__penalty_present(
    const float & _arg)
  {
    this->penalty_present = _arg;
    return *this;
  }
  Type & set__mirostat(
    const int32_t & _arg)
  {
    this->mirostat = _arg;
    return *this;
  }
  Type & set__mirostat_eta(
    const float & _arg)
  {
    this->mirostat_eta = _arg;
    return *this;
  }
  Type & set__mirostat_tau(
    const float & _arg)
  {
    this->mirostat_tau = _arg;
    return *this;
  }
  Type & set__penalize_nl(
    const bool & _arg)
  {
    this->penalize_nl = _arg;
    return *this;
  }
  Type & set__samplers_sequence(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->samplers_sequence = _arg;
    return *this;
  }
  Type & set__grammar(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->grammar = _arg;
    return *this;
  }
  Type & set__grammar_schema(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->grammar_schema = _arg;
    return *this;
  }
  Type & set__penalty_prompt_tokens(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->penalty_prompt_tokens = _arg;
    return *this;
  }
  Type & set__use_penalty_prompt_tokens(
    const bool & _arg)
  {
    this->use_penalty_prompt_tokens = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    llama_msgs::msg::SamplingConfig_<ContainerAllocator> *;
  using ConstRawPtr =
    const llama_msgs::msg::SamplingConfig_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<llama_msgs::msg::SamplingConfig_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<llama_msgs::msg::SamplingConfig_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      llama_msgs::msg::SamplingConfig_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<llama_msgs::msg::SamplingConfig_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      llama_msgs::msg::SamplingConfig_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<llama_msgs::msg::SamplingConfig_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<llama_msgs::msg::SamplingConfig_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<llama_msgs::msg::SamplingConfig_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__llama_msgs__msg__SamplingConfig
    std::shared_ptr<llama_msgs::msg::SamplingConfig_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__llama_msgs__msg__SamplingConfig
    std::shared_ptr<llama_msgs::msg::SamplingConfig_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SamplingConfig_ & other) const
  {
    if (this->n_prev != other.n_prev) {
      return false;
    }
    if (this->n_probs != other.n_probs) {
      return false;
    }
    if (this->min_keep != other.min_keep) {
      return false;
    }
    if (this->ignore_eos != other.ignore_eos) {
      return false;
    }
    if (this->logit_bias != other.logit_bias) {
      return false;
    }
    if (this->temp != other.temp) {
      return false;
    }
    if (this->dynatemp_range != other.dynatemp_range) {
      return false;
    }
    if (this->dynatemp_exponent != other.dynatemp_exponent) {
      return false;
    }
    if (this->top_k != other.top_k) {
      return false;
    }
    if (this->top_p != other.top_p) {
      return false;
    }
    if (this->min_p != other.min_p) {
      return false;
    }
    if (this->tfs_z != other.tfs_z) {
      return false;
    }
    if (this->typical_p != other.typical_p) {
      return false;
    }
    if (this->penalty_last_n != other.penalty_last_n) {
      return false;
    }
    if (this->penalty_repeat != other.penalty_repeat) {
      return false;
    }
    if (this->penalty_freq != other.penalty_freq) {
      return false;
    }
    if (this->penalty_present != other.penalty_present) {
      return false;
    }
    if (this->mirostat != other.mirostat) {
      return false;
    }
    if (this->mirostat_eta != other.mirostat_eta) {
      return false;
    }
    if (this->mirostat_tau != other.mirostat_tau) {
      return false;
    }
    if (this->penalize_nl != other.penalize_nl) {
      return false;
    }
    if (this->samplers_sequence != other.samplers_sequence) {
      return false;
    }
    if (this->grammar != other.grammar) {
      return false;
    }
    if (this->grammar_schema != other.grammar_schema) {
      return false;
    }
    if (this->penalty_prompt_tokens != other.penalty_prompt_tokens) {
      return false;
    }
    if (this->use_penalty_prompt_tokens != other.use_penalty_prompt_tokens) {
      return false;
    }
    return true;
  }
  bool operator!=(const SamplingConfig_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SamplingConfig_

// alias to use template instance with default allocator
using SamplingConfig =
  llama_msgs::msg::SamplingConfig_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace llama_msgs

#endif  // LLAMA_MSGS__MSG__DETAIL__SAMPLING_CONFIG__STRUCT_HPP_
