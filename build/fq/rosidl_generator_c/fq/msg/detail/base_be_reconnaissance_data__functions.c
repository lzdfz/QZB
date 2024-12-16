// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fq:msg/BaseBeReconnaissanceData.idl
// generated code does not contain a copyright notice
#include "fq/msg/detail/base_be_reconnaissance_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
fq__msg__BaseBeReconnaissanceData__init(fq__msg__BaseBeReconnaissanceData * msg)
{
  if (!msg) {
    return false;
  }
  // b_found
  // b_covered
  return true;
}

void
fq__msg__BaseBeReconnaissanceData__fini(fq__msg__BaseBeReconnaissanceData * msg)
{
  if (!msg) {
    return;
  }
  // b_found
  // b_covered
}

bool
fq__msg__BaseBeReconnaissanceData__are_equal(const fq__msg__BaseBeReconnaissanceData * lhs, const fq__msg__BaseBeReconnaissanceData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // b_found
  if (lhs->b_found != rhs->b_found) {
    return false;
  }
  // b_covered
  if (lhs->b_covered != rhs->b_covered) {
    return false;
  }
  return true;
}

bool
fq__msg__BaseBeReconnaissanceData__copy(
  const fq__msg__BaseBeReconnaissanceData * input,
  fq__msg__BaseBeReconnaissanceData * output)
{
  if (!input || !output) {
    return false;
  }
  // b_found
  output->b_found = input->b_found;
  // b_covered
  output->b_covered = input->b_covered;
  return true;
}

fq__msg__BaseBeReconnaissanceData *
fq__msg__BaseBeReconnaissanceData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fq__msg__BaseBeReconnaissanceData * msg = (fq__msg__BaseBeReconnaissanceData *)allocator.allocate(sizeof(fq__msg__BaseBeReconnaissanceData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fq__msg__BaseBeReconnaissanceData));
  bool success = fq__msg__BaseBeReconnaissanceData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fq__msg__BaseBeReconnaissanceData__destroy(fq__msg__BaseBeReconnaissanceData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fq__msg__BaseBeReconnaissanceData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fq__msg__BaseBeReconnaissanceData__Sequence__init(fq__msg__BaseBeReconnaissanceData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fq__msg__BaseBeReconnaissanceData * data = NULL;

  if (size) {
    data = (fq__msg__BaseBeReconnaissanceData *)allocator.zero_allocate(size, sizeof(fq__msg__BaseBeReconnaissanceData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fq__msg__BaseBeReconnaissanceData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fq__msg__BaseBeReconnaissanceData__fini(&data[i - 1]);
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
fq__msg__BaseBeReconnaissanceData__Sequence__fini(fq__msg__BaseBeReconnaissanceData__Sequence * array)
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
      fq__msg__BaseBeReconnaissanceData__fini(&array->data[i]);
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

fq__msg__BaseBeReconnaissanceData__Sequence *
fq__msg__BaseBeReconnaissanceData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fq__msg__BaseBeReconnaissanceData__Sequence * array = (fq__msg__BaseBeReconnaissanceData__Sequence *)allocator.allocate(sizeof(fq__msg__BaseBeReconnaissanceData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fq__msg__BaseBeReconnaissanceData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fq__msg__BaseBeReconnaissanceData__Sequence__destroy(fq__msg__BaseBeReconnaissanceData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fq__msg__BaseBeReconnaissanceData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fq__msg__BaseBeReconnaissanceData__Sequence__are_equal(const fq__msg__BaseBeReconnaissanceData__Sequence * lhs, const fq__msg__BaseBeReconnaissanceData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fq__msg__BaseBeReconnaissanceData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fq__msg__BaseBeReconnaissanceData__Sequence__copy(
  const fq__msg__BaseBeReconnaissanceData__Sequence * input,
  fq__msg__BaseBeReconnaissanceData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fq__msg__BaseBeReconnaissanceData);
    fq__msg__BaseBeReconnaissanceData * data =
      (fq__msg__BaseBeReconnaissanceData *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fq__msg__BaseBeReconnaissanceData__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          fq__msg__BaseBeReconnaissanceData__fini(&data[i]);
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
    if (!fq__msg__BaseBeReconnaissanceData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
