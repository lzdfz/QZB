# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fq:msg/ActorVehicle.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ActorVehicle(type):
    """Metaclass of message 'ActorVehicle'."""

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
                'fq.msg.ActorVehicle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__actor_vehicle
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__actor_vehicle
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__actor_vehicle
            cls._TYPE_SUPPORT = module.type_support_msg__msg__actor_vehicle
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__actor_vehicle

            from fq.msg import BaseBaseData
            if BaseBaseData.__class__._TYPE_SUPPORT is None:
                BaseBaseData.__class__.__import_type_support__()

            from fq.msg import BaseBeReconnaissanceData
            if BaseBeReconnaissanceData.__class__._TYPE_SUPPORT is None:
                BaseBeReconnaissanceData.__class__.__import_type_support__()

            from fq.msg import BaseDamageConditionData
            if BaseDamageConditionData.__class__._TYPE_SUPPORT is None:
                BaseDamageConditionData.__class__.__import_type_support__()

            from fq.msg import BaseKinematicsData
            if BaseKinematicsData.__class__._TYPE_SUPPORT is None:
                BaseKinematicsData.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ActorVehicle(metaclass=Metaclass_ActorVehicle):
    """Message class 'ActorVehicle'."""

    __slots__ = [
        '_base_data',
        '_kinematics_data',
        '_damage_condition_data',
        '_be_reconnaissance_data',
    ]

    _fields_and_field_types = {
        'base_data': 'fq/BaseBaseData',
        'kinematics_data': 'fq/BaseKinematicsData',
        'damage_condition_data': 'fq/BaseDamageConditionData',
        'be_reconnaissance_data': 'fq/BaseBeReconnaissanceData',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['fq', 'msg'], 'BaseBaseData'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['fq', 'msg'], 'BaseKinematicsData'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['fq', 'msg'], 'BaseDamageConditionData'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['fq', 'msg'], 'BaseBeReconnaissanceData'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from fq.msg import BaseBaseData
        self.base_data = kwargs.get('base_data', BaseBaseData())
        from fq.msg import BaseKinematicsData
        self.kinematics_data = kwargs.get('kinematics_data', BaseKinematicsData())
        from fq.msg import BaseDamageConditionData
        self.damage_condition_data = kwargs.get('damage_condition_data', BaseDamageConditionData())
        from fq.msg import BaseBeReconnaissanceData
        self.be_reconnaissance_data = kwargs.get('be_reconnaissance_data', BaseBeReconnaissanceData())

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
        if self.kinematics_data != other.kinematics_data:
            return False
        if self.damage_condition_data != other.damage_condition_data:
            return False
        if self.be_reconnaissance_data != other.be_reconnaissance_data:
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
    def kinematics_data(self):
        """Message field 'kinematics_data'."""
        return self._kinematics_data

    @kinematics_data.setter
    def kinematics_data(self, value):
        if __debug__:
            from fq.msg import BaseKinematicsData
            assert \
                isinstance(value, BaseKinematicsData), \
                "The 'kinematics_data' field must be a sub message of type 'BaseKinematicsData'"
        self._kinematics_data = value

    @property
    def damage_condition_data(self):
        """Message field 'damage_condition_data'."""
        return self._damage_condition_data

    @damage_condition_data.setter
    def damage_condition_data(self, value):
        if __debug__:
            from fq.msg import BaseDamageConditionData
            assert \
                isinstance(value, BaseDamageConditionData), \
                "The 'damage_condition_data' field must be a sub message of type 'BaseDamageConditionData'"
        self._damage_condition_data = value

    @property
    def be_reconnaissance_data(self):
        """Message field 'be_reconnaissance_data'."""
        return self._be_reconnaissance_data

    @be_reconnaissance_data.setter
    def be_reconnaissance_data(self, value):
        if __debug__:
            from fq.msg import BaseBeReconnaissanceData
            assert \
                isinstance(value, BaseBeReconnaissanceData), \
                "The 'be_reconnaissance_data' field must be a sub message of type 'BaseBeReconnaissanceData'"
        self._be_reconnaissance_data = value
