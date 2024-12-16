// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fq:msg/BaseBoundingBox.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_BOUNDING_BOX__STRUCT_H_
#define FQ__MSG__DETAIL__BASE_BOUNDING_BOX__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/BaseBoundingBox in the package fq.
typedef struct fq__msg__BaseBoundingBox
{
  float x;
  float y;
  float z;
} fq__msg__BaseBoundingBox;

// Struct for a sequence of fq__msg__BaseBoundingBox.
typedef struct fq__msg__BaseBoundingBox__Sequence
{
  fq__msg__BaseBoundingBox * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fq__msg__BaseBoundingBox__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FQ__MSG__DETAIL__BASE_BOUNDING_BOX__STRUCT_H_
