// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fq:msg/ActorDroneSwarm.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_DRONE_SWARM__STRUCT_HPP_
#define FQ__MSG__DETAIL__ACTOR_DRONE_SWARM__STRUCT_HPP_

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
// Member 'attributes'
#include "fq/msg/detail/base_plane_attr__struct.hpp"
// Member 'drone_swarm_kinematics_data'
#include "fq/msg/detail/base_airplane_kinematics_data__struct.hpp"
// Member 'load_data'
#include "fq/msg/detail/base_load_data__struct.hpp"
// Member 'reconnaissance_data'
#include "fq/msg/detail/base_reconnaissance_data__struct.hpp"
// Member 'interference_data'
#include "fq/msg/detail/base_interference_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__fq__msg__ActorDroneSwarm __attribute__((deprecated))
#else
# define DEPRECATED__fq__msg__ActorDroneSwarm __declspec(deprecated)
#endif

namespace fq
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActorDroneSwarm_
{
  using Type = ActorDroneSwarm_<ContainerAllocator>;

  explicit ActorDroneSwarm_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : base_data(_init),
    attributes(_init),
    drone_swarm_kinematics_data(_init),
    load_data(_init),
    reconnaissance_data(_init),
    interference_data(_init)
  {
    (void)_init;
  }

  explicit ActorDroneSwarm_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : base_data(_alloc, _init),
    attributes(_alloc, _init),
    drone_swarm_kinematics_data(_alloc, _init),
    load_data(_alloc, _init),
    reconnaissance_data(_alloc, _init),
    interference_data(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _base_data_type =
    fq::msg::BaseBaseData_<ContainerAllocator>;
  _base_data_type base_data;
  using _attributes_type =
    fq::msg::BasePlaneAttr_<ContainerAllocator>;
  _attributes_type attributes;
  using _drone_swarm_kinematics_data_type =
    fq::msg::BaseAirplaneKinematicsData_<ContainerAllocator>;
  _drone_swarm_kinematics_data_type drone_swarm_kinematics_data;
  using _load_data_type =
    fq::msg::BaseLoadData_<ContainerAllocator>;
  _load_data_type load_data;
  using _reconnaissance_data_type =
    fq::msg::BaseReconnaissanceData_<ContainerAllocator>;
  _reconnaissance_data_type reconnaissance_data;
  using _interference_data_type =
    fq::msg::BaseInterferenceData_<ContainerAllocator>;
  _interference_data_type interference_data;

  // setters for named parameter idiom
  Type & set__base_data(
    const fq::msg::BaseBaseData_<ContainerAllocator> & _arg)
  {
    this->base_data = _arg;
    return *this;
  }
  Type & set__attributes(
    const fq::msg::BasePlaneAttr_<ContainerAllocator> & _arg)
  {
    this->attributes = _arg;
    return *this;
  }
  Type & set__drone_swarm_kinematics_data(
    const fq::msg::BaseAirplaneKinematicsData_<ContainerAllocator> & _arg)
  {
    this->drone_swarm_kinematics_data = _arg;
    return *this;
  }
  Type & set__load_data(
    const fq::msg::BaseLoadData_<ContainerAllocator> & _arg)
  {
    this->load_data = _arg;
    return *this;
  }
  Type & set__reconnaissance_data(
    const fq::msg::BaseReconnaissanceData_<ContainerAllocator> & _arg)
  {
    this->reconnaissance_data = _arg;
    return *this;
  }
  Type & set__interference_data(
    const fq::msg::BaseInterferenceData_<ContainerAllocator> & _arg)
  {
    this->interference_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fq::msg::ActorDroneSwarm_<ContainerAllocator> *;
  using ConstRawPtr =
    const fq::msg::ActorDroneSwarm_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fq::msg::ActorDroneSwarm_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fq::msg::ActorDroneSwarm_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fq::msg::ActorDroneSwarm_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fq::msg::ActorDroneSwarm_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fq::msg::ActorDroneSwarm_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fq::msg::ActorDroneSwarm_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fq::msg::ActorDroneSwarm_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fq::msg::ActorDroneSwarm_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fq__msg__ActorDroneSwarm
    std::shared_ptr<fq::msg::ActorDroneSwarm_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fq__msg__ActorDroneSwarm
    std::shared_ptr<fq::msg::ActorDroneSwarm_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActorDroneSwarm_ & other) const
  {
    if (this->base_data != other.base_data) {
      return false;
    }
    if (this->attributes != other.attributes) {
      return false;
    }
    if (this->drone_swarm_kinematics_data != other.drone_swarm_kinematics_data) {
      return false;
    }
    if (this->load_data != other.load_data) {
      return false;
    }
    if (this->reconnaissance_data != other.reconnaissance_data) {
      return false;
    }
    if (this->interference_data != other.interference_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActorDroneSwarm_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActorDroneSwarm_

// alias to use template instance with default allocator
using ActorDroneSwarm =
  fq::msg::ActorDroneSwarm_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fq

#endif  // FQ__MSG__DETAIL__ACTOR_DRONE_SWARM__STRUCT_HPP_
