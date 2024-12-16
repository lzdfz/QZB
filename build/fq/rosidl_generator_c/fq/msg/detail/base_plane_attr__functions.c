// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fq:msg/BasePlaneAttr.idl
// generated code does not contain a copyright notice
#include "fq/msg/detail/base_plane_attr__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `airfoil_type`
// Member `load_type`
#include "rosidl_runtime_c/string_functions.h"

bool
fq__msg__BasePlaneAttr__init(fq__msg__BasePlaneAttr * msg)
{
  if (!msg) {
    return false;
  }
  // airfoil_type
  if (!rosidl_runtime_c__String__init(&msg->airfoil_type)) {
    fq__msg__BasePlaneAttr__fini(msg);
    return false;
  }
  // load_type
  if (!rosidl_runtime_c__String__init(&msg->load_type)) {
    fq__msg__BasePlaneAttr__fini(msg);
    return false;
  }
  // min_velocity
  // max_velocity
  // max_acceleration
  // max_deceleration
  // max_roll_angle
  // max_pitch_angle
  // roll_rate
  // pitch_rate
  // yaw_rate_to_max_roll
  // limit_height
  // health_point
  // damage_value
  // reconnaissance_radius
  // reconnaissance_angle
  // bombload
  // bomb_range
  // bomb_velocity
  // bomb_cold_down_time
  return true;
}

void
fq__msg__BasePlaneAttr__fini(fq__msg__BasePlaneAttr * msg)
{
  if (!msg) {
    return;
  }
  // airfoil_type
  rosidl_runtime_c__String__fini(&msg->airfoil_type);
  // load_type
  rosidl_runtime_c__String__fini(&msg->load_type);
  // min_velocity
  // max_velocity
  // max_acceleration
  // max_deceleration
  // max_roll_angle
  // max_pitch_angle
  // roll_rate
  // pitch_rate
  // yaw_rate_to_max_roll
  // limit_height
  // health_point
  // damage_value
  // reconnaissance_radius
  // reconnaissance_angle
  // bombload
  // bomb_range
  // bomb_velocity
  // bomb_cold_down_time
}

bool
fq__msg__BasePlaneAttr__are_equal(const fq__msg__BasePlaneAttr * lhs, const fq__msg__BasePlaneAttr * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // airfoil_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->airfoil_type), &(rhs->airfoil_type)))
  {
    return false;
  }
  // load_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->load_type), &(rhs->load_type)))
  {
    return false;
  }
  // min_velocity
  if (lhs->min_velocity != rhs->min_velocity) {
    return false;
  }
  // max_velocity
  if (lhs->max_velocity != rhs->max_velocity) {
    return false;
  }
  // max_acceleration
  if (lhs->max_acceleration != rhs->max_acceleration) {
    return false;
  }
  // max_deceleration
  if (lhs->max_deceleration != rhs->max_deceleration) {
    return false;
  }
  // max_roll_angle
  if (lhs->max_roll_angle != rhs->max_roll_angle) {
    return false;
  }
  // max_pitch_angle
  if (lhs->max_pitch_angle != rhs->max_pitch_angle) {
    return false;
  }
  // roll_rate
  if (lhs->roll_rate != rhs->roll_rate) {
    return false;
  }
  // pitch_rate
  if (lhs->pitch_rate != rhs->pitch_rate) {
    return false;
  }
  // yaw_rate_to_max_roll
  if (lhs->yaw_rate_to_max_roll != rhs->yaw_rate_to_max_roll) {
    return false;
  }
  // limit_height
  if (lhs->limit_height != rhs->limit_height) {
    return false;
  }
  // health_point
  if (lhs->health_point != rhs->health_point) {
    return false;
  }
  // damage_value
  if (lhs->damage_value != rhs->damage_value) {
    return false;
  }
  // reconnaissance_radius
  if (lhs->reconnaissance_radius != rhs->reconnaissance_radius) {
    return false;
  }
  // reconnaissance_angle
  if (lhs->reconnaissance_angle != rhs->reconnaissance_angle) {
    return false;
  }
  // bombload
  if (lhs->bombload != rhs->bombload) {
    return false;
  }
  // bomb_range
  if (lhs->bomb_range != rhs->bomb_range) {
    return false;
  }
  // bomb_velocity
  if (lhs->bomb_velocity != rhs->bomb_velocity) {
    return false;
  }
  // bomb_cold_down_time
  if (lhs->bomb_cold_down_time != rhs->bomb_cold_down_time) {
    return false;
  }
  return true;
}

