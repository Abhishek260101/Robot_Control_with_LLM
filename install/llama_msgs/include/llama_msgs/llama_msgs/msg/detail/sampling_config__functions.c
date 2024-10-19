// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from llama_msgs:msg/SamplingConfig.idl
// generated code does not contain a copyright notice
#include "llama_msgs/msg/detail/sampling_config__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `logit_bias`
#include "llama_msgs/msg/detail/logit_bias_array__functions.h"
// Member `samplers_sequence`
// Member `grammar`
// Member `grammar_schema`
#include "rosidl_runtime_c/string_functions.h"
// Member `penalty_prompt_tokens`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
llama_msgs__msg__SamplingConfig__init(llama_msgs__msg__SamplingConfig * msg)
{
  if (!msg) {
    return false;
  }
  // n_prev
  msg->n_prev = 64l;
  // n_probs
  msg->n_probs = 1l;
  // min_keep
  msg->min_keep = 0l;
  // ignore_eos
  msg->ignore_eos = false;
  // logit_bias
  if (!llama_msgs__msg__LogitBiasArray__init(&msg->logit_bias)) {
    llama_msgs__msg__SamplingConfig__fini(msg);
    return false;
  }
  // temp
  msg->temp = 0.8f;
  // dynatemp_range
  msg->dynatemp_range = 0.0f;
  // dynatemp_exponent
  msg->dynatemp_exponent = 1.0f;
  // top_k
  msg->top_k = 40l;
  // top_p
  msg->top_p = 0.95f;
  // min_p
  msg->min_p = 0.05f;
  // tfs_z
  msg->tfs_z = 1.0f;
  // typical_p
  msg->typical_p = 1.0f;
  // penalty_last_n
  msg->penalty_last_n = 64l;
  // penalty_repeat
  msg->penalty_repeat = 1.0f;
  // penalty_freq
  msg->penalty_freq = 0.0f;
  // penalty_present
  msg->penalty_present = 0.0f;
  // mirostat
  msg->mirostat = 0l;
  // mirostat_eta
  msg->mirostat_eta = 0.1f;
  // mirostat_tau
  msg->mirostat_tau = 5.0f;
  // penalize_nl
  msg->penalize_nl = false;
  // samplers_sequence
  if (!rosidl_runtime_c__String__init(&msg->samplers_sequence)) {
    llama_msgs__msg__SamplingConfig__fini(msg);
    return false;
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->samplers_sequence, "kfypmt");
    if (!success) {
      goto abort_init_0;
    }
  }
  // grammar
  if (!rosidl_runtime_c__String__init(&msg->grammar)) {
    llama_msgs__msg__SamplingConfig__fini(msg);
    return false;
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->grammar, "");
    if (!success) {
      goto abort_init_1;
    }
  }
  // grammar_schema
  if (!rosidl_runtime_c__String__init(&msg->grammar_schema)) {
    llama_msgs__msg__SamplingConfig__fini(msg);
    return false;
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->grammar_schema, "");
    if (!success) {
      goto abort_init_2;
    }
  }
  // penalty_prompt_tokens
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->penalty_prompt_tokens, 0)) {
    llama_msgs__msg__SamplingConfig__fini(msg);
    return false;
  }
  // use_penalty_prompt_tokens
  msg->use_penalty_prompt_tokens = false;
  return true;
abort_init_2:
  rosidl_runtime_c__String__fini(&msg->grammar);
abort_init_1:
  rosidl_runtime_c__String__fini(&msg->samplers_sequence);
abort_init_0:
  return false;
}

void
llama_msgs__msg__SamplingConfig__fini(llama_msgs__msg__SamplingConfig * msg)
{
  if (!msg) {
    return;
  }
  // n_prev
  // n_probs
  // min_keep
  // ignore_eos
  // logit_bias
  llama_msgs__msg__LogitBiasArray__fini(&msg->logit_bias);
  // temp
  // dynatemp_range
  // dynatemp_exponent
  // top_k
  // top_p
  // min_p
  // tfs_z
  // typical_p
  // penalty_last_n
  // penalty_repeat
  // penalty_freq
  // penalty_present
  // mirostat
  // mirostat_eta
  // mirostat_tau
  // penalize_nl
  // samplers_sequence
  rosidl_runtime_c__String__fini(&msg->samplers_sequence);
  // grammar
  rosidl_runtime_c__String__fini(&msg->grammar);
  // grammar_schema
  rosidl_runtime_c__String__fini(&msg->grammar_schema);
  // penalty_prompt_tokens
  rosidl_runtime_c__int32__Sequence__fini(&msg->penalty_prompt_tokens);
  // use_penalty_prompt_tokens
}

