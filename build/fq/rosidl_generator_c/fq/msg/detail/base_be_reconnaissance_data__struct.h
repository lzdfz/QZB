// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fq:msg/BaseBeReconnaissanceData.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_BE_RECONNAISSANCE_DATA__STRUCT_H_
#define FQ__MSG__DETAIL__BASE_BE_RECONNAISSANCE_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/BaseBeReconnaissanceData in the package fq.
typedef struct fq__msg__BaseBeReconnaissanceData
{
  bool b_found;
  bool b_covered;
} fq__msg__BaseBeReconnaissanceData;

// Struct for a sequence of fq__msg__BaseBeReconnaissanceData.
typedef struct fq__msg__BaseBeReconnaissanceData__Sequence
{
  fq__msg__BaseBeReconnaissanceData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fq__msg__BaseBeReconnaissanceData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FQ__MSG__DETAIL__BASE_BE_RECONNAISSANCE_DATA__STRUCT_H_
