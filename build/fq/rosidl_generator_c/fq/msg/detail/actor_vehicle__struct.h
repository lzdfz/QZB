// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fq:msg/ActorVehicle.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_VEHICLE__STRUCT_H_
#define FQ__MSG__DETAIL__ACTOR_VEHICLE__STRUCT_H_

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
// Member 'kinematics_data'
#include "fq/msg/detail/base_kinematics_data__struct.h"
// Member 'damage_condition_data'
#include "fq/msg/detail/base_damage_condition_data__struct.h"
// Member 'be_reconnaissance_data'
#include "fq/msg/detail/base_be_reconnaissance_data__struct.h"

// Struct defined in msg/ActorVehicle in the package fq.
typedef struct fq__msg__ActorVehicle
{
  fq__msg__BaseBaseData base_data;
  fq__msg__BaseKinematicsData kinematics_data;
  fq__msg__BaseDamageConditionData damage_condition_data;
  fq__msg__BaseBeReconnaissanceData be_reconnaissance_data;
} fq__msg__ActorVehicle;

// Struct for a sequence of fq__msg__ActorVehicle.
typedef struct fq__msg__ActorVehicle__Sequence
{
  fq__msg__ActorVehicle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fq__msg__ActorVehicle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FQ__MSG__DETAIL__ACTOR_VEHICLE__STRUCT_H_