bool
llama_msgs__msg__SamplingConfig__are_equal(const llama_msgs__msg__SamplingConfig * lhs, const llama_msgs__msg__SamplingConfig * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // n_prev
  if (lhs->n_prev != rhs->n_prev) {
    return false;
  }
  // n_probs
  if (lhs->n_probs != rhs->n_probs) {
    return false;
  }
  // min_keep
  if (lhs->min_keep != rhs->min_keep) {
    return false;
  }
  // ignore_eos
  if (lhs->ignore_eos != rhs->ignore_eos) {
    return false;
  }
  // logit_bias
  if (!llama_msgs__msg__LogitBiasArray__are_equal(
      &(lhs->logit_bias), &(rhs->logit_bias)))
  {
    return false;
  }
  // temp
  if (lhs->temp != rhs->temp) {
    return false;
  }
  // dynatemp_range
  if (lhs->dynatemp_range != rhs->dynatemp_range) {
    return false;
  }
  // dynatemp_exponent
  if (lhs->dynatemp_exponent != rhs->dynatemp_exponent) {
    return false;
  }
  // top_k
  if (lhs->top_k != rhs->top_k) {
    return false;
  }
  // top_p
  if (lhs->top_p != rhs->top_p) {
    return false;
  }
  // min_p
  if (lhs->min_p != rhs->min_p) {
    return false;
  }
  // tfs_z
  if (lhs->tfs_z != rhs->tfs_z) {
    return false;
  }
  // typical_p
  if (lhs->typical_p != rhs->typical_p) {
    return false;
  }
  // penalty_last_n
  if (lhs->penalty_last_n != rhs->penalty_last_n) {
    return false;
  }
  // penalty_repeat
  if (lhs->penalty_repeat != rhs->penalty_repeat) {
    return false;
  }
  // penalty_freq
  if (lhs->penalty_freq != rhs->penalty_freq) {
    return false;
  }
  // penalty_present
  if (lhs->penalty_present != rhs->penalty_present) {
    return false;
  }
  // mirostat
  if (lhs->mirostat != rhs->mirostat) {
    return false;
  }
  // mirostat_eta
  if (lhs->mirostat_eta != rhs->mirostat_eta) {
    return false;
  }
  // mirostat_tau
  if (lhs->mirostat_tau != rhs->mirostat_tau) {
    return false;
  }
  // penalize_nl
  if (lhs->penalize_nl != rhs->penalize_nl) {
    return false;
  }
  // samplers_sequence
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->samplers_sequence), &(rhs->samplers_sequence)))
  {
    return false;
  }
  // grammar
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->grammar), &(rhs->grammar)))
  {
    return false;
  }
  // grammar_schema
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->grammar_schema), &(rhs->grammar_schema)))
  {
    return false;
  }
  // penalty_prompt_tokens
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->penalty_prompt_tokens), &(rhs->penalty_prompt_tokens)))
  {
    return false;
  }
  // use_penalty_prompt_tokens
  if (lhs->use_penalty_prompt_tokens != rhs->use_penalty_prompt_tokens) {
    return false;
  }
  return true;
}

