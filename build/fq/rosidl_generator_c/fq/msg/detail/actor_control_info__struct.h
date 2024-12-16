// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fq:msg/ActorControlInfo.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_CONTROL_INFO__STRUCT_H_
#define FQ__MSG__DETAIL__ACTOR_CONTROL_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target_positions'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'target_headings'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/ActorControlInfo in the package fq.
typedef struct fq__msg__ActorControlInfo
{
  int32_t id;
  geometry_msgs__msg__Point__Sequence target_positions;
  float max_velocity;
  float target_velocity;
  rosidl_runtime_c__float__Sequence target_headings;
} fq__msg__ActorControlInfo;

// Struct for a sequence of fq__msg__ActorControlInfo.
typedef struct fq__msg__ActorControlInfo__Sequence
{
  fq__msg__ActorControlInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fq__msg__ActorControlInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FQ__MSG__DETAIL__ACTOR_CONTROL_INFO__STRUCT_H_
