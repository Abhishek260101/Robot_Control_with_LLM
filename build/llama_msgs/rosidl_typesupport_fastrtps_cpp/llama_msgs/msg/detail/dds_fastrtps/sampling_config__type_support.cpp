// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from llama_msgs:msg/SamplingConfig.idl
// generated code does not contain a copyright notice
#include "llama_msgs/msg/detail/sampling_config__rosidl_typesupport_fastrtps_cpp.hpp"
#include "llama_msgs/msg/detail/sampling_config__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace llama_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const llama_msgs::msg::LogitBiasArray &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  llama_msgs::msg::LogitBiasArray &);
size_t get_serialized_size(
  const llama_msgs::msg::LogitBiasArray &,
  size_t current_alignment);
size_t
max_serialized_size_LogitBiasArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace llama_msgs


namespace llama_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_llama_msgs
cdr_serialize(
  const llama_msgs::msg::SamplingConfig & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: n_prev
  cdr << ros_message.n_prev;
  // Member: n_probs
  cdr << ros_message.n_probs;
  // Member: min_keep
  cdr << ros_message.min_keep;
  // Member: ignore_eos
  cdr << (ros_message.ignore_eos ? true : false);
  // Member: logit_bias
  llama_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.logit_bias,
    cdr);
  // Member: temp
  cdr << ros_message.temp;
  // Member: dynatemp_range
  cdr << ros_message.dynatemp_range;
  // Member: dynatemp_exponent
  cdr << ros_message.dynatemp_exponent;
  // Member: top_k
  cdr << ros_message.top_k;
  // Member: top_p
  cdr << ros_message.top_p;
  // Member: min_p
  cdr << ros_message.min_p;
  // Member: tfs_z
  cdr << ros_message.tfs_z;
  // Member: typical_p
  cdr << ros_message.typical_p;
  // Member: penalty_last_n
  cdr << ros_message.penalty_last_n;
  // Member: penalty_repeat
  cdr << ros_message.penalty_repeat;
  // Member: penalty_freq
  cdr << ros_message.penalty_freq;
  // Member: penalty_present
  cdr << ros_message.penalty_present;
  // Member: mirostat
  cdr << ros_message.mirostat;
  // Member: mirostat_eta
  cdr << ros_message.mirostat_eta;
  // Member: mirostat_tau
  cdr << ros_message.mirostat_tau;
  // Member: penalize_nl
  cdr << (ros_message.penalize_nl ? true : false);
  // Member: samplers_sequence
  cdr << ros_message.samplers_sequence;
  // Member: grammar
  cdr << ros_message.grammar;
  // Member: grammar_schema
  cdr << ros_message.grammar_schema;
  // Member: penalty_prompt_tokens
  {
    cdr << ros_message.penalty_prompt_tokens;
  }
  // Member: use_penalty_prompt_tokens
  cdr << (ros_message.use_penalty_prompt_tokens ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_llama_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  llama_msgs::msg::SamplingConfig & ros_message)
{
  // Member: n_prev
  cdr >> ros_message.n_prev;

  // Member: n_probs
  cdr >> ros_message.n_probs;

  // Member: min_keep
  cdr >> ros_message.min_keep;

  // Member: ignore_eos
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ignore_eos = tmp ? true : false;
  }

  // Member: logit_bias
  llama_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.logit_bias);

  // Member: temp
  cdr >> ros_message.temp;

  // Member: dynatemp_range
  cdr >> ros_message.dynatemp_range;

  // Member: dynatemp_exponent
  cdr >> ros_message.dynatemp_exponent;

  // Member: top_k
  cdr >> ros_message.top_k;

  // Member: top_p
  cdr >> ros_message.top_p;

  // Member: min_p
  cdr >> ros_message.min_p;

  // Member: tfs_z
  cdr >> ros_message.tfs_z;

  // Member: typical_p
  cdr >> ros_message.typical_p;

  // Member: penalty_last_n
  cdr >> ros_message.penalty_last_n;

  // Member: penalty_repeat
  cdr >> ros_message.penalty_repeat;

  // Member: penalty_freq
  cdr >> ros_message.penalty_freq;

  // Member: penalty_present
  cdr >> ros_message.penalty_present;

  // Member: mirostat
  cdr >> ros_message.mirostat;

  // Member: mirostat_eta
  cdr >> ros_message.mirostat_eta;

  // Member: mirostat_tau
  cdr >> ros_message.mirostat_tau;

  // Member: penalize_nl
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.penalize_nl = tmp ? true : false;
  }

  // Member: samplers_sequence
  cdr >> ros_message.samplers_sequence;

  // Member: grammar
  cdr >> ros_message.grammar;

  // Member: grammar_schema
  cdr >> ros_message.grammar_schema;

  // Member: penalty_prompt_tokens
  {
    cdr >> ros_message.penalty_prompt_tokens;
  }

  // Member: use_penalty_prompt_tokens
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.use_penalty_prompt_tokens = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_llama_msgs
get_serialized_size(
  const llama_msgs::msg::SamplingConfig & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: n_prev
  {
    size_t item_size = sizeof(ros_message.n_prev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: n_probs
  {
    size_t item_size = sizeof(ros_message.n_probs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: min_keep
  {
    size_t item_size = sizeof(ros_message.min_keep);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ignore_eos
  {
    size_t item_size = sizeof(ros_message.ignore_eos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: logit_bias

  current_alignment +=
    llama_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.logit_bias, current_alignment);
  // Member: temp
  {
    size_t item_size = sizeof(ros_message.temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dynatemp_range
  {
    size_t item_size = sizeof(ros_message.dynatemp_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dynatemp_exponent
  {
    size_t item_size = sizeof(ros_message.dynatemp_exponent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: top_k
  {
    size_t item_size = sizeof(ros_message.top_k);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: top_p
  {
    size_t item_size = sizeof(ros_message.top_p);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: min_p
  {
    size_t item_size = sizeof(ros_message.min_p);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tfs_z
  {
    size_t item_size = sizeof(ros_message.tfs_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: typical_p
  {
    size_t item_size = sizeof(ros_message.typical_p);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: penalty_last_n
  {
    size_t item_size = sizeof(ros_message.penalty_last_n);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: penalty_repeat
  {
    size_t item_size = sizeof(ros_message.penalty_repeat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: penalty_freq
  {
    size_t item_size = sizeof(ros_message.penalty_freq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: penalty_present
  {
    size_t item_size = sizeof(ros_message.penalty_present);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mirostat
  {
    size_t item_size = sizeof(ros_message.mirostat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mirostat_eta
  {
    size_t item_size = sizeof(ros_message.mirostat_eta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mirostat_tau
  {
    size_t item_size = sizeof(ros_message.mirostat_tau);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: penalize_nl
  {
    size_t item_size = sizeof(ros_message.penalize_nl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: samplers_sequence
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.samplers_sequence.size() + 1);
  // Member: grammar
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.grammar.size() + 1);
  // Member: grammar_schema
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.grammar_schema.size() + 1);
  // Member: penalty_prompt_tokens
  {
    size_t array_size = ros_message.penalty_prompt_tokens.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.penalty_prompt_tokens[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: use_penalty_prompt_tokens
  {
    size_t item_size = sizeof(ros_message.use_penalty_prompt_tokens);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_llama_msgs
max_serialized_size_SamplingConfig(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: n_prev
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: n_probs
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: min_keep
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ignore_eos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: logit_bias
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        llama_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_LogitBiasArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: temp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: dynatemp_range
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: dynatemp_exponent
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: top_k
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: top_p
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: min_p
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tfs_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: typical_p
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: penalty_last_n
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: penalty_repeat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: penalty_freq
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: penalty_present
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mirostat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mirostat_eta
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mirostat_tau
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: penalize_nl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: samplers_sequence
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: grammar
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: grammar_schema
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: penalty_prompt_tokens
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: use_penalty_prompt_tokens
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = llama_msgs::msg::SamplingConfig;
    is_plain =
      (
      offsetof(DataType, use_penalty_prompt_tokens) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SamplingConfig__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const llama_msgs::msg::SamplingConfig *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SamplingConfig__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<llama_msgs::msg::SamplingConfig *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SamplingConfig__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const llama_msgs::msg::SamplingConfig *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SamplingConfig__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SamplingConfig(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SamplingConfig__callbacks = {
  "llama_msgs::msg",
  "SamplingConfig",
  _SamplingConfig__cdr_serialize,
  _SamplingConfig__cdr_deserialize,
  _SamplingConfig__get_serialized_size,
  _SamplingConfig__max_serialized_size
};

static rosidl_message_type_support_t _SamplingConfig__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SamplingConfig__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace llama_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_llama_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<llama_msgs::msg::SamplingConfig>()
{
  return &llama_msgs::msg::typesupport_fastrtps_cpp::_SamplingConfig__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, llama_msgs, msg, SamplingConfig)() {
  return &llama_msgs::msg::typesupport_fastrtps_cpp::_SamplingConfig__handle;
}

#ifdef __cplusplus
}
#endif
