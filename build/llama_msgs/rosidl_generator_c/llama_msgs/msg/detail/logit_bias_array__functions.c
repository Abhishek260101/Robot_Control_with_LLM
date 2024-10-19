// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from llama_msgs:msg/LogitBiasArray.idl
// generated code does not contain a copyright notice
#include "llama_msgs/msg/detail/logit_bias_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data`
#include "llama_msgs/msg/detail/logit_bias__functions.h"

bool
llama_msgs__msg__LogitBiasArray__init(llama_msgs__msg__LogitBiasArray * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!llama_msgs__msg__LogitBias__Sequence__init(&msg->data, 0)) {
    llama_msgs__msg__LogitBiasArray__fini(msg);
    return false;
  }
  return true;
}

void
llama_msgs__msg__LogitBiasArray__fini(llama_msgs__msg__LogitBiasArray * msg)
{
  if (!msg) {
    return;
  }
  // data
  llama_msgs__msg__LogitBias__Sequence__fini(&msg->data);
}

bool
llama_msgs__msg__LogitBiasArray__are_equal(const llama_msgs__msg__LogitBiasArray * lhs, const llama_msgs__msg__LogitBiasArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!llama_msgs__msg__LogitBias__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
llama_msgs__msg__LogitBiasArray__copy(
  const llama_msgs__msg__LogitBiasArray * input,
  llama_msgs__msg__LogitBiasArray * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!llama_msgs__msg__LogitBias__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

llama_msgs__msg__LogitBiasArray *
llama_msgs__msg__LogitBiasArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__msg__LogitBiasArray * msg = (llama_msgs__msg__LogitBiasArray *)allocator.allocate(sizeof(llama_msgs__msg__LogitBiasArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(llama_msgs__msg__LogitBiasArray));
  bool success = llama_msgs__msg__LogitBiasArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
llama_msgs__msg__LogitBiasArray__destroy(llama_msgs__msg__LogitBiasArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    llama_msgs__msg__LogitBiasArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
llama_msgs__msg__LogitBiasArray__Sequence__init(llama_msgs__msg__LogitBiasArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__msg__LogitBiasArray * data = NULL;

  if (size) {
    data = (llama_msgs__msg__LogitBiasArray *)allocator.zero_allocate(size, sizeof(llama_msgs__msg__LogitBiasArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = llama_msgs__msg__LogitBiasArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        llama_msgs__msg__LogitBiasArray__fini(&data[i - 1]);
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
llama_msgs__msg__LogitBiasArray__Sequence__fini(llama_msgs__msg__LogitBiasArray__Sequence * array)
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
      llama_msgs__msg__LogitBiasArray__fini(&array->data[i]);
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

llama_msgs__msg__LogitBiasArray__Sequence *
llama_msgs__msg__LogitBiasArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__msg__LogitBiasArray__Sequence * array = (llama_msgs__msg__LogitBiasArray__Sequence *)allocator.allocate(sizeof(llama_msgs__msg__LogitBiasArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = llama_msgs__msg__LogitBiasArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
llama_msgs__msg__LogitBiasArray__Sequence__destroy(llama_msgs__msg__LogitBiasArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    llama_msgs__msg__LogitBiasArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
llama_msgs__msg__LogitBiasArray__Sequence__are_equal(const llama_msgs__msg__LogitBiasArray__Sequence * lhs, const llama_msgs__msg__LogitBiasArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!llama_msgs__msg__LogitBiasArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
llama_msgs__msg__LogitBiasArray__Sequence__copy(
  const llama_msgs__msg__LogitBiasArray__Sequence * input,
  llama_msgs__msg__LogitBiasArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(llama_msgs__msg__LogitBiasArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    llama_msgs__msg__LogitBiasArray * data =
      (llama_msgs__msg__LogitBiasArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!llama_msgs__msg__LogitBiasArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          llama_msgs__msg__LogitBiasArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!llama_msgs__msg__LogitBiasArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
