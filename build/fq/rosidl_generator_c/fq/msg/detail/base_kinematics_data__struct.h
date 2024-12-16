// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fq:msg/BaseKinematicsData.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_KINEMATICS_DATA__STRUCT_H_
#define FQ__MSG__DETAIL__BASE_KINEMATICS_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'location'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'rotation'
#include "fq/msg/detail/base_orientation3_d__struct.h"

// Struct defined in msg/BaseKinematicsData in the package fq.
typedef struct fq__msg__BaseKinematicsData
{
  geometry_msgs__msg__Point location;
  fq__msg__BaseOrientation3D rotation;
} fq__msg__BaseKinematicsData;

// Struct for a sequence of fq__msg__BaseKinematicsData.
typedef struct fq__msg__BaseKinematicsData__Sequence
{
  fq__msg__BaseKinematicsData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fq__msg__BaseKinematicsData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FQ__MSG__DETAIL__BASE_KINEMATICS_DATA__STRUCT_H_
