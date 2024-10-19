// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from llama_msgs:action/GenerateResponse.idl
// generated code does not contain a copyright notice
#include "llama_msgs/action/detail/generate_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `prompt`
// Member `stop`
#include "rosidl_runtime_c/string_functions.h"
// Member `image`
#include "sensor_msgs/msg/detail/image__functions.h"
// Member `sampling_config`
#include "llama_msgs/msg/detail/sampling_config__functions.h"

bool
llama_msgs__action__GenerateResponse_Goal__init(llama_msgs__action__GenerateResponse_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // prompt
  if (!rosidl_runtime_c__String__init(&msg->prompt)) {
    llama_msgs__action__GenerateResponse_Goal__fini(msg);
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__init(&msg->image)) {
    llama_msgs__action__GenerateResponse_Goal__fini(msg);
    return false;
  }
  // stop
  {
    bool success = rosidl_runtime_c__String__Sequence__init(&msg->stop, 0);
    if (!success) {
      goto abort_init_0;
    }
  }
  // reset
  msg->reset = false;
  // sampling_config
  if (!llama_msgs__msg__SamplingConfig__init(&msg->sampling_config)) {
    llama_msgs__action__GenerateResponse_Goal__fini(msg);
    return false;
  }
  return true;
abort_init_0:
  return false;
}

void
llama_msgs__action__GenerateResponse_Goal__fini(llama_msgs__action__GenerateResponse_Goal * msg)
{
  if (!msg) {
    return;
  }
  // prompt
  rosidl_runtime_c__String__fini(&msg->prompt);
  // image
  sensor_msgs__msg__Image__fini(&msg->image);
  // stop
  rosidl_runtime_c__String__Sequence__fini(&msg->stop);
  // reset
  // sampling_config
  llama_msgs__msg__SamplingConfig__fini(&msg->sampling_config);
}

bool
llama_msgs__action__GenerateResponse_Goal__are_equal(const llama_msgs__action__GenerateResponse_Goal * lhs, const llama_msgs__action__GenerateResponse_Goal * rhs)
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
  // image
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->image), &(rhs->image)))
  {
    return false;
  }
  // stop
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->stop), &(rhs->stop)))
  {
    return false;
  }
  // reset
  if (lhs->reset != rhs->reset) {
    return false;
  }
  // sampling_config
  if (!llama_msgs__msg__SamplingConfig__are_equal(
      &(lhs->sampling_config), &(rhs->sampling_config)))
  {
    return false;
  }
  return true;
}

bool
llama_msgs__action__GenerateResponse_Goal__copy(
  const llama_msgs__action__GenerateResponse_Goal * input,
  llama_msgs__action__GenerateResponse_Goal * output)
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
  // image
  if (!sensor_msgs__msg__Image__copy(
      &(input->image), &(output->image)))
  {
    return false;
  }
  // stop
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->stop), &(output->stop)))
  {
    return false;
  }
  // reset
  output->reset = input->reset;
  // sampling_config
  if (!llama_msgs__msg__SamplingConfig__copy(
      &(input->sampling_config), &(output->sampling_config)))
  {
    return false;
  }
  return true;
}

