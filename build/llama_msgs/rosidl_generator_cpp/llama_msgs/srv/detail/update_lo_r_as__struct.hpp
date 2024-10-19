// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from llama_msgs:srv/UpdateLoRAs.idl
// generated code does not contain a copyright notice

#ifndef LLAMA_MSGS__SRV__DETAIL__UPDATE_LO_R_AS__STRUCT_HPP_
#define LLAMA_MSGS__SRV__DETAIL__UPDATE_LO_R_AS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'loras'
#include "llama_msgs/msg/detail/lo_ra__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__llama_msgs__srv__UpdateLoRAs_Request __attribute__((deprecated))
#else
# define DEPRECATED__llama_msgs__srv__UpdateLoRAs_Request __declspec(deprecated)
#endif

namespace llama_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UpdateLoRAs_Request_
{
  using Type = UpdateLoRAs_Request_<ContainerAllocator>;

  explicit UpdateLoRAs_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit UpdateLoRAs_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _loras_type =
    std::vector<llama_msgs::msg::LoRA_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<llama_msgs::msg::LoRA_<ContainerAllocator>>>;
  _loras_type loras;

  // setters for named parameter idiom
  Type & set__loras(
    const std::vector<llama_msgs::msg::LoRA_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<llama_msgs::msg::LoRA_<ContainerAllocator>>> & _arg)
  {
    this->loras = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    llama_msgs::srv::UpdateLoRAs_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const llama_msgs::srv::UpdateLoRAs_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<llama_msgs::srv::UpdateLoRAs_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<llama_msgs::srv::UpdateLoRAs_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      llama_msgs::srv::UpdateLoRAs_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<llama_msgs::srv::UpdateLoRAs_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      llama_msgs::srv::UpdateLoRAs_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<llama_msgs::srv::UpdateLoRAs_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<llama_msgs::srv::UpdateLoRAs_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<llama_msgs::srv::UpdateLoRAs_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__llama_msgs__srv__UpdateLoRAs_Request
    std::shared_ptr<llama_msgs::srv::UpdateLoRAs_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__llama_msgs__srv__UpdateLoRAs_Request
    std::shared_ptr<llama_msgs::srv::UpdateLoRAs_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UpdateLoRAs_Request_ & other) const
  {
    if (this->loras != other.loras) {
      return false;
    }
    return true;
  }
  bool operator!=(const UpdateLoRAs_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UpdateLoRAs_Request_

// alias to use template instance with default allocator
using UpdateLoRAs_Request =
  llama_msgs::srv::UpdateLoRAs_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace llama_msgs


#ifndef _WIN32
# define DEPRECATED__llama_msgs__srv__UpdateLoRAs_Response __attribute__((deprecated))
#else
# define DEPRECATED__llama_msgs__srv__UpdateLoRAs_Response __declspec(deprecated)
#endif

namespace llama_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UpdateLoRAs_Response_
{
  using Type = UpdateLoRAs_Response_<ContainerAllocator>;

  explicit UpdateLoRAs_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit UpdateLoRAs_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    llama_msgs::srv::UpdateLoRAs_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const llama_msgs::srv::UpdateLoRAs_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<llama_msgs::srv::UpdateLoRAs_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<llama_msgs::srv::UpdateLoRAs_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      llama_msgs::srv::UpdateLoRAs_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<llama_msgs::srv::UpdateLoRAs_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      llama_msgs::srv::UpdateLoRAs_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<llama_msgs::srv::UpdateLoRAs_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<llama_msgs::srv::UpdateLoRAs_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<llama_msgs::srv::UpdateLoRAs_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__llama_msgs__srv__UpdateLoRAs_Response
    std::shared_ptr<llama_msgs::srv::UpdateLoRAs_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__llama_msgs__srv__UpdateLoRAs_Response
    std::shared_ptr<llama_msgs::srv::UpdateLoRAs_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UpdateLoRAs_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const UpdateLoRAs_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UpdateLoRAs_Response_

// alias to use template instance with default allocator
using UpdateLoRAs_Response =
  llama_msgs::srv::UpdateLoRAs_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace llama_msgs

namespace llama_msgs
{

namespace srv
{

struct UpdateLoRAs
{
  using Request = llama_msgs::srv::UpdateLoRAs_Request;
  using Response = llama_msgs::srv::UpdateLoRAs_Response;
};

}  // namespace srv

}  // namespace llama_msgs

#endif  // LLAMA_MSGS__SRV__DETAIL__UPDATE_LO_R_AS__STRUCT_HPP_
