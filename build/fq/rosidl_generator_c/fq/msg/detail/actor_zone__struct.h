// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fq:msg/ActorZone.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_ZONE__STRUCT_H_
#define FQ__MSG__DETAIL__ACTOR_ZONE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'base_data'
#include "fq/msg/detail/base_base_data__struct.h"
// Member 'attributes'
#include "fq/msg/detail/base_zone_attr__struct.h"
// Member 'location'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'be_reconnaissance_data'
#include "fq/msg/detail/base_be_reconnaissance_data__struct.h"
// Member 'be_interference_data'
#include "fq/msg/detail/base_be_interference_data__struct.h"

// Struct defined in msg/ActorZone in the package fq.
typedef struct fq__msg__ActorZone
{
  fq__msg__BaseBaseData base_data;
  fq__msg__BaseZoneAttr attributes;
  geometry_msgs__msg__Point location;
  fq__msg__BaseBeReconnaissanceData be_reconnaissance_data;
  fq__msg__BaseBeInterferenceData be_interference_data;
} fq__msg__ActorZone;

// Struct for a sequence of fq__msg__ActorZone.
typedef struct fq__msg__ActorZone__Sequence
{
  fq__msg__ActorZone * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fq__msg__ActorZone__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FQ__MSG__DETAIL__ACTOR_ZONE__STRUCT_H_
