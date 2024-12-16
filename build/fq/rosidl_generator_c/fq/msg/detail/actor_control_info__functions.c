// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fq:msg/ActorControlInfo.idl
// generated code does not contain a copyright notice
#include "fq/msg/detail/actor_control_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `target_positions`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `target_headings`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
fq__msg__ActorControlInfo__init(fq__msg__ActorControlInfo * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // target_positions
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->target_positions, 0)) {
    fq__msg__ActorControlInfo__fini(msg);
    return false;
  }
  // max_velocity
  // target_velocity
  // target_headings
  if (!rosidl_runtime_c__float__Sequence__init(&msg->target_headings, 0)) {
    fq__msg__ActorControlInfo__fini(msg);
    return false;
  }
  return true;
}

void
fq__msg__ActorControlInfo__fini(fq__msg__ActorControlInfo * msg)
{
  if (!msg) {
    return;
  }
  // id
  // target_positions
  geometry_msgs__msg__Point__Sequence__fini(&msg->target_positions);
  // max_velocity
  // target_velocity
  // target_headings
  rosidl_runtime_c__float__Sequence__fini(&msg->target_headings);
}

bool
fq__msg__ActorControlInfo__are_equal(const fq__msg__ActorControlInfo * lhs, const fq__msg__ActorControlInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // target_positions
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->target_positions), &(rhs->target_positions)))
  {
    return false;
  }
  // max_velocity
  if (lhs->max_velocity != rhs->max_velocity) {
    return false;
  }
  // target_velocity
  if (lhs->target_velocity != rhs->target_velocity) {
    return false;
  }
  // target_headings
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->target_headings), &(rhs->target_headings)))
  {
    return false;
  }
  return true;
}

bool
fq__msg__ActorControlInfo__copy(
  const fq__msg__ActorControlInfo * input,
  fq__msg__ActorControlInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // target_positions
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->target_positions), &(output->target_positions)))
  {
    return false;
  }
  // max_velocity
  output->max_velocity = input->max_velocity;
  // target_velocity
  output->target_velocity = input->target_velocity;
  // target_headings
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->target_headings), &(output->target_headings)))
  {
    return false;
  }
  return true;
}

fq__msg__ActorControlInfo *
fq__msg__ActorControlInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fq__msg__ActorControlInfo * msg = (fq__msg__ActorControlInfo *)allocator.allocate(sizeof(fq__msg__ActorControlInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fq__msg__ActorControlInfo));
  bool success = fq__msg__ActorControlInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fq__msg__ActorControlInfo__destroy(fq__msg__ActorControlInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fq__msg__ActorControlInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fq__msg__ActorControlInfo__Sequence__init(fq__msg__ActorControlInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fq__msg__ActorControlInfo * data = NULL;

  if (size) {
    data = (fq__msg__ActorControlInfo *)allocator.zero_allocate(size, sizeof(fq__msg__ActorControlInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fq__msg__ActorControlInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fq__msg__ActorControlInfo__fini(&data[i - 1]);
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
fq__msg__ActorControlInfo__Sequence__fini(fq__msg__ActorControlInfo__Sequence * array)
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
      fq__msg__ActorControlInfo__fini(&array->data[i]);
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

fq__msg__ActorControlInfo__Sequence *
fq__msg__ActorControlInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fq__msg__ActorControlInfo__Sequence * array = (fq__msg__ActorControlInfo__Sequence *)allocator.allocate(sizeof(fq__msg__ActorControlInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fq__msg__ActorControlInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fq__msg__ActorControlInfo__Sequence__destroy(fq__msg__ActorControlInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fq__msg__ActorControlInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fq__msg__ActorControlInfo__Sequence__are_equal(const fq__msg__ActorControlInfo__Sequence * lhs, const fq__msg__ActorControlInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fq__msg__ActorControlInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fq__msg__ActorControlInfo__Sequence__copy(
  const fq__msg__ActorControlInfo__Sequence * input,
  fq__msg__ActorControlInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fq__msg__ActorControlInfo);
    fq__msg__ActorControlInfo * data =
      (fq__msg__ActorControlInfo *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fq__msg__ActorControlInfo__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          fq__msg__ActorControlInfo__fini(&data[i]);
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
    if (!fq__msg__ActorControlInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
