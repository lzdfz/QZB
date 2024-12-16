// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fq:msg/BasePose.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_POSE__STRUCT_HPP_
#define FQ__MSG__DETAIL__BASE_POSE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'location'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'rotation'
#include "fq/msg/detail/base_orientation3_d__struct.hpp"
// Member 'velocity'
// Member 'angular_velocity'
#include "geometry_msgs/msg/detail/twist__struct.hpp"
// Member 'acceleration'
#include "geometry_msgs/msg/detail/accel__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__fq__msg__BasePose __attribute__((deprecated))
#else
# define DEPRECATED__fq__msg__BasePose __declspec(deprecated)
#endif

namespace fq
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BasePose_
{
  using Type = BasePose_<ContainerAllocator>;

  explicit BasePose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : location(_init),
    rotation(_init),
    velocity(_init),
    angular_velocity(_init),
    acceleration(_init)
  {
    (void)_init;
  }

  explicit BasePose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : location(_alloc, _init),
    rotation(_alloc, _init),
    velocity(_alloc, _init),
    angular_velocity(_alloc, _init),
    acceleration(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _location_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _location_type location;
  using _rotation_type =
    fq::msg::BaseOrientation3D_<ContainerAllocator>;
  _rotation_type rotation;
  using _velocity_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _velocity_type velocity;
  using _angular_velocity_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _angular_velocity_type angular_velocity;
  using _acceleration_type =
    geometry_msgs::msg::Accel_<ContainerAllocator>;
  _acceleration_type acceleration;

  // setters for named parameter idiom
  Type & set__location(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->location = _arg;
    return *this;
  }
  Type & set__rotation(
    const fq::msg::BaseOrientation3D_<ContainerAllocator> & _arg)
  {
    this->rotation = _arg;
    return *this;
  }
  Type & set__velocity(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__angular_velocity(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->angular_velocity = _arg;
    return *this;
  }
  Type & set__acceleration(
    const geometry_msgs::msg::Accel_<ContainerAllocator> & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fq::msg::BasePose_<ContainerAllocator> *;
  using ConstRawPtr =
    const fq::msg::BasePose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fq::msg::BasePose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fq::msg::BasePose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fq::msg::BasePose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fq::msg::BasePose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fq::msg::BasePose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fq::msg::BasePose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fq::msg::BasePose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fq::msg::BasePose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fq__msg__BasePose
    std::shared_ptr<fq::msg::BasePose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fq__msg__BasePose
    std::shared_ptr<fq::msg::BasePose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BasePose_ & other) const
  {
    if (this->location != other.location) {
      return false;
    }
    if (this->rotation != other.rotation) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    return true;
  }
  bool operator!=(const BasePose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BasePose_

// alias to use template instance with default allocator
using BasePose =
  fq::msg::BasePose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fq

#endif  // FQ__MSG__DETAIL__BASE_POSE__STRUCT_HPP_
