// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fq:msg/ActorZones.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_ZONES__STRUCT_H_
#define FQ__MSG__DETAIL__ACTOR_ZONES__STRUCT_H_

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
// Member 'zones'
#include "fq/msg/detail/actor_zone__struct.h"

// Struct defined in msg/ActorZones in the package fq.
typedef struct fq__msg__ActorZones
{
  fq__msg__Header header;
  fq__msg__ActorZone__Sequence zones;
} fq__msg__ActorZones;

// Struct for a sequence of fq__msg__ActorZones.
typedef struct fq__msg__ActorZones__Sequence
{
  fq__msg__ActorZones * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fq__msg__ActorZones__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FQ__MSG__DETAIL__ACTOR_ZONES__STRUCT_H_
