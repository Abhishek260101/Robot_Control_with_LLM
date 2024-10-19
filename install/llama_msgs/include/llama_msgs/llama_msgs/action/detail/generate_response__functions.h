// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from llama_msgs:action/GenerateResponse.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__ACTION__DETAIL__GENERATE_RESPONSE__FUNCTIONS_H_
#define LLAMA_MSGS__ACTION__DETAIL__GENERATE_RESPONSE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "llama_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "llama_msgs/action/detail/generate_response__struct.h"

/// Initialize action/GenerateResponse message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * llama_msgs__action__GenerateResponse_Goal
 * )) before or use
 * llama_msgs__action__GenerateResponse_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_Goal__init(llama_msgs__action__GenerateResponse_Goal * msg);

/// Finalize action/GenerateResponse message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
void
llama_msgs__action__GenerateResponse_Goal__fini(llama_msgs__action__GenerateResponse_Goal * msg);

/// Create action/GenerateResponse message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * llama_msgs__action__GenerateResponse_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
llama_msgs__action__GenerateResponse_Goal *
llama_msgs__action__GenerateResponse_Goal__create();

/// Destroy action/GenerateResponse message.
/**
 * It calls
 * llama_msgs__action__GenerateResponse_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
void
llama_msgs__action__GenerateResponse_Goal__destroy(llama_msgs__action__GenerateResponse_Goal * msg);

/// Check for action/GenerateResponse message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_Goal__are_equal(const llama_msgs__action__GenerateResponse_Goal * lhs, const llama_msgs__action__GenerateResponse_Goal * rhs);

/// Copy a action/GenerateResponse message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_Goal__copy(
  const llama_msgs__action__GenerateResponse_Goal * input,
  llama_msgs__action__GenerateResponse_Goal * output);

/// Initialize array of action/GenerateResponse messages.
/**
 * It allocates the memory for the number of elements and calls
 * llama_msgs__action__GenerateResponse_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_Goal__Sequence__init(llama_msgs__action__GenerateResponse_Goal__Sequence * array, size_t size);

/// Finalize array of action/GenerateResponse messages.
/**
 * It calls
 * llama_msgs__action__GenerateResponse_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
void
llama_msgs__action__GenerateResponse_Goal__Sequence__fini(llama_msgs__action__GenerateResponse_Goal__Sequence * array);

/// Create array of action/GenerateResponse messages.
/**
 * It allocates the memory for the array and calls
 * llama_msgs__action__GenerateResponse_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
llama_msgs__action__GenerateResponse_Goal__Sequence *
llama_msgs__action__GenerateResponse_Goal__Sequence__create(size_t size);

/// Destroy array of action/GenerateResponse messages.
/**
 * It calls
 * llama_msgs__action__GenerateResponse_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
void
llama_msgs__action__GenerateResponse_Goal__Sequence__destroy(llama_msgs__action__GenerateResponse_Goal__Sequence * array);

/// Check for action/GenerateResponse message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_Goal__Sequence__are_equal(const llama_msgs__action__GenerateResponse_Goal__Sequence * lhs, const llama_msgs__action__GenerateResponse_Goal__Sequence * rhs);

/// Copy an array of action/GenerateResponse messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_Goal__Sequence__copy(
  const llama_msgs__action__GenerateResponse_Goal__Sequence * input,
  llama_msgs__action__GenerateResponse_Goal__Sequence * output);

/// Initialize action/GenerateResponse message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * llama_msgs__action__GenerateResponse_Result
 * )) before or use
 * llama_msgs__action__GenerateResponse_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_Result__init(llama_msgs__action__GenerateResponse_Result * msg);

/// Finalize action/GenerateResponse message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
void
llama_msgs__action__GenerateResponse_Result__fini(llama_msgs__action__GenerateResponse_Result * msg);

/// Create action/GenerateResponse message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * llama_msgs__action__GenerateResponse_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
llama_msgs__action__GenerateResponse_Result *
llama_msgs__action__GenerateResponse_Result__create();

/// Destroy action/GenerateResponse message.
/**
 * It calls
 * llama_msgs__action__GenerateResponse_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
void
llama_msgs__action__GenerateResponse_Result__destroy(llama_msgs__action__GenerateResponse_Result * msg);

/// Check for action/GenerateResponse message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_Result__are_equal(const llama_msgs__action__GenerateResponse_Result * lhs, const llama_msgs__action__GenerateResponse_Result * rhs);

/// Copy a action/GenerateResponse message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_Result__copy(
  const llama_msgs__action__GenerateResponse_Result * input,
  llama_msgs__action__GenerateResponse_Result * output);

/// Initialize array of action/GenerateResponse messages.
/**
 * It allocates the memory for the number of elements and calls
 * llama_msgs__action__GenerateResponse_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_Result__Sequence__init(llama_msgs__action__GenerateResponse_Result__Sequence * array, size_t size);

/// Finalize array of action/GenerateResponse messages.
/**
 * It calls
 * llama_msgs__action__GenerateResponse_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
void
llama_msgs__action__GenerateResponse_Result__Sequence__fini(llama_msgs__action__GenerateResponse_Result__Sequence * array);

/// Create array of action/GenerateResponse messages.
/**
 * It allocates the memory for the array and calls
 * llama_msgs__action__GenerateResponse_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
llama_msgs__action__GenerateResponse_Result__Sequence *
llama_msgs__action__GenerateResponse_Result__Sequence__create(size_t size);

/// Destroy array of action/GenerateResponse messages.
/**
 * It calls
 * llama_msgs__action__GenerateResponse_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
void
llama_msgs__action__GenerateResponse_Result__Sequence__destroy(llama_msgs__action__GenerateResponse_Result__Sequence * array);

/// Check for action/GenerateResponse message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_Result__Sequence__are_equal(const llama_msgs__action__GenerateResponse_Result__Sequence * lhs, const llama_msgs__action__GenerateResponse_Result__Sequence * rhs);

/// Copy an array of action/GenerateResponse messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_Result__Sequence__copy(
  const llama_msgs__action__GenerateResponse_Result__Sequence * input,
  llama_msgs__action__GenerateResponse_Result__Sequence * output);

/// Initialize action/GenerateResponse message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * llama_msgs__action__GenerateResponse_Feedback
 * )) before or use
 * llama_msgs__action__GenerateResponse_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_Feedback__init(llama_msgs__action__GenerateResponse_Feedback * msg);

/// Finalize action/GenerateResponse message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
void
llama_msgs__action__GenerateResponse_Feedback__fini(llama_msgs__action__GenerateResponse_Feedback * msg);

/// Create action/GenerateResponse message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * llama_msgs__action__GenerateResponse_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
llama_msgs__action__GenerateResponse_Feedback *
llama_msgs__action__GenerateResponse_Feedback__create();

/// Destroy action/GenerateResponse message.
/**
 * It calls
 * llama_msgs__action__GenerateResponse_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
void
llama_msgs__action__GenerateResponse_Feedback__destroy(llama_msgs__action__GenerateResponse_Feedback * msg);

/// Check for action/GenerateResponse message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_Feedback__are_equal(const llama_msgs__action__GenerateResponse_Feedback * lhs, const llama_msgs__action__GenerateResponse_Feedback * rhs);

/// Copy a action/GenerateResponse message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_Feedback__copy(
  const llama_msgs__action__GenerateResponse_Feedback * input,
  llama_msgs__action__GenerateResponse_Feedback * output);

/// Initialize array of action/GenerateResponse messages.
/**
 * It allocates the memory for the number of elements and calls
 * llama_msgs__action__GenerateResponse_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_Feedback__Sequence__init(llama_msgs__action__GenerateResponse_Feedback__Sequence * array, size_t size);

/// Finalize array of action/GenerateResponse messages.
/**
 * It calls
 * llama_msgs__action__GenerateResponse_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
void
llama_msgs__action__GenerateResponse_Feedback__Sequence__fini(llama_msgs__action__GenerateResponse_Feedback__Sequence * array);

/// Create array of action/GenerateResponse messages.
/**
 * It allocates the memory for the array and calls
 * llama_msgs__action__GenerateResponse_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
llama_msgs__action__GenerateResponse_Feedback__Sequence *
llama_msgs__action__GenerateResponse_Feedback__Sequence__create(size_t size);

/// Destroy array of action/GenerateResponse messages.
/**
 * It calls
 * llama_msgs__action__GenerateResponse_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
void
llama_msgs__action__GenerateResponse_Feedback__Sequence__destroy(llama_msgs__action__GenerateResponse_Feedback__Sequence * array);

/// Check for action/GenerateResponse message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_Feedback__Sequence__are_equal(const llama_msgs__action__GenerateResponse_Feedback__Sequence * lhs, const llama_msgs__action__GenerateResponse_Feedback__Sequence * rhs);

/// Copy an array of action/GenerateResponse messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_Feedback__Sequence__copy(
  const llama_msgs__action__GenerateResponse_Feedback__Sequence * input,
  llama_msgs__action__GenerateResponse_Feedback__Sequence * output);

/// Initialize action/GenerateResponse message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * llama_msgs__action__GenerateResponse_SendGoal_Request
 * )) before or use
 * llama_msgs__action__GenerateResponse_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_SendGoal_Request__init(llama_msgs__action__GenerateResponse_SendGoal_Request * msg);

/// Finalize action/GenerateResponse message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
void
llama_msgs__action__GenerateResponse_SendGoal_Request__fini(llama_msgs__action__GenerateResponse_SendGoal_Request * msg);

/// Create action/GenerateResponse message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * llama_msgs__action__GenerateResponse_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
llama_msgs__action__GenerateResponse_SendGoal_Request *
llama_msgs__action__GenerateResponse_SendGoal_Request__create();

/// Destroy action/GenerateResponse message.
/**
 * It calls
 * llama_msgs__action__GenerateResponse_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
void
llama_msgs__action__GenerateResponse_SendGoal_Request__destroy(llama_msgs__action__GenerateResponse_SendGoal_Request * msg);

/// Check for action/GenerateResponse message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_SendGoal_Request__are_equal(const llama_msgs__action__GenerateResponse_SendGoal_Request * lhs, const llama_msgs__action__GenerateResponse_SendGoal_Request * rhs);

/// Copy a action/GenerateResponse message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_SendGoal_Request__copy(
  const llama_msgs__action__GenerateResponse_SendGoal_Request * input,
  llama_msgs__action__GenerateResponse_SendGoal_Request * output);

/// Initialize array of action/GenerateResponse messages.
/**
 * It allocates the memory for the number of elements and calls
 * llama_msgs__action__GenerateResponse_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_SendGoal_Request__Sequence__init(llama_msgs__action__GenerateResponse_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/GenerateResponse messages.
/**
 * It calls
 * llama_msgs__action__GenerateResponse_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
void
llama_msgs__action__GenerateResponse_SendGoal_Request__Sequence__fini(llama_msgs__action__GenerateResponse_SendGoal_Request__Sequence * array);

/// Create array of action/GenerateResponse messages.
/**
 * It allocates the memory for the array and calls
 * llama_msgs__action__GenerateResponse_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
llama_msgs__action__GenerateResponse_SendGoal_Request__Sequence *
llama_msgs__action__GenerateResponse_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/GenerateResponse messages.
/**
 * It calls
 * llama_msgs__action__GenerateResponse_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
void
llama_msgs__action__GenerateResponse_SendGoal_Request__Sequence__destroy(llama_msgs__action__GenerateResponse_SendGoal_Request__Sequence * array);

/// Check for action/GenerateResponse message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_SendGoal_Request__Sequence__are_equal(const llama_msgs__action__GenerateResponse_SendGoal_Request__Sequence * lhs, const llama_msgs__action__GenerateResponse_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/GenerateResponse messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_SendGoal_Request__Sequence__copy(
  const llama_msgs__action__GenerateResponse_SendGoal_Request__Sequence * input,
  llama_msgs__action__GenerateResponse_SendGoal_Request__Sequence * output);

/// Initialize action/GenerateResponse message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * llama_msgs__action__GenerateResponse_SendGoal_Response
 * )) before or use
 * llama_msgs__action__GenerateResponse_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_SendGoal_Response__init(llama_msgs__action__GenerateResponse_SendGoal_Response * msg);

/// Finalize action/GenerateResponse message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
void
llama_msgs__action__GenerateResponse_SendGoal_Response__fini(llama_msgs__action__GenerateResponse_SendGoal_Response * msg);

/// Create action/GenerateResponse message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * llama_msgs__action__GenerateResponse_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
llama_msgs__action__GenerateResponse_SendGoal_Response *
llama_msgs__action__GenerateResponse_SendGoal_Response__create();

/// Destroy action/GenerateResponse message.
/**
 * It calls
 * llama_msgs__action__GenerateResponse_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
void
llama_msgs__action__GenerateResponse_SendGoal_Response__destroy(llama_msgs__action__GenerateResponse_SendGoal_Response * msg);

/// Check for action/GenerateResponse message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_SendGoal_Response__are_equal(const llama_msgs__action__GenerateResponse_SendGoal_Response * lhs, const llama_msgs__action__GenerateResponse_SendGoal_Response * rhs);

/// Copy a action/GenerateResponse message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_SendGoal_Response__copy(
  const llama_msgs__action__GenerateResponse_SendGoal_Response * input,
  llama_msgs__action__GenerateResponse_SendGoal_Response * output);

/// Initialize array of action/GenerateResponse messages.
/**
 * It allocates the memory for the number of elements and calls
 * llama_msgs__action__GenerateResponse_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_SendGoal_Response__Sequence__init(llama_msgs__action__GenerateResponse_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/GenerateResponse messages.
/**
 * It calls
 * llama_msgs__action__GenerateResponse_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
void
llama_msgs__action__GenerateResponse_SendGoal_Response__Sequence__fini(llama_msgs__action__GenerateResponse_SendGoal_Response__Sequence * array);

/// Create array of action/GenerateResponse messages.
/**
 * It allocates the memory for the array and calls
 * llama_msgs__action__GenerateResponse_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
llama_msgs__action__GenerateResponse_SendGoal_Response__Sequence *
llama_msgs__action__GenerateResponse_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/GenerateResponse messages.
/**
 * It calls
 * llama_msgs__action__GenerateResponse_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
void
llama_msgs__action__GenerateResponse_SendGoal_Response__Sequence__destroy(llama_msgs__action__GenerateResponse_SendGoal_Response__Sequence * array);

/// Check for action/GenerateResponse message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_SendGoal_Response__Sequence__are_equal(const llama_msgs__action__GenerateResponse_SendGoal_Response__Sequence * lhs, const llama_msgs__action__GenerateResponse_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/GenerateResponse messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_SendGoal_Response__Sequence__copy(
  const llama_msgs__action__GenerateResponse_SendGoal_Response__Sequence * input,
  llama_msgs__action__GenerateResponse_SendGoal_Response__Sequence * output);

/// Initialize action/GenerateResponse message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * llama_msgs__action__GenerateResponse_GetResult_Request
 * )) before or use
 * llama_msgs__action__GenerateResponse_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_GetResult_Request__init(llama_msgs__action__GenerateResponse_GetResult_Request * msg);

/// Finalize action/GenerateResponse message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
void
llama_msgs__action__GenerateResponse_GetResult_Request__fini(llama_msgs__action__GenerateResponse_GetResult_Request * msg);

/// Create action/GenerateResponse message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * llama_msgs__action__GenerateResponse_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
llama_msgs__action__GenerateResponse_GetResult_Request *
llama_msgs__action__GenerateResponse_GetResult_Request__create();

/// Destroy action/GenerateResponse message.
/**
 * It calls
 * llama_msgs__action__GenerateResponse_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
void
llama_msgs__action__GenerateResponse_GetResult_Request__destroy(llama_msgs__action__GenerateResponse_GetResult_Request * msg);

/// Check for action/GenerateResponse message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_GetResult_Request__are_equal(const llama_msgs__action__GenerateResponse_GetResult_Request * lhs, const llama_msgs__action__GenerateResponse_GetResult_Request * rhs);

/// Copy a action/GenerateResponse message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_GetResult_Request__copy(
  const llama_msgs__action__GenerateResponse_GetResult_Request * input,
  llama_msgs__action__GenerateResponse_GetResult_Request * output);

/// Initialize array of action/GenerateResponse messages.
/**
 * It allocates the memory for the number of elements and calls
 * llama_msgs__action__GenerateResponse_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_GetResult_Request__Sequence__init(llama_msgs__action__GenerateResponse_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/GenerateResponse messages.
/**
 * It calls
 * llama_msgs__action__GenerateResponse_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
void
llama_msgs__action__GenerateResponse_GetResult_Request__Sequence__fini(llama_msgs__action__GenerateResponse_GetResult_Request__Sequence * array);

/// Create array of action/GenerateResponse messages.
/**
 * It allocates the memory for the array and calls
 * llama_msgs__action__GenerateResponse_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
llama_msgs__action__GenerateResponse_GetResult_Request__Sequence *
llama_msgs__action__GenerateResponse_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/GenerateResponse messages.
/**
 * It calls
 * llama_msgs__action__GenerateResponse_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
void
llama_msgs__action__GenerateResponse_GetResult_Request__Sequence__destroy(llama_msgs__action__GenerateResponse_GetResult_Request__Sequence * array);

/// Check for action/GenerateResponse message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_GetResult_Request__Sequence__are_equal(const llama_msgs__action__GenerateResponse_GetResult_Request__Sequence * lhs, const llama_msgs__action__GenerateResponse_GetResult_Request__Sequence * rhs);

/// Copy an array of action/GenerateResponse messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_GetResult_Request__Sequence__copy(
  const llama_msgs__action__GenerateResponse_GetResult_Request__Sequence * input,
  llama_msgs__action__GenerateResponse_GetResult_Request__Sequence * output);

/// Initialize action/GenerateResponse message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * llama_msgs__action__GenerateResponse_GetResult_Response
 * )) before or use
 * llama_msgs__action__GenerateResponse_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_GetResult_Response__init(llama_msgs__action__GenerateResponse_GetResult_Response * msg);

/// Finalize action/GenerateResponse message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
void
llama_msgs__action__GenerateResponse_GetResult_Response__fini(llama_msgs__action__GenerateResponse_GetResult_Response * msg);

/// Create action/GenerateResponse message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * llama_msgs__action__GenerateResponse_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
llama_msgs__action__GenerateResponse_GetResult_Response *
llama_msgs__action__GenerateResponse_GetResult_Response__create();

/// Destroy action/GenerateResponse message.
/**
 * It calls
 * llama_msgs__action__GenerateResponse_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
void
llama_msgs__action__GenerateResponse_GetResult_Response__destroy(llama_msgs__action__GenerateResponse_GetResult_Response * msg);

/// Check for action/GenerateResponse message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_GetResult_Response__are_equal(const llama_msgs__action__GenerateResponse_GetResult_Response * lhs, const llama_msgs__action__GenerateResponse_GetResult_Response * rhs);

/// Copy a action/GenerateResponse message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_GetResult_Response__copy(
  const llama_msgs__action__GenerateResponse_GetResult_Response * input,
  llama_msgs__action__GenerateResponse_GetResult_Response * output);

/// Initialize array of action/GenerateResponse messages.
/**
 * It allocates the memory for the number of elements and calls
 * llama_msgs__action__GenerateResponse_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_GetResult_Response__Sequence__init(llama_msgs__action__GenerateResponse_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/GenerateResponse messages.
/**
 * It calls
 * llama_msgs__action__GenerateResponse_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
void
llama_msgs__action__GenerateResponse_GetResult_Response__Sequence__fini(llama_msgs__action__GenerateResponse_GetResult_Response__Sequence * array);

/// Create array of action/GenerateResponse messages.
/**
 * It allocates the memory for the array and calls
 * llama_msgs__action__GenerateResponse_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
llama_msgs__action__GenerateResponse_GetResult_Response__Sequence *
llama_msgs__action__GenerateResponse_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/GenerateResponse messages.
/**
 * It calls
 * llama_msgs__action__GenerateResponse_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
void
llama_msgs__action__GenerateResponse_GetResult_Response__Sequence__destroy(llama_msgs__action__GenerateResponse_GetResult_Response__Sequence * array);

/// Check for action/GenerateResponse message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_GetResult_Response__Sequence__are_equal(const llama_msgs__action__GenerateResponse_GetResult_Response__Sequence * lhs, const llama_msgs__action__GenerateResponse_GetResult_Response__Sequence * rhs);

/// Copy an array of action/GenerateResponse messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_GetResult_Response__Sequence__copy(
  const llama_msgs__action__GenerateResponse_GetResult_Response__Sequence * input,
  llama_msgs__action__GenerateResponse_GetResult_Response__Sequence * output);

/// Initialize action/GenerateResponse message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * llama_msgs__action__GenerateResponse_FeedbackMessage
 * )) before or use
 * llama_msgs__action__GenerateResponse_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_FeedbackMessage__init(llama_msgs__action__GenerateResponse_FeedbackMessage * msg);

/// Finalize action/GenerateResponse message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
void
llama_msgs__action__GenerateResponse_FeedbackMessage__fini(llama_msgs__action__GenerateResponse_FeedbackMessage * msg);

/// Create action/GenerateResponse message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * llama_msgs__action__GenerateResponse_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
llama_msgs__action__GenerateResponse_FeedbackMessage *
llama_msgs__action__GenerateResponse_FeedbackMessage__create();

/// Destroy action/GenerateResponse message.
/**
 * It calls
 * llama_msgs__action__GenerateResponse_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
void
llama_msgs__action__GenerateResponse_FeedbackMessage__destroy(llama_msgs__action__GenerateResponse_FeedbackMessage * msg);

/// Check for action/GenerateResponse message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_FeedbackMessage__are_equal(const llama_msgs__action__GenerateResponse_FeedbackMessage * lhs, const llama_msgs__action__GenerateResponse_FeedbackMessage * rhs);

/// Copy a action/GenerateResponse message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_FeedbackMessage__copy(
  const llama_msgs__action__GenerateResponse_FeedbackMessage * input,
  llama_msgs__action__GenerateResponse_FeedbackMessage * output);

/// Initialize array of action/GenerateResponse messages.
/**
 * It allocates the memory for the number of elements and calls
 * llama_msgs__action__GenerateResponse_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_FeedbackMessage__Sequence__init(llama_msgs__action__GenerateResponse_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/GenerateResponse messages.
/**
 * It calls
 * llama_msgs__action__GenerateResponse_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
void
llama_msgs__action__GenerateResponse_FeedbackMessage__Sequence__fini(llama_msgs__action__GenerateResponse_FeedbackMessage__Sequence * array);

/// Create array of action/GenerateResponse messages.
/**
 * It allocates the memory for the array and calls
 * llama_msgs__action__GenerateResponse_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
llama_msgs__action__GenerateResponse_FeedbackMessage__Sequence *
llama_msgs__action__GenerateResponse_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/GenerateResponse messages.
/**
 * It calls
 * llama_msgs__action__GenerateResponse_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
void
llama_msgs__action__GenerateResponse_FeedbackMessage__Sequence__destroy(llama_msgs__action__GenerateResponse_FeedbackMessage__Sequence * array);

/// Check for action/GenerateResponse message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_FeedbackMessage__Sequence__are_equal(const llama_msgs__action__GenerateResponse_FeedbackMessage__Sequence * lhs, const llama_msgs__action__GenerateResponse_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/GenerateResponse messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__action__GenerateResponse_FeedbackMessage__Sequence__copy(
  const llama_msgs__action__GenerateResponse_FeedbackMessage__Sequence * input,
  llama_msgs__action__GenerateResponse_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LLAMA_MSGS__ACTION__DETAIL__GENERATE_RESPONSE__FUNCTIONS_H_
