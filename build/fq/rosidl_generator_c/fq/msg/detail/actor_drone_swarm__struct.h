// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fq:msg/ActorDroneSwarm.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_DRONE_SWARM__STRUCT_H_
#define FQ__MSG__DETAIL__ACTOR_DRONE_SWARM__STRUCT_H_

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
#include "fq/msg/detail/base_plane_attr__struct.h"
// Member 'drone_swarm_kinematics_data'
#include "fq/msg/detail/base_airplane_kinematics_data__struct.h"
// Member 'load_data'
#include "fq/msg/detail/base_load_data__struct.h"
// Member 'reconnaissance_data'
#include "fq/msg/detail/base_reconnaissance_data__struct.h"
// Member 'interference_data'
#include "fq/msg/detail/base_interference_data__struct.h"

// Struct defined in msg/ActorDroneSwarm in the package fq.
typedef struct fq__msg__ActorDroneSwarm
{
  fq__msg__BaseBaseData base_data;
  fq__msg__BasePlaneAttr attributes;
  fq__msg__BaseAirplaneKinematicsData drone_swarm_kinematics_data;
  fq__msg__BaseLoadData load_data;
  fq__msg__BaseReconnaissanceData reconnaissance_data;
  fq__msg__BaseInterferenceData interference_data;
} fq__msg__ActorDroneSwarm;

// Struct for a sequence of fq__msg__ActorDroneSwarm.
typedef struct fq__msg__ActorDroneSwarm__Sequence
{
  fq__msg__ActorDroneSwarm * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fq__msg__ActorDroneSwarm__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FQ__MSG__DETAIL__ACTOR_DRONE_SWARM__STRUCT_H_
