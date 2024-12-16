// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from fq:msg/BasePlaneAttr.idl
// generated code does not contain a copyright notice
#include "fq/msg/detail/base_plane_attr__rosidl_typesupport_fastrtps_cpp.hpp"
#include "fq/msg/detail/base_plane_attr__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace fq
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fq
cdr_serialize(
  const fq::msg::BasePlaneAttr & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: airfoil_type
  cdr << ros_message.airfoil_type;
  // Member: load_type
  cdr << ros_message.load_type;
  // Member: min_velocity
  cdr << ros_message.min_velocity;
  // Member: max_velocity
  cdr << ros_message.max_velocity;
  // Member: max_acceleration
  cdr << ros_message.max_acceleration;
  // Member: max_deceleration
  cdr << ros_message.max_deceleration;
  // Member: max_roll_angle
  cdr << ros_message.max_roll_angle;
  // Member: max_pitch_angle
  cdr << ros_message.max_pitch_angle;
  // Member: roll_rate
  cdr << ros_message.roll_rate;
  // Member: pitch_rate
  cdr << ros_message.pitch_rate;
  // Member: yaw_rate_to_max_roll
  cdr << ros_message.yaw_rate_to_max_roll;
  // Member: limit_height
  cdr << ros_message.limit_height;
  // Member: health_point
  cdr << ros_message.health_point;
  // Member: damage_value
  cdr << ros_message.damage_value;
  // Member: reconnaissance_radius
  cdr << ros_message.reconnaissance_radius;
  // Member: reconnaissance_angle
  cdr << ros_message.reconnaissance_angle;
  // Member: bombload
  cdr << ros_message.bombload;
  // Member: bomb_range
  cdr << ros_message.bomb_range;
  // Member: bomb_velocity
  cdr << ros_message.bomb_velocity;
  // Member: bomb_cold_down_time
  cdr << ros_message.bomb_cold_down_time;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fq
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  fq::msg::BasePlaneAttr & ros_message)
{
  // Member: airfoil_type
  cdr >> ros_message.airfoil_type;

  // Member: load_type
  cdr >> ros_message.load_type;

  // Member: min_velocity
  cdr >> ros_message.min_velocity;

  // Member: max_velocity
  cdr >> ros_message.max_velocity;

  // Member: max_acceleration
  cdr >> ros_message.max_acceleration;

  // Member: max_deceleration
  cdr >> ros_message.max_deceleration;

  // Member: max_roll_angle
  cdr >> ros_message.max_roll_angle;

  // Member: max_pitch_angle
  cdr >> ros_message.max_pitch_angle;

  // Member: roll_rate
  cdr >> ros_message.roll_rate;

  // Member: pitch_rate
  cdr >> ros_message.pitch_rate;

  // Member: yaw_rate_to_max_roll
  cdr >> ros_message.yaw_rate_to_max_roll;

  // Member: limit_height
  cdr >> ros_message.limit_height;

  // Member: health_point
  cdr >> ros_message.health_point;

  // Member: damage_value
  cdr >> ros_message.damage_value;

  // Member: reconnaissance_radius
  cdr >> ros_message.reconnaissance_radius;

  // Member: reconnaissance_angle
  cdr >> ros_message.reconnaissance_angle;

  // Member: bombload
  cdr >> ros_message.bombload;

  // Member: bomb_range
  cdr >> ros_message.bomb_range;

  // Member: bomb_velocity
  cdr >> ros_message.bomb_velocity;

  // Member: bomb_cold_down_time
  cdr >> ros_message.bomb_cold_down_time;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fq
get_serialized_size(
  const fq::msg::BasePlaneAttr & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: airfoil_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.airfoil_type.size() + 1);
  // Member: load_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.load_type.size() + 1);
  // Member: min_velocity
  {
    size_t item_size = sizeof(ros_message.min_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_velocity
  {
    size_t item_size = sizeof(ros_message.max_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_acceleration
  {
    size_t item_size = sizeof(ros_message.max_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_deceleration
  {
    size_t item_size = sizeof(ros_message.max_deceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_roll_angle
  {
    size_t item_size = sizeof(ros_message.max_roll_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_pitch_angle
  {
    size_t item_size = sizeof(ros_message.max_pitch_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: roll_rate
  {
    size_t item_size = sizeof(ros_message.roll_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pitch_rate
  {
    size_t item_size = sizeof(ros_message.pitch_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_rate_to_max_roll
  {
    size_t item_size = sizeof(ros_message.yaw_rate_to_max_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: limit_height
  {
    size_t item_size = sizeof(ros_message.limit_height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: health_point
  {
    size_t item_size = sizeof(ros_message.health_point);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: damage_value
  {
    size_t item_size = sizeof(ros_message.damage_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reconnaissance_radius
  {
    size_t item_size = sizeof(ros_message.reconnaissance_radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reconnaissance_angle
  {
    size_t item_size = sizeof(ros_message.reconnaissance_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bombload
  {
    size_t item_size = sizeof(ros_message.bombload);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bomb_range
  {
    size_t item_size = sizeof(ros_message.bomb_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bomb_velocity
  {
    size_t item_size = sizeof(ros_message.bomb_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bomb_cold_down_time
  {
    size_t item_size = sizeof(ros_message.bomb_cold_down_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fq
max_serialized_size_BasePlaneAttr(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: airfoil_type
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: load_type
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: min_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: max_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: max_acceleration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: max_deceleration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: max_roll_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: max_pitch_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: roll_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pitch_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: yaw_rate_to_max_roll
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: limit_height
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: health_point
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: damage_value
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: reconnaissance_radius
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: reconnaissance_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: bombload
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: bomb_range
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: bomb_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: bomb_cold_down_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _BasePlaneAttr__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const fq::msg::BasePlaneAttr *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BasePlaneAttr__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<fq::msg::BasePlaneAttr *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BasePlaneAttr__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const fq::msg::BasePlaneAttr *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BasePlaneAttr__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_BasePlaneAttr(full_bounded, 0);
}

static message_type_support_callbacks_t _BasePlaneAttr__callbacks = {
  "fq::msg",
  "BasePlaneAttr",
  _BasePlaneAttr__cdr_serialize,
  _BasePlaneAttr__cdr_deserialize,
  _BasePlaneAttr__get_serialized_size,
  _BasePlaneAttr__max_serialized_size
};

static rosidl_message_type_support_t _BasePlaneAttr__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_BasePlaneAttr__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace fq

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_fq
const rosidl_message_type_support_t *
get_message_type_support_handle<fq::msg::BasePlaneAttr>()
{
  return &fq::msg::typesupport_fastrtps_cpp::_BasePlaneAttr__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, fq, msg, BasePlaneAttr)() {
  return &fq::msg::typesupport_fastrtps_cpp::_BasePlaneAttr__handle;
}

#ifdef __cplusplus
}
#endif
