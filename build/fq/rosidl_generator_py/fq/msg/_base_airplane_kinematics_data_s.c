// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from fq:msg/BaseAirplaneKinematicsData.idl
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
#include "fq/msg/detail/base_airplane_kinematics_data__struct.h"
#include "fq/msg/detail/base_airplane_kinematics_data__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);
bool fq__msg__base_orientation3_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * fq__msg__base_orientation3_d__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__twist__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__twist__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__twist__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__twist__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__accel__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__accel__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool fq__msg__base_airplane_kinematics_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[65];
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
    assert(strncmp("fq.msg._base_airplane_kinematics_data.BaseAirplaneKinematicsData", full_classname_dest, 64) == 0);
  }
  fq__msg__BaseAirplaneKinematicsData * ros_message = _ros_message;
  {  // location
    PyObject * field = PyObject_GetAttrString(_pymsg, "location");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->location)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // rotation
    PyObject * field = PyObject_GetAttrString(_pymsg, "rotation");
    if (!field) {
      return false;
    }
    if (!fq__msg__base_orientation3_d__convert_from_py(field, &ros_message->rotation)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__twist__convert_from_py(field, &ros_message->velocity)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // angular_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "angular_velocity");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__twist__convert_from_py(field, &ros_message->angular_velocity)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "acceleration");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__accel__convert_from_py(field, &ros_message->acceleration)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * fq__msg__base_airplane_kinematics_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BaseAirplaneKinematicsData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("fq.msg._base_airplane_kinematics_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BaseAirplaneKinematicsData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  fq__msg__BaseAirplaneKinematicsData * ros_message = (fq__msg__BaseAirplaneKinematicsData *)raw_ros_message;
  {  // location
    PyObject * field = NULL;
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->location);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "location", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rotation
    PyObject * field = NULL;
    field = fq__msg__base_orientation3_d__convert_to_py(&ros_message->rotation);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rotation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity
    PyObject * field = NULL;
    field = geometry_msgs__msg__twist__convert_to_py(&ros_message->velocity);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angular_velocity
    PyObject * field = NULL;
    field = geometry_msgs__msg__twist__convert_to_py(&ros_message->angular_velocity);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "angular_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acceleration
    PyObject * field = NULL;
    field = geometry_msgs__msg__accel__convert_to_py(&ros_message->acceleration);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
