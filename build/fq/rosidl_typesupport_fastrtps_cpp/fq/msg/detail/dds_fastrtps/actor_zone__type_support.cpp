// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from fq:msg/ActorZone.idl
// generated code does not contain a copyright notice
#include "fq/msg/detail/actor_zone__rosidl_typesupport_fastrtps_cpp.hpp"
#include "fq/msg/detail/actor_zone__struct.hpp"

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
bool cdr_serialize(
  const fq::msg::BaseBaseData &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  fq::msg::BaseBaseData &);
size_t get_serialized_size(
  const fq::msg::BaseBaseData &,
  size_t current_alignment);
size_t
max_serialized_size_BaseBaseData(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace fq

namespace fq
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const fq::msg::BaseZoneAttr &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  fq::msg::BaseZoneAttr &);
size_t get_serialized_size(
  const fq::msg::BaseZoneAttr &,
  size_t current_alignment);
size_t
max_serialized_size_BaseZoneAttr(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace fq

namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Point &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Point &);
size_t get_serialized_size(
  const geometry_msgs::msg::Point &,
  size_t current_alignment);
size_t
max_serialized_size_Point(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs

namespace fq
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const fq::msg::BaseBeReconnaissanceData &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  fq::msg::BaseBeReconnaissanceData &);
size_t get_serialized_size(
  const fq::msg::BaseBeReconnaissanceData &,
  size_t current_alignment);
size_t
max_serialized_size_BaseBeReconnaissanceData(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace fq

namespace fq
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const fq::msg::BaseBeInterferenceData &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  fq::msg::BaseBeInterferenceData &);
size_t get_serialized_size(
  const fq::msg::BaseBeInterferenceData &,
  size_t current_alignment);
size_t
max_serialized_size_BaseBeInterferenceData(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace fq


namespace fq
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fq
cdr_serialize(
  const fq::msg::ActorZone & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: base_data
  fq::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.base_data,
    cdr);
  // Member: attributes
  fq::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.attributes,
    cdr);
  // Member: location
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.location,
    cdr);
  // Member: be_reconnaissance_data
  fq::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.be_reconnaissance_data,
    cdr);
  // Member: be_interference_data
  fq::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.be_interference_data,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fq
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  fq::msg::ActorZone & ros_message)
{
  // Member: base_data
  fq::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.base_data);

  // Member: attributes
  fq::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.attributes);

  // Member: location
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.location);

  // Member: be_reconnaissance_data
  fq::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.be_reconnaissance_data);

  // Member: be_interference_data
  fq::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.be_interference_data);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fq
get_serialized_size(
  const fq::msg::ActorZone & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: base_data

  current_alignment +=
    fq::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.base_data, current_alignment);
  // Member: attributes

  current_alignment +=
    fq::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.attributes, current_alignment);
  // Member: location

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.location, current_alignment);
  // Member: be_reconnaissance_data

  current_alignment +=
    fq::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.be_reconnaissance_data, current_alignment);
  // Member: be_interference_data

  current_alignment +=
    fq::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.be_interference_data, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fq
max_serialized_size_ActorZone(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: base_data
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        fq::msg::typesupport_fastrtps_cpp::max_serialized_size_BaseBaseData(
        full_bounded, current_alignment);
    }
  }

  // Member: attributes
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        fq::msg::typesupport_fastrtps_cpp::max_serialized_size_BaseZoneAttr(
        full_bounded, current_alignment);
    }
  }

  // Member: location
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Point(
        full_bounded, current_alignment);
    }
  }

  // Member: be_reconnaissance_data
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        fq::msg::typesupport_fastrtps_cpp::max_serialized_size_BaseBeReconnaissanceData(
        full_bounded, current_alignment);
    }
  }

  // Member: be_interference_data
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        fq::msg::typesupport_fastrtps_cpp::max_serialized_size_BaseBeInterferenceData(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _ActorZone__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const fq::msg::ActorZone *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ActorZone__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<fq::msg::ActorZone *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ActorZone__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const fq::msg::ActorZone *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ActorZone__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ActorZone(full_bounded, 0);
}

static message_type_support_callbacks_t _ActorZone__callbacks = {
  "fq::msg",
  "ActorZone",
  _ActorZone__cdr_serialize,
  _ActorZone__cdr_deserialize,
  _ActorZone__get_serialized_size,
  _ActorZone__max_serialized_size
};

static rosidl_message_type_support_t _ActorZone__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ActorZone__callbacks,
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
get_message_type_support_handle<fq::msg::ActorZone>()
{
  return &fq::msg::typesupport_fastrtps_cpp::_ActorZone__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, fq, msg, ActorZone)() {
  return &fq::msg::typesupport_fastrtps_cpp::_ActorZone__handle;
}

#ifdef __cplusplus
}
#endif
