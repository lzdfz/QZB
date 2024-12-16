# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fq:msg/ActorDroneSwarm.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ActorDroneSwarm(type):
    """Metaclass of message 'ActorDroneSwarm'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('fq')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'fq.msg.ActorDroneSwarm')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__actor_drone_swarm
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__actor_drone_swarm
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__actor_drone_swarm
            cls._TYPE_SUPPORT = module.type_support_msg__msg__actor_drone_swarm
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__actor_drone_swarm

            from fq.msg import BaseAirplaneKinematicsData
            if BaseAirplaneKinematicsData.__class__._TYPE_SUPPORT is None:
                BaseAirplaneKinematicsData.__class__.__import_type_support__()

            from fq.msg import BaseBaseData
            if BaseBaseData.__class__._TYPE_SUPPORT is None:
                BaseBaseData.__class__.__import_type_support__()

            from fq.msg import BaseInterferenceData
            if BaseInterferenceData.__class__._TYPE_SUPPORT is None:
                BaseInterferenceData.__class__.__import_type_support__()

            from fq.msg import BaseLoadData
            if BaseLoadData.__class__._TYPE_SUPPORT is None:
                BaseLoadData.__class__.__import_type_support__()

            from fq.msg import BasePlaneAttr
            if BasePlaneAttr.__class__._TYPE_SUPPORT is None:
                BasePlaneAttr.__class__.__import_type_support__()

            from fq.msg import BaseReconnaissanceData
            if BaseReconnaissanceData.__class__._TYPE_SUPPORT is None:
                BaseReconnaissanceData.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ActorDroneSwarm(metaclass=Metaclass_ActorDroneSwarm):
    """Message class 'ActorDroneSwarm'."""

    __slots__ = [
        '_base_data',
        '_attributes',
        '_drone_swarm_kinematics_data',
        '_load_data',
        '_reconnaissance_data',
        '_interference_data',
    ]

    _fields_and_field_types = {
        'base_data': 'fq/BaseBaseData',
        'attributes': 'fq/BasePlaneAttr',
        'drone_swarm_kinematics_data': 'fq/BaseAirplaneKinematicsData',
        'load_data': 'fq/BaseLoadData',
        'reconnaissance_data': 'fq/BaseReconnaissanceData',
        'interference_data': 'fq/BaseInterferenceData',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['fq', 'msg'], 'BaseBaseData'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['fq', 'msg'], 'BasePlaneAttr'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['fq', 'msg'], 'BaseAirplaneKinematicsData'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['fq', 'msg'], 'BaseLoadData'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['fq', 'msg'], 'BaseReconnaissanceData'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['fq', 'msg'], 'BaseInterferenceData'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from fq.msg import BaseBaseData
        self.base_data = kwargs.get('base_data', BaseBaseData())
        from fq.msg import BasePlaneAttr
        self.attributes = kwargs.get('attributes', BasePlaneAttr())
        from fq.msg import BaseAirplaneKinematicsData
        self.drone_swarm_kinematics_data = kwargs.get('drone_swarm_kinematics_data', BaseAirplaneKinematicsData())
        from fq.msg import BaseLoadData
        self.load_data = kwargs.get('load_data', BaseLoadData())
        from fq.msg import BaseReconnaissanceData
        self.reconnaissance_data = kwargs.get('reconnaissance_data', BaseReconnaissanceData())
        from fq.msg import BaseInterferenceData
        self.interference_data = kwargs.get('interference_data', BaseInterferenceData())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.base_data != other.base_data:
            return False
        if self.attributes != other.attributes:
            return False
        if self.drone_swarm_kinematics_data != other.drone_swarm_kinematics_data:
            return False
        if self.load_data != other.load_data:
            return False
        if self.reconnaissance_data != other.reconnaissance_data:
            return False
        if self.interference_data != other.interference_data:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def base_data(self):
        """Message field 'base_data'."""
        return self._base_data

    @base_data.setter
    def base_data(self, value):
        if __debug__:
            from fq.msg import BaseBaseData
            assert \
                isinstance(value, BaseBaseData), \
                "The 'base_data' field must be a sub message of type 'BaseBaseData'"
        self._base_data = value

    @property
    def attributes(self):
        """Message field 'attributes'."""
        return self._attributes

    @attributes.setter
    def attributes(self, value):
        if __debug__:
            from fq.msg import BasePlaneAttr
            assert \
                isinstance(value, BasePlaneAttr), \
                "The 'attributes' field must be a sub message of type 'BasePlaneAttr'"
        self._attributes = value

    @property
    def drone_swarm_kinematics_data(self):
        """Message field 'drone_swarm_kinematics_data'."""
        return self._drone_swarm_kinematics_data

    @drone_swarm_kinematics_data.setter
    def drone_swarm_kinematics_data(self, value):
        if __debug__:
            from fq.msg import BaseAirplaneKinematicsData
            assert \
                isinstance(value, BaseAirplaneKinematicsData), \
                "The 'drone_swarm_kinematics_data' field must be a sub message of type 'BaseAirplaneKinematicsData'"
        self._drone_swarm_kinematics_data = value

    @property
    def load_data(self):
        """Message field 'load_data'."""
        return self._load_data

    @load_data.setter
    def load_data(self, value):
        if __debug__:
            from fq.msg import BaseLoadData
            assert \
                isinstance(value, BaseLoadData), \
                "The 'load_data' field must be a sub message of type 'BaseLoadData'"
        self._load_data = value

    @property
    def reconnaissance_data(self):
        """Message field 'reconnaissance_data'."""
        return self._reconnaissance_data

    @reconnaissance_data.setter
    def reconnaissance_data(self, value):
        if __debug__:
            from fq.msg import BaseReconnaissanceData
            assert \
                isinstance(value, BaseReconnaissanceData), \
                "The 'reconnaissance_data' field must be a sub message of type 'BaseReconnaissanceData'"
        self._reconnaissance_data = value

    @property
    def interference_data(self):
        """Message field 'interference_data'."""
        return self._interference_data

    @interference_data.setter
    def interference_data(self, value):
        if __debug__:
            from fq.msg import BaseInterferenceData
            assert \
                isinstance(value, BaseInterferenceData), \
                "The 'interference_data' field must be a sub message of type 'BaseInterferenceData'"
        self._interference_data = value