llama_msgs__action__GenerateResponse_Goal *
llama_msgs__action__GenerateResponse_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__action__GenerateResponse_Goal * msg = (llama_msgs__action__GenerateResponse_Goal *)allocator.allocate(sizeof(llama_msgs__action__GenerateResponse_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(llama_msgs__action__GenerateResponse_Goal));
  bool success = llama_msgs__action__GenerateResponse_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
llama_msgs__action__GenerateResponse_Goal__destroy(llama_msgs__action__GenerateResponse_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    llama_msgs__action__GenerateResponse_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
llama_msgs__action__GenerateResponse_Goal__Sequence__init(llama_msgs__action__GenerateResponse_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__action__GenerateResponse_Goal * data = NULL;

  if (size) {
    data = (llama_msgs__action__GenerateResponse_Goal *)allocator.zero_allocate(size, sizeof(llama_msgs__action__GenerateResponse_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = llama_msgs__action__GenerateResponse_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        llama_msgs__action__GenerateResponse_Goal__fini(&data[i - 1]);
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
llama_msgs__action__GenerateResponse_Goal__Sequence__fini(llama_msgs__action__GenerateResponse_Goal__Sequence * array)
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
      llama_msgs__action__GenerateResponse_Goal__fini(&array->data[i]);
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

llama_msgs__action__GenerateResponse_Goal__Sequence *
llama_msgs__action__GenerateResponse_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__action__GenerateResponse_Goal__Sequence * array = (llama_msgs__action__GenerateResponse_Goal__Sequence *)allocator.allocate(sizeof(llama_msgs__action__GenerateResponse_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = llama_msgs__action__GenerateResponse_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
llama_msgs__action__GenerateResponse_Goal__Sequence__destroy(llama_msgs__action__GenerateResponse_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    llama_msgs__action__GenerateResponse_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
llama_msgs__action__GenerateResponse_Goal__Sequence__are_equal(const llama_msgs__action__GenerateResponse_Goal__Sequence * lhs, const llama_msgs__action__GenerateResponse_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!llama_msgs__action__GenerateResponse_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
llama_msgs__action__GenerateResponse_Goal__Sequence__copy(
  const llama_msgs__action__GenerateResponse_Goal__Sequence * input,
  llama_msgs__action__GenerateResponse_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(llama_msgs__action__GenerateResponse_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    llama_msgs__action__GenerateResponse_Goal * data =
      (llama_msgs__action__GenerateResponse_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!llama_msgs__action__GenerateResponse_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          llama_msgs__action__GenerateResponse_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!llama_msgs__action__GenerateResponse_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `response`
#include "llama_msgs/msg/detail/response__functions.h"

bool
llama_msgs__action__GenerateResponse_Result__init(llama_msgs__action__GenerateResponse_Result * msg)
{
  if (!msg) {
    return false;
  }
  // response
  if (!llama_msgs__msg__Response__init(&msg->response)) {
    llama_msgs__action__GenerateResponse_Result__fini(msg);
    return false;
  }
  return true;
}

void
llama_msgs__action__GenerateResponse_Result__fini(llama_msgs__action__GenerateResponse_Result * msg)
{
  if (!msg) {
    return;
  }
  // response
  llama_msgs__msg__Response__fini(&msg->response);
}

bool
llama_msgs__action__GenerateResponse_Result__are_equal(const llama_msgs__action__GenerateResponse_Result * lhs, const llama_msgs__action__GenerateResponse_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // response
  if (!llama_msgs__msg__Response__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
llama_msgs__action__GenerateResponse_Result__copy(
  const llama_msgs__action__GenerateResponse_Result * input,
  llama_msgs__action__GenerateResponse_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // response
  if (!llama_msgs__msg__Response__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

llama_msgs__action__GenerateResponse_Result *
llama_msgs__action__GenerateResponse_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__action__GenerateResponse_Result * msg = (llama_msgs__action__GenerateResponse_Result *)allocator.allocate(sizeof(llama_msgs__action__GenerateResponse_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(llama_msgs__action__GenerateResponse_Result));
  bool success = llama_msgs__action__GenerateResponse_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
llama_msgs__action__GenerateResponse_Result__destroy(llama_msgs__action__GenerateResponse_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    llama_msgs__action__GenerateResponse_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
llama_msgs__action__GenerateResponse_Result__Sequence__init(llama_msgs__action__GenerateResponse_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__action__GenerateResponse_Result * data = NULL;

  if (size) {
    data = (llama_msgs__action__GenerateResponse_Result *)allocator.zero_allocate(size, sizeof(llama_msgs__action__GenerateResponse_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = llama_msgs__action__GenerateResponse_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        llama_msgs__action__GenerateResponse_Result__fini(&data[i - 1]);
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
llama_msgs__action__GenerateResponse_Result__Sequence__fini(llama_msgs__action__GenerateResponse_Result__Sequence * array)
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
      llama_msgs__action__GenerateResponse_Result__fini(&array->data[i]);
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

llama_msgs__action__GenerateResponse_Result__Sequence *
llama_msgs__action__GenerateResponse_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__action__GenerateResponse_Result__Sequence * array = (llama_msgs__action__GenerateResponse_Result__Sequence *)allocator.allocate(sizeof(llama_msgs__action__GenerateResponse_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = llama_msgs__action__GenerateResponse_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
llama_msgs__action__GenerateResponse_Result__Sequence__destroy(llama_msgs__action__GenerateResponse_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    llama_msgs__action__GenerateResponse_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
llama_msgs__action__GenerateResponse_Result__Sequence__are_equal(const llama_msgs__action__GenerateResponse_Result__Sequence * lhs, const llama_msgs__action__GenerateResponse_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!llama_msgs__action__GenerateResponse_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
llama_msgs__action__GenerateResponse_Result__Sequence__copy(
  const llama_msgs__action__GenerateResponse_Result__Sequence * input,
  llama_msgs__action__GenerateResponse_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(llama_msgs__action__GenerateResponse_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    llama_msgs__action__GenerateResponse_Result * data =
      (llama_msgs__action__GenerateResponse_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!llama_msgs__action__GenerateResponse_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          llama_msgs__action__GenerateResponse_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!llama_msgs__action__GenerateResponse_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `partial_response`
#include "llama_msgs/msg/detail/partial_response__functions.h"

bool
llama_msgs__action__GenerateResponse_Feedback__init(llama_msgs__action__GenerateResponse_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // partial_response
  if (!llama_msgs__msg__PartialResponse__init(&msg->partial_response)) {
    llama_msgs__action__GenerateResponse_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
llama_msgs__action__GenerateResponse_Feedback__fini(llama_msgs__action__GenerateResponse_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // partial_response
  llama_msgs__msg__PartialResponse__fini(&msg->partial_response);
}

bool
llama_msgs__action__GenerateResponse_Feedback__are_equal(const llama_msgs__action__GenerateResponse_Feedback * lhs, const llama_msgs__action__GenerateResponse_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // partial_response
  if (!llama_msgs__msg__PartialResponse__are_equal(
      &(lhs->partial_response), &(rhs->partial_response)))
  {
    return false;
  }
  return true;
}

bool
llama_msgs__action__GenerateResponse_Feedback__copy(
  const llama_msgs__action__GenerateResponse_Feedback * input,
  llama_msgs__action__GenerateResponse_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // partial_response
  if (!llama_msgs__msg__PartialResponse__copy(
      &(input->partial_response), &(output->partial_response)))
  {
    return false;
  }
  return true;
}

llama_msgs__action__GenerateResponse_Feedback *
llama_msgs__action__GenerateResponse_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__action__GenerateResponse_Feedback * msg = (llama_msgs__action__GenerateResponse_Feedback *)allocator.allocate(sizeof(llama_msgs__action__GenerateResponse_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(llama_msgs__action__GenerateResponse_Feedback));
  bool success = llama_msgs__action__GenerateResponse_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
llama_msgs__action__GenerateResponse_Feedback__destroy(llama_msgs__action__GenerateResponse_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    llama_msgs__action__GenerateResponse_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
llama_msgs__action__GenerateResponse_Feedback__Sequence__init(llama_msgs__action__GenerateResponse_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__action__GenerateResponse_Feedback * data = NULL;

  if (size) {
    data = (llama_msgs__action__GenerateResponse_Feedback *)allocator.zero_allocate(size, sizeof(llama_msgs__action__GenerateResponse_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = llama_msgs__action__GenerateResponse_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        llama_msgs__action__GenerateResponse_Feedback__fini(&data[i - 1]);
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
llama_msgs__action__GenerateResponse_Feedback__Sequence__fini(llama_msgs__action__GenerateResponse_Feedback__Sequence * array)
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
      llama_msgs__action__GenerateResponse_Feedback__fini(&array->data[i]);
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

llama_msgs__action__GenerateResponse_Feedback__Sequence *
llama_msgs__action__GenerateResponse_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__action__GenerateResponse_Feedback__Sequence * array = (llama_msgs__action__GenerateResponse_Feedback__Sequence *)allocator.allocate(sizeof(llama_msgs__action__GenerateResponse_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = llama_msgs__action__GenerateResponse_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
llama_msgs__action__GenerateResponse_Feedback__Sequence__destroy(llama_msgs__action__GenerateResponse_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    llama_msgs__action__GenerateResponse_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
llama_msgs__action__GenerateResponse_Feedback__Sequence__are_equal(const llama_msgs__action__GenerateResponse_Feedback__Sequence * lhs, const llama_msgs__action__GenerateResponse_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!llama_msgs__action__GenerateResponse_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
llama_msgs__action__GenerateResponse_Feedback__Sequence__copy(
  const llama_msgs__action__GenerateResponse_Feedback__Sequence * input,
  llama_msgs__action__GenerateResponse_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(llama_msgs__action__GenerateResponse_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    llama_msgs__action__GenerateResponse_Feedback * data =
      (llama_msgs__action__GenerateResponse_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!llama_msgs__action__GenerateResponse_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          llama_msgs__action__GenerateResponse_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!llama_msgs__action__GenerateResponse_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "llama_msgs/action/detail/generate_response__functions.h"

bool
llama_msgs__action__GenerateResponse_SendGoal_Request__init(llama_msgs__action__GenerateResponse_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    llama_msgs__action__GenerateResponse_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!llama_msgs__action__GenerateResponse_Goal__init(&msg->goal)) {
    llama_msgs__action__GenerateResponse_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
llama_msgs__action__GenerateResponse_SendGoal_Request__fini(llama_msgs__action__GenerateResponse_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  llama_msgs__action__GenerateResponse_Goal__fini(&msg->goal);
}

bool
llama_msgs__action__GenerateResponse_SendGoal_Request__are_equal(const llama_msgs__action__GenerateResponse_SendGoal_Request * lhs, const llama_msgs__action__GenerateResponse_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!llama_msgs__action__GenerateResponse_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
llama_msgs__action__GenerateResponse_SendGoal_Request__copy(
  const llama_msgs__action__GenerateResponse_SendGoal_Request * input,
  llama_msgs__action__GenerateResponse_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!llama_msgs__action__GenerateResponse_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

llama_msgs__action__GenerateResponse_SendGoal_Request *
llama_msgs__action__GenerateResponse_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__action__GenerateResponse_SendGoal_Request * msg = (llama_msgs__action__GenerateResponse_SendGoal_Request *)allocator.allocate(sizeof(llama_msgs__action__GenerateResponse_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(llama_msgs__action__GenerateResponse_SendGoal_Request));
  bool success = llama_msgs__action__GenerateResponse_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
llama_msgs__action__GenerateResponse_SendGoal_Request__destroy(llama_msgs__action__GenerateResponse_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    llama_msgs__action__GenerateResponse_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
llama_msgs__action__GenerateResponse_SendGoal_Request__Sequence__init(llama_msgs__action__GenerateResponse_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__action__GenerateResponse_SendGoal_Request * data = NULL;

  if (size) {
    data = (llama_msgs__action__GenerateResponse_SendGoal_Request *)allocator.zero_allocate(size, sizeof(llama_msgs__action__GenerateResponse_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = llama_msgs__action__GenerateResponse_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        llama_msgs__action__GenerateResponse_SendGoal_Request__fini(&data[i - 1]);
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
llama_msgs__action__GenerateResponse_SendGoal_Request__Sequence__fini(llama_msgs__action__GenerateResponse_SendGoal_Request__Sequence * array)
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
      llama_msgs__action__GenerateResponse_SendGoal_Request__fini(&array->data[i]);
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

llama_msgs__action__GenerateResponse_SendGoal_Request__Sequence *
llama_msgs__action__GenerateResponse_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__action__GenerateResponse_SendGoal_Request__Sequence * array = (llama_msgs__action__GenerateResponse_SendGoal_Request__Sequence *)allocator.allocate(sizeof(llama_msgs__action__GenerateResponse_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = llama_msgs__action__GenerateResponse_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
llama_msgs__action__GenerateResponse_SendGoal_Request__Sequence__destroy(llama_msgs__action__GenerateResponse_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    llama_msgs__action__GenerateResponse_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
llama_msgs__action__GenerateResponse_SendGoal_Request__Sequence__are_equal(const llama_msgs__action__GenerateResponse_SendGoal_Request__Sequence * lhs, const llama_msgs__action__GenerateResponse_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!llama_msgs__action__GenerateResponse_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
llama_msgs__action__GenerateResponse_SendGoal_Request__Sequence__copy(
  const llama_msgs__action__GenerateResponse_SendGoal_Request__Sequence * input,
  llama_msgs__action__GenerateResponse_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(llama_msgs__action__GenerateResponse_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    llama_msgs__action__GenerateResponse_SendGoal_Request * data =
      (llama_msgs__action__GenerateResponse_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!llama_msgs__action__GenerateResponse_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          llama_msgs__action__GenerateResponse_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!llama_msgs__action__GenerateResponse_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
llama_msgs__action__GenerateResponse_SendGoal_Response__init(llama_msgs__action__GenerateResponse_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    llama_msgs__action__GenerateResponse_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
llama_msgs__action__GenerateResponse_SendGoal_Response__fini(llama_msgs__action__GenerateResponse_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
llama_msgs__action__GenerateResponse_SendGoal_Response__are_equal(const llama_msgs__action__GenerateResponse_SendGoal_Response * lhs, const llama_msgs__action__GenerateResponse_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
llama_msgs__action__GenerateResponse_SendGoal_Response__copy(
  const llama_msgs__action__GenerateResponse_SendGoal_Response * input,
  llama_msgs__action__GenerateResponse_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

llama_msgs__action__GenerateResponse_SendGoal_Response *
llama_msgs__action__GenerateResponse_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__action__GenerateResponse_SendGoal_Response * msg = (llama_msgs__action__GenerateResponse_SendGoal_Response *)allocator.allocate(sizeof(llama_msgs__action__GenerateResponse_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(llama_msgs__action__GenerateResponse_SendGoal_Response));
  bool success = llama_msgs__action__GenerateResponse_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
llama_msgs__action__GenerateResponse_SendGoal_Response__destroy(llama_msgs__action__GenerateResponse_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    llama_msgs__action__GenerateResponse_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
llama_msgs__action__GenerateResponse_SendGoal_Response__Sequence__init(llama_msgs__action__GenerateResponse_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__action__GenerateResponse_SendGoal_Response * data = NULL;

  if (size) {
    data = (llama_msgs__action__GenerateResponse_SendGoal_Response *)allocator.zero_allocate(size, sizeof(llama_msgs__action__GenerateResponse_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = llama_msgs__action__GenerateResponse_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        llama_msgs__action__GenerateResponse_SendGoal_Response__fini(&data[i - 1]);
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
llama_msgs__action__GenerateResponse_SendGoal_Response__Sequence__fini(llama_msgs__action__GenerateResponse_SendGoal_Response__Sequence * array)
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
      llama_msgs__action__GenerateResponse_SendGoal_Response__fini(&array->data[i]);
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

llama_msgs__action__GenerateResponse_SendGoal_Response__Sequence *
llama_msgs__action__GenerateResponse_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__action__GenerateResponse_SendGoal_Response__Sequence * array = (llama_msgs__action__GenerateResponse_SendGoal_Response__Sequence *)allocator.allocate(sizeof(llama_msgs__action__GenerateResponse_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = llama_msgs__action__GenerateResponse_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
llama_msgs__action__GenerateResponse_SendGoal_Response__Sequence__destroy(llama_msgs__action__GenerateResponse_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    llama_msgs__action__GenerateResponse_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
llama_msgs__action__GenerateResponse_SendGoal_Response__Sequence__are_equal(const llama_msgs__action__GenerateResponse_SendGoal_Response__Sequence * lhs, const llama_msgs__action__GenerateResponse_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!llama_msgs__action__GenerateResponse_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
llama_msgs__action__GenerateResponse_SendGoal_Response__Sequence__copy(
  const llama_msgs__action__GenerateResponse_SendGoal_Response__Sequence * input,
  llama_msgs__action__GenerateResponse_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(llama_msgs__action__GenerateResponse_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    llama_msgs__action__GenerateResponse_SendGoal_Response * data =
      (llama_msgs__action__GenerateResponse_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!llama_msgs__action__GenerateResponse_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          llama_msgs__action__GenerateResponse_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!llama_msgs__action__GenerateResponse_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
llama_msgs__action__GenerateResponse_GetResult_Request__init(llama_msgs__action__GenerateResponse_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    llama_msgs__action__GenerateResponse_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
llama_msgs__action__GenerateResponse_GetResult_Request__fini(llama_msgs__action__GenerateResponse_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
llama_msgs__action__GenerateResponse_GetResult_Request__are_equal(const llama_msgs__action__GenerateResponse_GetResult_Request * lhs, const llama_msgs__action__GenerateResponse_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
llama_msgs__action__GenerateResponse_GetResult_Request__copy(
  const llama_msgs__action__GenerateResponse_GetResult_Request * input,
  llama_msgs__action__GenerateResponse_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

llama_msgs__action__GenerateResponse_GetResult_Request *
llama_msgs__action__GenerateResponse_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__action__GenerateResponse_GetResult_Request * msg = (llama_msgs__action__GenerateResponse_GetResult_Request *)allocator.allocate(sizeof(llama_msgs__action__GenerateResponse_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(llama_msgs__action__GenerateResponse_GetResult_Request));
  bool success = llama_msgs__action__GenerateResponse_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
llama_msgs__action__GenerateResponse_GetResult_Request__destroy(llama_msgs__action__GenerateResponse_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    llama_msgs__action__GenerateResponse_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
llama_msgs__action__GenerateResponse_GetResult_Request__Sequence__init(llama_msgs__action__GenerateResponse_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__action__GenerateResponse_GetResult_Request * data = NULL;

  if (size) {
    data = (llama_msgs__action__GenerateResponse_GetResult_Request *)allocator.zero_allocate(size, sizeof(llama_msgs__action__GenerateResponse_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = llama_msgs__action__GenerateResponse_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        llama_msgs__action__GenerateResponse_GetResult_Request__fini(&data[i - 1]);
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
llama_msgs__action__GenerateResponse_GetResult_Request__Sequence__fini(llama_msgs__action__GenerateResponse_GetResult_Request__Sequence * array)
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
      llama_msgs__action__GenerateResponse_GetResult_Request__fini(&array->data[i]);
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

llama_msgs__action__GenerateResponse_GetResult_Request__Sequence *
llama_msgs__action__GenerateResponse_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__action__GenerateResponse_GetResult_Request__Sequence * array = (llama_msgs__action__GenerateResponse_GetResult_Request__Sequence *)allocator.allocate(sizeof(llama_msgs__action__GenerateResponse_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = llama_msgs__action__GenerateResponse_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
llama_msgs__action__GenerateResponse_GetResult_Request__Sequence__destroy(llama_msgs__action__GenerateResponse_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    llama_msgs__action__GenerateResponse_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
llama_msgs__action__GenerateResponse_GetResult_Request__Sequence__are_equal(const llama_msgs__action__GenerateResponse_GetResult_Request__Sequence * lhs, const llama_msgs__action__GenerateResponse_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!llama_msgs__action__GenerateResponse_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
llama_msgs__action__GenerateResponse_GetResult_Request__Sequence__copy(
  const llama_msgs__action__GenerateResponse_GetResult_Request__Sequence * input,
  llama_msgs__action__GenerateResponse_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(llama_msgs__action__GenerateResponse_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    llama_msgs__action__GenerateResponse_GetResult_Request * data =
      (llama_msgs__action__GenerateResponse_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!llama_msgs__action__GenerateResponse_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          llama_msgs__action__GenerateResponse_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!llama_msgs__action__GenerateResponse_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "llama_msgs/action/detail/generate_response__functions.h"

bool
llama_msgs__action__GenerateResponse_GetResult_Response__init(llama_msgs__action__GenerateResponse_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!llama_msgs__action__GenerateResponse_Result__init(&msg->result)) {
    llama_msgs__action__GenerateResponse_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
llama_msgs__action__GenerateResponse_GetResult_Response__fini(llama_msgs__action__GenerateResponse_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  llama_msgs__action__GenerateResponse_Result__fini(&msg->result);
}

bool
llama_msgs__action__GenerateResponse_GetResult_Response__are_equal(const llama_msgs__action__GenerateResponse_GetResult_Response * lhs, const llama_msgs__action__GenerateResponse_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!llama_msgs__action__GenerateResponse_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
llama_msgs__action__GenerateResponse_GetResult_Response__copy(
  const llama_msgs__action__GenerateResponse_GetResult_Response * input,
  llama_msgs__action__GenerateResponse_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!llama_msgs__action__GenerateResponse_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

llama_msgs__action__GenerateResponse_GetResult_Response *
llama_msgs__action__GenerateResponse_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__action__GenerateResponse_GetResult_Response * msg = (llama_msgs__action__GenerateResponse_GetResult_Response *)allocator.allocate(sizeof(llama_msgs__action__GenerateResponse_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(llama_msgs__action__GenerateResponse_GetResult_Response));
  bool success = llama_msgs__action__GenerateResponse_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
llama_msgs__action__GenerateResponse_GetResult_Response__destroy(llama_msgs__action__GenerateResponse_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    llama_msgs__action__GenerateResponse_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
llama_msgs__action__GenerateResponse_GetResult_Response__Sequence__init(llama_msgs__action__GenerateResponse_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__action__GenerateResponse_GetResult_Response * data = NULL;

  if (size) {
    data = (llama_msgs__action__GenerateResponse_GetResult_Response *)allocator.zero_allocate(size, sizeof(llama_msgs__action__GenerateResponse_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = llama_msgs__action__GenerateResponse_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        llama_msgs__action__GenerateResponse_GetResult_Response__fini(&data[i - 1]);
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
llama_msgs__action__GenerateResponse_GetResult_Response__Sequence__fini(llama_msgs__action__GenerateResponse_GetResult_Response__Sequence * array)
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
      llama_msgs__action__GenerateResponse_GetResult_Response__fini(&array->data[i]);
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

llama_msgs__action__GenerateResponse_GetResult_Response__Sequence *
llama_msgs__action__GenerateResponse_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__action__GenerateResponse_GetResult_Response__Sequence * array = (llama_msgs__action__GenerateResponse_GetResult_Response__Sequence *)allocator.allocate(sizeof(llama_msgs__action__GenerateResponse_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = llama_msgs__action__GenerateResponse_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
llama_msgs__action__GenerateResponse_GetResult_Response__Sequence__destroy(llama_msgs__action__GenerateResponse_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    llama_msgs__action__GenerateResponse_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
llama_msgs__action__GenerateResponse_GetResult_Response__Sequence__are_equal(const llama_msgs__action__GenerateResponse_GetResult_Response__Sequence * lhs, const llama_msgs__action__GenerateResponse_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!llama_msgs__action__GenerateResponse_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
llama_msgs__action__GenerateResponse_GetResult_Response__Sequence__copy(
  const llama_msgs__action__GenerateResponse_GetResult_Response__Sequence * input,
  llama_msgs__action__GenerateResponse_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(llama_msgs__action__GenerateResponse_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    llama_msgs__action__GenerateResponse_GetResult_Response * data =
      (llama_msgs__action__GenerateResponse_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!llama_msgs__action__GenerateResponse_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          llama_msgs__action__GenerateResponse_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!llama_msgs__action__GenerateResponse_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "llama_msgs/action/detail/generate_response__functions.h"

bool
llama_msgs__action__GenerateResponse_FeedbackMessage__init(llama_msgs__action__GenerateResponse_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    llama_msgs__action__GenerateResponse_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!llama_msgs__action__GenerateResponse_Feedback__init(&msg->feedback)) {
    llama_msgs__action__GenerateResponse_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
llama_msgs__action__GenerateResponse_FeedbackMessage__fini(llama_msgs__action__GenerateResponse_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  llama_msgs__action__GenerateResponse_Feedback__fini(&msg->feedback);
}

bool
llama_msgs__action__GenerateResponse_FeedbackMessage__are_equal(const llama_msgs__action__GenerateResponse_FeedbackMessage * lhs, const llama_msgs__action__GenerateResponse_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!llama_msgs__action__GenerateResponse_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
llama_msgs__action__GenerateResponse_FeedbackMessage__copy(
  const llama_msgs__action__GenerateResponse_FeedbackMessage * input,
  llama_msgs__action__GenerateResponse_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!llama_msgs__action__GenerateResponse_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

llama_msgs__action__GenerateResponse_FeedbackMessage *
llama_msgs__action__GenerateResponse_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__action__GenerateResponse_FeedbackMessage * msg = (llama_msgs__action__GenerateResponse_FeedbackMessage *)allocator.allocate(sizeof(llama_msgs__action__GenerateResponse_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(llama_msgs__action__GenerateResponse_FeedbackMessage));
  bool success = llama_msgs__action__GenerateResponse_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
llama_msgs__action__GenerateResponse_FeedbackMessage__destroy(llama_msgs__action__GenerateResponse_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    llama_msgs__action__GenerateResponse_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
llama_msgs__action__GenerateResponse_FeedbackMessage__Sequence__init(llama_msgs__action__GenerateResponse_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__action__GenerateResponse_FeedbackMessage * data = NULL;

  if (size) {
    data = (llama_msgs__action__GenerateResponse_FeedbackMessage *)allocator.zero_allocate(size, sizeof(llama_msgs__action__GenerateResponse_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = llama_msgs__action__GenerateResponse_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        llama_msgs__action__GenerateResponse_FeedbackMessage__fini(&data[i - 1]);
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
llama_msgs__action__GenerateResponse_FeedbackMessage__Sequence__fini(llama_msgs__action__GenerateResponse_FeedbackMessage__Sequence * array)
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
      llama_msgs__action__GenerateResponse_FeedbackMessage__fini(&array->data[i]);
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

llama_msgs__action__GenerateResponse_FeedbackMessage__Sequence *
llama_msgs__action__GenerateResponse_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llama_msgs__action__GenerateResponse_FeedbackMessage__Sequence * array = (llama_msgs__action__GenerateResponse_FeedbackMessage__Sequence *)allocator.allocate(sizeof(llama_msgs__action__GenerateResponse_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = llama_msgs__action__GenerateResponse_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
llama_msgs__action__GenerateResponse_FeedbackMessage__Sequence__destroy(llama_msgs__action__GenerateResponse_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    llama_msgs__action__GenerateResponse_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
llama_msgs__action__GenerateResponse_FeedbackMessage__Sequence__are_equal(const llama_msgs__action__GenerateResponse_FeedbackMessage__Sequence * lhs, const llama_msgs__action__GenerateResponse_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!llama_msgs__action__GenerateResponse_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
llama_msgs__action__GenerateResponse_FeedbackMessage__Sequence__copy(
  const llama_msgs__action__GenerateResponse_FeedbackMessage__Sequence * input,
  llama_msgs__action__GenerateResponse_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(llama_msgs__action__GenerateResponse_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    llama_msgs__action__GenerateResponse_FeedbackMessage * data =
      (llama_msgs__action__GenerateResponse_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!llama_msgs__action__GenerateResponse_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          llama_msgs__action__GenerateResponse_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!llama_msgs__action__GenerateResponse_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
