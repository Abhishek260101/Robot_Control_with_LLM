// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from llama_msgs:msg/TokenProb.idl
// generated code does not contain a copyright notice
#include "llama_msgs/msg/detail/token_prob__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `token_text`
#include "rosidl_runtime_c/string_functions.h"

bool
llama_msgs__msg__TokenProb__init(llama_msgs__msg__TokenProb * msg)
{
  if (!msg) {
    return false;
  }
  // token
  // probability
  // token_text
  if (!rosidl_runtime_c__String__init(&msg->token_text)) {
    llama_msgs__msg__TokenProb__fini(msg);
    return false;
  }
  return true;
}

void
llama_msgs__msg__TokenProb__fini(llama_msgs__msg__TokenProb * msg)
{
  if (!msg) {
    return;
  }
  // token
  // probability
  // token_text
  rosidl_runtime_c__String__fini(&msg->token_text);
}

bool
llama_msgs__msg__TokenProb__are_equal(const llama_msgs__msg__TokenProb * lhs, const llama_msgs__msg__TokenProb * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // token
  if (lhs->token != rhs->token) {
    return false;
  }
  // probability
  if (lhs->probability != rhs->probability) {
    return false;
  }
  // token_text
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->token_text), &(rhs->token_text)))
  {
    return false;
  }
  return true;
}

bool
llama_msgs__msg__TokenProb__copy(
  const llama_msgs__msg__TokenProb * input,
  llama_msgs__msg__TokenProb * output)
{
  if (!input || !output) {
    return false;
  }
  // token
  output->token = input->token;
  // probability
  output->probability = input->probability;
  // token_text
  if (!rosidl_runtime_c__String__copy(
      &(input->token_text), &(output->token_text)))
  {
    return false;
  }
  return true;
}

llama_msgs__msg__TokenProb *
llama_msgs__msg__TokenProb__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__msg__TokenProb * msg = (llama_msgs__msg__TokenProb *)allocator.allocate(sizeof(llama_msgs__msg__TokenProb), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(llama_msgs__msg__TokenProb));
  bool success = llama_msgs__msg__TokenProb__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
llama_msgs__msg__TokenProb__destroy(llama_msgs__msg__TokenProb * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    llama_msgs__msg__TokenProb__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
llama_msgs__msg__TokenProb__Sequence__init(llama_msgs__msg__TokenProb__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__msg__TokenProb * data = NULL;

  if (size) {
    data = (llama_msgs__msg__TokenProb *)allocator.zero_allocate(size, sizeof(llama_msgs__msg__TokenProb), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = llama_msgs__msg__TokenProb__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        llama_msgs__msg__TokenProb__fini(&data[i - 1]);
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
llama_msgs__msg__TokenProb__Sequence__fini(llama_msgs__msg__TokenProb__Sequence * array)
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
      llama_msgs__msg__TokenProb__fini(&array->data[i]);
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

llama_msgs__msg__TokenProb__Sequence *
llama_msgs__msg__TokenProb__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__msg__TokenProb__Sequence * array = (llama_msgs__msg__TokenProb__Sequence *)allocator.allocate(sizeof(llama_msgs__msg__TokenProb__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = llama_msgs__msg__TokenProb__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
llama_msgs__msg__TokenProb__Sequence__destroy(llama_msgs__msg__TokenProb__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    llama_msgs__msg__TokenProb__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
llama_msgs__msg__TokenProb__Sequence__are_equal(const llama_msgs__msg__TokenProb__Sequence * lhs, const llama_msgs__msg__TokenProb__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!llama_msgs__msg__TokenProb__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
llama_msgs__msg__TokenProb__Sequence__copy(
  const llama_msgs__msg__TokenProb__Sequence * input,
  llama_msgs__msg__TokenProb__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(llama_msgs__msg__TokenProb);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    llama_msgs__msg__TokenProb * data =
      (llama_msgs__msg__TokenProb *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!llama_msgs__msg__TokenProb__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          llama_msgs__msg__TokenProb__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!llama_msgs__msg__TokenProb__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
