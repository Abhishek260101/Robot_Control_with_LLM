// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from llama_msgs:srv/GenerateEmbeddings.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__SRV__DETAIL__GENERATE_EMBEDDINGS__BUILDER_HPP_
#define LLAMA_MSGS__SRV__DETAIL__GENERATE_EMBEDDINGS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "llama_msgs/srv/detail/generate_embeddings__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace llama_msgs
{

namespace srv
{

namespace builder
{

class Init_GenerateEmbeddings_Request_normalize
{
public:
  explicit Init_GenerateEmbeddings_Request_normalize(::llama_msgs::srv::GenerateEmbeddings_Request & msg)
  : msg_(msg)
  {}
  ::llama_msgs::srv::GenerateEmbeddings_Request normalize(::llama_msgs::srv::GenerateEmbeddings_Request::_normalize_type arg)
  {
    msg_.normalize = std::move(arg);
    return std::move(msg_);
  }

private:
  ::llama_msgs::srv::GenerateEmbeddings_Request msg_;
};

class Init_GenerateEmbeddings_Request_prompt
{
public:
  Init_GenerateEmbeddings_Request_prompt()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GenerateEmbeddings_Request_normalize prompt(::llama_msgs::srv::GenerateEmbeddings_Request::_prompt_type arg)
  {
    msg_.prompt = std::move(arg);
    return Init_GenerateEmbeddings_Request_normalize(msg_);
  }

private:
  ::llama_msgs::srv::GenerateEmbeddings_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::llama_msgs::srv::GenerateEmbeddings_Request>()
{
  return llama_msgs::srv::builder::Init_GenerateEmbeddings_Request_prompt();
}

}  // namespace llama_msgs


namespace llama_msgs
{

namespace srv
{

namespace builder
{

class Init_GenerateEmbeddings_Response_n_tokens
{
public:
  explicit Init_GenerateEmbeddings_Response_n_tokens(::llama_msgs::srv::GenerateEmbeddings_Response & msg)
  : msg_(msg)
  {}
  ::llama_msgs::srv::GenerateEmbeddings_Response n_tokens(::llama_msgs::srv::GenerateEmbeddings_Response::_n_tokens_type arg)
  {
    msg_.n_tokens = std::move(arg);
    return std::move(msg_);
  }

private:
  ::llama_msgs::srv::GenerateEmbeddings_Response msg_;
};

class Init_GenerateEmbeddings_Response_embeddings
{
public:
  Init_GenerateEmbeddings_Response_embeddings()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GenerateEmbeddings_Response_n_tokens embeddings(::llama_msgs::srv::GenerateEmbeddings_Response::_embeddings_type arg)
  {
    msg_.embeddings = std::move(arg);
    return Init_GenerateEmbeddings_Response_n_tokens(msg_);
  }

private:
  ::llama_msgs::srv::GenerateEmbeddings_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::llama_msgs::srv::GenerateEmbeddings_Response>()
{
  return llama_msgs::srv::builder::Init_GenerateEmbeddings_Response_embeddings();
}

}  // namespace llama_msgs

#endif  // LLAMA_MSGS__SRV__DETAIL__GENERATE_EMBEDDINGS__BUILDER_HPP_
