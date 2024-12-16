// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from fq:msg/BaseBaseData.idl
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
#include "fq/msg/detail/base_base_data__struct.h"
#include "fq/msg/detail/base_base_data__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool fq__msg__base_bounding_box__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * fq__msg__base_bounding_box__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool fq__msg__base_base_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("fq.msg._base_base_data.BaseBaseData", full_classname_dest, 35) == 0);
  }
  fq__msg__BaseBaseData * ros_message = _ros_message;
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // health_point
    PyObject * field = PyObject_GetAttrString(_pymsg, "health_point");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->health_point = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // type_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "type_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->type_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // actor_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "actor_type");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->actor_type, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // bounding_box
    PyObject * field = PyObject_GetAttrString(_pymsg, "bounding_box");
    if (!field) {
      return false;
    }
    if (!fq__msg__base_bounding_box__convert_from_py(field, &ros_message->bounding_box)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // b_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "b_target");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->b_target = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * fq__msg__base_base_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BaseBaseData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("fq.msg._base_base_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BaseBaseData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  fq__msg__BaseBaseData * ros_message = (fq__msg__BaseBaseData *)raw_ros_message;
  {  // id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // health_point
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->health_point);
    {
      int rc = PyObject_SetAttrString(_pymessage, "health_point", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // type_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->type_id.data,
      strlen(ros_message->type_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "type_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // actor_type
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->actor_type.data,
      strlen(ros_message->actor_type.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "actor_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bounding_box
    PyObject * field = NULL;
    field = fq__msg__base_bounding_box__convert_to_py(&ros_message->bounding_box);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bounding_box", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // b_target
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->b_target ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "b_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
