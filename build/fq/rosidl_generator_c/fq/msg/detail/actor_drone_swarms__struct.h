// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fq:msg/ActorDroneSwarms.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_DRONE_SWARMS__STRUCT_H_
#define FQ__MSG__DETAIL__ACTOR_DRONE_SWARMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "fq/msg/detail/header__struct.h"
// Member 'drone_swarms'
#include "fq/msg/detail/actor_drone_swarm__struct.h"

// Struct defined in msg/ActorDroneSwarms in the package fq.
typedef struct fq__msg__ActorDroneSwarms
{
  fq__msg__Header header;
  fq__msg__ActorDroneSwarm__Sequence drone_swarms;
} fq__msg__ActorDroneSwarms;

// Struct for a sequence of fq__msg__ActorDroneSwarms.
typedef struct fq__msg__ActorDroneSwarms__Sequence
{
  fq__msg__ActorDroneSwarms * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fq__msg__ActorDroneSwarms__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FQ__MSG__DETAIL__ACTOR_DRONE_SWARMS__STRUCT_H_
