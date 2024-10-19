// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from llama_msgs:srv/GenerateEmbeddings.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__SRV__DETAIL__GENERATE_EMBEDDINGS__FUNCTIONS_H_
#define LLAMA_MSGS__SRV__DETAIL__GENERATE_EMBEDDINGS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "llama_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "llama_msgs/srv/detail/generate_embeddings__struct.h"

/// Initialize srv/GenerateEmbeddings message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * llama_msgs__srv__GenerateEmbeddings_Request
 * )) before or use
 * llama_msgs__srv__GenerateEmbeddings_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__srv__GenerateEmbeddings_Request__init(llama_msgs__srv__GenerateEmbeddings_Request * msg);

/// Finalize srv/GenerateEmbeddings message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
void
llama_msgs__srv__GenerateEmbeddings_Request__fini(llama_msgs__srv__GenerateEmbeddings_Request * msg);

/// Create srv/GenerateEmbeddings message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * llama_msgs__srv__GenerateEmbeddings_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
llama_msgs__srv__GenerateEmbeddings_Request *
llama_msgs__srv__GenerateEmbeddings_Request__create();

/// Destroy srv/GenerateEmbeddings message.
/**
 * It calls
 * llama_msgs__srv__GenerateEmbeddings_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
void
llama_msgs__srv__GenerateEmbeddings_Request__destroy(llama_msgs__srv__GenerateEmbeddings_Request * msg);

/// Check for srv/GenerateEmbeddings message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__srv__GenerateEmbeddings_Request__are_equal(const llama_msgs__srv__GenerateEmbeddings_Request * lhs, const llama_msgs__srv__GenerateEmbeddings_Request * rhs);

/// Copy a srv/GenerateEmbeddings message.
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
llama_msgs__srv__GenerateEmbeddings_Request__copy(
  const llama_msgs__srv__GenerateEmbeddings_Request * input,
  llama_msgs__srv__GenerateEmbeddings_Request * output);

/// Initialize array of srv/GenerateEmbeddings messages.
/**
 * It allocates the memory for the number of elements and calls
 * llama_msgs__srv__GenerateEmbeddings_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__srv__GenerateEmbeddings_Request__Sequence__init(llama_msgs__srv__GenerateEmbeddings_Request__Sequence * array, size_t size);

/// Finalize array of srv/GenerateEmbeddings messages.
/**
 * It calls
 * llama_msgs__srv__GenerateEmbeddings_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
void
llama_msgs__srv__GenerateEmbeddings_Request__Sequence__fini(llama_msgs__srv__GenerateEmbeddings_Request__Sequence * array);

/// Create array of srv/GenerateEmbeddings messages.
/**
 * It allocates the memory for the array and calls
 * llama_msgs__srv__GenerateEmbeddings_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
llama_msgs__srv__GenerateEmbeddings_Request__Sequence *
llama_msgs__srv__GenerateEmbeddings_Request__Sequence__create(size_t size);

/// Destroy array of srv/GenerateEmbeddings messages.
/**
 * It calls
 * llama_msgs__srv__GenerateEmbeddings_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
void
llama_msgs__srv__GenerateEmbeddings_Request__Sequence__destroy(llama_msgs__srv__GenerateEmbeddings_Request__Sequence * array);

/// Check for srv/GenerateEmbeddings message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__srv__GenerateEmbeddings_Request__Sequence__are_equal(const llama_msgs__srv__GenerateEmbeddings_Request__Sequence * lhs, const llama_msgs__srv__GenerateEmbeddings_Request__Sequence * rhs);

/// Copy an array of srv/GenerateEmbeddings messages.
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
llama_msgs__srv__GenerateEmbeddings_Request__Sequence__copy(
  const llama_msgs__srv__GenerateEmbeddings_Request__Sequence * input,
  llama_msgs__srv__GenerateEmbeddings_Request__Sequence * output);

/// Initialize srv/GenerateEmbeddings message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * llama_msgs__srv__GenerateEmbeddings_Response
 * )) before or use
 * llama_msgs__srv__GenerateEmbeddings_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__srv__GenerateEmbeddings_Response__init(llama_msgs__srv__GenerateEmbeddings_Response * msg);

/// Finalize srv/GenerateEmbeddings message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
void
llama_msgs__srv__GenerateEmbeddings_Response__fini(llama_msgs__srv__GenerateEmbeddings_Response * msg);

/// Create srv/GenerateEmbeddings message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * llama_msgs__srv__GenerateEmbeddings_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
llama_msgs__srv__GenerateEmbeddings_Response *
llama_msgs__srv__GenerateEmbeddings_Response__create();

/// Destroy srv/GenerateEmbeddings message.
/**
 * It calls
 * llama_msgs__srv__GenerateEmbeddings_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
void
llama_msgs__srv__GenerateEmbeddings_Response__destroy(llama_msgs__srv__GenerateEmbeddings_Response * msg);

/// Check for srv/GenerateEmbeddings message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__srv__GenerateEmbeddings_Response__are_equal(const llama_msgs__srv__GenerateEmbeddings_Response * lhs, const llama_msgs__srv__GenerateEmbeddings_Response * rhs);

/// Copy a srv/GenerateEmbeddings message.
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
llama_msgs__srv__GenerateEmbeddings_Response__copy(
  const llama_msgs__srv__GenerateEmbeddings_Response * input,
  llama_msgs__srv__GenerateEmbeddings_Response * output);

/// Initialize array of srv/GenerateEmbeddings messages.
/**
 * It allocates the memory for the number of elements and calls
 * llama_msgs__srv__GenerateEmbeddings_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__srv__GenerateEmbeddings_Response__Sequence__init(llama_msgs__srv__GenerateEmbeddings_Response__Sequence * array, size_t size);

/// Finalize array of srv/GenerateEmbeddings messages.
/**
 * It calls
 * llama_msgs__srv__GenerateEmbeddings_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
void
llama_msgs__srv__GenerateEmbeddings_Response__Sequence__fini(llama_msgs__srv__GenerateEmbeddings_Response__Sequence * array);

/// Create array of srv/GenerateEmbeddings messages.
/**
 * It allocates the memory for the array and calls
 * llama_msgs__srv__GenerateEmbeddings_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
llama_msgs__srv__GenerateEmbeddings_Response__Sequence *
llama_msgs__srv__GenerateEmbeddings_Response__Sequence__create(size_t size);

/// Destroy array of srv/GenerateEmbeddings messages.
/**
 * It calls
 * llama_msgs__srv__GenerateEmbeddings_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
void
llama_msgs__srv__GenerateEmbeddings_Response__Sequence__destroy(llama_msgs__srv__GenerateEmbeddings_Response__Sequence * array);

/// Check for srv/GenerateEmbeddings message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_llama_msgs
bool
llama_msgs__srv__GenerateEmbeddings_Response__Sequence__are_equal(const llama_msgs__srv__GenerateEmbeddings_Response__Sequence * lhs, const llama_msgs__srv__GenerateEmbeddings_Response__Sequence * rhs);

/// Copy an array of srv/GenerateEmbeddings messages.
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
llama_msgs__srv__GenerateEmbeddings_Response__Sequence__copy(
  const llama_msgs__srv__GenerateEmbeddings_Response__Sequence * input,
  llama_msgs__srv__GenerateEmbeddings_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LLAMA_MSGS__SRV__DETAIL__GENERATE_EMBEDDINGS__FUNCTIONS_H_
