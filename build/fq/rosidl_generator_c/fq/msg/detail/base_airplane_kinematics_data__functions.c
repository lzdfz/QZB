// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fq:msg/BaseAirplaneKinematicsData.idl
// generated code does not contain a copyright notice
#include "fq/msg/detail/base_airplane_kinematics_data__functions.h"

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
// Member `velocity`
// Member `angular_velocity`
#include "geometry_msgs/msg/detail/twist__functions.h"
// Member `acceleration`
#include "geometry_msgs/msg/detail/accel__functions.h"

bool
fq__msg__BaseAirplaneKinematicsData__init(fq__msg__BaseAirplaneKinematicsData * msg)
{
  if (!msg) {
    return false;
  }
  // location
  if (!geometry_msgs__msg__Point__init(&msg->location)) {
    fq__msg__BaseAirplaneKinematicsData__fini(msg);
    return false;
  }
  // rotation
  if (!fq__msg__BaseOrientation3D__init(&msg->rotation)) {
    fq__msg__BaseAirplaneKinematicsData__fini(msg);
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Twist__init(&msg->velocity)) {
    fq__msg__BaseAirplaneKinematicsData__fini(msg);
    return false;
  }
  // angular_velocity
  if (!geometry_msgs__msg__Twist__init(&msg->angular_velocity)) {
    fq__msg__BaseAirplaneKinematicsData__fini(msg);
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Accel__init(&msg->acceleration)) {
    fq__msg__BaseAirplaneKinematicsData__fini(msg);
    return false;
  }
  return true;
}

void
fq__msg__BaseAirplaneKinematicsData__fini(fq__msg__BaseAirplaneKinematicsData * msg)
{
  if (!msg) {
    return;
  }
  // location
  geometry_msgs__msg__Point__fini(&msg->location);
  // rotation
  fq__msg__BaseOrientation3D__fini(&msg->rotation);
  // velocity
  geometry_msgs__msg__Twist__fini(&msg->velocity);
  // angular_velocity
  geometry_msgs__msg__Twist__fini(&msg->angular_velocity);
  // acceleration
  geometry_msgs__msg__Accel__fini(&msg->acceleration);
}

bool
fq__msg__BaseAirplaneKinematicsData__are_equal(const fq__msg__BaseAirplaneKinematicsData * lhs, const fq__msg__BaseAirplaneKinematicsData * rhs)
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
  // velocity
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // angular_velocity
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->angular_velocity), &(rhs->angular_velocity)))
  {
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Accel__are_equal(
      &(lhs->acceleration), &(rhs->acceleration)))
  {
    return false;
  }
  return true;
}

bool
fq__msg__BaseAirplaneKinematicsData__copy(
  const fq__msg__BaseAirplaneKinematicsData * input,
  fq__msg__BaseAirplaneKinematicsData * output)
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
  // velocity
  if (!geometry_msgs__msg__Twist__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // angular_velocity
  if (!geometry_msgs__msg__Twist__copy(
      &(input->angular_velocity), &(output->angular_velocity)))
  {
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Accel__copy(
      &(input->acceleration), &(output->acceleration)))
  {
    return false;
  }
  return true;
}

fq__msg__BaseAirplaneKinematicsData *
fq__msg__BaseAirplaneKinematicsData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fq__msg__BaseAirplaneKinematicsData * msg = (fq__msg__BaseAirplaneKinematicsData *)allocator.allocate(sizeof(fq__msg__BaseAirplaneKinematicsData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fq__msg__BaseAirplaneKinematicsData));
  bool success = fq__msg__BaseAirplaneKinematicsData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fq__msg__BaseAirplaneKinematicsData__destroy(fq__msg__BaseAirplaneKinematicsData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fq__msg__BaseAirplaneKinematicsData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fq__msg__BaseAirplaneKinematicsData__Sequence__init(fq__msg__BaseAirplaneKinematicsData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fq__msg__BaseAirplaneKinematicsData * data = NULL;

  if (size) {
    data = (fq__msg__BaseAirplaneKinematicsData *)allocator.zero_allocate(size, sizeof(fq__msg__BaseAirplaneKinematicsData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fq__msg__BaseAirplaneKinematicsData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fq__msg__BaseAirplaneKinematicsData__fini(&data[i - 1]);
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
fq__msg__BaseAirplaneKinematicsData__Sequence__fini(fq__msg__BaseAirplaneKinematicsData__Sequence * array)
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
      fq__msg__BaseAirplaneKinematicsData__fini(&array->data[i]);
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

fq__msg__BaseAirplaneKinematicsData__Sequence *
fq__msg__BaseAirplaneKinematicsData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fq__msg__BaseAirplaneKinematicsData__Sequence * array = (fq__msg__BaseAirplaneKinematicsData__Sequence *)allocator.allocate(sizeof(fq__msg__BaseAirplaneKinematicsData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fq__msg__BaseAirplaneKinematicsData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fq__msg__BaseAirplaneKinematicsData__Sequence__destroy(fq__msg__BaseAirplaneKinematicsData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fq__msg__BaseAirplaneKinematicsData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fq__msg__BaseAirplaneKinematicsData__Sequence__are_equal(const fq__msg__BaseAirplaneKinematicsData__Sequence * lhs, const fq__msg__BaseAirplaneKinematicsData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fq__msg__BaseAirplaneKinematicsData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fq__msg__BaseAirplaneKinematicsData__Sequence__copy(
  const fq__msg__BaseAirplaneKinematicsData__Sequence * input,
  fq__msg__BaseAirplaneKinematicsData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fq__msg__BaseAirplaneKinematicsData);
    fq__msg__BaseAirplaneKinematicsData * data =
      (fq__msg__BaseAirplaneKinematicsData *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fq__msg__BaseAirplaneKinematicsData__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          fq__msg__BaseAirplaneKinematicsData__fini(&data[i]);
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
    if (!fq__msg__BaseAirplaneKinematicsData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
