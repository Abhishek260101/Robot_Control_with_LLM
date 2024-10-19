// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from llama_msgs:msg/LogitBias.idl
// generated code does not contain a copyright notice
#include "llama_msgs/msg/detail/logit_bias__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
llama_msgs__msg__LogitBias__init(llama_msgs__msg__LogitBias * msg)
{
  if (!msg) {
    return false;
  }
  // token
  // bias
  return true;
}

void
llama_msgs__msg__LogitBias__fini(llama_msgs__msg__LogitBias * msg)
{
  if (!msg) {
    return;
  }
  // token
  // bias
}

bool
llama_msgs__msg__LogitBias__are_equal(const llama_msgs__msg__LogitBias * lhs, const llama_msgs__msg__LogitBias * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // token
  if (lhs->token != rhs->token) {
    return false;
  }
  // bias
  if (lhs->bias != rhs->bias) {
    return false;
  }
  return true;
}

bool
llama_msgs__msg__LogitBias__copy(
  const llama_msgs__msg__LogitBias * input,
  llama_msgs__msg__LogitBias * output)
{
  if (!input || !output) {
    return false;
  }
  // token
  output->token = input->token;
  // bias
  output->bias = input->bias;
  return true;
}

llama_msgs__msg__LogitBias *
llama_msgs__msg__LogitBias__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__msg__LogitBias * msg = (llama_msgs__msg__LogitBias *)allocator.allocate(sizeof(llama_msgs__msg__LogitBias), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(llama_msgs__msg__LogitBias));
  bool success = llama_msgs__msg__LogitBias__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
llama_msgs__msg__LogitBias__destroy(llama_msgs__msg__LogitBias * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    llama_msgs__msg__LogitBias__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
llama_msgs__msg__LogitBias__Sequence__init(llama_msgs__msg__LogitBias__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__msg__LogitBias * data = NULL;

  if (size) {
    data = (llama_msgs__msg__LogitBias *)allocator.zero_allocate(size, sizeof(llama_msgs__msg__LogitBias), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = llama_msgs__msg__LogitBias__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        llama_msgs__msg__LogitBias__fini(&data[i - 1]);
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
llama_msgs__msg__LogitBias__Sequence__fini(llama_msgs__msg__LogitBias__Sequence * array)
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
      llama_msgs__msg__LogitBias__fini(&array->data[i]);
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

llama_msgs__msg__LogitBias__Sequence *
llama_msgs__msg__LogitBias__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__msg__LogitBias__Sequence * array = (llama_msgs__msg__LogitBias__Sequence *)allocator.allocate(sizeof(llama_msgs__msg__LogitBias__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = llama_msgs__msg__LogitBias__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
llama_msgs__msg__LogitBias__Sequence__destroy(llama_msgs__msg__LogitBias__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    llama_msgs__msg__LogitBias__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
llama_msgs__msg__LogitBias__Sequence__are_equal(const llama_msgs__msg__LogitBias__Sequence * lhs, const llama_msgs__msg__LogitBias__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!llama_msgs__msg__LogitBias__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
llama_msgs__msg__LogitBias__Sequence__copy(
  const llama_msgs__msg__LogitBias__Sequence * input,
  llama_msgs__msg__LogitBias__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(llama_msgs__msg__LogitBias);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    llama_msgs__msg__LogitBias * data =
      (llama_msgs__msg__LogitBias *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!llama_msgs__msg__LogitBias__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          llama_msgs__msg__LogitBias__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!llama_msgs__msg__LogitBias__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
