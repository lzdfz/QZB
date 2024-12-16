// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fq:msg/BaseAirplaneKinematicsData.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_AIRPLANE_KINEMATICS_DATA__STRUCT_H_
#define FQ__MSG__DETAIL__BASE_AIRPLANE_KINEMATICS_DATA__STRUCT_H_

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
// Member 'velocity'
// Member 'angular_velocity'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'acceleration'
#include "geometry_msgs/msg/detail/accel__struct.h"

// Struct defined in msg/BaseAirplaneKinematicsData in the package fq.
typedef struct fq__msg__BaseAirplaneKinematicsData
{
  geometry_msgs__msg__Point location;
  fq__msg__BaseOrientation3D rotation;
  geometry_msgs__msg__Twist velocity;
  geometry_msgs__msg__Twist angular_velocity;
  geometry_msgs__msg__Accel acceleration;
} fq__msg__BaseAirplaneKinematicsData;

// Struct for a sequence of fq__msg__BaseAirplaneKinematicsData.
typedef struct fq__msg__BaseAirplaneKinematicsData__Sequence
{
  fq__msg__BaseAirplaneKinematicsData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fq__msg__BaseAirplaneKinematicsData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FQ__MSG__DETAIL__BASE_AIRPLANE_KINEMATICS_DATA__STRUCT_H_
