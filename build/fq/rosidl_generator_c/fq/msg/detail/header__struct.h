// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fq:msg/Header.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__HEADER__STRUCT_H_
#define FQ__MSG__DETAIL__HEADER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Header in the package fq.
typedef struct fq__msg__Header
{
  double timestamp_sec;
} fq__msg__Header;

// Struct for a sequence of fq__msg__Header.
typedef struct fq__msg__Header__Sequence
{
  fq__msg__Header * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fq__msg__Header__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FQ__MSG__DETAIL__HEADER__STRUCT_H_
