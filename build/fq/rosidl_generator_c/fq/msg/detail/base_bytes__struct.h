// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fq:msg/BaseBytes.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_BYTES__STRUCT_H_
#define FQ__MSG__DETAIL__BASE_BYTES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/BaseBytes in the package fq.
typedef struct fq__msg__BaseBytes
{
  rosidl_runtime_c__octet__Sequence data;
} fq__msg__BaseBytes;

// Struct for a sequence of fq__msg__BaseBytes.
typedef struct fq__msg__BaseBytes__Sequence
{
  fq__msg__BaseBytes * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fq__msg__BaseBytes__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FQ__MSG__DETAIL__BASE_BYTES__STRUCT_H_
