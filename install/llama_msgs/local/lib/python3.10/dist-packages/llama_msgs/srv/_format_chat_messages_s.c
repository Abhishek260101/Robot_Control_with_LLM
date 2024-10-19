// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from llama_msgs:srv/FormatChatMessages.idl
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
#include "llama_msgs/srv/detail/format_chat_messages__struct.h"
#include "llama_msgs/srv/detail/format_chat_messages__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "llama_msgs/msg/detail/message__functions.h"
// end nested array functions include
bool llama_msgs__msg__message__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * llama_msgs__msg__message__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool llama_msgs__srv__format_chat_messages__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[64];
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
    assert(strncmp("llama_msgs.srv._format_chat_messages.FormatChatMessages_Request", full_classname_dest, 63) == 0);
  }
  llama_msgs__srv__FormatChatMessages_Request * ros_message = _ros_message;
  {  // messages
    PyObject * field = PyObject_GetAttrString(_pymsg, "messages");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'messages'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!llama_msgs__msg__Message__Sequence__init(&(ros_message->messages), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create llama_msgs__msg__Message__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    llama_msgs__msg__Message * dest = ros_message->messages.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!llama_msgs__msg__message__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // add_ass
    PyObject * field = PyObject_GetAttrString(_pymsg, "add_ass");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->add_ass = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * llama_msgs__srv__format_chat_messages__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of FormatChatMessages_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("llama_msgs.srv._format_chat_messages");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FormatChatMessages_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  llama_msgs__srv__FormatChatMessages_Request * ros_message = (llama_msgs__srv__FormatChatMessages_Request *)raw_ros_message;
  {  // messages
    PyObject * field = NULL;
    size_t size = ros_message->messages.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    llama_msgs__msg__Message * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->messages.data[i]);
      PyObject * pyitem = llama_msgs__msg__message__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "messages", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // add_ass
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->add_ass ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "add_ass", field);
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
// #include "llama_msgs/srv/detail/format_chat_messages__struct.h"
// already included above
// #include "llama_msgs/srv/detail/format_chat_messages__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool llama_msgs__srv__format_chat_messages__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("llama_msgs.srv._format_chat_messages.FormatChatMessages_Response", full_classname_dest, 64) == 0);
  }
  llama_msgs__srv__FormatChatMessages_Response * ros_message = _ros_message;
  {  // formatted_prompt
    PyObject * field = PyObject_GetAttrString(_pymsg, "formatted_prompt");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->formatted_prompt, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * llama_msgs__srv__format_chat_messages__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of FormatChatMessages_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("llama_msgs.srv._format_chat_messages");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FormatChatMessages_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  llama_msgs__srv__FormatChatMessages_Response * ros_message = (llama_msgs__srv__FormatChatMessages_Response *)raw_ros_message;
  {  // formatted_prompt
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->formatted_prompt.data,
      strlen(ros_message->formatted_prompt.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "formatted_prompt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
