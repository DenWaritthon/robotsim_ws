// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rrr_robot_interfaces:srv/RRRIPK.idl
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
#include "rrr_robot_interfaces/srv/detail/rrripk__struct.h"
#include "rrr_robot_interfaces/srv/detail/rrripk__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool rrr_robot_interfaces__srv__rrripk__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("rrr_robot_interfaces.srv._rrripk.RRRIPK_Request", full_classname_dest, 47) == 0);
  }
  rrr_robot_interfaces__srv__RRRIPK_Request * ros_message = _ros_message;
  {  // ipk_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "ipk_target");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->ipk_target)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rrr_robot_interfaces__srv__rrripk__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RRRIPK_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rrr_robot_interfaces.srv._rrripk");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RRRIPK_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rrr_robot_interfaces__srv__RRRIPK_Request * ros_message = (rrr_robot_interfaces__srv__RRRIPK_Request *)raw_ros_message;
  {  // ipk_target
    PyObject * field = NULL;
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->ipk_target);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ipk_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rrr_robot_interfaces/srv/detail/rrripk__struct.h"
// already included above
// #include "rrr_robot_interfaces/srv/detail/rrripk__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rrr_robot_interfaces__srv__rrripk__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("rrr_robot_interfaces.srv._rrripk.RRRIPK_Response", full_classname_dest, 48) == 0);
  }
  rrr_robot_interfaces__srv__RRRIPK_Response * ros_message = _ros_message;
  {  // ipk_check
    PyObject * field = PyObject_GetAttrString(_pymsg, "ipk_check");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ipk_check = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ipk_q1
    PyObject * field = PyObject_GetAttrString(_pymsg, "ipk_q1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ipk_q1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ipk_q2
    PyObject * field = PyObject_GetAttrString(_pymsg, "ipk_q2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ipk_q2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ipk_q3
    PyObject * field = PyObject_GetAttrString(_pymsg, "ipk_q3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ipk_q3 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rrr_robot_interfaces__srv__rrripk__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RRRIPK_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rrr_robot_interfaces.srv._rrripk");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RRRIPK_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rrr_robot_interfaces__srv__RRRIPK_Response * ros_message = (rrr_robot_interfaces__srv__RRRIPK_Response *)raw_ros_message;
  {  // ipk_check
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ipk_check ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ipk_check", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ipk_q1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ipk_q1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ipk_q1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ipk_q2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ipk_q2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ipk_q2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ipk_q3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ipk_q3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ipk_q3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
