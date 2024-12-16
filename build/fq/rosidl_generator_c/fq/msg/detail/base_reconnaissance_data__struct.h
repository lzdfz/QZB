// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fq:msg/BaseReconnaissanceData.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_RECONNAISSANCE_DATA__STRUCT_H_
#define FQ__MSG__DETAIL__BASE_RECONNAISSANCE_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'targets'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/BaseReconnaissanceData in the package fq.
typedef struct fq__msg__BaseReconnaissanceData
{
  rosidl_runtime_c__int32__Sequence targets;
  int32_t num;
} fq__msg__BaseReconnaissanceData;

// Struct for a sequence of fq__msg__BaseReconnaissanceData.
typedef struct fq__msg__BaseReconnaissanceData__Sequence
{
  fq__msg__BaseReconnaissanceData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fq__msg__BaseReconnaissanceData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FQ__MSG__DETAIL__BASE_RECONNAISSANCE_DATA__STRUCT_H_
