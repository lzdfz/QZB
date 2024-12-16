// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fq:msg/BaseKinematicsData.idl
// generated code does not contain a copyright notice
#include "fq/msg/detail/base_kinematics_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `location`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `rotation`
#include "fq/msg/detail/base_orientation3_d__functions.h"

bool
fq__msg__BaseKinematicsData__init(fq__msg__BaseKinematicsData * msg)
{
  if (!msg) {
    return false;
  }
  // location
  if (!geometry_msgs__msg__Point__init(&msg->location)) {
    fq__msg__BaseKinematicsData__fini(msg);
    return false;
  }
  // rotation
  if (!fq__msg__BaseOrientation3D__init(&msg->rotation)) {
    fq__msg__BaseKinematicsData__fini(msg);
    return false;
  }
  return true;
}

void
fq__msg__BaseKinematicsData__fini(fq__msg__BaseKinematicsData * msg)
{
  if (!msg) {
    return;
  }
  // location
  geometry_msgs__msg__Point__fini(&msg->location);
  // rotation
  fq__msg__BaseOrientation3D__fini(&msg->rotation);
}

bool
fq__msg__BaseKinematicsData__are_equal(const fq__msg__BaseKinematicsData * lhs, const fq__msg__BaseKinematicsData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // location
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->location), &(rhs->location)))
  {
    return false;
  }
  // rotation
  if (!fq__msg__BaseOrientation3D__are_equal(
      &(lhs->rotation), &(rhs->rotation)))
  {
    return false;
  }
  return true;
}

bool
fq__msg__BaseKinematicsData__copy(
  const fq__msg__BaseKinematicsData * input,
  fq__msg__BaseKinematicsData * output)
{
  if (!input || !output) {
    return false;
  }
  // location
  if (!geometry_msgs__msg__Point__copy(
      &(input->location), &(output->location)))
  {
    return false;
  }
  // rotation
  if (!fq__msg__BaseOrientation3D__copy(
      &(input->rotation), &(output->rotation)))
  {
    return false;
  }
  return true;
}

fq__msg__BaseKinematicsData *
fq__msg__BaseKinematicsData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fq__msg__BaseKinematicsData * msg = (fq__msg__BaseKinematicsData *)allocator.allocate(sizeof(fq__msg__BaseKinematicsData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fq__msg__BaseKinematicsData));
  bool success = fq__msg__BaseKinematicsData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fq__msg__BaseKinematicsData__destroy(fq__msg__BaseKinematicsData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fq__msg__BaseKinematicsData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fq__msg__BaseKinematicsData__Sequence__init(fq__msg__BaseKinematicsData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fq__msg__BaseKinematicsData * data = NULL;

  if (size) {
    data = (fq__msg__BaseKinematicsData *)allocator.zero_allocate(size, sizeof(fq__msg__BaseKinematicsData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fq__msg__BaseKinematicsData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fq__msg__BaseKinematicsData__fini(&data[i - 1]);
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
fq__msg__BaseKinematicsData__Sequence__fini(fq__msg__BaseKinematicsData__Sequence * array)
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
      fq__msg__BaseKinematicsData__fini(&array->data[i]);
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

fq__msg__BaseKinematicsData__Sequence *
fq__msg__BaseKinematicsData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fq__msg__BaseKinematicsData__Sequence * array = (fq__msg__BaseKinematicsData__Sequence *)allocator.allocate(sizeof(fq__msg__BaseKinematicsData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fq__msg__BaseKinematicsData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fq__msg__BaseKinematicsData__Sequence__destroy(fq__msg__BaseKinematicsData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fq__msg__BaseKinematicsData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fq__msg__BaseKinematicsData__Sequence__are_equal(const fq__msg__BaseKinematicsData__Sequence * lhs, const fq__msg__BaseKinematicsData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fq__msg__BaseKinematicsData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fq__msg__BaseKinematicsData__Sequence__copy(
  const fq__msg__BaseKinematicsData__Sequence * input,
  fq__msg__BaseKinematicsData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fq__msg__BaseKinematicsData);
    fq__msg__BaseKinematicsData * data =
      (fq__msg__BaseKinematicsData *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fq__msg__BaseKinematicsData__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          fq__msg__BaseKinematicsData__fini(&data[i]);
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
    if (!fq__msg__BaseKinematicsData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
