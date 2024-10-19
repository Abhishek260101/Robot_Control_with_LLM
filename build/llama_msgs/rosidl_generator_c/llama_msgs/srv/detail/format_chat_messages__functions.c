// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from llama_msgs:srv/FormatChatMessages.idl
// generated code does not contain a copyright notice
#include "llama_msgs/srv/detail/format_chat_messages__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `messages`
#include "llama_msgs/msg/detail/message__functions.h"

bool
llama_msgs__srv__FormatChatMessages_Request__init(llama_msgs__srv__FormatChatMessages_Request * msg)
{
  if (!msg) {
    return false;
  }
  // messages
  if (!llama_msgs__msg__Message__Sequence__init(&msg->messages, 0)) {
    llama_msgs__srv__FormatChatMessages_Request__fini(msg);
    return false;
  }
  // add_ass
  msg->add_ass = true;
  return true;
}

void
llama_msgs__srv__FormatChatMessages_Request__fini(llama_msgs__srv__FormatChatMessages_Request * msg)
{
  if (!msg) {
    return;
  }
  // messages
  llama_msgs__msg__Message__Sequence__fini(&msg->messages);
  // add_ass
}

bool
llama_msgs__srv__FormatChatMessages_Request__are_equal(const llama_msgs__srv__FormatChatMessages_Request * lhs, const llama_msgs__srv__FormatChatMessages_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // messages
  if (!llama_msgs__msg__Message__Sequence__are_equal(
      &(lhs->messages), &(rhs->messages)))
  {
    return false;
  }
  // add_ass
  if (lhs->add_ass != rhs->add_ass) {
    return false;
  }
  return true;
}

bool
llama_msgs__srv__FormatChatMessages_Request__copy(
  const llama_msgs__srv__FormatChatMessages_Request * input,
  llama_msgs__srv__FormatChatMessages_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // messages
  if (!llama_msgs__msg__Message__Sequence__copy(
      &(input->messages), &(output->messages)))
  {
    return false;
  }
  // add_ass
  output->add_ass = input->add_ass;
  return true;
}

