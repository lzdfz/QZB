// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fq:msg/BaseBaseData.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_BASE_DATA__STRUCT_HPP_
#define FQ__MSG__DETAIL__BASE_BASE_DATA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'bounding_box'
#include "fq/msg/detail/base_bounding_box__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__fq__msg__BaseBaseData __attribute__((deprecated))
#else
# define DEPRECATED__fq__msg__BaseBaseData __declspec(deprecated)
#endif

namespace fq
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BaseBaseData_
{
  using Type = BaseBaseData_<ContainerAllocator>;

  explicit BaseBaseData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bounding_box(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->health_point = 0l;
      this->type_id = "";
      this->actor_type = "";
      this->b_target = false;
    }
  }

  explicit BaseBaseData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type_id(_alloc),
    actor_type(_alloc),
    bounding_box(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->health_point = 0l;
      this->type_id = "";
      this->actor_type = "";
      this->b_target = false;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _health_point_type =
    int32_t;
  _health_point_type health_point;
  using _type_id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _type_id_type type_id;
  using _actor_type_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _actor_type_type actor_type;
  using _bounding_box_type =
    fq::msg::BaseBoundingBox_<ContainerAllocator>;
  _bounding_box_type bounding_box;
  using _b_target_type =
    bool;
  _b_target_type b_target;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__health_point(
    const int32_t & _arg)
  {
    this->health_point = _arg;
    return *this;
  }
  Type & set__type_id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->type_id = _arg;
    return *this;
  }
  Type & set__actor_type(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->actor_type = _arg;
    return *this;
  }
  Type & set__bounding_box(
    const fq::msg::BaseBoundingBox_<ContainerAllocator> & _arg)
  {
    this->bounding_box = _arg;
    return *this;
  }
  Type & set__b_target(
    const bool & _arg)
  {
    this->b_target = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fq::msg::BaseBaseData_<ContainerAllocator> *;
  using ConstRawPtr =
    const fq::msg::BaseBaseData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fq::msg::BaseBaseData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fq::msg::BaseBaseData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fq::msg::BaseBaseData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fq::msg::BaseBaseData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fq::msg::BaseBaseData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fq::msg::BaseBaseData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fq::msg::BaseBaseData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fq::msg::BaseBaseData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fq__msg__BaseBaseData
    std::shared_ptr<fq::msg::BaseBaseData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fq__msg__BaseBaseData
    std::shared_ptr<fq::msg::BaseBaseData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BaseBaseData_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->health_point != other.health_point) {
      return false;
    }
    if (this->type_id != other.type_id) {
      return false;
    }
    if (this->actor_type != other.actor_type) {
      return false;
    }
    if (this->bounding_box != other.bounding_box) {
      return false;
    }
    if (this->b_target != other.b_target) {
      return false;
    }
    return true;
  }
  bool operator!=(const BaseBaseData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BaseBaseData_

// alias to use template instance with default allocator
using BaseBaseData =
  fq::msg::BaseBaseData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fq

#endif  // FQ__MSG__DETAIL__BASE_BASE_DATA__STRUCT_HPP_
