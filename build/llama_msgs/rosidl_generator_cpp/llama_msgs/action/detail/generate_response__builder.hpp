// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from llama_msgs:action/GenerateResponse.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__ACTION__DETAIL__GENERATE_RESPONSE__BUILDER_HPP_
#define LLAMA_MSGS__ACTION__DETAIL__GENERATE_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "llama_msgs/action/detail/generate_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace llama_msgs
{

namespace action
{

namespace builder
{

class Init_GenerateResponse_Goal_sampling_config
{
public:
  explicit Init_GenerateResponse_Goal_sampling_config(::llama_msgs::action::GenerateResponse_Goal & msg)
  : msg_(msg)
  {}
  ::llama_msgs::action::GenerateResponse_Goal sampling_config(::llama_msgs::action::GenerateResponse_Goal::_sampling_config_type arg)
  {
    msg_.sampling_config = std::move(arg);
    return std::move(msg_);
  }

private:
  ::llama_msgs::action::GenerateResponse_Goal msg_;
};

class Init_GenerateResponse_Goal_reset
{
public:
  explicit Init_GenerateResponse_Goal_reset(::llama_msgs::action::GenerateResponse_Goal & msg)
  : msg_(msg)
  {}
  Init_GenerateResponse_Goal_sampling_config reset(::llama_msgs::action::GenerateResponse_Goal::_reset_type arg)
  {
    msg_.reset = std::move(arg);
    return Init_GenerateResponse_Goal_sampling_config(msg_);
  }

private:
  ::llama_msgs::action::GenerateResponse_Goal msg_;
};

class Init_GenerateResponse_Goal_stop
{
public:
  explicit Init_GenerateResponse_Goal_stop(::llama_msgs::action::GenerateResponse_Goal & msg)
  : msg_(msg)
  {}
  Init_GenerateResponse_Goal_reset stop(::llama_msgs::action::GenerateResponse_Goal::_stop_type arg)
  {
    msg_.stop = std::move(arg);
    return Init_GenerateResponse_Goal_reset(msg_);
  }

private:
  ::llama_msgs::action::GenerateResponse_Goal msg_;
};

class Init_GenerateResponse_Goal_image
{
public:
  explicit Init_GenerateResponse_Goal_image(::llama_msgs::action::GenerateResponse_Goal & msg)
  : msg_(msg)
  {}
  Init_GenerateResponse_Goal_stop image(::llama_msgs::action::GenerateResponse_Goal::_image_type arg)
  {
    msg_.image = std::move(arg);
    return Init_GenerateResponse_Goal_stop(msg_);
  }

private:
  ::llama_msgs::action::GenerateResponse_Goal msg_;
};

class Init_GenerateResponse_Goal_prompt
{
public:
  Init_GenerateResponse_Goal_prompt()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GenerateResponse_Goal_image prompt(::llama_msgs::action::GenerateResponse_Goal::_prompt_type arg)
  {
    msg_.prompt = std::move(arg);
    return Init_GenerateResponse_Goal_image(msg_);
  }

private:
  ::llama_msgs::action::GenerateResponse_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::llama_msgs::action::GenerateResponse_Goal>()
{
  return llama_msgs::action::builder::Init_GenerateResponse_Goal_prompt();
}

}  // namespace llama_msgs


namespace llama_msgs
{

namespace action
{

namespace builder
{

class Init_GenerateResponse_Result_response
{
public:
  Init_GenerateResponse_Result_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::llama_msgs::action::GenerateResponse_Result response(::llama_msgs::action::GenerateResponse_Result::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::llama_msgs::action::GenerateResponse_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::llama_msgs::action::GenerateResponse_Result>()
{
  return llama_msgs::action::builder::Init_GenerateResponse_Result_response();
}

}  // namespace llama_msgs


namespace llama_msgs
{

namespace action
{

namespace builder
{

class Init_GenerateResponse_Feedback_partial_response
{
public:
  Init_GenerateResponse_Feedback_partial_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::llama_msgs::action::GenerateResponse_Feedback partial_response(::llama_msgs::action::GenerateResponse_Feedback::_partial_response_type arg)
  {
    msg_.partial_response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::llama_msgs::action::GenerateResponse_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::llama_msgs::action::GenerateResponse_Feedback>()
{
  return llama_msgs::action::builder::Init_GenerateResponse_Feedback_partial_response();
}

}  // namespace llama_msgs


namespace llama_msgs
{

namespace action
{

namespace builder
{

class Init_GenerateResponse_SendGoal_Request_goal
{
public:
  explicit Init_GenerateResponse_SendGoal_Request_goal(::llama_msgs::action::GenerateResponse_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::llama_msgs::action::GenerateResponse_SendGoal_Request goal(::llama_msgs::action::GenerateResponse_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::llama_msgs::action::GenerateResponse_SendGoal_Request msg_;
};

class Init_GenerateResponse_SendGoal_Request_goal_id
{
public:
  Init_GenerateResponse_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GenerateResponse_SendGoal_Request_goal goal_id(::llama_msgs::action::GenerateResponse_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GenerateResponse_SendGoal_Request_goal(msg_);
  }

private:
  ::llama_msgs::action::GenerateResponse_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::llama_msgs::action::GenerateResponse_SendGoal_Request>()
{
  return llama_msgs::action::builder::Init_GenerateResponse_SendGoal_Request_goal_id();
}

}  // namespace llama_msgs


namespace llama_msgs
{

namespace action
{

namespace builder
{

class Init_GenerateResponse_SendGoal_Response_stamp
{
public:
  explicit Init_GenerateResponse_SendGoal_Response_stamp(::llama_msgs::action::GenerateResponse_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::llama_msgs::action::GenerateResponse_SendGoal_Response stamp(::llama_msgs::action::GenerateResponse_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::llama_msgs::action::GenerateResponse_SendGoal_Response msg_;
};

class Init_GenerateResponse_SendGoal_Response_accepted
{
public:
  Init_GenerateResponse_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GenerateResponse_SendGoal_Response_stamp accepted(::llama_msgs::action::GenerateResponse_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_GenerateResponse_SendGoal_Response_stamp(msg_);
  }

private:
  ::llama_msgs::action::GenerateResponse_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::llama_msgs::action::GenerateResponse_SendGoal_Response>()
{
  return llama_msgs::action::builder::Init_GenerateResponse_SendGoal_Response_accepted();
}

}  // namespace llama_msgs


namespace llama_msgs
{

namespace action
{

namespace builder
{

class Init_GenerateResponse_GetResult_Request_goal_id
{
public:
  Init_GenerateResponse_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::llama_msgs::action::GenerateResponse_GetResult_Request goal_id(::llama_msgs::action::GenerateResponse_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::llama_msgs::action::GenerateResponse_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::llama_msgs::action::GenerateResponse_GetResult_Request>()
{
  return llama_msgs::action::builder::Init_GenerateResponse_GetResult_Request_goal_id();
}

}  // namespace llama_msgs


namespace llama_msgs
{

namespace action
{

namespace builder
{

class Init_GenerateResponse_GetResult_Response_result
{
public:
  explicit Init_GenerateResponse_GetResult_Response_result(::llama_msgs::action::GenerateResponse_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::llama_msgs::action::GenerateResponse_GetResult_Response result(::llama_msgs::action::GenerateResponse_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::llama_msgs::action::GenerateResponse_GetResult_Response msg_;
};

class Init_GenerateResponse_GetResult_Response_status
{
public:
  Init_GenerateResponse_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GenerateResponse_GetResult_Response_result status(::llama_msgs::action::GenerateResponse_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GenerateResponse_GetResult_Response_result(msg_);
  }

private:
  ::llama_msgs::action::GenerateResponse_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::llama_msgs::action::GenerateResponse_GetResult_Response>()
{
  return llama_msgs::action::builder::Init_GenerateResponse_GetResult_Response_status();
}

}  // namespace llama_msgs


namespace llama_msgs
{

namespace action
{

namespace builder
{

class Init_GenerateResponse_FeedbackMessage_feedback
{
public:
  explicit Init_GenerateResponse_FeedbackMessage_feedback(::llama_msgs::action::GenerateResponse_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::llama_msgs::action::GenerateResponse_FeedbackMessage feedback(::llama_msgs::action::GenerateResponse_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::llama_msgs::action::GenerateResponse_FeedbackMessage msg_;
};

class Init_GenerateResponse_FeedbackMessage_goal_id
{
public:
  Init_GenerateResponse_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GenerateResponse_FeedbackMessage_feedback goal_id(::llama_msgs::action::GenerateResponse_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GenerateResponse_FeedbackMessage_feedback(msg_);
  }

private:
  ::llama_msgs::action::GenerateResponse_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::llama_msgs::action::GenerateResponse_FeedbackMessage>()
{
  return llama_msgs::action::builder::Init_GenerateResponse_FeedbackMessage_goal_id();
}

}  // namespace llama_msgs

#endif  // LLAMA_MSGS__ACTION__DETAIL__GENERATE_RESPONSE__BUILDER_HPP_
