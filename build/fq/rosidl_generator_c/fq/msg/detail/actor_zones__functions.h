// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from fq:msg/ActorZones.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_ZONES__FUNCTIONS_H_
#define FQ__MSG__DETAIL__ACTOR_ZONES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "fq/msg/rosidl_generator_c__visibility_control.h"

#include "fq/msg/detail/actor_zones__struct.h"

/// Initialize msg/ActorZones message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * fq__msg__ActorZones
 * )) before or use
 * fq__msg__ActorZones__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
bool
fq__msg__ActorZones__init(fq__msg__ActorZones * msg);

/// Finalize msg/ActorZones message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
void
fq__msg__ActorZones__fini(fq__msg__ActorZones * msg);

/// Create msg/ActorZones message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * fq__msg__ActorZones__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
fq__msg__ActorZones *
fq__msg__ActorZones__create();

/// Destroy msg/ActorZones message.
/**
 * It calls
 * fq__msg__ActorZones__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
void
fq__msg__ActorZones__destroy(fq__msg__ActorZones * msg);

/// Check for msg/ActorZones message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
bool
fq__msg__ActorZones__are_equal(const fq__msg__ActorZones * lhs, const fq__msg__ActorZones * rhs);

/// Copy a msg/ActorZones message.
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
fq__msg__ActorZones__copy(
  const fq__msg__ActorZones * input,
  fq__msg__ActorZones * output);

/// Initialize array of msg/ActorZones messages.
/**
 * It allocates the memory for the number of elements and calls
 * fq__msg__ActorZones__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
bool
fq__msg__ActorZones__Sequence__init(fq__msg__ActorZones__Sequence * array, size_t size);

/// Finalize array of msg/ActorZones messages.
/**
 * It calls
 * fq__msg__ActorZones__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
void
fq__msg__ActorZones__Sequence__fini(fq__msg__ActorZones__Sequence * array);

/// Create array of msg/ActorZones messages.
/**
 * It allocates the memory for the array and calls
 * fq__msg__ActorZones__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
fq__msg__ActorZones__Sequence *
fq__msg__ActorZones__Sequence__create(size_t size);

/// Destroy array of msg/ActorZones messages.
/**
 * It calls
 * fq__msg__ActorZones__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
void
fq__msg__ActorZones__Sequence__destroy(fq__msg__ActorZones__Sequence * array);

/// Check for msg/ActorZones message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
bool
fq__msg__ActorZones__Sequence__are_equal(const fq__msg__ActorZones__Sequence * lhs, const fq__msg__ActorZones__Sequence * rhs);

/// Copy an array of msg/ActorZones messages.
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
fq__msg__ActorZones__Sequence__copy(
  const fq__msg__ActorZones__Sequence * input,
  fq__msg__ActorZones__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FQ__MSG__DETAIL__ACTOR_ZONES__FUNCTIONS_H_