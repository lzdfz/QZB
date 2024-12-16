// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fq:msg/ActorEquipment.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_EQUIPMENT__STRUCT_H_
#define FQ__MSG__DETAIL__ACTOR_EQUIPMENT__STRUCT_H_

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
// Member 'be_reconnaissance_data'
#include "fq/msg/detail/base_be_reconnaissance_data__struct.h"
// Member 'be_interference_data'
#include "fq/msg/detail/base_be_interference_data__struct.h"

// Struct defined in msg/ActorEquipment in the package fq.
typedef struct fq__msg__ActorEquipment
{
  fq__msg__BaseBaseData base_data;
  fq__msg__BaseKinematicsData kinematics_data;
  fq__msg__BaseBeReconnaissanceData be_reconnaissance_data;
  fq__msg__BaseBeInterferenceData be_interference_data;
} fq__msg__ActorEquipment;

// Struct for a sequence of fq__msg__ActorEquipment.
typedef struct fq__msg__ActorEquipment__Sequence
{
  fq__msg__ActorEquipment * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fq__msg__ActorEquipment__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FQ__MSG__DETAIL__ACTOR_EQUIPMENT__STRUCT_H_
