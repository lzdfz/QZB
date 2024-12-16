// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from fq:msg/BaseInterferenceData.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_INTERFERENCE_DATA__FUNCTIONS_H_
#define FQ__MSG__DETAIL__BASE_INTERFERENCE_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "fq/msg/rosidl_generator_c__visibility_control.h"

#include "fq/msg/detail/base_interference_data__struct.h"

/// Initialize msg/BaseInterferenceData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * fq__msg__BaseInterferenceData
 * )) before or use
 * fq__msg__BaseInterferenceData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
bool
fq__msg__BaseInterferenceData__init(fq__msg__BaseInterferenceData * msg);

/// Finalize msg/BaseInterferenceData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
void
fq__msg__BaseInterferenceData__fini(fq__msg__BaseInterferenceData * msg);

/// Create msg/BaseInterferenceData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * fq__msg__BaseInterferenceData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
fq__msg__BaseInterferenceData *
fq__msg__BaseInterferenceData__create();

/// Destroy msg/BaseInterferenceData message.
/**
 * It calls
 * fq__msg__BaseInterferenceData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
void
fq__msg__BaseInterferenceData__destroy(fq__msg__BaseInterferenceData * msg);

/// Check for msg/BaseInterferenceData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
bool
fq__msg__BaseInterferenceData__are_equal(const fq__msg__BaseInterferenceData * lhs, const fq__msg__BaseInterferenceData * rhs);

/// Copy a msg/BaseInterferenceData message.
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
fq__msg__BaseInterferenceData__copy(
  const fq__msg__BaseInterferenceData * input,
  fq__msg__BaseInterferenceData * output);

/// Initialize array of msg/BaseInterferenceData messages.
/**
 * It allocates the memory for the number of elements and calls
 * fq__msg__BaseInterferenceData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
bool
fq__msg__BaseInterferenceData__Sequence__init(fq__msg__BaseInterferenceData__Sequence * array, size_t size);

/// Finalize array of msg/BaseInterferenceData messages.
/**
 * It calls
 * fq__msg__BaseInterferenceData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
void
fq__msg__BaseInterferenceData__Sequence__fini(fq__msg__BaseInterferenceData__Sequence * array);

/// Create array of msg/BaseInterferenceData messages.
/**
 * It allocates the memory for the array and calls
 * fq__msg__BaseInterferenceData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
fq__msg__BaseInterferenceData__Sequence *
fq__msg__BaseInterferenceData__Sequence__create(size_t size);

/// Destroy array of msg/BaseInterferenceData messages.
/**
 * It calls
 * fq__msg__BaseInterferenceData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
void
fq__msg__BaseInterferenceData__Sequence__destroy(fq__msg__BaseInterferenceData__Sequence * array);

/// Check for msg/BaseInterferenceData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
bool
fq__msg__BaseInterferenceData__Sequence__are_equal(const fq__msg__BaseInterferenceData__Sequence * lhs, const fq__msg__BaseInterferenceData__Sequence * rhs);

/// Copy an array of msg/BaseInterferenceData messages.
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
fq__msg__BaseInterferenceData__Sequence__copy(
  const fq__msg__BaseInterferenceData__Sequence * input,
  fq__msg__BaseInterferenceData__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FQ__MSG__DETAIL__BASE_INTERFERENCE_DATA__FUNCTIONS_H_
