// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fq:msg/BaseOrientation3D.idl
// generated code does not contain a copyright notice
#include "fq/msg/detail/base_orientation3_d__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
fq__msg__BaseOrientation3D__init(fq__msg__BaseOrientation3D * msg)
{
  if (!msg) {
    return false;
  }
  // roll
  // pitch
  // yaw
  return true;
}

void
fq__msg__BaseOrientation3D__fini(fq__msg__BaseOrientation3D * msg)
{
  if (!msg) {
    return;
  }
  // roll
  // pitch
  // yaw
}

bool
fq__msg__BaseOrientation3D__are_equal(const fq__msg__BaseOrientation3D * lhs, const fq__msg__BaseOrientation3D * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  return true;
}

bool
fq__msg__BaseOrientation3D__copy(
  const fq__msg__BaseOrientation3D * input,
  fq__msg__BaseOrientation3D * output)
{
  if (!input || !output) {
    return false;
  }
  // roll
  output->roll = input->roll;
  // pitch
  output->pitch = input->pitch;
  // yaw
  output->yaw = input->yaw;
  return true;
}

fq__msg__BaseOrientation3D *
fq__msg__BaseOrientation3D__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fq__msg__BaseOrientation3D * msg = (fq__msg__BaseOrientation3D *)allocator.allocate(sizeof(fq__msg__BaseOrientation3D), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fq__msg__BaseOrientation3D));
  bool success = fq__msg__BaseOrientation3D__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fq__msg__BaseOrientation3D__destroy(fq__msg__BaseOrientation3D * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fq__msg__BaseOrientation3D__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fq__msg__BaseOrientation3D__Sequence__init(fq__msg__BaseOrientation3D__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fq__msg__BaseOrientation3D * data = NULL;

  if (size) {
    data = (fq__msg__BaseOrientation3D *)allocator.zero_allocate(size, sizeof(fq__msg__BaseOrientation3D), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fq__msg__BaseOrientation3D__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fq__msg__BaseOrientation3D__fini(&data[i - 1]);
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
fq__msg__BaseOrientation3D__Sequence__fini(fq__msg__BaseOrientation3D__Sequence * array)
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
      fq__msg__BaseOrientation3D__fini(&array->data[i]);
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

fq__msg__BaseOrientation3D__Sequence *
fq__msg__BaseOrientation3D__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fq__msg__BaseOrientation3D__Sequence * array = (fq__msg__BaseOrientation3D__Sequence *)allocator.allocate(sizeof(fq__msg__BaseOrientation3D__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fq__msg__BaseOrientation3D__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fq__msg__BaseOrientation3D__Sequence__destroy(fq__msg__BaseOrientation3D__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fq__msg__BaseOrientation3D__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fq__msg__BaseOrientation3D__Sequence__are_equal(const fq__msg__BaseOrientation3D__Sequence * lhs, const fq__msg__BaseOrientation3D__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fq__msg__BaseOrientation3D__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fq__msg__BaseOrientation3D__Sequence__copy(
  const fq__msg__BaseOrientation3D__Sequence * input,
  fq__msg__BaseOrientation3D__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fq__msg__BaseOrientation3D);
    fq__msg__BaseOrientation3D * data =
      (fq__msg__BaseOrientation3D *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fq__msg__BaseOrientation3D__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          fq__msg__BaseOrientation3D__fini(&data[i]);
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
    if (!fq__msg__BaseOrientation3D__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
