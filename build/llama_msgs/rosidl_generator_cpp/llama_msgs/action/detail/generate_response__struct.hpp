// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from llama_msgs:action/GenerateResponse.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__ACTION__DETAIL__GENERATE_RESPONSE__STRUCT_HPP_
#define LLAMA_MSGS__ACTION__DETAIL__GENERATE_RESPONSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.hpp"
// Member 'sampling_config'
#include "llama_msgs/msg/detail/sampling_config__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__llama_msgs__action__GenerateResponse_Goal __attribute__((deprecated))
#else
# define DEPRECATED__llama_msgs__action__GenerateResponse_Goal __declspec(deprecated)
#endif

namespace llama_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GenerateResponse_Goal_
{
  using Type = GenerateResponse_Goal_<ContainerAllocator>;

  explicit GenerateResponse_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_init),
    sampling_config(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->stop = {};
      this->reset = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->prompt = "";
      this->reset = false;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->prompt = "";
    }
  }

  explicit GenerateResponse_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : prompt(_alloc),
    image(_alloc, _init),
    sampling_config(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->stop = {};
      this->reset = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->prompt = "";
      this->reset = false;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->prompt = "";
    }
  }

  // field types and members
  using _prompt_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _prompt_type prompt;
  using _image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _image_type image;
  using _stop_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _stop_type stop;
  using _reset_type =
    bool;
  _reset_type reset;
  using _sampling_config_type =
    llama_msgs::msg::SamplingConfig_<ContainerAllocator>;
  _sampling_config_type sampling_config;

  // setters for named parameter idiom
  Type & set__prompt(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->prompt = _arg;
    return *this;
  }
  Type & set__image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return *this;
  }
  Type & set__stop(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->stop = _arg;
    return *this;
  }
  Type & set__reset(
    const bool & _arg)
  {
    this->reset = _arg;
    return *this;
  }
  Type & set__sampling_config(
    const llama_msgs::msg::SamplingConfig_<ContainerAllocator> & _arg)
  {
    this->sampling_config = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    llama_msgs::action::GenerateResponse_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const llama_msgs::action::GenerateResponse_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<llama_msgs::action::GenerateResponse_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<llama_msgs::action::GenerateResponse_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      llama_msgs::action::GenerateResponse_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<llama_msgs::action::GenerateResponse_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      llama_msgs::action::GenerateResponse_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<llama_msgs::action::GenerateResponse_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<llama_msgs::action::GenerateResponse_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<llama_msgs::action::GenerateResponse_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__llama_msgs__action__GenerateResponse_Goal
    std::shared_ptr<llama_msgs::action::GenerateResponse_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__llama_msgs__action__GenerateResponse_Goal
    std::shared_ptr<llama_msgs::action::GenerateResponse_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GenerateResponse_Goal_ & other) const
  {
    if (this->prompt != other.prompt) {
      return false;
    }
    if (this->image != other.image) {
      return false;
    }
    if (this->stop != other.stop) {
      return false;
    }
    if (this->reset != other.reset) {
      return false;
    }
    if (this->sampling_config != other.sampling_config) {
      return false;
    }
    return true;
  }
  bool operator!=(const GenerateResponse_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GenerateResponse_Goal_

// alias to use template instance with default allocator
using GenerateResponse_Goal =
  llama_msgs::action::GenerateResponse_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace llama_msgs


// Include directives for member types
// Member 'response'
#include "llama_msgs/msg/detail/response__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__llama_msgs__action__GenerateResponse_Result __attribute__((deprecated))
#else
# define DEPRECATED__llama_msgs__action__GenerateResponse_Result __declspec(deprecated)
#endif

namespace llama_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GenerateResponse_Result_
{
  using Type = GenerateResponse_Result_<ContainerAllocator>;

  explicit GenerateResponse_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_init)
  {
    (void)_init;
  }

  explicit GenerateResponse_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _response_type =
    llama_msgs::msg::Response_<ContainerAllocator>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__response(
    const llama_msgs::msg::Response_<ContainerAllocator> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    llama_msgs::action::GenerateResponse_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const llama_msgs::action::GenerateResponse_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<llama_msgs::action::GenerateResponse_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<llama_msgs::action::GenerateResponse_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      llama_msgs::action::GenerateResponse_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<llama_msgs::action::GenerateResponse_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      llama_msgs::action::GenerateResponse_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<llama_msgs::action::GenerateResponse_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<llama_msgs::action::GenerateResponse_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<llama_msgs::action::GenerateResponse_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__llama_msgs__action__GenerateResponse_Result
    std::shared_ptr<llama_msgs::action::GenerateResponse_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__llama_msgs__action__GenerateResponse_Result
    std::shared_ptr<llama_msgs::action::GenerateResponse_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GenerateResponse_Result_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const GenerateResponse_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GenerateResponse_Result_

// alias to use template instance with default allocator
using GenerateResponse_Result =
  llama_msgs::action::GenerateResponse_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace llama_msgs


// Include directives for member types
// Member 'partial_response'
#include "llama_msgs/msg/detail/partial_response__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__llama_msgs__action__GenerateResponse_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__llama_msgs__action__GenerateResponse_Feedback __declspec(deprecated)
#endif

namespace llama_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GenerateResponse_Feedback_
{
  using Type = GenerateResponse_Feedback_<ContainerAllocator>;

  explicit GenerateResponse_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : partial_response(_init)
  {
    (void)_init;
  }

  explicit GenerateResponse_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : partial_response(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _partial_response_type =
    llama_msgs::msg::PartialResponse_<ContainerAllocator>;
  _partial_response_type partial_response;

  // setters for named parameter idiom
  Type & set__partial_response(
    const llama_msgs::msg::PartialResponse_<ContainerAllocator> & _arg)
  {
    this->partial_response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    llama_msgs::action::GenerateResponse_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const llama_msgs::action::GenerateResponse_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<llama_msgs::action::GenerateResponse_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<llama_msgs::action::GenerateResponse_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      llama_msgs::action::GenerateResponse_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<llama_msgs::action::GenerateResponse_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      llama_msgs::action::GenerateResponse_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<llama_msgs::action::GenerateResponse_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<llama_msgs::action::GenerateResponse_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<llama_msgs::action::GenerateResponse_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__llama_msgs__action__GenerateResponse_Feedback
    std::shared_ptr<llama_msgs::action::GenerateResponse_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__llama_msgs__action__GenerateResponse_Feedback
    std::shared_ptr<llama_msgs::action::GenerateResponse_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GenerateResponse_Feedback_ & other) const
  {
    if (this->partial_response != other.partial_response) {
      return false;
    }
    return true;
  }
  bool operator!=(const GenerateResponse_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GenerateResponse_Feedback_

// alias to use template instance with default allocator
using GenerateResponse_Feedback =
  llama_msgs::action::GenerateResponse_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace llama_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "llama_msgs/action/detail/generate_response__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__llama_msgs__action__GenerateResponse_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__llama_msgs__action__GenerateResponse_SendGoal_Request __declspec(deprecated)
#endif

namespace llama_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GenerateResponse_SendGoal_Request_
{
  using Type = GenerateResponse_SendGoal_Request_<ContainerAllocator>;

  explicit GenerateResponse_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit GenerateResponse_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    llama_msgs::action::GenerateResponse_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const llama_msgs::action::GenerateResponse_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    llama_msgs::action::GenerateResponse_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const llama_msgs::action::GenerateResponse_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<llama_msgs::action::GenerateResponse_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<llama_msgs::action::GenerateResponse_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      llama_msgs::action::GenerateResponse_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<llama_msgs::action::GenerateResponse_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      llama_msgs::action::GenerateResponse_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<llama_msgs::action::GenerateResponse_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<llama_msgs::action::GenerateResponse_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<llama_msgs::action::GenerateResponse_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__llama_msgs__action__GenerateResponse_SendGoal_Request
    std::shared_ptr<llama_msgs::action::GenerateResponse_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__llama_msgs__action__GenerateResponse_SendGoal_Request
    std::shared_ptr<llama_msgs::action::GenerateResponse_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GenerateResponse_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const GenerateResponse_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GenerateResponse_SendGoal_Request_

// alias to use template instance with default allocator
using GenerateResponse_SendGoal_Request =
  llama_msgs::action::GenerateResponse_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace llama_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__llama_msgs__action__GenerateResponse_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__llama_msgs__action__GenerateResponse_SendGoal_Response __declspec(deprecated)
#endif

namespace llama_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GenerateResponse_SendGoal_Response_
{
  using Type = GenerateResponse_SendGoal_Response_<ContainerAllocator>;

  explicit GenerateResponse_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit GenerateResponse_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    llama_msgs::action::GenerateResponse_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const llama_msgs::action::GenerateResponse_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<llama_msgs::action::GenerateResponse_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<llama_msgs::action::GenerateResponse_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      llama_msgs::action::GenerateResponse_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<llama_msgs::action::GenerateResponse_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      llama_msgs::action::GenerateResponse_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<llama_msgs::action::GenerateResponse_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<llama_msgs::action::GenerateResponse_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<llama_msgs::action::GenerateResponse_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__llama_msgs__action__GenerateResponse_SendGoal_Response
    std::shared_ptr<llama_msgs::action::GenerateResponse_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__llama_msgs__action__GenerateResponse_SendGoal_Response
    std::shared_ptr<llama_msgs::action::GenerateResponse_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GenerateResponse_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const GenerateResponse_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GenerateResponse_SendGoal_Response_

// alias to use template instance with default allocator
using GenerateResponse_SendGoal_Response =
  llama_msgs::action::GenerateResponse_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace llama_msgs

namespace llama_msgs
{

namespace action
{

struct GenerateResponse_SendGoal
{
  using Request = llama_msgs::action::GenerateResponse_SendGoal_Request;
  using Response = llama_msgs::action::GenerateResponse_SendGoal_Response;
};

}  // namespace action

}  // namespace llama_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__llama_msgs__action__GenerateResponse_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__llama_msgs__action__GenerateResponse_GetResult_Request __declspec(deprecated)
#endif

namespace llama_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GenerateResponse_GetResult_Request_
{
  using Type = GenerateResponse_GetResult_Request_<ContainerAllocator>;

  explicit GenerateResponse_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit GenerateResponse_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    llama_msgs::action::GenerateResponse_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const llama_msgs::action::GenerateResponse_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<llama_msgs::action::GenerateResponse_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<llama_msgs::action::GenerateResponse_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      llama_msgs::action::GenerateResponse_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<llama_msgs::action::GenerateResponse_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      llama_msgs::action::GenerateResponse_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<llama_msgs::action::GenerateResponse_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<llama_msgs::action::GenerateResponse_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<llama_msgs::action::GenerateResponse_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__llama_msgs__action__GenerateResponse_GetResult_Request
    std::shared_ptr<llama_msgs::action::GenerateResponse_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__llama_msgs__action__GenerateResponse_GetResult_Request
    std::shared_ptr<llama_msgs::action::GenerateResponse_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GenerateResponse_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const GenerateResponse_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GenerateResponse_GetResult_Request_

// alias to use template instance with default allocator
using GenerateResponse_GetResult_Request =
  llama_msgs::action::GenerateResponse_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace llama_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "llama_msgs/action/detail/generate_response__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__llama_msgs__action__GenerateResponse_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__llama_msgs__action__GenerateResponse_GetResult_Response __declspec(deprecated)
#endif

namespace llama_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GenerateResponse_GetResult_Response_
{
  using Type = GenerateResponse_GetResult_Response_<ContainerAllocator>;

  explicit GenerateResponse_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit GenerateResponse_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    llama_msgs::action::GenerateResponse_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const llama_msgs::action::GenerateResponse_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    llama_msgs::action::GenerateResponse_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const llama_msgs::action::GenerateResponse_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<llama_msgs::action::GenerateResponse_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<llama_msgs::action::GenerateResponse_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      llama_msgs::action::GenerateResponse_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<llama_msgs::action::GenerateResponse_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      llama_msgs::action::GenerateResponse_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<llama_msgs::action::GenerateResponse_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<llama_msgs::action::GenerateResponse_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<llama_msgs::action::GenerateResponse_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__llama_msgs__action__GenerateResponse_GetResult_Response
    std::shared_ptr<llama_msgs::action::GenerateResponse_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__llama_msgs__action__GenerateResponse_GetResult_Response
    std::shared_ptr<llama_msgs::action::GenerateResponse_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GenerateResponse_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const GenerateResponse_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GenerateResponse_GetResult_Response_

// alias to use template instance with default allocator
using GenerateResponse_GetResult_Response =
  llama_msgs::action::GenerateResponse_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace llama_msgs

namespace llama_msgs
{

namespace action
{

struct GenerateResponse_GetResult
{
  using Request = llama_msgs::action::GenerateResponse_GetResult_Request;
  using Response = llama_msgs::action::GenerateResponse_GetResult_Response;
};

}  // namespace action

}  // namespace llama_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "llama_msgs/action/detail/generate_response__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__llama_msgs__action__GenerateResponse_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__llama_msgs__action__GenerateResponse_FeedbackMessage __declspec(deprecated)
#endif

namespace llama_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GenerateResponse_FeedbackMessage_
{
  using Type = GenerateResponse_FeedbackMessage_<ContainerAllocator>;

  explicit GenerateResponse_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit GenerateResponse_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    llama_msgs::action::GenerateResponse_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const llama_msgs::action::GenerateResponse_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    llama_msgs::action::GenerateResponse_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const llama_msgs::action::GenerateResponse_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<llama_msgs::action::GenerateResponse_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<llama_msgs::action::GenerateResponse_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      llama_msgs::action::GenerateResponse_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<llama_msgs::action::GenerateResponse_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      llama_msgs::action::GenerateResponse_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<llama_msgs::action::GenerateResponse_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<llama_msgs::action::GenerateResponse_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<llama_msgs::action::GenerateResponse_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__llama_msgs__action__GenerateResponse_FeedbackMessage
    std::shared_ptr<llama_msgs::action::GenerateResponse_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__llama_msgs__action__GenerateResponse_FeedbackMessage
    std::shared_ptr<llama_msgs::action::GenerateResponse_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GenerateResponse_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const GenerateResponse_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GenerateResponse_FeedbackMessage_

// alias to use template instance with default allocator
using GenerateResponse_FeedbackMessage =
  llama_msgs::action::GenerateResponse_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace llama_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace llama_msgs
{

namespace action
{

struct GenerateResponse
{
  /// The goal message defined in the action definition.
  using Goal = llama_msgs::action::GenerateResponse_Goal;
  /// The result message defined in the action definition.
  using Result = llama_msgs::action::GenerateResponse_Result;
  /// The feedback message defined in the action definition.
  using Feedback = llama_msgs::action::GenerateResponse_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = llama_msgs::action::GenerateResponse_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = llama_msgs::action::GenerateResponse_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = llama_msgs::action::GenerateResponse_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct GenerateResponse GenerateResponse;

}  // namespace action

}  // namespace llama_msgs

#endif  // LLAMA_MSGS__ACTION__DETAIL__GENERATE_RESPONSE__STRUCT_HPP_
