// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from fq:msg/ActorDroneSwarm.idl
// generated code does not contain a copyright notice
#include "fq/msg/detail/actor_drone_swarm__rosidl_typesupport_fastrtps_cpp.hpp"
#include "fq/msg/detail/actor_drone_swarm__struct.hpp"

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
  const fq::msg::BasePlaneAttr &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  fq::msg::BasePlaneAttr &);
size_t get_serialized_size(
  const fq::msg::BasePlaneAttr &,
  size_t current_alignment);
size_t
max_serialized_size_BasePlaneAttr(
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
  const fq::msg::BaseAirplaneKinematicsData &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  fq::msg::BaseAirplaneKinematicsData &);
size_t get_serialized_size(
  const fq::msg::BaseAirplaneKinematicsData &,
  size_t current_alignment);
size_t
max_serialized_size_BaseAirplaneKinematicsData(
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
  const fq::msg::BaseLoadData &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  fq::msg::BaseLoadData &);
size_t get_serialized_size(
  const fq::msg::BaseLoadData &,
  size_t current_alignment);
size_t
max_serialized_size_BaseLoadData(
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
  const fq::msg::BaseReconnaissanceData &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  fq::msg::BaseReconnaissanceData &);
size_t get_serialized_size(
  const fq::msg::BaseReconnaissanceData &,
  size_t current_alignment);
size_t
max_serialized_size_BaseReconnaissanceData(
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
  const fq::msg::BaseInterferenceData &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  fq::msg::BaseInterferenceData &);
size_t get_serialized_size(
  const fq::msg::BaseInterferenceData &,
  size_t current_alignment);
size_t
max_serialized_size_BaseInterferenceData(
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
  const fq::msg::ActorDroneSwarm & ros_message,
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
  // Member: drone_swarm_kinematics_data
  fq::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.drone_swarm_kinematics_data,
    cdr);
  // Member: load_data
  fq::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.load_data,
    cdr);
  // Member: reconnaissance_data
  fq::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.reconnaissance_data,
    cdr);
  // Member: interference_data
  fq::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.interference_data,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fq
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  fq::msg::ActorDroneSwarm & ros_message)
{
  // Member: base_data
  fq::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.base_data);

  // Member: attributes
  fq::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.attributes);

  // Member: drone_swarm_kinematics_data
  fq::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.drone_swarm_kinematics_data);

  // Member: load_data
  fq::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.load_data);

  // Member: reconnaissance_data
  fq::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.reconnaissance_data);

  // Member: interference_data
  fq::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.interference_data);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fq
get_serialized_size(
  const fq::msg::ActorDroneSwarm & ros_message,
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
  // Member: drone_swarm_kinematics_data

  current_alignment +=
    fq::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.drone_swarm_kinematics_data, current_alignment);
  // Member: load_data

  current_alignment +=
    fq::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.load_data, current_alignment);
  // Member: reconnaissance_data

  current_alignment +=
    fq::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.reconnaissance_data, current_alignment);
  // Member: interference_data

  current_alignment +=
    fq::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.interference_data, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fq
max_serialized_size_ActorDroneSwarm(
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
        fq::msg::typesupport_fastrtps_cpp::max_serialized_size_BasePlaneAttr(
        full_bounded, current_alignment);
    }
  }

  // Member: drone_swarm_kinematics_data
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        fq::msg::typesupport_fastrtps_cpp::max_serialized_size_BaseAirplaneKinematicsData(
        full_bounded, current_alignment);
    }
  }

  // Member: load_data
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        fq::msg::typesupport_fastrtps_cpp::max_serialized_size_BaseLoadData(
        full_bounded, current_alignment);
    }
  }

  // Member: reconnaissance_data
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        fq::msg::typesupport_fastrtps_cpp::max_serialized_size_BaseReconnaissanceData(
        full_bounded, current_alignment);
    }
  }

  // Member: interference_data
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        fq::msg::typesupport_fastrtps_cpp::max_serialized_size_BaseInterferenceData(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _ActorDroneSwarm__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const fq::msg::ActorDroneSwarm *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ActorDroneSwarm__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<fq::msg::ActorDroneSwarm *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ActorDroneSwarm__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const fq::msg::ActorDroneSwarm *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ActorDroneSwarm__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ActorDroneSwarm(full_bounded, 0);
}

static message_type_support_callbacks_t _ActorDroneSwarm__callbacks = {
  "fq::msg",
  "ActorDroneSwarm",
  _ActorDroneSwarm__cdr_serialize,
  _ActorDroneSwarm__cdr_deserialize,
  _ActorDroneSwarm__get_serialized_size,
  _ActorDroneSwarm__max_serialized_size
};

static rosidl_message_type_support_t _ActorDroneSwarm__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ActorDroneSwarm__callbacks,
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
get_message_type_support_handle<fq::msg::ActorDroneSwarm>()
{
  return &fq::msg::typesupport_fastrtps_cpp::_ActorDroneSwarm__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, fq, msg, ActorDroneSwarm)() {
  return &fq::msg::typesupport_fastrtps_cpp::_ActorDroneSwarm__handle;
}

#ifdef __cplusplus
}
#endif
