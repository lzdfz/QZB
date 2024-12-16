// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fq:msg/ActorBuilding.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_BUILDING__STRUCT_H_
#define FQ__MSG__DETAIL__ACTOR_BUILDING__STRUCT_H_

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
// Member 'location'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'rotation'
#include "fq/msg/detail/base_orientation3_d__struct.h"
// Member 'damage_condition_data'
#include "fq/msg/detail/base_damage_condition_data__struct.h"
// Member 'be_reconnaissance_data'
#include "fq/msg/detail/base_be_reconnaissance_data__struct.h"

// Struct defined in msg/ActorBuilding in the package fq.
typedef struct fq__msg__ActorBuilding
{
  fq__msg__BaseBaseData base_data;
  geometry_msgs__msg__Point location;
  fq__msg__BaseOrientation3D rotation;
  fq__msg__BaseDamageConditionData damage_condition_data;
  fq__msg__BaseBeReconnaissanceData be_reconnaissance_data;
} fq__msg__ActorBuilding;

// Struct for a sequence of fq__msg__ActorBuilding.
typedef struct fq__msg__ActorBuilding__Sequence
{
  fq__msg__ActorBuilding * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fq__msg__ActorBuilding__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FQ__MSG__DETAIL__ACTOR_BUILDING__STRUCT_H_
