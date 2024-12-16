// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fq:msg/ActorBuilding.idl
// generated code does not contain a copyright notice
#include "fq/msg/detail/actor_building__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `base_data`
#include "fq/msg/detail/base_base_data__functions.h"
// Member `location`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `rotation`
#include "fq/msg/detail/base_orientation3_d__functions.h"
// Member `damage_condition_data`
#include "fq/msg/detail/base_damage_condition_data__functions.h"
// Member `be_reconnaissance_data`
#include "fq/msg/detail/base_be_reconnaissance_data__functions.h"

bool
fq__msg__ActorBuilding__init(fq__msg__ActorBuilding * msg)
{
  if (!msg) {
    return false;
  }
  // base_data
  if (!fq__msg__BaseBaseData__init(&msg->base_data)) {
    fq__msg__ActorBuilding__fini(msg);
    return false;
  }
  // location
  if (!geometry_msgs__msg__Point__init(&msg->location)) {
    fq__msg__ActorBuilding__fini(msg);
    return false;
  }
  // rotation
  if (!fq__msg__BaseOrientation3D__init(&msg->rotation)) {
    fq__msg__ActorBuilding__fini(msg);
    return false;
  }
  // damage_condition_data
  if (!fq__msg__BaseDamageConditionData__init(&msg->damage_condition_data)) {
    fq__msg__ActorBuilding__fini(msg);
    return false;
  }
  // be_reconnaissance_data
  if (!fq__msg__BaseBeReconnaissanceData__init(&msg->be_reconnaissance_data)) {
    fq__msg__ActorBuilding__fini(msg);
    return false;
  }
  return true;
}

void
fq__msg__ActorBuilding__fini(fq__msg__ActorBuilding * msg)
{
  if (!msg) {
    return;
  }
  // base_data
  fq__msg__BaseBaseData__fini(&msg->base_data);
  // location
  geometry_msgs__msg__Point__fini(&msg->location);
  // rotation
  fq__msg__BaseOrientation3D__fini(&msg->rotation);
  // damage_condition_data
  fq__msg__BaseDamageConditionData__fini(&msg->damage_condition_data);
  // be_reconnaissance_data
  fq__msg__BaseBeReconnaissanceData__fini(&msg->be_reconnaissance_data);
}

bool
fq__msg__ActorBuilding__are_equal(const fq__msg__ActorBuilding * lhs, const fq__msg__ActorBuilding * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // base_data
  if (!fq__msg__BaseBaseData__are_equal(
      &(lhs->base_data), &(rhs->base_data)))
  {
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
  // damage_condition_data
  if (!fq__msg__BaseDamageConditionData__are_equal(
      &(lhs->damage_condition_data), &(rhs->damage_condition_data)))
  {
    return false;
  }
  // be_reconnaissance_data
  if (!fq__msg__BaseBeReconnaissanceData__are_equal(
      &(lhs->be_reconnaissance_data), &(rhs->be_reconnaissance_data)))
  {
    return false;
  }
  return true;
}

bool
fq__msg__ActorBuilding__copy(
  const fq__msg__ActorBuilding * input,
  fq__msg__ActorBuilding * output)
{
  if (!input || !output) {
    return false;
  }
  // base_data
  if (!fq__msg__BaseBaseData__copy(
      &(input->base_data), &(output->base_data)))
  {
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
  // damage_condition_data
  if (!fq__msg__BaseDamageConditionData__copy(
      &(input->damage_condition_data), &(output->damage_condition_data)))
  {
    return false;
  }
  // be_reconnaissance_data
  if (!fq__msg__BaseBeReconnaissanceData__copy(
      &(input->be_reconnaissance_data), &(output->be_reconnaissance_data)))
  {
    return false;
  }
  return true;
}

fq__msg__ActorBuilding *
fq__msg__ActorBuilding__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fq__msg__ActorBuilding * msg = (fq__msg__ActorBuilding *)allocator.allocate(sizeof(fq__msg__ActorBuilding), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fq__msg__ActorBuilding));
  bool success = fq__msg__ActorBuilding__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fq__msg__ActorBuilding__destroy(fq__msg__ActorBuilding * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fq__msg__ActorBuilding__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fq__msg__ActorBuilding__Sequence__init(fq__msg__ActorBuilding__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fq__msg__ActorBuilding * data = NULL;

  if (size) {
    data = (fq__msg__ActorBuilding *)allocator.zero_allocate(size, sizeof(fq__msg__ActorBuilding), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fq__msg__ActorBuilding__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fq__msg__ActorBuilding__fini(&data[i - 1]);
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
fq__msg__ActorBuilding__Sequence__fini(fq__msg__ActorBuilding__Sequence * array)
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
      fq__msg__ActorBuilding__fini(&array->data[i]);
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

fq__msg__ActorBuilding__Sequence *
fq__msg__ActorBuilding__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fq__msg__ActorBuilding__Sequence * array = (fq__msg__ActorBuilding__Sequence *)allocator.allocate(sizeof(fq__msg__ActorBuilding__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fq__msg__ActorBuilding__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fq__msg__ActorBuilding__Sequence__destroy(fq__msg__ActorBuilding__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fq__msg__ActorBuilding__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fq__msg__ActorBuilding__Sequence__are_equal(const fq__msg__ActorBuilding__Sequence * lhs, const fq__msg__ActorBuilding__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fq__msg__ActorBuilding__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fq__msg__ActorBuilding__Sequence__copy(
  const fq__msg__ActorBuilding__Sequence * input,
  fq__msg__ActorBuilding__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fq__msg__ActorBuilding);
    fq__msg__ActorBuilding * data =
      (fq__msg__ActorBuilding *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fq__msg__ActorBuilding__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          fq__msg__ActorBuilding__fini(&data[i]);
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
    if (!fq__msg__ActorBuilding__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