llama_msgs__srv__FormatChatMessages_Request *
llama_msgs__srv__FormatChatMessages_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__srv__FormatChatMessages_Request * msg = (llama_msgs__srv__FormatChatMessages_Request *)allocator.allocate(sizeof(llama_msgs__srv__FormatChatMessages_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(llama_msgs__srv__FormatChatMessages_Request));
  bool success = llama_msgs__srv__FormatChatMessages_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
llama_msgs__srv__FormatChatMessages_Request__destroy(llama_msgs__srv__FormatChatMessages_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    llama_msgs__srv__FormatChatMessages_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
llama_msgs__srv__FormatChatMessages_Request__Sequence__init(llama_msgs__srv__FormatChatMessages_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__srv__FormatChatMessages_Request * data = NULL;

  if (size) {
    data = (llama_msgs__srv__FormatChatMessages_Request *)allocator.zero_allocate(size, sizeof(llama_msgs__srv__FormatChatMessages_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = llama_msgs__srv__FormatChatMessages_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        llama_msgs__srv__FormatChatMessages_Request__fini(&data[i - 1]);
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
llama_msgs__srv__FormatChatMessages_Request__Sequence__fini(llama_msgs__srv__FormatChatMessages_Request__Sequence * array)
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
      llama_msgs__srv__FormatChatMessages_Request__fini(&array->data[i]);
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

llama_msgs__srv__FormatChatMessages_Request__Sequence *
llama_msgs__srv__FormatChatMessages_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__srv__FormatChatMessages_Request__Sequence * array = (llama_msgs__srv__FormatChatMessages_Request__Sequence *)allocator.allocate(sizeof(llama_msgs__srv__FormatChatMessages_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = llama_msgs__srv__FormatChatMessages_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
llama_msgs__srv__FormatChatMessages_Request__Sequence__destroy(llama_msgs__srv__FormatChatMessages_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    llama_msgs__srv__FormatChatMessages_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
llama_msgs__srv__FormatChatMessages_Request__Sequence__are_equal(const llama_msgs__srv__FormatChatMessages_Request__Sequence * lhs, const llama_msgs__srv__FormatChatMessages_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!llama_msgs__srv__FormatChatMessages_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
llama_msgs__srv__FormatChatMessages_Request__Sequence__copy(
  const llama_msgs__srv__FormatChatMessages_Request__Sequence * input,
  llama_msgs__srv__FormatChatMessages_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(llama_msgs__srv__FormatChatMessages_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    llama_msgs__srv__FormatChatMessages_Request * data =
      (llama_msgs__srv__FormatChatMessages_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!llama_msgs__srv__FormatChatMessages_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          llama_msgs__srv__FormatChatMessages_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!llama_msgs__srv__FormatChatMessages_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `formatted_prompt`
#include "rosidl_runtime_c/string_functions.h"

bool
llama_msgs__srv__FormatChatMessages_Response__init(llama_msgs__srv__FormatChatMessages_Response * msg)
{
  if (!msg) {
    return false;
  }
  // formatted_prompt
  if (!rosidl_runtime_c__String__init(&msg->formatted_prompt)) {
    llama_msgs__srv__FormatChatMessages_Response__fini(msg);
    return false;
  }
  return true;
}

void
llama_msgs__srv__FormatChatMessages_Response__fini(llama_msgs__srv__FormatChatMessages_Response * msg)
{
  if (!msg) {
    return;
  }
  // formatted_prompt
  rosidl_runtime_c__String__fini(&msg->formatted_prompt);
}

bool
llama_msgs__srv__FormatChatMessages_Response__are_equal(const llama_msgs__srv__FormatChatMessages_Response * lhs, const llama_msgs__srv__FormatChatMessages_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // formatted_prompt
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->formatted_prompt), &(rhs->formatted_prompt)))
  {
    return false;
  }
  return true;
}

bool
llama_msgs__srv__FormatChatMessages_Response__copy(
  const llama_msgs__srv__FormatChatMessages_Response * input,
  llama_msgs__srv__FormatChatMessages_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // formatted_prompt
  if (!rosidl_runtime_c__String__copy(
      &(input->formatted_prompt), &(output->formatted_prompt)))
  {
    return false;
  }
  return true;
}

llama_msgs__srv__FormatChatMessages_Response *
llama_msgs__srv__FormatChatMessages_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__srv__FormatChatMessages_Response * msg = (llama_msgs__srv__FormatChatMessages_Response *)allocator.allocate(sizeof(llama_msgs__srv__FormatChatMessages_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(llama_msgs__srv__FormatChatMessages_Response));
  bool success = llama_msgs__srv__FormatChatMessages_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
llama_msgs__srv__FormatChatMessages_Response__destroy(llama_msgs__srv__FormatChatMessages_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    llama_msgs__srv__FormatChatMessages_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
llama_msgs__srv__FormatChatMessages_Response__Sequence__init(llama_msgs__srv__FormatChatMessages_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__srv__FormatChatMessages_Response * data = NULL;

  if (size) {
    data = (llama_msgs__srv__FormatChatMessages_Response *)allocator.zero_allocate(size, sizeof(llama_msgs__srv__FormatChatMessages_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = llama_msgs__srv__FormatChatMessages_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        llama_msgs__srv__FormatChatMessages_Response__fini(&data[i - 1]);
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
llama_msgs__srv__FormatChatMessages_Response__Sequence__fini(llama_msgs__srv__FormatChatMessages_Response__Sequence * array)
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
      llama_msgs__srv__FormatChatMessages_Response__fini(&array->data[i]);
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

llama_msgs__srv__FormatChatMessages_Response__Sequence *
llama_msgs__srv__FormatChatMessages_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__srv__FormatChatMessages_Response__Sequence * array = (llama_msgs__srv__FormatChatMessages_Response__Sequence *)allocator.allocate(sizeof(llama_msgs__srv__FormatChatMessages_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = llama_msgs__srv__FormatChatMessages_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
llama_msgs__srv__FormatChatMessages_Response__Sequence__destroy(llama_msgs__srv__FormatChatMessages_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    llama_msgs__srv__FormatChatMessages_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
llama_msgs__srv__FormatChatMessages_Response__Sequence__are_equal(const llama_msgs__srv__FormatChatMessages_Response__Sequence * lhs, const llama_msgs__srv__FormatChatMessages_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!llama_msgs__srv__FormatChatMessages_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
llama_msgs__srv__FormatChatMessages_Response__Sequence__copy(
  const llama_msgs__srv__FormatChatMessages_Response__Sequence * input,
  llama_msgs__srv__FormatChatMessages_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(llama_msgs__srv__FormatChatMessages_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    llama_msgs__srv__FormatChatMessages_Response * data =
      (llama_msgs__srv__FormatChatMessages_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!llama_msgs__srv__FormatChatMessages_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          llama_msgs__srv__FormatChatMessages_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!llama_msgs__srv__FormatChatMessages_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
