// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fq:msg/BasePlaneAttr.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_PLANE_ATTR__STRUCT_H_
#define FQ__MSG__DETAIL__BASE_PLANE_ATTR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'airfoil_type'
// Member 'load_type'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/BasePlaneAttr in the package fq.
typedef struct fq__msg__BasePlaneAttr
{
  rosidl_runtime_c__String airfoil_type;
  rosidl_runtime_c__String load_type;
  float min_velocity;
  float max_velocity;
  float max_acceleration;
  float max_deceleration;
  float max_roll_angle;
  float max_pitch_angle;
  float roll_rate;
  float pitch_rate;
  float yaw_rate_to_max_roll;
  float limit_height;
  int32_t health_point;
  int32_t damage_value;
  float reconnaissance_radius;
  float reconnaissance_angle;
  int32_t bombload;
  float bomb_range;
  float bomb_velocity;
  float bomb_cold_down_time;
} fq__msg__BasePlaneAttr;

// Struct for a sequence of fq__msg__BasePlaneAttr.
typedef struct fq__msg__BasePlaneAttr__Sequence
{
  fq__msg__BasePlaneAttr * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fq__msg__BasePlaneAttr__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FQ__MSG__DETAIL__BASE_PLANE_ATTR__STRUCT_H_
