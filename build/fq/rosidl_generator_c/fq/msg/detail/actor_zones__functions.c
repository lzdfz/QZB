// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fq:msg/ActorZones.idl
// generated code does not contain a copyright notice
#include "fq/msg/detail/actor_zones__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "fq/msg/detail/header__functions.h"
// Member `zones`
#include "fq/msg/detail/actor_zone__functions.h"

bool
fq__msg__ActorZones__init(fq__msg__ActorZones * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!fq__msg__Header__init(&msg->header)) {
    fq__msg__ActorZones__fini(msg);
    return false;
  }
  // zones
  if (!fq__msg__ActorZone__Sequence__init(&msg->zones, 0)) {
    fq__msg__ActorZones__fini(msg);
    return false;
  }
  return true;
}

void
fq__msg__ActorZones__fini(fq__msg__ActorZones * msg)
{
  if (!msg) {
    return;
  }
  // header
  fq__msg__Header__fini(&msg->header);
  // zones
  fq__msg__ActorZone__Sequence__fini(&msg->zones);
}

bool
fq__msg__ActorZones__are_equal(const fq__msg__ActorZones * lhs, const fq__msg__ActorZones * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!fq__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // zones
  if (!fq__msg__ActorZone__Sequence__are_equal(
      &(lhs->zones), &(rhs->zones)))
  {
    return false;
  }
  return true;
}

bool
fq__msg__ActorZones__copy(
  const fq__msg__ActorZones * input,
  fq__msg__ActorZones * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!fq__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // zones
  if (!fq__msg__ActorZone__Sequence__copy(
      &(input->zones), &(output->zones)))
  {
    return false;
  }
  return true;
}

fq__msg__ActorZones *
fq__msg__ActorZones__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fq__msg__ActorZones * msg = (fq__msg__ActorZones *)allocator.allocate(sizeof(fq__msg__ActorZones), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fq__msg__ActorZones));
  bool success = fq__msg__ActorZones__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fq__msg__ActorZones__destroy(fq__msg__ActorZones * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fq__msg__ActorZones__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fq__msg__ActorZones__Sequence__init(fq__msg__ActorZones__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fq__msg__ActorZones * data = NULL;

  if (size) {
    data = (fq__msg__ActorZones *)allocator.zero_allocate(size, sizeof(fq__msg__ActorZones), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fq__msg__ActorZones__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fq__msg__ActorZones__fini(&data[i - 1]);
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
fq__msg__ActorZones__Sequence__fini(fq__msg__ActorZones__Sequence * array)
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
      fq__msg__ActorZones__fini(&array->data[i]);
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

fq__msg__ActorZones__Sequence *
fq__msg__ActorZones__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fq__msg__ActorZones__Sequence * array = (fq__msg__ActorZones__Sequence *)allocator.allocate(sizeof(fq__msg__ActorZones__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fq__msg__ActorZones__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fq__msg__ActorZones__Sequence__destroy(fq__msg__ActorZones__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fq__msg__ActorZones__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fq__msg__ActorZones__Sequence__are_equal(const fq__msg__ActorZones__Sequence * lhs, const fq__msg__ActorZones__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fq__msg__ActorZones__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fq__msg__ActorZones__Sequence__copy(
  const fq__msg__ActorZones__Sequence * input,
  fq__msg__ActorZones__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fq__msg__ActorZones);
    fq__msg__ActorZones * data =
      (fq__msg__ActorZones *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fq__msg__ActorZones__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          fq__msg__ActorZones__fini(&data[i]);
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
    if (!fq__msg__ActorZones__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
