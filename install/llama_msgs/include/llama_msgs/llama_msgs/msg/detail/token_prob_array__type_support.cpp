// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from llama_msgs:msg/TokenProbArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "llama_msgs/msg/detail/token_prob_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace llama_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TokenProbArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) llama_msgs::msg::TokenProbArray(_init);
}

void TokenProbArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<llama_msgs::msg::TokenProbArray *>(message_memory);
  typed_message->~TokenProbArray();
}

size_t size_function__TokenProbArray__data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<llama_msgs::msg::TokenProb> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TokenProbArray__data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<llama_msgs::msg::TokenProb> *>(untyped_member);
  return &member[index];
}

void * get_function__TokenProbArray__data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<llama_msgs::msg::TokenProb> *>(untyped_member);
  return &member[index];
}

void fetch_function__TokenProbArray__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const llama_msgs::msg::TokenProb *>(
    get_const_function__TokenProbArray__data(untyped_member, index));
  auto & value = *reinterpret_cast<llama_msgs::msg::TokenProb *>(untyped_value);
  value = item;
}

void assign_function__TokenProbArray__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<llama_msgs::msg::TokenProb *>(
    get_function__TokenProbArray__data(untyped_member, index));
  const auto & value = *reinterpret_cast<const llama_msgs::msg::TokenProb *>(untyped_value);
  item = value;
}

void resize_function__TokenProbArray__data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<llama_msgs::msg::TokenProb> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TokenProbArray_message_member_array[2] = {
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<llama_msgs::msg::TokenProb>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llama_msgs::msg::TokenProbArray, data),  // bytes offset in struct
    nullptr,  // default value
    size_function__TokenProbArray__data,  // size() function pointer
    get_const_function__TokenProbArray__data,  // get_const(index) function pointer
    get_function__TokenProbArray__data,  // get(index) function pointer
    fetch_function__TokenProbArray__data,  // fetch(index, &value) function pointer
    assign_function__TokenProbArray__data,  // assign(index, value) function pointer
    resize_function__TokenProbArray__data  // resize(index) function pointer
  },
  {
    "chosen_token",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llama_msgs::msg::TokenProbArray, chosen_token),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TokenProbArray_message_members = {
  "llama_msgs::msg",  // message namespace
  "TokenProbArray",  // message name
  2,  // number of fields
  sizeof(llama_msgs::msg::TokenProbArray),
  TokenProbArray_message_member_array,  // message members
  TokenProbArray_init_function,  // function to initialize message memory (memory has to be allocated)
  TokenProbArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TokenProbArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TokenProbArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace llama_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<llama_msgs::msg::TokenProbArray>()
{
  return &::llama_msgs::msg::rosidl_typesupport_introspection_cpp::TokenProbArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, llama_msgs, msg, TokenProbArray)() {
  return &::llama_msgs::msg::rosidl_typesupport_introspection_cpp::TokenProbArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
