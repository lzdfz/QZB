// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fq:msg/ActorControlInfos.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_CONTROL_INFOS__STRUCT_H_
#define FQ__MSG__DETAIL__ACTOR_CONTROL_INFOS__STRUCT_H_

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
// Member 'control_info'
#include "fq/msg/detail/actor_control_info__struct.h"

// Struct defined in msg/ActorControlInfos in the package fq.
typedef struct fq__msg__ActorControlInfos
{
  fq__msg__Header header;
  fq__msg__ActorControlInfo__Sequence control_info;
} fq__msg__ActorControlInfos;

// Struct for a sequence of fq__msg__ActorControlInfos.
typedef struct fq__msg__ActorControlInfos__Sequence
{
  fq__msg__ActorControlInfos * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fq__msg__ActorControlInfos__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FQ__MSG__DETAIL__ACTOR_CONTROL_INFOS__STRUCT_H_
