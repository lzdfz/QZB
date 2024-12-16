// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fq:msg/Header.idl
// generated code does not contain a copyright notice
#include "fq/msg/detail/header__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
fq__msg__Header__init(fq__msg__Header * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp_sec
  return true;
}

void
fq__msg__Header__fini(fq__msg__Header * msg)
{
  if (!msg) {
    return;
  }
  // timestamp_sec
}

bool
fq__msg__Header__are_equal(const fq__msg__Header * lhs, const fq__msg__Header * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp_sec
  if (lhs->timestamp_sec != rhs->timestamp_sec) {
    return false;
  }
  return true;
}

bool
fq__msg__Header__copy(
  const fq__msg__Header * input,
  fq__msg__Header * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp_sec
  output->timestamp_sec = input->timestamp_sec;
  return true;
}

fq__msg__Header *
fq__msg__Header__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fq__msg__Header * msg = (fq__msg__Header *)allocator.allocate(sizeof(fq__msg__Header), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fq__msg__Header));
  bool success = fq__msg__Header__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fq__msg__Header__destroy(fq__msg__Header * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fq__msg__Header__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fq__msg__Header__Sequence__init(fq__msg__Header__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fq__msg__Header * data = NULL;

  if (size) {
    data = (fq__msg__Header *)allocator.zero_allocate(size, sizeof(fq__msg__Header), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fq__msg__Header__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fq__msg__Header__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
fq__msg__Header__Sequence__fini(fq__msg__Header__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      fq__msg__Header__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

fq__msg__Header__Sequence *
fq__msg__Header__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fq__msg__Header__Sequence * array = (fq__msg__Header__Sequence *)allocator.allocate(sizeof(fq__msg__Header__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fq__msg__Header__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fq__msg__Header__Sequence__destroy(fq__msg__Header__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fq__msg__Header__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fq__msg__Header__Sequence__are_equal(const fq__msg__Header__Sequence * lhs, const fq__msg__Header__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fq__msg__Header__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fq__msg__Header__Sequence__copy(
  const fq__msg__Header__Sequence * input,
  fq__msg__Header__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fq__msg__Header);
    fq__msg__Header * data =
      (fq__msg__Header *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fq__msg__Header__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          fq__msg__Header__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fq__msg__Header__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}