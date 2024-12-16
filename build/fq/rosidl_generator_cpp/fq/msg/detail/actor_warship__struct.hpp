// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fq:msg/ActorWarship.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_WARSHIP__STRUCT_HPP_
#define FQ__MSG__DETAIL__ACTOR_WARSHIP__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'base_data'
#include "fq/msg/detail/base_base_data__struct.hpp"
// Member 'kinematics_data'
#include "fq/msg/detail/base_kinematics_data__struct.hpp"
// Member 'be_reconnaissance_data'
#include "fq/msg/detail/base_be_reconnaissance_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__fq__msg__ActorWarship __attribute__((deprecated))
#else
# define DEPRECATED__fq__msg__ActorWarship __declspec(deprecated)
#endif

namespace fq
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActorWarship_
{
  using Type = ActorWarship_<ContainerAllocator>;

  explicit ActorWarship_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : base_data(_init),
    kinematics_data(_init),
    be_reconnaissance_data(_init)
  {
    (void)_init;
  }

  explicit ActorWarship_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : base_data(_alloc, _init),
    kinematics_data(_alloc, _init),
    be_reconnaissance_data(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _base_data_type =
    fq::msg::BaseBaseData_<ContainerAllocator>;
  _base_data_type base_data;
  using _kinematics_data_type =
    fq::msg::BaseKinematicsData_<ContainerAllocator>;
  _kinematics_data_type kinematics_data;
  using _be_reconnaissance_data_type =
    fq::msg::BaseBeReconnaissanceData_<ContainerAllocator>;
  _be_reconnaissance_data_type be_reconnaissance_data;

  // setters for named parameter idiom
  Type & set__base_data(
    const fq::msg::BaseBaseData_<ContainerAllocator> & _arg)
  {
    this->base_data = _arg;
    return *this;
  }
  Type & set__kinematics_data(
    const fq::msg::BaseKinematicsData_<ContainerAllocator> & _arg)
  {
    this->kinematics_data = _arg;
    return *this;
  }
  Type & set__be_reconnaissance_data(
    const fq::msg::BaseBeReconnaissanceData_<ContainerAllocator> & _arg)
  {
    this->be_reconnaissance_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fq::msg::ActorWarship_<ContainerAllocator> *;
  using ConstRawPtr =
    const fq::msg::ActorWarship_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fq::msg::ActorWarship_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fq::msg::ActorWarship_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fq::msg::ActorWarship_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fq::msg::ActorWarship_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fq::msg::ActorWarship_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fq::msg::ActorWarship_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fq::msg::ActorWarship_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fq::msg::ActorWarship_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fq__msg__ActorWarship
    std::shared_ptr<fq::msg::ActorWarship_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fq__msg__ActorWarship
    std::shared_ptr<fq::msg::ActorWarship_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActorWarship_ & other) const
  {
    if (this->base_data != other.base_data) {
      return false;
    }
    if (this->kinematics_data != other.kinematics_data) {
      return false;
    }
    if (this->be_reconnaissance_data != other.be_reconnaissance_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActorWarship_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActorWarship_

// alias to use template instance with default allocator
using ActorWarship =
  fq::msg::ActorWarship_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fq

#endif  // FQ__MSG__DETAIL__ACTOR_WARSHIP__STRUCT_HPP_
