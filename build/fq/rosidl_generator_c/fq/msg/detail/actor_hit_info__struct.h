// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fq:msg/ActorHitInfo.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_HIT_INFO__STRUCT_H_
#define FQ__MSG__DETAIL__ACTOR_HIT_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'direction'
#include "geometry_msgs/msg/detail/point__struct.h"

// Struct defined in msg/ActorHitInfo in the package fq.
typedef struct fq__msg__ActorHitInfo
{
  int32_t id;
  geometry_msgs__msg__Point direction;
} fq__msg__ActorHitInfo;

// Struct for a sequence of fq__msg__ActorHitInfo.
typedef struct fq__msg__ActorHitInfo__Sequence
{
  fq__msg__ActorHitInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fq__msg__ActorHitInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FQ__MSG__DETAIL__ACTOR_HIT_INFO__STRUCT_H_
