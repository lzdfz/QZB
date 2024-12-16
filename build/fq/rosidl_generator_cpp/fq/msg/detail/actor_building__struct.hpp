// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fq:msg/ActorBuilding.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_BUILDING__STRUCT_HPP_
#define FQ__MSG__DETAIL__ACTOR_BUILDING__STRUCT_HPP_

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
// Member 'location'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'rotation'
#include "fq/msg/detail/base_orientation3_d__struct.hpp"
// Member 'damage_condition_data'
#include "fq/msg/detail/base_damage_condition_data__struct.hpp"
// Member 'be_reconnaissance_data'
#include "fq/msg/detail/base_be_reconnaissance_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__fq__msg__ActorBuilding __attribute__((deprecated))
#else
# define DEPRECATED__fq__msg__ActorBuilding __declspec(deprecated)
#endif

namespace fq
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActorBuilding_
{
  using Type = ActorBuilding_<ContainerAllocator>;

  explicit ActorBuilding_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : base_data(_init),
    location(_init),
    rotation(_init),
    damage_condition_data(_init),
    be_reconnaissance_data(_init)
  {
    (void)_init;
  }

  explicit ActorBuilding_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : base_data(_alloc, _init),
    location(_alloc, _init),
    rotation(_alloc, _init),
    damage_condition_data(_alloc, _init),
    be_reconnaissance_data(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _base_data_type =
    fq::msg::BaseBaseData_<ContainerAllocator>;
  _base_data_type base_data;
  using _location_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _location_type location;
  using _rotation_type =
    fq::msg::BaseOrientation3D_<ContainerAllocator>;
  _rotation_type rotation;
  using _damage_condition_data_type =
    fq::msg::BaseDamageConditionData_<ContainerAllocator>;
  _damage_condition_data_type damage_condition_data;
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
  Type & set__damage_condition_data(
    const fq::msg::BaseDamageConditionData_<ContainerAllocator> & _arg)
  {
    this->damage_condition_data = _arg;
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
    fq::msg::ActorBuilding_<ContainerAllocator> *;
  using ConstRawPtr =
    const fq::msg::ActorBuilding_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fq::msg::ActorBuilding_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fq::msg::ActorBuilding_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fq::msg::ActorBuilding_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fq::msg::ActorBuilding_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fq::msg::ActorBuilding_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fq::msg::ActorBuilding_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fq::msg::ActorBuilding_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fq::msg::ActorBuilding_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fq__msg__ActorBuilding
    std::shared_ptr<fq::msg::ActorBuilding_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fq__msg__ActorBuilding
    std::shared_ptr<fq::msg::ActorBuilding_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActorBuilding_ & other) const
  {
    if (this->base_data != other.base_data) {
      return false;
    }
    if (this->location != other.location) {
      return false;
    }
    if (this->rotation != other.rotation) {
      return false;
    }
    if (this->damage_condition_data != other.damage_condition_data) {
      return false;
    }
    if (this->be_reconnaissance_data != other.be_reconnaissance_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActorBuilding_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActorBuilding_

// alias to use template instance with default allocator
using ActorBuilding =
  fq::msg::ActorBuilding_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fq

#endif  // FQ__MSG__DETAIL__ACTOR_BUILDING__STRUCT_HPP_
