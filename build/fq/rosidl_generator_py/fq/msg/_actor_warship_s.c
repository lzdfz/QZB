// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from fq:msg/ActorWarship.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "fq/msg/detail/actor_warship__struct.h"
#include "fq/msg/detail/actor_warship__functions.h"

bool fq__msg__base_base_data__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * fq__msg__base_base_data__convert_to_py(void * raw_ros_message);
bool fq__msg__base_kinematics_data__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * fq__msg__base_kinematics_data__convert_to_py(void * raw_ros_message);
bool fq__msg__base_be_reconnaissance_data__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * fq__msg__base_be_reconnaissance_data__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool fq__msg__actor_warship__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[35];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("fq.msg._actor_warship.ActorWarship", full_classname_dest, 34) == 0);
  }
  fq__msg__ActorWarship * ros_message = _ros_message;
  {  // base_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "base_data");
    if (!field) {
      return false;
    }
    if (!fq__msg__base_base_data__convert_from_py(field, &ros_message->base_data)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // kinematics_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "kinematics_data");
    if (!field) {
      return false;
    }
    if (!fq__msg__base_kinematics_data__convert_from_py(field, &ros_message->kinematics_data)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // be_reconnaissance_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "be_reconnaissance_data");
    if (!field) {
      return false;
    }
    if (!fq__msg__base_be_reconnaissance_data__convert_from_py(field, &ros_message->be_reconnaissance_data)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * fq__msg__actor_warship__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ActorWarship */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("fq.msg._actor_warship");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ActorWarship");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  fq__msg__ActorWarship * ros_message = (fq__msg__ActorWarship *)raw_ros_message;
  {  // base_data
    PyObject * field = NULL;
    field = fq__msg__base_base_data__convert_to_py(&ros_message->base_data);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "base_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kinematics_data
    PyObject * field = NULL;
    field = fq__msg__base_kinematics_data__convert_to_py(&ros_message->kinematics_data);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "kinematics_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // be_reconnaissance_data
    PyObject * field = NULL;
    field = fq__msg__base_be_reconnaissance_data__convert_to_py(&ros_message->be_reconnaissance_data);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "be_reconnaissance_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}