// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fq:msg/BaseBaseData.idl
// generated code does not contain a copyright notice
#include "fq/msg/detail/base_base_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `type_id`
// Member `actor_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `bounding_box`
#include "fq/msg/detail/base_bounding_box__functions.h"

bool
fq__msg__BaseBaseData__init(fq__msg__BaseBaseData * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // health_point
  // type_id
  if (!rosidl_runtime_c__String__init(&msg->type_id)) {
    fq__msg__BaseBaseData__fini(msg);
    return false;
  }
  // actor_type
  if (!rosidl_runtime_c__String__init(&msg->actor_type)) {
    fq__msg__BaseBaseData__fini(msg);
    return false;
  }
  // bounding_box
  if (!fq__msg__BaseBoundingBox__init(&msg->bounding_box)) {
    fq__msg__BaseBaseData__fini(msg);
    return false;
  }
  // b_target
  return true;
}

void
fq__msg__BaseBaseData__fini(fq__msg__BaseBaseData * msg)
{
  if (!msg) {
    return;
  }
  // id
  // health_point
  // type_id
  rosidl_runtime_c__String__fini(&msg->type_id);
  // actor_type
  rosidl_runtime_c__String__fini(&msg->actor_type);
  // bounding_box
  fq__msg__BaseBoundingBox__fini(&msg->bounding_box);
  // b_target
}

bool
fq__msg__BaseBaseData__are_equal(const fq__msg__BaseBaseData * lhs, const fq__msg__BaseBaseData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // health_point
  if (lhs->health_point != rhs->health_point) {
    return false;
  }
  // type_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type_id), &(rhs->type_id)))
  {
    return false;
  }
  // actor_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->actor_type), &(rhs->actor_type)))
  {
    return false;
  }
  // bounding_box
  if (!fq__msg__BaseBoundingBox__are_equal(
      &(lhs->bounding_box), &(rhs->bounding_box)))
  {
    return false;
  }
  // b_target
  if (lhs->b_target != rhs->b_target) {
    return false;
  }
  return true;
}

bool
fq__msg__BaseBaseData__copy(
  const fq__msg__BaseBaseData * input,
  fq__msg__BaseBaseData * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // health_point
  output->health_point = input->health_point;
  // type_id
  if (!rosidl_runtime_c__String__copy(
      &(input->type_id), &(output->type_id)))
  {
    return false;
  }
  // actor_type
  if (!rosidl_runtime_c__String__copy(
      &(input->actor_type), &(output->actor_type)))
  {
    return false;
  }
  // bounding_box
  if (!fq__msg__BaseBoundingBox__copy(
      &(input->bounding_box), &(output->bounding_box)))
  {
    return false;
  }
  // b_target
  output->b_target = input->b_target;
  return true;
}

fq__msg__BaseBaseData *
fq__msg__BaseBaseData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fq__msg__BaseBaseData * msg = (fq__msg__BaseBaseData *)allocator.allocate(sizeof(fq__msg__BaseBaseData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fq__msg__BaseBaseData));
  bool success = fq__msg__BaseBaseData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fq__msg__BaseBaseData__destroy(fq__msg__BaseBaseData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fq__msg__BaseBaseData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fq__msg__BaseBaseData__Sequence__init(fq__msg__BaseBaseData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fq__msg__BaseBaseData * data = NULL;

  if (size) {
    data = (fq__msg__BaseBaseData *)allocator.zero_allocate(size, sizeof(fq__msg__BaseBaseData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fq__msg__BaseBaseData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fq__msg__BaseBaseData__fini(&data[i - 1]);
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
fq__msg__BaseBaseData__Sequence__fini(fq__msg__BaseBaseData__Sequence * array)
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
      fq__msg__BaseBaseData__fini(&array->data[i]);
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

fq__msg__BaseBaseData__Sequence *
fq__msg__BaseBaseData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fq__msg__BaseBaseData__Sequence * array = (fq__msg__BaseBaseData__Sequence *)allocator.allocate(sizeof(fq__msg__BaseBaseData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fq__msg__BaseBaseData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fq__msg__BaseBaseData__Sequence__destroy(fq__msg__BaseBaseData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fq__msg__BaseBaseData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fq__msg__BaseBaseData__Sequence__are_equal(const fq__msg__BaseBaseData__Sequence * lhs, const fq__msg__BaseBaseData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fq__msg__BaseBaseData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fq__msg__BaseBaseData__Sequence__copy(
  const fq__msg__BaseBaseData__Sequence * input,
  fq__msg__BaseBaseData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fq__msg__BaseBaseData);
    fq__msg__BaseBaseData * data =
      (fq__msg__BaseBaseData *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fq__msg__BaseBaseData__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          fq__msg__BaseBaseData__fini(&data[i]);
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
    if (!fq__msg__BaseBaseData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
