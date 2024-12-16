// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fq:msg/BaseOrientation3D.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_ORIENTATION3_D__STRUCT_H_
#define FQ__MSG__DETAIL__BASE_ORIENTATION3_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/BaseOrientation3D in the package fq.
typedef struct fq__msg__BaseOrientation3D
{
  double roll;
  double pitch;
  double yaw;
} fq__msg__BaseOrientation3D;

// Struct for a sequence of fq__msg__BaseOrientation3D.
typedef struct fq__msg__BaseOrientation3D__Sequence
{
  fq__msg__BaseOrientation3D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fq__msg__BaseOrientation3D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FQ__MSG__DETAIL__BASE_ORIENTATION3_D__STRUCT_H_
