// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from llama_msgs:srv/Tokenize.idl
// generated code does not contain a copyright notice
#include "llama_msgs/srv/detail/tokenize__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `prompt`
#include "rosidl_runtime_c/string_functions.h"

bool
llama_msgs__srv__Tokenize_Request__init(llama_msgs__srv__Tokenize_Request * msg)
{
  if (!msg) {
    return false;
  }
  // prompt
  if (!rosidl_runtime_c__String__init(&msg->prompt)) {
    llama_msgs__srv__Tokenize_Request__fini(msg);
    return false;
  }
  return true;
}

void
llama_msgs__srv__Tokenize_Request__fini(llama_msgs__srv__Tokenize_Request * msg)
{
  if (!msg) {
    return;
  }
  // prompt
  rosidl_runtime_c__String__fini(&msg->prompt);
}

bool
llama_msgs__srv__Tokenize_Request__are_equal(const llama_msgs__srv__Tokenize_Request * lhs, const llama_msgs__srv__Tokenize_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // prompt
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->prompt), &(rhs->prompt)))
  {
    return false;
  }
  return true;
}

bool
llama_msgs__srv__Tokenize_Request__copy(
  const llama_msgs__srv__Tokenize_Request * input,
  llama_msgs__srv__Tokenize_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // prompt
  if (!rosidl_runtime_c__String__copy(
      &(input->prompt), &(output->prompt)))
  {
    return false;
  }
  return true;
}

llama_msgs__srv__Tokenize_Request *
llama_msgs__srv__Tokenize_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__srv__Tokenize_Request * msg = (llama_msgs__srv__Tokenize_Request *)allocator.allocate(sizeof(llama_msgs__srv__Tokenize_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(llama_msgs__srv__Tokenize_Request));
  bool success = llama_msgs__srv__Tokenize_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
llama_msgs__srv__Tokenize_Request__destroy(llama_msgs__srv__Tokenize_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    llama_msgs__srv__Tokenize_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
llama_msgs__srv__Tokenize_Request__Sequence__init(llama_msgs__srv__Tokenize_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__srv__Tokenize_Request * data = NULL;

  if (size) {
    data = (llama_msgs__srv__Tokenize_Request *)allocator.zero_allocate(size, sizeof(llama_msgs__srv__Tokenize_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = llama_msgs__srv__Tokenize_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        llama_msgs__srv__Tokenize_Request__fini(&data[i - 1]);
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
llama_msgs__srv__Tokenize_Request__Sequence__fini(llama_msgs__srv__Tokenize_Request__Sequence * array)
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
      llama_msgs__srv__Tokenize_Request__fini(&array->data[i]);
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

llama_msgs__srv__Tokenize_Request__Sequence *
llama_msgs__srv__Tokenize_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__srv__Tokenize_Request__Sequence * array = (llama_msgs__srv__Tokenize_Request__Sequence *)allocator.allocate(sizeof(llama_msgs__srv__Tokenize_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = llama_msgs__srv__Tokenize_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
llama_msgs__srv__Tokenize_Request__Sequence__destroy(llama_msgs__srv__Tokenize_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    llama_msgs__srv__Tokenize_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
llama_msgs__srv__Tokenize_Request__Sequence__are_equal(const llama_msgs__srv__Tokenize_Request__Sequence * lhs, const llama_msgs__srv__Tokenize_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!llama_msgs__srv__Tokenize_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
llama_msgs__srv__Tokenize_Request__Sequence__copy(
  const llama_msgs__srv__Tokenize_Request__Sequence * input,
  llama_msgs__srv__Tokenize_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(llama_msgs__srv__Tokenize_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    llama_msgs__srv__Tokenize_Request * data =
      (llama_msgs__srv__Tokenize_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!llama_msgs__srv__Tokenize_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          llama_msgs__srv__Tokenize_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!llama_msgs__srv__Tokenize_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `tokens`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
llama_msgs__srv__Tokenize_Response__init(llama_msgs__srv__Tokenize_Response * msg)
{
  if (!msg) {
    return false;
  }
  // tokens
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->tokens, 0)) {
    llama_msgs__srv__Tokenize_Response__fini(msg);
    return false;
  }
  return true;
}

void
llama_msgs__srv__Tokenize_Response__fini(llama_msgs__srv__Tokenize_Response * msg)
{
  if (!msg) {
    return;
  }
  // tokens
  rosidl_runtime_c__int32__Sequence__fini(&msg->tokens);
}

bool
llama_msgs__srv__Tokenize_Response__are_equal(const llama_msgs__srv__Tokenize_Response * lhs, const llama_msgs__srv__Tokenize_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tokens
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->tokens), &(rhs->tokens)))
  {
    return false;
  }
  return true;
}

bool
llama_msgs__srv__Tokenize_Response__copy(
  const llama_msgs__srv__Tokenize_Response * input,
  llama_msgs__srv__Tokenize_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // tokens
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->tokens), &(output->tokens)))
  {
    return false;
  }
  return true;
}

llama_msgs__srv__Tokenize_Response *
llama_msgs__srv__Tokenize_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__srv__Tokenize_Response * msg = (llama_msgs__srv__Tokenize_Response *)allocator.allocate(sizeof(llama_msgs__srv__Tokenize_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(llama_msgs__srv__Tokenize_Response));
  bool success = llama_msgs__srv__Tokenize_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
llama_msgs__srv__Tokenize_Response__destroy(llama_msgs__srv__Tokenize_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    llama_msgs__srv__Tokenize_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
llama_msgs__srv__Tokenize_Response__Sequence__init(llama_msgs__srv__Tokenize_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__srv__Tokenize_Response * data = NULL;

  if (size) {
    data = (llama_msgs__srv__Tokenize_Response *)allocator.zero_allocate(size, sizeof(llama_msgs__srv__Tokenize_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = llama_msgs__srv__Tokenize_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        llama_msgs__srv__Tokenize_Response__fini(&data[i - 1]);
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
llama_msgs__srv__Tokenize_Response__Sequence__fini(llama_msgs__srv__Tokenize_Response__Sequence * array)
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
      llama_msgs__srv__Tokenize_Response__fini(&array->data[i]);
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

llama_msgs__srv__Tokenize_Response__Sequence *
llama_msgs__srv__Tokenize_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__srv__Tokenize_Response__Sequence * array = (llama_msgs__srv__Tokenize_Response__Sequence *)allocator.allocate(sizeof(llama_msgs__srv__Tokenize_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = llama_msgs__srv__Tokenize_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
llama_msgs__srv__Tokenize_Response__Sequence__destroy(llama_msgs__srv__Tokenize_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    llama_msgs__srv__Tokenize_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
llama_msgs__srv__Tokenize_Response__Sequence__are_equal(const llama_msgs__srv__Tokenize_Response__Sequence * lhs, const llama_msgs__srv__Tokenize_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!llama_msgs__srv__Tokenize_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
llama_msgs__srv__Tokenize_Response__Sequence__copy(
  const llama_msgs__srv__Tokenize_Response__Sequence * input,
  llama_msgs__srv__Tokenize_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(llama_msgs__srv__Tokenize_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    llama_msgs__srv__Tokenize_Response * data =
      (llama_msgs__srv__Tokenize_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!llama_msgs__srv__Tokenize_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          llama_msgs__srv__Tokenize_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!llama_msgs__srv__Tokenize_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
