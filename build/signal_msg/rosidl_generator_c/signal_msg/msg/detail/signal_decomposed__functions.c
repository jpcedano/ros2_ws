// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from signal_msg:msg/SignalDecomposed.idl
// generated code does not contain a copyright notice
#include "signal_msg/msg/detail/signal_decomposed__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
signal_msg__msg__SignalDecomposed__init(signal_msg__msg__SignalDecomposed * msg)
{
  if (!msg) {
    return false;
  }
  // signaltype
  // amplitude
  // frequency
  // offset
  // phase
  // time
  return true;
}

void
signal_msg__msg__SignalDecomposed__fini(signal_msg__msg__SignalDecomposed * msg)
{
  if (!msg) {
    return;
  }
  // signaltype
  // amplitude
  // frequency
  // offset
  // phase
  // time
}

bool
signal_msg__msg__SignalDecomposed__are_equal(const signal_msg__msg__SignalDecomposed * lhs, const signal_msg__msg__SignalDecomposed * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // signaltype
  if (lhs->signaltype != rhs->signaltype) {
    return false;
  }
  // amplitude
  if (lhs->amplitude != rhs->amplitude) {
    return false;
  }
  // frequency
  if (lhs->frequency != rhs->frequency) {
    return false;
  }
  // offset
  if (lhs->offset != rhs->offset) {
    return false;
  }
  // phase
  if (lhs->phase != rhs->phase) {
    return false;
  }
  // time
  if (lhs->time != rhs->time) {
    return false;
  }
  return true;
}

bool
signal_msg__msg__SignalDecomposed__copy(
  const signal_msg__msg__SignalDecomposed * input,
  signal_msg__msg__SignalDecomposed * output)
{
  if (!input || !output) {
    return false;
  }
  // signaltype
  output->signaltype = input->signaltype;
  // amplitude
  output->amplitude = input->amplitude;
  // frequency
  output->frequency = input->frequency;
  // offset
  output->offset = input->offset;
  // phase
  output->phase = input->phase;
  // time
  output->time = input->time;
  return true;
}

signal_msg__msg__SignalDecomposed *
signal_msg__msg__SignalDecomposed__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  signal_msg__msg__SignalDecomposed * msg = (signal_msg__msg__SignalDecomposed *)allocator.allocate(sizeof(signal_msg__msg__SignalDecomposed), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(signal_msg__msg__SignalDecomposed));
  bool success = signal_msg__msg__SignalDecomposed__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
signal_msg__msg__SignalDecomposed__destroy(signal_msg__msg__SignalDecomposed * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    signal_msg__msg__SignalDecomposed__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
signal_msg__msg__SignalDecomposed__Sequence__init(signal_msg__msg__SignalDecomposed__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  signal_msg__msg__SignalDecomposed * data = NULL;

  if (size) {
    data = (signal_msg__msg__SignalDecomposed *)allocator.zero_allocate(size, sizeof(signal_msg__msg__SignalDecomposed), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = signal_msg__msg__SignalDecomposed__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        signal_msg__msg__SignalDecomposed__fini(&data[i - 1]);
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
signal_msg__msg__SignalDecomposed__Sequence__fini(signal_msg__msg__SignalDecomposed__Sequence * array)
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
      signal_msg__msg__SignalDecomposed__fini(&array->data[i]);
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

signal_msg__msg__SignalDecomposed__Sequence *
signal_msg__msg__SignalDecomposed__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  signal_msg__msg__SignalDecomposed__Sequence * array = (signal_msg__msg__SignalDecomposed__Sequence *)allocator.allocate(sizeof(signal_msg__msg__SignalDecomposed__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = signal_msg__msg__SignalDecomposed__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
signal_msg__msg__SignalDecomposed__Sequence__destroy(signal_msg__msg__SignalDecomposed__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    signal_msg__msg__SignalDecomposed__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
signal_msg__msg__SignalDecomposed__Sequence__are_equal(const signal_msg__msg__SignalDecomposed__Sequence * lhs, const signal_msg__msg__SignalDecomposed__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!signal_msg__msg__SignalDecomposed__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
signal_msg__msg__SignalDecomposed__Sequence__copy(
  const signal_msg__msg__SignalDecomposed__Sequence * input,
  signal_msg__msg__SignalDecomposed__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(signal_msg__msg__SignalDecomposed);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    signal_msg__msg__SignalDecomposed * data =
      (signal_msg__msg__SignalDecomposed *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!signal_msg__msg__SignalDecomposed__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          signal_msg__msg__SignalDecomposed__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!signal_msg__msg__SignalDecomposed__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
