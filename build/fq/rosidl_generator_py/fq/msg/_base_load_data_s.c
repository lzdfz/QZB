// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from fq:msg/BaseLoadData.idl
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
#include "fq/msg/detail/base_load_data__struct.h"
#include "fq/msg/detail/base_load_data__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool fq__msg__base_load_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[36];
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
    assert(strncmp("fq.msg._base_load_data.BaseLoadData", full_classname_dest, 35) == 0);
  }
  fq__msg__BaseLoadData * ros_message = _ros_message;
  {  // remaining_projectiles
    PyObject * field = PyObject_GetAttrString(_pymsg, "remaining_projectiles");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->remaining_projectiles = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * fq__msg__base_load_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BaseLoadData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("fq.msg._base_load_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BaseLoadData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  fq__msg__BaseLoadData * ros_message = (fq__msg__BaseLoadData *)raw_ros_message;
  {  // remaining_projectiles
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->remaining_projectiles);
    {
      int rc = PyObject_SetAttrString(_pymessage, "remaining_projectiles", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
