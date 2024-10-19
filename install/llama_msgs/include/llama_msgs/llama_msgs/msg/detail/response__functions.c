// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from llama_msgs:msg/Response.idl
// generated code does not contain a copyright notice
#include "llama_msgs/msg/detail/response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `text`
#include "rosidl_runtime_c/string_functions.h"
// Member `tokens`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `probs`
#include "llama_msgs/msg/detail/token_prob_array__functions.h"

bool
llama_msgs__msg__Response__init(llama_msgs__msg__Response * msg)
{
  if (!msg) {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__init(&msg->text)) {
    llama_msgs__msg__Response__fini(msg);
    return false;
  }
  // tokens
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->tokens, 0)) {
    llama_msgs__msg__Response__fini(msg);
    return false;
  }
  // probs
  if (!llama_msgs__msg__TokenProbArray__Sequence__init(&msg->probs, 0)) {
    llama_msgs__msg__Response__fini(msg);
    return false;
  }
  return true;
}

void
llama_msgs__msg__Response__fini(llama_msgs__msg__Response * msg)
{
  if (!msg) {
    return;
  }
  // text
  rosidl_runtime_c__String__fini(&msg->text);
  // tokens
  rosidl_runtime_c__int32__Sequence__fini(&msg->tokens);
  // probs
  llama_msgs__msg__TokenProbArray__Sequence__fini(&msg->probs);
}

bool
llama_msgs__msg__Response__are_equal(const llama_msgs__msg__Response * lhs, const llama_msgs__msg__Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->text), &(rhs->text)))
  {
    return false;
  }
  // tokens
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->tokens), &(rhs->tokens)))
  {
    return false;
  }
  // probs
  if (!llama_msgs__msg__TokenProbArray__Sequence__are_equal(
      &(lhs->probs), &(rhs->probs)))
  {
    return false;
  }
  return true;
}

bool
llama_msgs__msg__Response__copy(
  const llama_msgs__msg__Response * input,
  llama_msgs__msg__Response * output)
{
  if (!input || !output) {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__copy(
      &(input->text), &(output->text)))
  {
    return false;
  }
  // tokens
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->tokens), &(output->tokens)))
  {
    return false;
  }
  // probs
  if (!llama_msgs__msg__TokenProbArray__Sequence__copy(
      &(input->probs), &(output->probs)))
  {
    return false;
  }
  return true;
}

llama_msgs__msg__Response *
llama_msgs__msg__Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__msg__Response * msg = (llama_msgs__msg__Response *)allocator.allocate(sizeof(llama_msgs__msg__Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(llama_msgs__msg__Response));
  bool success = llama_msgs__msg__Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
llama_msgs__msg__Response__destroy(llama_msgs__msg__Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    llama_msgs__msg__Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
llama_msgs__msg__Response__Sequence__init(llama_msgs__msg__Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__msg__Response * data = NULL;

  if (size) {
    data = (llama_msgs__msg__Response *)allocator.zero_allocate(size, sizeof(llama_msgs__msg__Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = llama_msgs__msg__Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        llama_msgs__msg__Response__fini(&data[i - 1]);
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
llama_msgs__msg__Response__Sequence__fini(llama_msgs__msg__Response__Sequence * array)
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
      llama_msgs__msg__Response__fini(&array->data[i]);
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

llama_msgs__msg__Response__Sequence *
llama_msgs__msg__Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__msg__Response__Sequence * array = (llama_msgs__msg__Response__Sequence *)allocator.allocate(sizeof(llama_msgs__msg__Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = llama_msgs__msg__Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
llama_msgs__msg__Response__Sequence__destroy(llama_msgs__msg__Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    llama_msgs__msg__Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
llama_msgs__msg__Response__Sequence__are_equal(const llama_msgs__msg__Response__Sequence * lhs, const llama_msgs__msg__Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!llama_msgs__msg__Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
llama_msgs__msg__Response__Sequence__copy(
  const llama_msgs__msg__Response__Sequence * input,
  llama_msgs__msg__Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(llama_msgs__msg__Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    llama_msgs__msg__Response * data =
      (llama_msgs__msg__Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!llama_msgs__msg__Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          llama_msgs__msg__Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!llama_msgs__msg__Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
