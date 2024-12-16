// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fq:msg/BaseBaseData.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_BASE_DATA__STRUCT_H_
#define FQ__MSG__DETAIL__BASE_BASE_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type_id'
// Member 'actor_type'
#include "rosidl_runtime_c/string.h"
// Member 'bounding_box'
#include "fq/msg/detail/base_bounding_box__struct.h"

// Struct defined in msg/BaseBaseData in the package fq.
typedef struct fq__msg__BaseBaseData
{
  int32_t id;
  int32_t health_point;
  rosidl_runtime_c__String type_id;
  rosidl_runtime_c__String actor_type;
  fq__msg__BaseBoundingBox bounding_box;
  bool b_target;
} fq__msg__BaseBaseData;

// Struct for a sequence of fq__msg__BaseBaseData.
typedef struct fq__msg__BaseBaseData__Sequence
{
  fq__msg__BaseBaseData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fq__msg__BaseBaseData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FQ__MSG__DETAIL__BASE_BASE_DATA__STRUCT_H_