bool
llama_msgs__msg__SamplingConfig__copy(
  const llama_msgs__msg__SamplingConfig * input,
  llama_msgs__msg__SamplingConfig * output)
{
  if (!input || !output) {
    return false;
  }
  // n_prev
  output->n_prev = input->n_prev;
  // n_probs
  output->n_probs = input->n_probs;
  // min_keep
  output->min_keep = input->min_keep;
  // ignore_eos
  output->ignore_eos = input->ignore_eos;
  // logit_bias
  if (!llama_msgs__msg__LogitBiasArray__copy(
      &(input->logit_bias), &(output->logit_bias)))
  {
    return false;
  }
  // temp
  output->temp = input->temp;
  // dynatemp_range
  output->dynatemp_range = input->dynatemp_range;
  // dynatemp_exponent
  output->dynatemp_exponent = input->dynatemp_exponent;
  // top_k
  output->top_k = input->top_k;
  // top_p
  output->top_p = input->top_p;
  // min_p
  output->min_p = input->min_p;
  // tfs_z
  output->tfs_z = input->tfs_z;
  // typical_p
  output->typical_p = input->typical_p;
  // penalty_last_n
  output->penalty_last_n = input->penalty_last_n;
  // penalty_repeat
  output->penalty_repeat = input->penalty_repeat;
  // penalty_freq
  output->penalty_freq = input->penalty_freq;
  // penalty_present
  output->penalty_present = input->penalty_present;
  // mirostat
  output->mirostat = input->mirostat;
  // mirostat_eta
  output->mirostat_eta = input->mirostat_eta;
  // mirostat_tau
  output->mirostat_tau = input->mirostat_tau;
  // penalize_nl
  output->penalize_nl = input->penalize_nl;
  // samplers_sequence
  if (!rosidl_runtime_c__String__copy(
      &(input->samplers_sequence), &(output->samplers_sequence)))
  {
    return false;
  }
  // grammar
  if (!rosidl_runtime_c__String__copy(
      &(input->grammar), &(output->grammar)))
  {
    return false;
  }
  // grammar_schema
  if (!rosidl_runtime_c__String__copy(
      &(input->grammar_schema), &(output->grammar_schema)))
  {
    return false;
  }
  // penalty_prompt_tokens
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->penalty_prompt_tokens), &(output->penalty_prompt_tokens)))
  {
    return false;
  }
  // use_penalty_prompt_tokens
  output->use_penalty_prompt_tokens = input->use_penalty_prompt_tokens;
  return true;
}

llama_msgs__msg__SamplingConfig *
llama_msgs__msg__SamplingConfig__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__msg__SamplingConfig * msg = (llama_msgs__msg__SamplingConfig *)allocator.allocate(sizeof(llama_msgs__msg__SamplingConfig), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(llama_msgs__msg__SamplingConfig));
  bool success = llama_msgs__msg__SamplingConfig__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
llama_msgs__msg__SamplingConfig__destroy(llama_msgs__msg__SamplingConfig * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    llama_msgs__msg__SamplingConfig__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
llama_msgs__msg__SamplingConfig__Sequence__init(llama_msgs__msg__SamplingConfig__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__msg__SamplingConfig * data = NULL;

  if (size) {
    data = (llama_msgs__msg__SamplingConfig *)allocator.zero_allocate(size, sizeof(llama_msgs__msg__SamplingConfig), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = llama_msgs__msg__SamplingConfig__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        llama_msgs__msg__SamplingConfig__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
llama_msgs__msg__SamplingConfig__Sequence__fini(llama_msgs__msg__SamplingConfig__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      llama_msgs__msg__SamplingConfig__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

llama_msgs__msg__SamplingConfig__Sequence *
llama_msgs__msg__SamplingConfig__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__msg__SamplingConfig__Sequence * array = (llama_msgs__msg__SamplingConfig__Sequence *)allocator.allocate(sizeof(llama_msgs__msg__SamplingConfig__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = llama_msgs__msg__SamplingConfig__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
llama_msgs__msg__SamplingConfig__Sequence__destroy(llama_msgs__msg__SamplingConfig__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    llama_msgs__msg__SamplingConfig__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
llama_msgs__msg__SamplingConfig__Sequence__are_equal(const llama_msgs__msg__SamplingConfig__Sequence * lhs, const llama_msgs__msg__SamplingConfig__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!llama_msgs__msg__SamplingConfig__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
llama_msgs__msg__SamplingConfig__Sequence__copy(
  const llama_msgs__msg__SamplingConfig__Sequence * input,
  llama_msgs__msg__SamplingConfig__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(llama_msgs__msg__SamplingConfig);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    llama_msgs__msg__SamplingConfig * data =
      (llama_msgs__msg__SamplingConfig *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!llama_msgs__msg__SamplingConfig__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          llama_msgs__msg__SamplingConfig__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!llama_msgs__msg__SamplingConfig__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
