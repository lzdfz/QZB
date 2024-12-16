// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fq:msg/BaseDamageConditionData.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_DAMAGE_CONDITION_DATA__STRUCT_H_
#define FQ__MSG__DETAIL__BASE_DAMAGE_CONDITION_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'attack_remaining_amounts'
// Member 'face_health_points'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/BaseDamageConditionData in the package fq.
typedef struct fq__msg__BaseDamageConditionData
{
  rosidl_runtime_c__int32__Sequence attack_remaining_amounts;
  rosidl_runtime_c__int32__Sequence face_health_points;
} fq__msg__BaseDamageConditionData;

// Struct for a sequence of fq__msg__BaseDamageConditionData.
typedef struct fq__msg__BaseDamageConditionData__Sequence
{
  fq__msg__BaseDamageConditionData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fq__msg__BaseDamageConditionData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FQ__MSG__DETAIL__BASE_DAMAGE_CONDITION_DATA__STRUCT_H_
