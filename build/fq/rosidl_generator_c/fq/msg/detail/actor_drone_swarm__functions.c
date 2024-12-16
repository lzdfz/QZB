// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fq:msg/ActorDroneSwarm.idl
// generated code does not contain a copyright notice
#include "fq/msg/detail/actor_drone_swarm__functions.h"

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
// Member `drone_swarm_kinematics_data`
#include "fq/msg/detail/base_airplane_kinematics_data__functions.h"
// Member `load_data`
#include "fq/msg/detail/base_load_data__functions.h"
// Member `reconnaissance_data`
#include "fq/msg/detail/base_reconnaissance_data__functions.h"
// Member `interference_data`
#include "fq/msg/detail/base_interference_data__functions.h"

bool
fq__msg__ActorDroneSwarm__init(fq__msg__ActorDroneSwarm * msg)
{
  if (!msg) {
    return false;
  }
  // base_data
  if (!fq__msg__BaseBaseData__init(&msg->base_data)) {
    fq__msg__ActorDroneSwarm__fini(msg);
    return false;
  }
  // attributes
  if (!fq__msg__BasePlaneAttr__init(&msg->attributes)) {
    fq__msg__ActorDroneSwarm__fini(msg);
    return false;
  }
  // drone_swarm_kinematics_data
  if (!fq__msg__BaseAirplaneKinematicsData__init(&msg->drone_swarm_kinematics_data)) {
    fq__msg__ActorDroneSwarm__fini(msg);
    return false;
  }
  // load_data
  if (!fq__msg__BaseLoadData__init(&msg->load_data)) {
    fq__msg__ActorDroneSwarm__fini(msg);
    return false;
  }
  // reconnaissance_data
  if (!fq__msg__BaseReconnaissanceData__init(&msg->reconnaissance_data)) {
    fq__msg__ActorDroneSwarm__fini(msg);
    return false;
  }
  // interference_data
  if (!fq__msg__BaseInterferenceData__init(&msg->interference_data)) {
    fq__msg__ActorDroneSwarm__fini(msg);
    return false;
  }
  return true;
}

void
fq__msg__ActorDroneSwarm__fini(fq__msg__ActorDroneSwarm * msg)
{
  if (!msg) {
    return;
  }
  // base_data
  fq__msg__BaseBaseData__fini(&msg->base_data);
  // attributes
  fq__msg__BasePlaneAttr__fini(&msg->attributes);
  // drone_swarm_kinematics_data
  fq__msg__BaseAirplaneKinematicsData__fini(&msg->drone_swarm_kinematics_data);
  // load_data
  fq__msg__BaseLoadData__fini(&msg->load_data);
  // reconnaissance_data
  fq__msg__BaseReconnaissanceData__fini(&msg->reconnaissance_data);
  // interference_data
  fq__msg__BaseInterferenceData__fini(&msg->interference_data);
}

bool
fq__msg__ActorDroneSwarm__are_equal(const fq__msg__ActorDroneSwarm * lhs, const fq__msg__ActorDroneSwarm * rhs)
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
  // drone_swarm_kinematics_data
  if (!fq__msg__BaseAirplaneKinematicsData__are_equal(
      &(lhs->drone_swarm_kinematics_data), &(rhs->drone_swarm_kinematics_data)))
  {
    return false;
  }
  // load_data
  if (!fq__msg__BaseLoadData__are_equal(
      &(lhs->load_data), &(rhs->load_data)))
  {
    return false;
  }
  // reconnaissance_data
  if (!fq__msg__BaseReconnaissanceData__are_equal(
      &(lhs->reconnaissance_data), &(rhs->reconnaissance_data)))
  {
    return false;
  }
  // interference_data
  if (!fq__msg__BaseInterferenceData__are_equal(
      &(lhs->interference_data), &(rhs->interference_data)))
  {
    return false;
  }
  return true;
}

bool
fq__msg__ActorDroneSwarm__copy(
  const fq__msg__ActorDroneSwarm * input,
  fq__msg__ActorDroneSwarm * output)
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
  // drone_swarm_kinematics_data
  if (!fq__msg__BaseAirplaneKinematicsData__copy(
      &(input->drone_swarm_kinematics_data), &(output->drone_swarm_kinematics_data)))
  {
    return false;
  }
  // load_data
  if (!fq__msg__BaseLoadData__copy(
      &(input->load_data), &(output->load_data)))
  {
    return false;
  }
  // reconnaissance_data
  if (!fq__msg__BaseReconnaissanceData__copy(
      &(input->reconnaissance_data), &(output->reconnaissance_data)))
  {
    return false;
  }
  // interference_data
  if (!fq__msg__BaseInterferenceData__copy(
      &(input->interference_data), &(output->interference_data)))
  {
    return false;
  }
  return true;
}

fq__msg__ActorDroneSwarm *
fq__msg__ActorDroneSwarm__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fq__msg__ActorDroneSwarm * msg = (fq__msg__ActorDroneSwarm *)allocator.allocate(sizeof(fq__msg__ActorDroneSwarm), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fq__msg__ActorDroneSwarm));
  bool success = fq__msg__ActorDroneSwarm__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fq__msg__ActorDroneSwarm__destroy(fq__msg__ActorDroneSwarm * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fq__msg__ActorDroneSwarm__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fq__msg__ActorDroneSwarm__Sequence__init(fq__msg__ActorDroneSwarm__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fq__msg__ActorDroneSwarm * data = NULL;

  if (size) {
    data = (fq__msg__ActorDroneSwarm *)allocator.zero_allocate(size, sizeof(fq__msg__ActorDroneSwarm), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fq__msg__ActorDroneSwarm__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fq__msg__ActorDroneSwarm__fini(&data[i - 1]);
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
fq__msg__ActorDroneSwarm__Sequence__fini(fq__msg__ActorDroneSwarm__Sequence * array)
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
      fq__msg__ActorDroneSwarm__fini(&array->data[i]);
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

fq__msg__ActorDroneSwarm__Sequence *
fq__msg__ActorDroneSwarm__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fq__msg__ActorDroneSwarm__Sequence * array = (fq__msg__ActorDroneSwarm__Sequence *)allocator.allocate(sizeof(fq__msg__ActorDroneSwarm__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fq__msg__ActorDroneSwarm__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fq__msg__ActorDroneSwarm__Sequence__destroy(fq__msg__ActorDroneSwarm__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fq__msg__ActorDroneSwarm__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fq__msg__ActorDroneSwarm__Sequence__are_equal(const fq__msg__ActorDroneSwarm__Sequence * lhs, const fq__msg__ActorDroneSwarm__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fq__msg__ActorDroneSwarm__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fq__msg__ActorDroneSwarm__Sequence__copy(
  const fq__msg__ActorDroneSwarm__Sequence * input,
  fq__msg__ActorDroneSwarm__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fq__msg__ActorDroneSwarm);
    fq__msg__ActorDroneSwarm * data =
      (fq__msg__ActorDroneSwarm *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fq__msg__ActorDroneSwarm__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          fq__msg__ActorDroneSwarm__fini(&data[i]);
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
    if (!fq__msg__ActorDroneSwarm__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
