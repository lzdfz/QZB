# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fq:msg/ActorZone.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ActorZone(type):
    """Metaclass of message 'ActorZone'."""

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
                'fq.msg.ActorZone')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__actor_zone
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__actor_zone
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__actor_zone
            cls._TYPE_SUPPORT = module.type_support_msg__msg__actor_zone
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__actor_zone

            from fq.msg import BaseBaseData
            if BaseBaseData.__class__._TYPE_SUPPORT is None:
                BaseBaseData.__class__.__import_type_support__()

            from fq.msg import BaseBeInterferenceData
            if BaseBeInterferenceData.__class__._TYPE_SUPPORT is None:
                BaseBeInterferenceData.__class__.__import_type_support__()

            from fq.msg import BaseBeReconnaissanceData
            if BaseBeReconnaissanceData.__class__._TYPE_SUPPORT is None:
                BaseBeReconnaissanceData.__class__.__import_type_support__()

            from fq.msg import BaseZoneAttr
            if BaseZoneAttr.__class__._TYPE_SUPPORT is None:
                BaseZoneAttr.__class__.__import_type_support__()

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ActorZone(metaclass=Metaclass_ActorZone):
    """Message class 'ActorZone'."""

    __slots__ = [
        '_base_data',
        '_attributes',
        '_location',
        '_be_reconnaissance_data',
        '_be_interference_data',
    ]

    _fields_and_field_types = {
        'base_data': 'fq/BaseBaseData',
        'attributes': 'fq/BaseZoneAttr',
        'location': 'geometry_msgs/Point',
        'be_reconnaissance_data': 'fq/BaseBeReconnaissanceData',
        'be_interference_data': 'fq/BaseBeInterferenceData',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['fq', 'msg'], 'BaseBaseData'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['fq', 'msg'], 'BaseZoneAttr'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['fq', 'msg'], 'BaseBeReconnaissanceData'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['fq', 'msg'], 'BaseBeInterferenceData'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from fq.msg import BaseBaseData
        self.base_data = kwargs.get('base_data', BaseBaseData())
        from fq.msg import BaseZoneAttr
        self.attributes = kwargs.get('attributes', BaseZoneAttr())
        from geometry_msgs.msg import Point
        self.location = kwargs.get('location', Point())
        from fq.msg import BaseBeReconnaissanceData
        self.be_reconnaissance_data = kwargs.get('be_reconnaissance_data', BaseBeReconnaissanceData())
        from fq.msg import BaseBeInterferenceData
        self.be_interference_data = kwargs.get('be_interference_data', BaseBeInterferenceData())

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
        if self.location != other.location:
            return False
        if self.be_reconnaissance_data != other.be_reconnaissance_data:
            return False
        if self.be_interference_data != other.be_interference_data:
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
            from fq.msg import BaseZoneAttr
            assert \
                isinstance(value, BaseZoneAttr), \
                "The 'attributes' field must be a sub message of type 'BaseZoneAttr'"
        self._attributes = value

    @property
    def location(self):
        """Message field 'location'."""
        return self._location

    @location.setter
    def location(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'location' field must be a sub message of type 'Point'"
        self._location = value

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

    @property
    def be_interference_data(self):
        """Message field 'be_interference_data'."""
        return self._be_interference_data

    @be_interference_data.setter
    def be_interference_data(self, value):
        if __debug__:
            from fq.msg import BaseBeInterferenceData
            assert \
                isinstance(value, BaseBeInterferenceData), \
                "The 'be_interference_data' field must be a sub message of type 'BaseBeInterferenceData'"
        self._be_interference_data = value
