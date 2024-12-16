// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fq:msg/ActorAirplane.idl
// generated code does not contain a copyright notice
#include "fq/msg/detail/actor_airplane__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `base_data`
#include "fq/msg/detail/base_base_data__functions.h"
// Member `attributes`
#include "fq/msg/detail/base_plane_attr__functions.h"
// Member `be_reconnaissance_data`
#include "fq/msg/detail/base_be_reconnaissance_data__functions.h"
// Member `kinematics_data`
#include "fq/msg/detail/base_kinematics_data__functions.h"

bool
fq__msg__ActorAirplane__init(fq__msg__ActorAirplane * msg)
{
  if (!msg) {
    return false;
  }
  // base_data
  if (!fq__msg__BaseBaseData__init(&msg->base_data)) {
    fq__msg__ActorAirplane__fini(msg);
    return false;
  }
  // attributes
  if (!fq__msg__BasePlaneAttr__init(&msg->attributes)) {
    fq__msg__ActorAirplane__fini(msg);
    return false;
  }
  // be_reconnaissance_data
  if (!fq__msg__BaseBeReconnaissanceData__init(&msg->be_reconnaissance_data)) {
    fq__msg__ActorAirplane__fini(msg);
    return false;
  }
  // kinematics_data
  if (!fq__msg__BaseKinematicsData__init(&msg->kinematics_data)) {
    fq__msg__ActorAirplane__fini(msg);
    return false;
  }
  return true;
}

void
fq__msg__ActorAirplane__fini(fq__msg__ActorAirplane * msg)
{
  if (!msg) {
    return;
  }
  // base_data
  fq__msg__BaseBaseData__fini(&msg->base_data);
  // attributes
  fq__msg__BasePlaneAttr__fini(&msg->attributes);
  // be_reconnaissance_data
  fq__msg__BaseBeReconnaissanceData__fini(&msg->be_reconnaissance_data);
  // kinematics_data
  fq__msg__BaseKinematicsData__fini(&msg->kinematics_data);
}

bool
fq__msg__ActorAirplane__are_equal(const fq__msg__ActorAirplane * lhs, const fq__msg__ActorAirplane * rhs)
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
  // attributes
  if (!fq__msg__BasePlaneAttr__are_equal(
      &(lhs->attributes), &(rhs->attributes)))
  {
    return false;
  }
  // be_reconnaissance_data
  if (!fq__msg__BaseBeReconnaissanceData__are_equal(
      &(lhs->be_reconnaissance_data), &(rhs->be_reconnaissance_data)))
  {
    return false;
  }
  // kinematics_data
  if (!fq__msg__BaseKinematicsData__are_equal(
      &(lhs->kinematics_data), &(rhs->kinematics_data)))
  {
    return false;
  }
  return true;
}

bool
fq__msg__ActorAirplane__copy(
  const fq__msg__ActorAirplane * input,
  fq__msg__ActorAirplane * output)
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
  // attributes
  if (!fq__msg__BasePlaneAttr__copy(
      &(input->attributes), &(output->attributes)))
  {
    return false;
  }
  // be_reconnaissance_data
  if (!fq__msg__BaseBeReconnaissanceData__copy(
      &(input->be_reconnaissance_data), &(output->be_reconnaissance_data)))
  {
    return false;
  }
  // kinematics_data
  if (!fq__msg__BaseKinematicsData__copy(
      &(input->kinematics_data), &(output->kinematics_data)))
  {
    return false;
  }
  return true;
}

fq__msg__ActorAirplane *
fq__msg__ActorAirplane__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fq__msg__ActorAirplane * msg = (fq__msg__ActorAirplane *)allocator.allocate(sizeof(fq__msg__ActorAirplane), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fq__msg__ActorAirplane));
  bool success = fq__msg__ActorAirplane__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fq__msg__ActorAirplane__destroy(fq__msg__ActorAirplane * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fq__msg__ActorAirplane__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fq__msg__ActorAirplane__Sequence__init(fq__msg__ActorAirplane__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fq__msg__ActorAirplane * data = NULL;

  if (size) {
    data = (fq__msg__ActorAirplane *)allocator.zero_allocate(size, sizeof(fq__msg__ActorAirplane), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fq__msg__ActorAirplane__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fq__msg__ActorAirplane__fini(&data[i - 1]);
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
fq__msg__ActorAirplane__Sequence__fini(fq__msg__ActorAirplane__Sequence * array)
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
      fq__msg__ActorAirplane__fini(&array->data[i]);
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

fq__msg__ActorAirplane__Sequence *
fq__msg__ActorAirplane__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fq__msg__ActorAirplane__Sequence * array = (fq__msg__ActorAirplane__Sequence *)allocator.allocate(sizeof(fq__msg__ActorAirplane__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fq__msg__ActorAirplane__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fq__msg__ActorAirplane__Sequence__destroy(fq__msg__ActorAirplane__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fq__msg__ActorAirplane__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fq__msg__ActorAirplane__Sequence__are_equal(const fq__msg__ActorAirplane__Sequence * lhs, const fq__msg__ActorAirplane__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fq__msg__ActorAirplane__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fq__msg__ActorAirplane__Sequence__copy(
  const fq__msg__ActorAirplane__Sequence * input,
  fq__msg__ActorAirplane__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fq__msg__ActorAirplane);
    fq__msg__ActorAirplane * data =
      (fq__msg__ActorAirplane *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fq__msg__ActorAirplane__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          fq__msg__ActorAirplane__fini(&data[i]);
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
    if (!fq__msg__ActorAirplane__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
