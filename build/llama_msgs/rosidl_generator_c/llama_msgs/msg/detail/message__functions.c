// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from llama_msgs:msg/Message.idl
// generated code does not contain a copyright notice
#include "llama_msgs/msg/detail/message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `role`
// Member `content`
#include "rosidl_runtime_c/string_functions.h"

bool
llama_msgs__msg__Message__init(llama_msgs__msg__Message * msg)
{
  if (!msg) {
    return false;
  }
  // role
  if (!rosidl_runtime_c__String__init(&msg->role)) {
    llama_msgs__msg__Message__fini(msg);
    return false;
  }
  // content
  if (!rosidl_runtime_c__String__init(&msg->content)) {
    llama_msgs__msg__Message__fini(msg);
    return false;
  }
  return true;
}

void
llama_msgs__msg__Message__fini(llama_msgs__msg__Message * msg)
{
  if (!msg) {
    return;
  }
  // role
  rosidl_runtime_c__String__fini(&msg->role);
  // content
  rosidl_runtime_c__String__fini(&msg->content);
}

bool
llama_msgs__msg__Message__are_equal(const llama_msgs__msg__Message * lhs, const llama_msgs__msg__Message * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // role
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->role), &(rhs->role)))
  {
    return false;
  }
  // content
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->content), &(rhs->content)))
  {
    return false;
  }
  return true;
}

bool
llama_msgs__msg__Message__copy(
  const llama_msgs__msg__Message * input,
  llama_msgs__msg__Message * output)
{
  if (!input || !output) {
    return false;
  }
  // role
  if (!rosidl_runtime_c__String__copy(
      &(input->role), &(output->role)))
  {
    return false;
  }
  // content
  if (!rosidl_runtime_c__String__copy(
      &(input->content), &(output->content)))
  {
    return false;
  }
  return true;
}

llama_msgs__msg__Message *
llama_msgs__msg__Message__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__msg__Message * msg = (llama_msgs__msg__Message *)allocator.allocate(sizeof(llama_msgs__msg__Message), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(llama_msgs__msg__Message));
  bool success = llama_msgs__msg__Message__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
llama_msgs__msg__Message__destroy(llama_msgs__msg__Message * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    llama_msgs__msg__Message__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
llama_msgs__msg__Message__Sequence__init(llama_msgs__msg__Message__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__msg__Message * data = NULL;

  if (size) {
    data = (llama_msgs__msg__Message *)allocator.zero_allocate(size, sizeof(llama_msgs__msg__Message), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = llama_msgs__msg__Message__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        llama_msgs__msg__Message__fini(&data[i - 1]);
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
llama_msgs__msg__Message__Sequence__fini(llama_msgs__msg__Message__Sequence * array)
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
      llama_msgs__msg__Message__fini(&array->data[i]);
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

llama_msgs__msg__Message__Sequence *
llama_msgs__msg__Message__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__msg__Message__Sequence * array = (llama_msgs__msg__Message__Sequence *)allocator.allocate(sizeof(llama_msgs__msg__Message__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = llama_msgs__msg__Message__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
llama_msgs__msg__Message__Sequence__destroy(llama_msgs__msg__Message__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    llama_msgs__msg__Message__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
llama_msgs__msg__Message__Sequence__are_equal(const llama_msgs__msg__Message__Sequence * lhs, const llama_msgs__msg__Message__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!llama_msgs__msg__Message__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
llama_msgs__msg__Message__Sequence__copy(
  const llama_msgs__msg__Message__Sequence * input,
  llama_msgs__msg__Message__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(llama_msgs__msg__Message);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    llama_msgs__msg__Message * data =
      (llama_msgs__msg__Message *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!llama_msgs__msg__Message__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          llama_msgs__msg__Message__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!llama_msgs__msg__Message__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
