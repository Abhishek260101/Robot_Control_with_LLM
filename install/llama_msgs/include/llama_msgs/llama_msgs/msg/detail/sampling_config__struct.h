// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from llama_msgs:msg/SamplingConfig.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__MSG__DETAIL__SAMPLING_CONFIG__STRUCT_H_
#define LLAMA_MSGS__MSG__DETAIL__SAMPLING_CONFIG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'logit_bias'
#include "llama_msgs/msg/detail/logit_bias_array__struct.h"
// Member 'samplers_sequence'
// Member 'grammar'
// Member 'grammar_schema'
#include "rosidl_runtime_c/string.h"
// Member 'penalty_prompt_tokens'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SamplingConfig in the package llama_msgs.
typedef struct llama_msgs__msg__SamplingConfig
{
  /// number of previous tokens to remember
  int32_t n_prev;
  /// if greater than 0, output the probabilities of top n_probs tokens
  int32_t n_probs;
  /// 0 = disabled, otherwise samplers should return at least min_keep tokens
  int32_t min_keep;
  /// ignore end of stream token and continue generating (implies --logit-bias 2-inf)
  bool ignore_eos;
  /// logit bias for specific tokens
  llama_msgs__msg__LogitBiasArray logit_bias;
  /// temperature
  float temp;
  /// 0.0 = disabled
  float dynatemp_range;
  /// controls how entropy maps to temperature in dynamic temperature sampler
  float dynatemp_exponent;
  /// top-k sampling (0.0 = disabled)
  int32_t top_k;
  /// top-p sampling (1.0 = disabled)
  float top_p;
  /// min-p sampling (0.0 = disabled)
  float min_p;
  /// tail free sampling, parameter z (1.0 = disabled)
  float tfs_z;
  /// locally typical sampling, parameter p (1.0 = disabled)
  float typical_p;
  /// last n tokens consider for penalize (0 = disable penalty, -1 = context size)
  int32_t penalty_last_n;
  /// penalize repeat sequence of tokens (1.0 = disabled)
  float penalty_repeat;
  /// repeat alpha frequency penalty (0.0 = disable)
  float penalty_freq;
  /// repeat alpha presence penalty (0.0 = disabled)
  float penalty_present;
  /// Mirostart sampling (0 = disabled, 1 = mirostat, 2 = mirostat 2.0)
  int32_t mirostat;
  /// Mirostat learning rate, parameter eta
  float mirostat_eta;
  /// Mirostat target entropy, parameter tau
  float mirostat_tau;
  /// consider newlines as a repeatable token
  bool penalize_nl;
  /// TOP_K, TFS_Z, TYPICAL_P, TOP_P, MIN_P, TEMP
  rosidl_runtime_c__String samplers_sequence;
  /// optional BNF-like grammar to constrain sampling
  rosidl_runtime_c__String grammar;
  /// grammar schema that defines a JSON BNF grammar
  rosidl_runtime_c__String grammar_schema;
  /// list of tokens to penalize
  rosidl_runtime_c__int32__Sequence penalty_prompt_tokens;
  /// whether to penalize tokens
  bool use_penalty_prompt_tokens;
} llama_msgs__msg__SamplingConfig;

// Struct for a sequence of llama_msgs__msg__SamplingConfig.
typedef struct llama_msgs__msg__SamplingConfig__Sequence
{
  llama_msgs__msg__SamplingConfig * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llama_msgs__msg__SamplingConfig__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLAMA_MSGS__MSG__DETAIL__SAMPLING_CONFIG__STRUCT_H_
