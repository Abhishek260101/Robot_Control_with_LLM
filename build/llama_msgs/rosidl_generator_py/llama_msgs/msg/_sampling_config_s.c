// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from llama_msgs:msg/SamplingConfig.idl
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
#include "llama_msgs/msg/detail/sampling_config__struct.h"
#include "llama_msgs/msg/detail/sampling_config__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool llama_msgs__msg__logit_bias_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * llama_msgs__msg__logit_bias_array__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool llama_msgs__msg__sampling_config__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
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
    assert(strncmp("llama_msgs.msg._sampling_config.SamplingConfig", full_classname_dest, 46) == 0);
  }
  llama_msgs__msg__SamplingConfig * ros_message = _ros_message;
  {  // n_prev
    PyObject * field = PyObject_GetAttrString(_pymsg, "n_prev");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->n_prev = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // n_probs
    PyObject * field = PyObject_GetAttrString(_pymsg, "n_probs");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->n_probs = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // min_keep
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_keep");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->min_keep = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // ignore_eos
    PyObject * field = PyObject_GetAttrString(_pymsg, "ignore_eos");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ignore_eos = (Py_True == field);
    Py_DECREF(field);
  }
  {  // logit_bias
    PyObject * field = PyObject_GetAttrString(_pymsg, "logit_bias");
    if (!field) {
      return false;
    }
    if (!llama_msgs__msg__logit_bias_array__convert_from_py(field, &ros_message->logit_bias)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "temp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dynatemp_range
    PyObject * field = PyObject_GetAttrString(_pymsg, "dynatemp_range");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dynatemp_range = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dynatemp_exponent
    PyObject * field = PyObject_GetAttrString(_pymsg, "dynatemp_exponent");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dynatemp_exponent = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // top_k
    PyObject * field = PyObject_GetAttrString(_pymsg, "top_k");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->top_k = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // top_p
    PyObject * field = PyObject_GetAttrString(_pymsg, "top_p");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->top_p = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // min_p
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_p");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_p = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tfs_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "tfs_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tfs_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // typical_p
    PyObject * field = PyObject_GetAttrString(_pymsg, "typical_p");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->typical_p = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // penalty_last_n
    PyObject * field = PyObject_GetAttrString(_pymsg, "penalty_last_n");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->penalty_last_n = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // penalty_repeat
    PyObject * field = PyObject_GetAttrString(_pymsg, "penalty_repeat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->penalty_repeat = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // penalty_freq
    PyObject * field = PyObject_GetAttrString(_pymsg, "penalty_freq");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->penalty_freq = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // penalty_present
    PyObject * field = PyObject_GetAttrString(_pymsg, "penalty_present");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->penalty_present = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mirostat
    PyObject * field = PyObject_GetAttrString(_pymsg, "mirostat");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mirostat = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // mirostat_eta
    PyObject * field = PyObject_GetAttrString(_pymsg, "mirostat_eta");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mirostat_eta = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mirostat_tau
    PyObject * field = PyObject_GetAttrString(_pymsg, "mirostat_tau");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mirostat_tau = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // penalize_nl
    PyObject * field = PyObject_GetAttrString(_pymsg, "penalize_nl");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->penalize_nl = (Py_True == field);
    Py_DECREF(field);
  }
  {  // samplers_sequence
    PyObject * field = PyObject_GetAttrString(_pymsg, "samplers_sequence");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->samplers_sequence, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // grammar
    PyObject * field = PyObject_GetAttrString(_pymsg, "grammar");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->grammar, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // grammar_schema
    PyObject * field = PyObject_GetAttrString(_pymsg, "grammar_schema");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->grammar_schema, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // penalty_prompt_tokens
    PyObject * field = PyObject_GetAttrString(_pymsg, "penalty_prompt_tokens");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(int32_t);
      if (!rosidl_runtime_c__int32__Sequence__init(&(ros_message->penalty_prompt_tokens), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int32__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      int32_t * dest = ros_message->penalty_prompt_tokens.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'penalty_prompt_tokens'");
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
      if (!rosidl_runtime_c__int32__Sequence__init(&(ros_message->penalty_prompt_tokens), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int32__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      int32_t * dest = ros_message->penalty_prompt_tokens.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        int32_t tmp = (int32_t)PyLong_AsLong(item);
        memcpy(&dest[i], &tmp, sizeof(int32_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // use_penalty_prompt_tokens
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_penalty_prompt_tokens");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->use_penalty_prompt_tokens = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * llama_msgs__msg__sampling_config__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SamplingConfig */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("llama_msgs.msg._sampling_config");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SamplingConfig");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  llama_msgs__msg__SamplingConfig * ros_message = (llama_msgs__msg__SamplingConfig *)raw_ros_message;
  {  // n_prev
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->n_prev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "n_prev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // n_probs
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->n_probs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "n_probs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_keep
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->min_keep);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_keep", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ignore_eos
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ignore_eos ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ignore_eos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // logit_bias
    PyObject * field = NULL;
    field = llama_msgs__msg__logit_bias_array__convert_to_py(&ros_message->logit_bias);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "logit_bias", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dynatemp_range
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dynatemp_range);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dynatemp_range", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dynatemp_exponent
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dynatemp_exponent);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dynatemp_exponent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // top_k
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->top_k);
    {
      int rc = PyObject_SetAttrString(_pymessage, "top_k", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // top_p
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->top_p);
    {
      int rc = PyObject_SetAttrString(_pymessage, "top_p", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_p
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_p);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_p", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tfs_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tfs_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tfs_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // typical_p
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->typical_p);
    {
      int rc = PyObject_SetAttrString(_pymessage, "typical_p", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // penalty_last_n
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->penalty_last_n);
    {
      int rc = PyObject_SetAttrString(_pymessage, "penalty_last_n", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // penalty_repeat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->penalty_repeat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "penalty_repeat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // penalty_freq
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->penalty_freq);
    {
      int rc = PyObject_SetAttrString(_pymessage, "penalty_freq", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // penalty_present
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->penalty_present);
    {
      int rc = PyObject_SetAttrString(_pymessage, "penalty_present", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mirostat
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mirostat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mirostat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mirostat_eta
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mirostat_eta);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mirostat_eta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mirostat_tau
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mirostat_tau);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mirostat_tau", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // penalize_nl
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->penalize_nl ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "penalize_nl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // samplers_sequence
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->samplers_sequence.data,
      strlen(ros_message->samplers_sequence.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "samplers_sequence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // grammar
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->grammar.data,
      strlen(ros_message->grammar.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "grammar", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // grammar_schema
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->grammar_schema.data,
      strlen(ros_message->grammar_schema.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "grammar_schema", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // penalty_prompt_tokens
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "penalty_prompt_tokens");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(int32_t)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->penalty_prompt_tokens.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      int32_t * src = &(ros_message->penalty_prompt_tokens.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->penalty_prompt_tokens.size * sizeof(int32_t));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // use_penalty_prompt_tokens
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->use_penalty_prompt_tokens ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_penalty_prompt_tokens", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
