// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from fq:msg/BasePlaneAttr.idl
// generated code does not contain a copyright notice
#include "fq/msg/detail/base_plane_attr__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "fq/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "fq/msg/detail/base_plane_attr__struct.h"
#include "fq/msg/detail/base_plane_attr__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // airfoil_type, load_type
#include "rosidl_runtime_c/string_functions.h"  // airfoil_type, load_type

// forward declare type support functions


using _BasePlaneAttr__ros_msg_type = fq__msg__BasePlaneAttr;

static bool _BasePlaneAttr__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BasePlaneAttr__ros_msg_type * ros_message = static_cast<const _BasePlaneAttr__ros_msg_type *>(untyped_ros_message);
  // Field name: airfoil_type
  {
    const rosidl_runtime_c__String * str = &ros_message->airfoil_type;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: load_type
  {
    const rosidl_runtime_c__String * str = &ros_message->load_type;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: min_velocity
  {
    cdr << ros_message->min_velocity;
  }

  // Field name: max_velocity
  {
    cdr << ros_message->max_velocity;
  }

  // Field name: max_acceleration
  {
    cdr << ros_message->max_acceleration;
  }

  // Field name: max_deceleration
  {
    cdr << ros_message->max_deceleration;
  }

  // Field name: max_roll_angle
  {
    cdr << ros_message->max_roll_angle;
  }

  // Field name: max_pitch_angle
  {
    cdr << ros_message->max_pitch_angle;
  }

  // Field name: roll_rate
  {
    cdr << ros_message->roll_rate;
  }

  // Field name: pitch_rate
  {
    cdr << ros_message->pitch_rate;
  }

  // Field name: yaw_rate_to_max_roll
  {
    cdr << ros_message->yaw_rate_to_max_roll;
  }

  // Field name: limit_height
  {
    cdr << ros_message->limit_height;
  }

  // Field name: health_point
  {
    cdr << ros_message->health_point;
  }

  // Field name: damage_value
  {
    cdr << ros_message->damage_value;
  }

  // Field name: reconnaissance_radius
  {
    cdr << ros_message->reconnaissance_radius;
  }

  // Field name: reconnaissance_angle
  {
    cdr << ros_message->reconnaissance_angle;
  }

  // Field name: bombload
  {
    cdr << ros_message->bombload;
  }

  // Field name: bomb_range
  {
    cdr << ros_message->bomb_range;
  }

  // Field name: bomb_velocity
  {
    cdr << ros_message->bomb_velocity;
  }

  // Field name: bomb_cold_down_time
  {
    cdr << ros_message->bomb_cold_down_time;
  }

  return true;
}

static bool _BasePlaneAttr__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BasePlaneAttr__ros_msg_type * ros_message = static_cast<_BasePlaneAttr__ros_msg_type *>(untyped_ros_message);
  // Field name: airfoil_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->airfoil_type.data) {
      rosidl_runtime_c__String__init(&ros_message->airfoil_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->airfoil_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'airfoil_type'\n");
      return false;
    }
  }

  // Field name: load_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->load_type.data) {
      rosidl_runtime_c__String__init(&ros_message->load_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->load_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'load_type'\n");
      return false;
    }
  }

  // Field name: min_velocity
  {
    cdr >> ros_message->min_velocity;
  }

  // Field name: max_velocity
  {
    cdr >> ros_message->max_velocity;
  }

  // Field name: max_acceleration
  {
    cdr >> ros_message->max_acceleration;
  }

  // Field name: max_deceleration
  {
    cdr >> ros_message->max_deceleration;
  }

  // Field name: max_roll_angle
  {
    cdr >> ros_message->max_roll_angle;
  }

  // Field name: max_pitch_angle
  {
    cdr >> ros_message->max_pitch_angle;
  }

  // Field name: roll_rate
  {
    cdr >> ros_message->roll_rate;
  }

  // Field name: pitch_rate
  {
    cdr >> ros_message->pitch_rate;
  }

  // Field name: yaw_rate_to_max_roll
  {
    cdr >> ros_message->yaw_rate_to_max_roll;
  }

  // Field name: limit_height
  {
    cdr >> ros_message->limit_height;
  }

  // Field name: health_point
  {
    cdr >> ros_message->health_point;
  }

  // Field name: damage_value
  {
    cdr >> ros_message->damage_value;
  }

  // Field name: reconnaissance_radius
  {
    cdr >> ros_message->reconnaissance_radius;
  }

  // Field name: reconnaissance_angle
  {
    cdr >> ros_message->reconnaissance_angle;
  }

  // Field name: bombload
  {
    cdr >> ros_message->bombload;
  }

  // Field name: bomb_range
  {
    cdr >> ros_message->bomb_range;
  }

  // Field name: bomb_velocity
  {
    cdr >> ros_message->bomb_velocity;
  }

  // Field name: bomb_cold_down_time
  {
    cdr >> ros_message->bomb_cold_down_time;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fq
size_t get_serialized_size_fq__msg__BasePlaneAttr(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BasePlaneAttr__ros_msg_type * ros_message = static_cast<const _BasePlaneAttr__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name airfoil_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->airfoil_type.size + 1);
  // field.name load_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->load_type.size + 1);
  // field.name min_velocity
  {
    size_t item_size = sizeof(ros_message->min_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_velocity
  {
    size_t item_size = sizeof(ros_message->max_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_acceleration
  {
    size_t item_size = sizeof(ros_message->max_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_deceleration
  {
    size_t item_size = sizeof(ros_message->max_deceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_roll_angle
  {
    size_t item_size = sizeof(ros_message->max_roll_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_pitch_angle
  {
    size_t item_size = sizeof(ros_message->max_pitch_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name roll_rate
  {
    size_t item_size = sizeof(ros_message->roll_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitch_rate
  {
    size_t item_size = sizeof(ros_message->pitch_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_rate_to_max_roll
  {
    size_t item_size = sizeof(ros_message->yaw_rate_to_max_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name limit_height
  {
    size_t item_size = sizeof(ros_message->limit_height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name health_point
  {
    size_t item_size = sizeof(ros_message->health_point);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name damage_value
  {
    size_t item_size = sizeof(ros_message->damage_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reconnaissance_radius
  {
    size_t item_size = sizeof(ros_message->reconnaissance_radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reconnaissance_angle
  {
    size_t item_size = sizeof(ros_message->reconnaissance_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bombload
  {
    size_t item_size = sizeof(ros_message->bombload);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bomb_range
  {
    size_t item_size = sizeof(ros_message->bomb_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bomb_velocity
  {
    size_t item_size = sizeof(ros_message->bomb_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bomb_cold_down_time
  {
    size_t item_size = sizeof(ros_message->bomb_cold_down_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BasePlaneAttr__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_fq__msg__BasePlaneAttr(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fq
size_t max_serialized_size_fq__msg__BasePlaneAttr(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: airfoil_type
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: load_type
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: min_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max_acceleration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max_deceleration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max_roll_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max_pitch_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: roll_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pitch_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw_rate_to_max_roll
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: limit_height
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: health_point
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: damage_value
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: reconnaissance_radius
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: reconnaissance_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: bombload
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: bomb_range
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: bomb_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: bomb_cold_down_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _BasePlaneAttr__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_fq__msg__BasePlaneAttr(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_BasePlaneAttr = {
  "fq::msg",
  "BasePlaneAttr",
  _BasePlaneAttr__cdr_serialize,
  _BasePlaneAttr__cdr_deserialize,
  _BasePlaneAttr__get_serialized_size,
  _BasePlaneAttr__max_serialized_size
};

static rosidl_message_type_support_t _BasePlaneAttr__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BasePlaneAttr,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fq, msg, BasePlaneAttr)() {
  return &_BasePlaneAttr__type_support;
}

#if defined(__cplusplus)
}
#endif
