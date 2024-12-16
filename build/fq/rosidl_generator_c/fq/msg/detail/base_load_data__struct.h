// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fq:msg/BaseLoadData.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_LOAD_DATA__STRUCT_H_
#define FQ__MSG__DETAIL__BASE_LOAD_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/BaseLoadData in the package fq.
typedef struct fq__msg__BaseLoadData
{
  int32_t remaining_projectiles;
} fq__msg__BaseLoadData;

// Struct for a sequence of fq__msg__BaseLoadData.
typedef struct fq__msg__BaseLoadData__Sequence
{
  fq__msg__BaseLoadData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fq__msg__BaseLoadData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FQ__MSG__DETAIL__BASE_LOAD_DATA__STRUCT_H_
