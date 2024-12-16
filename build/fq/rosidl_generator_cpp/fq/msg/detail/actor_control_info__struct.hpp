// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fq:msg/ActorControlInfo.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_CONTROL_INFO__STRUCT_HPP_
#define FQ__MSG__DETAIL__ACTOR_CONTROL_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'target_positions'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__fq__msg__ActorControlInfo __attribute__((deprecated))
#else
# define DEPRECATED__fq__msg__ActorControlInfo __declspec(deprecated)
#endif

namespace fq
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActorControlInfo_
{
  using Type = ActorControlInfo_<ContainerAllocator>;

  explicit ActorControlInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->max_velocity = 0.0f;
      this->target_velocity = 0.0f;
    }
  }

  explicit ActorControlInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->max_velocity = 0.0f;
      this->target_velocity = 0.0f;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _target_positions_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Point_<ContainerAllocator>>::other>;
  _target_positions_type target_positions;
  using _max_velocity_type =
    float;
  _max_velocity_type max_velocity;
  using _target_velocity_type =
    float;
  _target_velocity_type target_velocity;
  using _target_headings_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _target_headings_type target_headings;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__target_positions(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Point_<ContainerAllocator>>::other> & _arg)
  {
    this->target_positions = _arg;
    return *this;
  }
  Type & set__max_velocity(
    const float & _arg)
  {
    this->max_velocity = _arg;
    return *this;
  }
  Type & set__target_velocity(
    const float & _arg)
  {
    this->target_velocity = _arg;
    return *this;
  }
  Type & set__target_headings(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->target_headings = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fq::msg::ActorControlInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const fq::msg::ActorControlInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fq::msg::ActorControlInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fq::msg::ActorControlInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fq::msg::ActorControlInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fq::msg::ActorControlInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fq::msg::ActorControlInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fq::msg::ActorControlInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fq::msg::ActorControlInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fq::msg::ActorControlInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fq__msg__ActorControlInfo
    std::shared_ptr<fq::msg::ActorControlInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fq__msg__ActorControlInfo
    std::shared_ptr<fq::msg::ActorControlInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActorControlInfo_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->target_positions != other.target_positions) {
      return false;
    }
    if (this->max_velocity != other.max_velocity) {
      return false;
    }
    if (this->target_velocity != other.target_velocity) {
      return false;
    }
    if (this->target_headings != other.target_headings) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActorControlInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActorControlInfo_

// alias to use template instance with default allocator
using ActorControlInfo =
  fq::msg::ActorControlInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fq

#endif  // FQ__MSG__DETAIL__ACTOR_CONTROL_INFO__STRUCT_HPP_
