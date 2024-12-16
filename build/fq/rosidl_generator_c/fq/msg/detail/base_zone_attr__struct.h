// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fq:msg/BaseZoneAttr.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_ZONE_ATTR__STRUCT_H_
#define FQ__MSG__DETAIL__BASE_ZONE_ATTR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/BaseZoneAttr in the package fq.
typedef struct fq__msg__BaseZoneAttr
{
  float height;
  float radius;
} fq__msg__BaseZoneAttr;

// Struct for a sequence of fq__msg__BaseZoneAttr.
typedef struct fq__msg__BaseZoneAttr__Sequence
{
  fq__msg__BaseZoneAttr * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fq__msg__BaseZoneAttr__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FQ__MSG__DETAIL__BASE_ZONE_ATTR__STRUCT_H_
