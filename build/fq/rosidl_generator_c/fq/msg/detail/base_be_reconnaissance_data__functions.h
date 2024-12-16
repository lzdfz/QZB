// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from fq:msg/BaseBeReconnaissanceData.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_BE_RECONNAISSANCE_DATA__FUNCTIONS_H_
#define FQ__MSG__DETAIL__BASE_BE_RECONNAISSANCE_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "fq/msg/rosidl_generator_c__visibility_control.h"

#include "fq/msg/detail/base_be_reconnaissance_data__struct.h"

/// Initialize msg/BaseBeReconnaissanceData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * fq__msg__BaseBeReconnaissanceData
 * )) before or use
 * fq__msg__BaseBeReconnaissanceData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
bool
fq__msg__BaseBeReconnaissanceData__init(fq__msg__BaseBeReconnaissanceData * msg);

/// Finalize msg/BaseBeReconnaissanceData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
void
fq__msg__BaseBeReconnaissanceData__fini(fq__msg__BaseBeReconnaissanceData * msg);

/// Create msg/BaseBeReconnaissanceData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * fq__msg__BaseBeReconnaissanceData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
fq__msg__BaseBeReconnaissanceData *
fq__msg__BaseBeReconnaissanceData__create();

/// Destroy msg/BaseBeReconnaissanceData message.
/**
 * It calls
 * fq__msg__BaseBeReconnaissanceData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
void
fq__msg__BaseBeReconnaissanceData__destroy(fq__msg__BaseBeReconnaissanceData * msg);

/// Check for msg/BaseBeReconnaissanceData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
bool
fq__msg__BaseBeReconnaissanceData__are_equal(const fq__msg__BaseBeReconnaissanceData * lhs, const fq__msg__BaseBeReconnaissanceData * rhs);

/// Copy a msg/BaseBeReconnaissanceData message.
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
fq__msg__BaseBeReconnaissanceData__copy(
  const fq__msg__BaseBeReconnaissanceData * input,
  fq__msg__BaseBeReconnaissanceData * output);

/// Initialize array of msg/BaseBeReconnaissanceData messages.
/**
 * It allocates the memory for the number of elements and calls
 * fq__msg__BaseBeReconnaissanceData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
bool
fq__msg__BaseBeReconnaissanceData__Sequence__init(fq__msg__BaseBeReconnaissanceData__Sequence * array, size_t size);

/// Finalize array of msg/BaseBeReconnaissanceData messages.
/**
 * It calls
 * fq__msg__BaseBeReconnaissanceData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
void
fq__msg__BaseBeReconnaissanceData__Sequence__fini(fq__msg__BaseBeReconnaissanceData__Sequence * array);

/// Create array of msg/BaseBeReconnaissanceData messages.
/**
 * It allocates the memory for the array and calls
 * fq__msg__BaseBeReconnaissanceData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
fq__msg__BaseBeReconnaissanceData__Sequence *
fq__msg__BaseBeReconnaissanceData__Sequence__create(size_t size);

/// Destroy array of msg/BaseBeReconnaissanceData messages.
/**
 * It calls
 * fq__msg__BaseBeReconnaissanceData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
void
fq__msg__BaseBeReconnaissanceData__Sequence__destroy(fq__msg__BaseBeReconnaissanceData__Sequence * array);

/// Check for msg/BaseBeReconnaissanceData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fq
bool
fq__msg__BaseBeReconnaissanceData__Sequence__are_equal(const fq__msg__BaseBeReconnaissanceData__Sequence * lhs, const fq__msg__BaseBeReconnaissanceData__Sequence * rhs);

/// Copy an array of msg/BaseBeReconnaissanceData messages.
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
fq__msg__BaseBeReconnaissanceData__Sequence__copy(
  const fq__msg__BaseBeReconnaissanceData__Sequence * input,
  fq__msg__BaseBeReconnaissanceData__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FQ__MSG__DETAIL__BASE_BE_RECONNAISSANCE_DATA__FUNCTIONS_H_