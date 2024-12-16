// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fq:msg/BaseInterferenceData.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_INTERFERENCE_DATA__STRUCT_H_
#define FQ__MSG__DETAIL__BASE_INTERFERENCE_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'targets'
#include "fq/msg/detail/base_target_info__struct.h"

// Struct defined in msg/BaseInterferenceData in the package fq.
typedef struct fq__msg__BaseInterferenceData
{
  fq__msg__BaseTargetInfo__Sequence targets;
  int32_t num;
} fq__msg__BaseInterferenceData;

// Struct for a sequence of fq__msg__BaseInterferenceData.
typedef struct fq__msg__BaseInterferenceData__Sequence
{
  fq__msg__BaseInterferenceData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fq__msg__BaseInterferenceData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FQ__MSG__DETAIL__BASE_INTERFERENCE_DATA__STRUCT_H_
