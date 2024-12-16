// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from fq:msg/BaseBytes.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_BYTES__FUNCTIONS_H_
#define FQ__MSG__DETAIL__BASE_BYTES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "fq/msg/rosidl_generator_c__visibility_control.h"

#include "fq/msg/detail/base_bytes__struct.h"

/// Initialize msg/BaseBytes message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * fq__msg__BaseBytes
 * )) before or use
 * fq__msg__BaseBytes__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
bool
fq__msg__BaseBytes__init(fq__msg__BaseBytes * msg);

/// Finalize msg/BaseBytes message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
void
fq__msg__BaseBytes__fini(fq__msg__BaseBytes * msg);

/// Create msg/BaseBytes message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * fq__msg__BaseBytes__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
fq__msg__BaseBytes *
fq__msg__BaseBytes__create();

/// Destroy msg/BaseBytes message.
/**
 * It calls
 * fq__msg__BaseBytes__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
void
fq__msg__BaseBytes__destroy(fq__msg__BaseBytes * msg);

/// Check for msg/BaseBytes message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
bool
fq__msg__BaseBytes__are_equal(const fq__msg__BaseBytes * lhs, const fq__msg__BaseBytes * rhs);

/// Copy a msg/BaseBytes message.
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
ROSIDL_GENERATOR_C_PUBLIC_fq
bool
fq__msg__BaseBytes__copy(
  const fq__msg__BaseBytes * input,
  fq__msg__BaseBytes * output);

/// Initialize array of msg/BaseBytes messages.
/**
 * It allocates the memory for the number of elements and calls
 * fq__msg__BaseBytes__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
bool
fq__msg__BaseBytes__Sequence__init(fq__msg__BaseBytes__Sequence * array, size_t size);

/// Finalize array of msg/BaseBytes messages.
/**
 * It calls
 * fq__msg__BaseBytes__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
void
fq__msg__BaseBytes__Sequence__fini(fq__msg__BaseBytes__Sequence * array);

/// Create array of msg/BaseBytes messages.
/**
 * It allocates the memory for the array and calls
 * fq__msg__BaseBytes__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
fq__msg__BaseBytes__Sequence *
fq__msg__BaseBytes__Sequence__create(size_t size);

/// Destroy array of msg/BaseBytes messages.
/**
 * It calls
 * fq__msg__BaseBytes__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
void
fq__msg__BaseBytes__Sequence__destroy(fq__msg__BaseBytes__Sequence * array);

/// Check for msg/BaseBytes message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
bool
fq__msg__BaseBytes__Sequence__are_equal(const fq__msg__BaseBytes__Sequence * lhs, const fq__msg__BaseBytes__Sequence * rhs);

/// Copy an array of msg/BaseBytes messages.
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
ROSIDL_GENERATOR_C_PUBLIC_fq
bool
fq__msg__BaseBytes__Sequence__copy(
  const fq__msg__BaseBytes__Sequence * input,
  fq__msg__BaseBytes__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FQ__MSG__DETAIL__BASE_BYTES__FUNCTIONS_H_
