// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rrr_robot_interfaces:srv/RRRRandomTarget.idl
// generated code does not contain a copyright notice

#ifndef RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_RANDOM_TARGET__STRUCT_HPP_
#define RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_RANDOM_TARGET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rrr_robot_interfaces__srv__RRRRandomTarget_Request __attribute__((deprecated))
#else
# define DEPRECATED__rrr_robot_interfaces__srv__RRRRandomTarget_Request __declspec(deprecated)
#endif

namespace rrr_robot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RRRRandomTarget_Request_
{
  using Type = RRRRandomTarget_Request_<ContainerAllocator>;

  explicit RRRRandomTarget_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_call = false;
    }
  }

  explicit RRRRandomTarget_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_call = false;
    }
  }

  // field types and members
  using _target_call_type =
    bool;
  _target_call_type target_call;

  // setters for named parameter idiom
  Type & set__target_call(
    const bool & _arg)
  {
    this->target_call = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rrr_robot_interfaces::srv::RRRRandomTarget_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rrr_robot_interfaces::srv::RRRRandomTarget_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rrr_robot_interfaces::srv::RRRRandomTarget_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rrr_robot_interfaces::srv::RRRRandomTarget_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rrr_robot_interfaces::srv::RRRRandomTarget_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rrr_robot_interfaces::srv::RRRRandomTarget_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rrr_robot_interfaces::srv::RRRRandomTarget_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rrr_robot_interfaces::srv::RRRRandomTarget_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rrr_robot_interfaces::srv::RRRRandomTarget_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rrr_robot_interfaces::srv::RRRRandomTarget_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rrr_robot_interfaces__srv__RRRRandomTarget_Request
    std::shared_ptr<rrr_robot_interfaces::srv::RRRRandomTarget_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rrr_robot_interfaces__srv__RRRRandomTarget_Request
    std::shared_ptr<rrr_robot_interfaces::srv::RRRRandomTarget_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RRRRandomTarget_Request_ & other) const
  {
    if (this->target_call != other.target_call) {
      return false;
    }
    return true;
  }
  bool operator!=(const RRRRandomTarget_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RRRRandomTarget_Request_

// alias to use template instance with default allocator
using RRRRandomTarget_Request =
  rrr_robot_interfaces::srv::RRRRandomTarget_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rrr_robot_interfaces


// Include directives for member types
// Member 'random_target'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rrr_robot_interfaces__srv__RRRRandomTarget_Response __attribute__((deprecated))
#else
# define DEPRECATED__rrr_robot_interfaces__srv__RRRRandomTarget_Response __declspec(deprecated)
#endif

namespace rrr_robot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RRRRandomTarget_Response_
{
  using Type = RRRRandomTarget_Response_<ContainerAllocator>;

  explicit RRRRandomTarget_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : random_target(_init)
  {
    (void)_init;
  }

  explicit RRRRandomTarget_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : random_target(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _random_target_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _random_target_type random_target;

  // setters for named parameter idiom
  Type & set__random_target(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->random_target = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rrr_robot_interfaces::srv::RRRRandomTarget_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rrr_robot_interfaces::srv::RRRRandomTarget_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rrr_robot_interfaces::srv::RRRRandomTarget_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rrr_robot_interfaces::srv::RRRRandomTarget_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rrr_robot_interfaces::srv::RRRRandomTarget_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rrr_robot_interfaces::srv::RRRRandomTarget_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rrr_robot_interfaces::srv::RRRRandomTarget_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rrr_robot_interfaces::srv::RRRRandomTarget_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rrr_robot_interfaces::srv::RRRRandomTarget_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rrr_robot_interfaces::srv::RRRRandomTarget_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rrr_robot_interfaces__srv__RRRRandomTarget_Response
    std::shared_ptr<rrr_robot_interfaces::srv::RRRRandomTarget_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rrr_robot_interfaces__srv__RRRRandomTarget_Response
    std::shared_ptr<rrr_robot_interfaces::srv::RRRRandomTarget_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RRRRandomTarget_Response_ & other) const
  {
    if (this->random_target != other.random_target) {
      return false;
    }
    return true;
  }
  bool operator!=(const RRRRandomTarget_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RRRRandomTarget_Response_

// alias to use template instance with default allocator
using RRRRandomTarget_Response =
  rrr_robot_interfaces::srv::RRRRandomTarget_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rrr_robot_interfaces

namespace rrr_robot_interfaces
{

namespace srv
{

struct RRRRandomTarget
{
  using Request = rrr_robot_interfaces::srv::RRRRandomTarget_Request;
  using Response = rrr_robot_interfaces::srv::RRRRandomTarget_Response;
};

}  // namespace srv

}  // namespace rrr_robot_interfaces

#endif  // RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_RANDOM_TARGET__STRUCT_HPP_
