// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from fq:msg/ActorControlInfo.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_CONTROL_INFO__FUNCTIONS_H_
#define FQ__MSG__DETAIL__ACTOR_CONTROL_INFO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "fq/msg/rosidl_generator_c__visibility_control.h"

#include "fq/msg/detail/actor_control_info__struct.h"

/// Initialize msg/ActorControlInfo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * fq__msg__ActorControlInfo
 * )) before or use
 * fq__msg__ActorControlInfo__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
bool
fq__msg__ActorControlInfo__init(fq__msg__ActorControlInfo * msg);

/// Finalize msg/ActorControlInfo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
void
fq__msg__ActorControlInfo__fini(fq__msg__ActorControlInfo * msg);

/// Create msg/ActorControlInfo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * fq__msg__ActorControlInfo__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
fq__msg__ActorControlInfo *
fq__msg__ActorControlInfo__create();

/// Destroy msg/ActorControlInfo message.
/**
 * It calls
 * fq__msg__ActorControlInfo__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
void
fq__msg__ActorControlInfo__destroy(fq__msg__ActorControlInfo * msg);

/// Check for msg/ActorControlInfo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
bool
fq__msg__ActorControlInfo__are_equal(const fq__msg__ActorControlInfo * lhs, const fq__msg__ActorControlInfo * rhs);

/// Copy a msg/ActorControlInfo message.
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
fq__msg__ActorControlInfo__copy(
  const fq__msg__ActorControlInfo * input,
  fq__msg__ActorControlInfo * output);

/// Initialize array of msg/ActorControlInfo messages.
/**
 * It allocates the memory for the number of elements and calls
 * fq__msg__ActorControlInfo__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
bool
fq__msg__ActorControlInfo__Sequence__init(fq__msg__ActorControlInfo__Sequence * array, size_t size);

/// Finalize array of msg/ActorControlInfo messages.
/**
 * It calls
 * fq__msg__ActorControlInfo__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
void
fq__msg__ActorControlInfo__Sequence__fini(fq__msg__ActorControlInfo__Sequence * array);

/// Create array of msg/ActorControlInfo messages.
/**
 * It allocates the memory for the array and calls
 * fq__msg__ActorControlInfo__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
fq__msg__ActorControlInfo__Sequence *
fq__msg__ActorControlInfo__Sequence__create(size_t size);

/// Destroy array of msg/ActorControlInfo messages.
/**
 * It calls
 * fq__msg__ActorControlInfo__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
void
fq__msg__ActorControlInfo__Sequence__destroy(fq__msg__ActorControlInfo__Sequence * array);

/// Check for msg/ActorControlInfo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
bool
fq__msg__ActorControlInfo__Sequence__are_equal(const fq__msg__ActorControlInfo__Sequence * lhs, const fq__msg__ActorControlInfo__Sequence * rhs);

/// Copy an array of msg/ActorControlInfo messages.
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
fq__msg__ActorControlInfo__Sequence__copy(
  const fq__msg__ActorControlInfo__Sequence * input,
  fq__msg__ActorControlInfo__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FQ__MSG__DETAIL__ACTOR_CONTROL_INFO__FUNCTIONS_H_
