// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from llama_msgs:msg/SamplingConfig.idl
// generated code does not contain a copyright notice
#include "llama_msgs/msg/detail/sampling_config__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "llama_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "llama_msgs/msg/detail/sampling_config__struct.h"
#include "llama_msgs/msg/detail/sampling_config__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "llama_msgs/msg/detail/logit_bias_array__functions.h"  // logit_bias
#include "rosidl_runtime_c/primitives_sequence.h"  // penalty_prompt_tokens
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // penalty_prompt_tokens
#include "rosidl_runtime_c/string.h"  // grammar, grammar_schema, samplers_sequence
#include "rosidl_runtime_c/string_functions.h"  // grammar, grammar_schema, samplers_sequence

// forward declare type support functions
size_t get_serialized_size_llama_msgs__msg__LogitBiasArray(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_llama_msgs__msg__LogitBiasArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, llama_msgs, msg, LogitBiasArray)();


using _SamplingConfig__ros_msg_type = llama_msgs__msg__SamplingConfig;

static bool _SamplingConfig__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SamplingConfig__ros_msg_type * ros_message = static_cast<const _SamplingConfig__ros_msg_type *>(untyped_ros_message);
  // Field name: n_prev
  {
    cdr << ros_message->n_prev;
  }

  // Field name: n_probs
  {
    cdr << ros_message->n_probs;
  }

  // Field name: min_keep
  {
    cdr << ros_message->min_keep;
  }

  // Field name: ignore_eos
  {
    cdr << (ros_message->ignore_eos ? true : false);
  }

  // Field name: logit_bias
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, llama_msgs, msg, LogitBiasArray
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->logit_bias, cdr))
    {
      return false;
    }
  }

  // Field name: temp
  {
    cdr << ros_message->temp;
  }

  // Field name: dynatemp_range
  {
    cdr << ros_message->dynatemp_range;
  }

  // Field name: dynatemp_exponent
  {
    cdr << ros_message->dynatemp_exponent;
  }

  // Field name: top_k
  {
    cdr << ros_message->top_k;
  }

  // Field name: top_p
  {
    cdr << ros_message->top_p;
  }

  // Field name: min_p
  {
    cdr << ros_message->min_p;
  }

  // Field name: tfs_z
  {
    cdr << ros_message->tfs_z;
  }

  // Field name: typical_p
  {
    cdr << ros_message->typical_p;
  }

  // Field name: penalty_last_n
  {
    cdr << ros_message->penalty_last_n;
  }

  // Field name: penalty_repeat
  {
    cdr << ros_message->penalty_repeat;
  }

  // Field name: penalty_freq
  {
    cdr << ros_message->penalty_freq;
  }

  // Field name: penalty_present
  {
    cdr << ros_message->penalty_present;
  }

  // Field name: mirostat
  {
    cdr << ros_message->mirostat;
  }

  // Field name: mirostat_eta
  {
    cdr << ros_message->mirostat_eta;
  }

  // Field name: mirostat_tau
  {
    cdr << ros_message->mirostat_tau;
  }

  // Field name: penalize_nl
  {
    cdr << (ros_message->penalize_nl ? true : false);
  }

  // Field name: samplers_sequence
  {
    const rosidl_runtime_c__String * str = &ros_message->samplers_sequence;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: grammar
  {
    const rosidl_runtime_c__String * str = &ros_message->grammar;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: grammar_schema
  {
    const rosidl_runtime_c__String * str = &ros_message->grammar_schema;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: penalty_prompt_tokens
  {
    size_t size = ros_message->penalty_prompt_tokens.size;
    auto array_ptr = ros_message->penalty_prompt_tokens.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: use_penalty_prompt_tokens
  {
    cdr << (ros_message->use_penalty_prompt_tokens ? true : false);
  }

  return true;
}

static bool _SamplingConfig__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SamplingConfig__ros_msg_type * ros_message = static_cast<_SamplingConfig__ros_msg_type *>(untyped_ros_message);
  // Field name: n_prev
  {
    cdr >> ros_message->n_prev;
  }

  // Field name: n_probs
  {
    cdr >> ros_message->n_probs;
  }

  // Field name: min_keep
  {
    cdr >> ros_message->min_keep;
  }

  // Field name: ignore_eos
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ignore_eos = tmp ? true : false;
  }

  // Field name: logit_bias
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, llama_msgs, msg, LogitBiasArray
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->logit_bias))
    {
      return false;
    }
  }

  // Field name: temp
  {
    cdr >> ros_message->temp;
  }

  // Field name: dynatemp_range
  {
    cdr >> ros_message->dynatemp_range;
  }

  // Field name: dynatemp_exponent
  {
    cdr >> ros_message->dynatemp_exponent;
  }

  // Field name: top_k
  {
    cdr >> ros_message->top_k;
  }

  // Field name: top_p
  {
    cdr >> ros_message->top_p;
  }

  // Field name: min_p
  {
    cdr >> ros_message->min_p;
  }

  // Field name: tfs_z
  {
    cdr >> ros_message->tfs_z;
  }

  // Field name: typical_p
  {
    cdr >> ros_message->typical_p;
  }

  // Field name: penalty_last_n
  {
    cdr >> ros_message->penalty_last_n;
  }

  // Field name: penalty_repeat
  {
    cdr >> ros_message->penalty_repeat;
  }

  // Field name: penalty_freq
  {
    cdr >> ros_message->penalty_freq;
  }

  // Field name: penalty_present
  {
    cdr >> ros_message->penalty_present;
  }

  // Field name: mirostat
  {
    cdr >> ros_message->mirostat;
  }

  // Field name: mirostat_eta
  {
    cdr >> ros_message->mirostat_eta;
  }

  // Field name: mirostat_tau
  {
    cdr >> ros_message->mirostat_tau;
  }

  // Field name: penalize_nl
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->penalize_nl = tmp ? true : false;
  }

  // Field name: samplers_sequence
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->samplers_sequence.data) {
      rosidl_runtime_c__String__init(&ros_message->samplers_sequence);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->samplers_sequence,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'samplers_sequence'\n");
      return false;
    }
  }

  // Field name: grammar
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->grammar.data) {
      rosidl_runtime_c__String__init(&ros_message->grammar);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->grammar,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'grammar'\n");
      return false;
    }
  }

  // Field name: grammar_schema
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->grammar_schema.data) {
      rosidl_runtime_c__String__init(&ros_message->grammar_schema);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->grammar_schema,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'grammar_schema'\n");
      return false;
    }
  }

  // Field name: penalty_prompt_tokens
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->penalty_prompt_tokens.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->penalty_prompt_tokens);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->penalty_prompt_tokens, size)) {
      fprintf(stderr, "failed to create array for field 'penalty_prompt_tokens'");
      return false;
    }
    auto array_ptr = ros_message->penalty_prompt_tokens.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: use_penalty_prompt_tokens
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->use_penalty_prompt_tokens = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_llama_msgs
size_t get_serialized_size_llama_msgs__msg__SamplingConfig(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SamplingConfig__ros_msg_type * ros_message = static_cast<const _SamplingConfig__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name n_prev
  {
    size_t item_size = sizeof(ros_message->n_prev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name n_probs
  {
    size_t item_size = sizeof(ros_message->n_probs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name min_keep
  {
    size_t item_size = sizeof(ros_message->min_keep);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ignore_eos
  {
    size_t item_size = sizeof(ros_message->ignore_eos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name logit_bias

  current_alignment += get_serialized_size_llama_msgs__msg__LogitBiasArray(
    &(ros_message->logit_bias), current_alignment);
  // field.name temp
  {
    size_t item_size = sizeof(ros_message->temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dynatemp_range
  {
    size_t item_size = sizeof(ros_message->dynatemp_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dynatemp_exponent
  {
    size_t item_size = sizeof(ros_message->dynatemp_exponent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name top_k
  {
    size_t item_size = sizeof(ros_message->top_k);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name top_p
  {
    size_t item_size = sizeof(ros_message->top_p);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name min_p
  {
    size_t item_size = sizeof(ros_message->min_p);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tfs_z
  {
    size_t item_size = sizeof(ros_message->tfs_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name typical_p
  {
    size_t item_size = sizeof(ros_message->typical_p);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name penalty_last_n
  {
    size_t item_size = sizeof(ros_message->penalty_last_n);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name penalty_repeat
  {
    size_t item_size = sizeof(ros_message->penalty_repeat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name penalty_freq
  {
    size_t item_size = sizeof(ros_message->penalty_freq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name penalty_present
  {
    size_t item_size = sizeof(ros_message->penalty_present);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mirostat
  {
    size_t item_size = sizeof(ros_message->mirostat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mirostat_eta
  {
    size_t item_size = sizeof(ros_message->mirostat_eta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mirostat_tau
  {
    size_t item_size = sizeof(ros_message->mirostat_tau);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name penalize_nl
  {
    size_t item_size = sizeof(ros_message->penalize_nl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name samplers_sequence
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->samplers_sequence.size + 1);
  // field.name grammar
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->grammar.size + 1);
  // field.name grammar_schema
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->grammar_schema.size + 1);
  // field.name penalty_prompt_tokens
  {
    size_t array_size = ros_message->penalty_prompt_tokens.size;
    auto array_ptr = ros_message->penalty_prompt_tokens.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name use_penalty_prompt_tokens
  {
    size_t item_size = sizeof(ros_message->use_penalty_prompt_tokens);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SamplingConfig__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_llama_msgs__msg__SamplingConfig(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_llama_msgs
size_t max_serialized_size_llama_msgs__msg__SamplingConfig(
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

  // member: n_prev
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: n_probs
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: min_keep
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ignore_eos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: logit_bias
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_llama_msgs__msg__LogitBiasArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: temp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dynatemp_range
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dynatemp_exponent
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: top_k
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: top_p
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: min_p
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tfs_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: typical_p
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: penalty_last_n
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: penalty_repeat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: penalty_freq
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: penalty_present
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mirostat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mirostat_eta
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mirostat_tau
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: penalize_nl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: samplers_sequence
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
  // member: grammar
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
  // member: grammar_schema
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
  // member: penalty_prompt_tokens
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
  // member: use_penalty_prompt_tokens
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
    using DataType = llama_msgs__msg__SamplingConfig;
    is_plain =
      (
      offsetof(DataType, use_penalty_prompt_tokens) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SamplingConfig__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_llama_msgs__msg__SamplingConfig(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SamplingConfig = {
  "llama_msgs::msg",
  "SamplingConfig",
  _SamplingConfig__cdr_serialize,
  _SamplingConfig__cdr_deserialize,
  _SamplingConfig__get_serialized_size,
  _SamplingConfig__max_serialized_size
};

static rosidl_message_type_support_t _SamplingConfig__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SamplingConfig,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, llama_msgs, msg, SamplingConfig)() {
  return &_SamplingConfig__type_support;
}

#if defined(__cplusplus)
}
#endif