bool
fq__msg__BasePlaneAttr__copy(
  const fq__msg__BasePlaneAttr * input,
  fq__msg__BasePlaneAttr * output)
{
  if (!input || !output) {
    return false;
  }
  // airfoil_type
  if (!rosidl_runtime_c__String__copy(
      &(input->airfoil_type), &(output->airfoil_type)))
  {
    return false;
  }
  // load_type
  if (!rosidl_runtime_c__String__copy(
      &(input->load_type), &(output->load_type)))
  {
    return false;
  }
  // min_velocity
  output->min_velocity = input->min_velocity;
  // max_velocity
  output->max_velocity = input->max_velocity;
  // max_acceleration
  output->max_acceleration = input->max_acceleration;
  // max_deceleration
  output->max_deceleration = input->max_deceleration;
  // max_roll_angle
  output->max_roll_angle = input->max_roll_angle;
  // max_pitch_angle
  output->max_pitch_angle = input->max_pitch_angle;
  // roll_rate
  output->roll_rate = input->roll_rate;
  // pitch_rate
  output->pitch_rate = input->pitch_rate;
  // yaw_rate_to_max_roll
  output->yaw_rate_to_max_roll = input->yaw_rate_to_max_roll;
  // limit_height
  output->limit_height = input->limit_height;
  // health_point
  output->health_point = input->health_point;
  // damage_value
  output->damage_value = input->damage_value;
  // reconnaissance_radius
  output->reconnaissance_radius = input->reconnaissance_radius;
  // reconnaissance_angle
  output->reconnaissance_angle = input->reconnaissance_angle;
  // bombload
  output->bombload = input->bombload;
  // bomb_range
  output->bomb_range = input->bomb_range;
  // bomb_velocity
  output->bomb_velocity = input->bomb_velocity;
  // bomb_cold_down_time
  output->bomb_cold_down_time = input->bomb_cold_down_time;
  return true;
}

fq__msg__BasePlaneAttr *
fq__msg__BasePlaneAttr__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fq__msg__BasePlaneAttr * msg = (fq__msg__BasePlaneAttr *)allocator.allocate(sizeof(fq__msg__BasePlaneAttr), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fq__msg__BasePlaneAttr));
  bool success = fq__msg__BasePlaneAttr__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fq__msg__BasePlaneAttr__destroy(fq__msg__BasePlaneAttr * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fq__msg__BasePlaneAttr__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fq__msg__BasePlaneAttr__Sequence__init(fq__msg__BasePlaneAttr__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fq__msg__BasePlaneAttr * data = NULL;

  if (size) {
    data = (fq__msg__BasePlaneAttr *)allocator.zero_allocate(size, sizeof(fq__msg__BasePlaneAttr), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fq__msg__BasePlaneAttr__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fq__msg__BasePlaneAttr__fini(&data[i - 1]);
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
fq__msg__BasePlaneAttr__Sequence__fini(fq__msg__BasePlaneAttr__Sequence * array)
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
      fq__msg__BasePlaneAttr__fini(&array->data[i]);
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

fq__msg__BasePlaneAttr__Sequence *
fq__msg__BasePlaneAttr__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fq__msg__BasePlaneAttr__Sequence * array = (fq__msg__BasePlaneAttr__Sequence *)allocator.allocate(sizeof(fq__msg__BasePlaneAttr__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fq__msg__BasePlaneAttr__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fq__msg__BasePlaneAttr__Sequence__destroy(fq__msg__BasePlaneAttr__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fq__msg__BasePlaneAttr__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fq__msg__BasePlaneAttr__Sequence__are_equal(const fq__msg__BasePlaneAttr__Sequence * lhs, const fq__msg__BasePlaneAttr__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fq__msg__BasePlaneAttr__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fq__msg__BasePlaneAttr__Sequence__copy(
  const fq__msg__BasePlaneAttr__Sequence * input,
  fq__msg__BasePlaneAttr__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fq__msg__BasePlaneAttr);
    fq__msg__BasePlaneAttr * data =
      (fq__msg__BasePlaneAttr *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fq__msg__BasePlaneAttr__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          fq__msg__BasePlaneAttr__fini(&data[i]);
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
    if (!fq__msg__BasePlaneAttr__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
