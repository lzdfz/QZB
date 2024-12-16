// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fq:msg/BasePlaneAttr.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_PLANE_ATTR__STRUCT_HPP_
#define FQ__MSG__DETAIL__BASE_PLANE_ATTR__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__fq__msg__BasePlaneAttr __attribute__((deprecated))
#else
# define DEPRECATED__fq__msg__BasePlaneAttr __declspec(deprecated)
#endif

namespace fq
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BasePlaneAttr_
{
  using Type = BasePlaneAttr_<ContainerAllocator>;

  explicit BasePlaneAttr_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->airfoil_type = "";
      this->load_type = "";
      this->min_velocity = 0.0f;
      this->max_velocity = 0.0f;
      this->max_acceleration = 0.0f;
      this->max_deceleration = 0.0f;
      this->max_roll_angle = 0.0f;
      this->max_pitch_angle = 0.0f;
      this->roll_rate = 0.0f;
      this->pitch_rate = 0.0f;
      this->yaw_rate_to_max_roll = 0.0f;
      this->limit_height = 0.0f;
      this->health_point = 0l;
      this->damage_value = 0l;
      this->reconnaissance_radius = 0.0f;
      this->reconnaissance_angle = 0.0f;
      this->bombload = 0l;
      this->bomb_range = 0.0f;
      this->bomb_velocity = 0.0f;
      this->bomb_cold_down_time = 0.0f;
    }
  }

  explicit BasePlaneAttr_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : airfoil_type(_alloc),
    load_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->airfoil_type = "";
      this->load_type = "";
      this->min_velocity = 0.0f;
      this->max_velocity = 0.0f;
      this->max_acceleration = 0.0f;
      this->max_deceleration = 0.0f;
      this->max_roll_angle = 0.0f;
      this->max_pitch_angle = 0.0f;
      this->roll_rate = 0.0f;
      this->pitch_rate = 0.0f;
      this->yaw_rate_to_max_roll = 0.0f;
      this->limit_height = 0.0f;
      this->health_point = 0l;
      this->damage_value = 0l;
      this->reconnaissance_radius = 0.0f;
      this->reconnaissance_angle = 0.0f;
      this->bombload = 0l;
      this->bomb_range = 0.0f;
      this->bomb_velocity = 0.0f;
      this->bomb_cold_down_time = 0.0f;
    }
  }

  // field types and members
  using _airfoil_type_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _airfoil_type_type airfoil_type;
  using _load_type_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _load_type_type load_type;
  using _min_velocity_type =
    float;
  _min_velocity_type min_velocity;
  using _max_velocity_type =
    float;
  _max_velocity_type max_velocity;
  using _max_acceleration_type =
    float;
  _max_acceleration_type max_acceleration;
  using _max_deceleration_type =
    float;
  _max_deceleration_type max_deceleration;
  using _max_roll_angle_type =
    float;
  _max_roll_angle_type max_roll_angle;
  using _max_pitch_angle_type =
    float;
  _max_pitch_angle_type max_pitch_angle;
  using _roll_rate_type =
    float;
  _roll_rate_type roll_rate;
  using _pitch_rate_type =
    float;
  _pitch_rate_type pitch_rate;
  using _yaw_rate_to_max_roll_type =
    float;
  _yaw_rate_to_max_roll_type yaw_rate_to_max_roll;
  using _limit_height_type =
    float;
  _limit_height_type limit_height;
  using _health_point_type =
    int32_t;
  _health_point_type health_point;
  using _damage_value_type =
    int32_t;
  _damage_value_type damage_value;
  using _reconnaissance_radius_type =
    float;
  _reconnaissance_radius_type reconnaissance_radius;
  using _reconnaissance_angle_type =
    float;
  _reconnaissance_angle_type reconnaissance_angle;
  using _bombload_type =
    int32_t;
  _bombload_type bombload;
  using _bomb_range_type =
    float;
  _bomb_range_type bomb_range;
  using _bomb_velocity_type =
    float;
  _bomb_velocity_type bomb_velocity;
  using _bomb_cold_down_time_type =
    float;
  _bomb_cold_down_time_type bomb_cold_down_time;

  // setters for named parameter idiom
  Type & set__airfoil_type(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->airfoil_type = _arg;
    return *this;
  }
  Type & set__load_type(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->load_type = _arg;
    return *this;
  }
  Type & set__min_velocity(
    const float & _arg)
  {
    this->min_velocity = _arg;
    return *this;
  }
  Type & set__max_velocity(
    const float & _arg)
  {
    this->max_velocity = _arg;
    return *this;
  }
  Type & set__max_acceleration(
    const float & _arg)
  {
    this->max_acceleration = _arg;
    return *this;
  }
  Type & set__max_deceleration(
    const float & _arg)
  {
    this->max_deceleration = _arg;
    return *this;
  }
  Type & set__max_roll_angle(
    const float & _arg)
  {
    this->max_roll_angle = _arg;
    return *this;
  }
  Type & set__max_pitch_angle(
    const float & _arg)
  {
    this->max_pitch_angle = _arg;
    return *this;
  }
  Type & set__roll_rate(
    const float & _arg)
  {
    this->roll_rate = _arg;
    return *this;
  }
  Type & set__pitch_rate(
    const float & _arg)
  {
    this->pitch_rate = _arg;
    return *this;
  }
  Type & set__yaw_rate_to_max_roll(
    const float & _arg)
  {
    this->yaw_rate_to_max_roll = _arg;
    return *this;
  }
  Type & set__limit_height(
    const float & _arg)
  {
    this->limit_height = _arg;
    return *this;
  }
  Type & set__health_point(
    const int32_t & _arg)
  {
    this->health_point = _arg;
    return *this;
  }
  Type & set__damage_value(
    const int32_t & _arg)
  {
    this->damage_value = _arg;
    return *this;
  }
  Type & set__reconnaissance_radius(
    const float & _arg)
  {
    this->reconnaissance_radius = _arg;
    return *this;
  }
  Type & set__reconnaissance_angle(
    const float & _arg)
  {
    this->reconnaissance_angle = _arg;
    return *this;
  }
  Type & set__bombload(
    const int32_t & _arg)
  {
    this->bombload = _arg;
    return *this;
  }
  Type & set__bomb_range(
    const float & _arg)
  {
    this->bomb_range = _arg;
    return *this;
  }
  Type & set__bomb_velocity(
    const float & _arg)
  {
    this->bomb_velocity = _arg;
    return *this;
  }
  Type & set__bomb_cold_down_time(
    const float & _arg)
  {
    this->bomb_cold_down_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fq::msg::BasePlaneAttr_<ContainerAllocator> *;
  using ConstRawPtr =
    const fq::msg::BasePlaneAttr_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fq::msg::BasePlaneAttr_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fq::msg::BasePlaneAttr_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fq::msg::BasePlaneAttr_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fq::msg::BasePlaneAttr_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fq::msg::BasePlaneAttr_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fq::msg::BasePlaneAttr_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fq::msg::BasePlaneAttr_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fq::msg::BasePlaneAttr_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fq__msg__BasePlaneAttr
    std::shared_ptr<fq::msg::BasePlaneAttr_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fq__msg__BasePlaneAttr
    std::shared_ptr<fq::msg::BasePlaneAttr_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BasePlaneAttr_ & other) const
  {
    if (this->airfoil_type != other.airfoil_type) {
      return false;
    }
    if (this->load_type != other.load_type) {
      return false;
    }
    if (this->min_velocity != other.min_velocity) {
      return false;
    }
    if (this->max_velocity != other.max_velocity) {
      return false;
    }
    if (this->max_acceleration != other.max_acceleration) {
      return false;
    }
    if (this->max_deceleration != other.max_deceleration) {
      return false;
    }
    if (this->max_roll_angle != other.max_roll_angle) {
      return false;
    }
    if (this->max_pitch_angle != other.max_pitch_angle) {
      return false;
    }
    if (this->roll_rate != other.roll_rate) {
      return false;
    }
    if (this->pitch_rate != other.pitch_rate) {
      return false;
    }
    if (this->yaw_rate_to_max_roll != other.yaw_rate_to_max_roll) {
      return false;
    }
    if (this->limit_height != other.limit_height) {
      return false;
    }
    if (this->health_point != other.health_point) {
      return false;
    }
    if (this->damage_value != other.damage_value) {
      return false;
    }
    if (this->reconnaissance_radius != other.reconnaissance_radius) {
      return false;
    }
    if (this->reconnaissance_angle != other.reconnaissance_angle) {
      return false;
    }
    if (this->bombload != other.bombload) {
      return false;
    }
    if (this->bomb_range != other.bomb_range) {
      return false;
    }
    if (this->bomb_velocity != other.bomb_velocity) {
      return false;
    }
    if (this->bomb_cold_down_time != other.bomb_cold_down_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const BasePlaneAttr_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BasePlaneAttr_

// alias to use template instance with default allocator
using BasePlaneAttr =
  fq::msg::BasePlaneAttr_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fq

#endif  // FQ__MSG__DETAIL__BASE_PLANE_ATTR__STRUCT_HPP_
