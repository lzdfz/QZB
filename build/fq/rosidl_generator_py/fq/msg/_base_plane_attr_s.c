// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from fq:msg/BasePlaneAttr.idl
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
#include "fq/msg/detail/base_plane_attr__struct.h"
#include "fq/msg/detail/base_plane_attr__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool fq__msg__base_plane_attr__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[38];
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
    assert(strncmp("fq.msg._base_plane_attr.BasePlaneAttr", full_classname_dest, 37) == 0);
  }
  fq__msg__BasePlaneAttr * ros_message = _ros_message;
  {  // airfoil_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "airfoil_type");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->airfoil_type, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // load_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "load_type");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->load_type, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // min_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_velocity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_velocity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_acceleration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_acceleration = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_deceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_deceleration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_deceleration = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_roll_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_roll_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_roll_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_pitch_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_pitch_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_pitch_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // roll_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll_rate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch_rate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_rate_to_max_roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_rate_to_max_roll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_rate_to_max_roll = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // limit_height
    PyObject * field = PyObject_GetAttrString(_pymsg, "limit_height");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->limit_height = (float)PyFloat_AS_DOUBLE(field);
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
  {  // damage_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "damage_value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->damage_value = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // reconnaissance_radius
    PyObject * field = PyObject_GetAttrString(_pymsg, "reconnaissance_radius");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->reconnaissance_radius = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // reconnaissance_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "reconnaissance_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->reconnaissance_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bombload
    PyObject * field = PyObject_GetAttrString(_pymsg, "bombload");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bombload = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // bomb_range
    PyObject * field = PyObject_GetAttrString(_pymsg, "bomb_range");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->bomb_range = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bomb_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "bomb_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->bomb_velocity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bomb_cold_down_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "bomb_cold_down_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->bomb_cold_down_time = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * fq__msg__base_plane_attr__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BasePlaneAttr */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("fq.msg._base_plane_attr");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BasePlaneAttr");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  fq__msg__BasePlaneAttr * ros_message = (fq__msg__BasePlaneAttr *)raw_ros_message;
  {  // airfoil_type
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->airfoil_type.data,
      strlen(ros_message->airfoil_type.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "airfoil_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // load_type
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->load_type.data,
      strlen(ros_message->load_type.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "load_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_acceleration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_acceleration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_deceleration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_deceleration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_deceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_roll_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_roll_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_roll_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_pitch_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_pitch_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_pitch_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_rate_to_max_roll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_rate_to_max_roll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_rate_to_max_roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // limit_height
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->limit_height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "limit_height", field);
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
  {  // damage_value
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->damage_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "damage_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reconnaissance_radius
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->reconnaissance_radius);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reconnaissance_radius", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reconnaissance_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->reconnaissance_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reconnaissance_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bombload
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->bombload);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bombload", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bomb_range
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->bomb_range);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bomb_range", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bomb_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->bomb_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bomb_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bomb_cold_down_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->bomb_cold_down_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bomb_cold_down_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
