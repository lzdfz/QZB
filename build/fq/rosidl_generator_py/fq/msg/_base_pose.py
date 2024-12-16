# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fq:msg/BasePose.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BasePose(type):
    """Metaclass of message 'BasePose'."""

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
                'fq.msg.BasePose')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__base_pose
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__base_pose
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__base_pose
            cls._TYPE_SUPPORT = module.type_support_msg__msg__base_pose
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__base_pose

            from fq.msg import BaseOrientation3D
            if BaseOrientation3D.__class__._TYPE_SUPPORT is None:
                BaseOrientation3D.__class__.__import_type_support__()

            from geometry_msgs.msg import Accel
            if Accel.__class__._TYPE_SUPPORT is None:
                Accel.__class__.__import_type_support__()

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from geometry_msgs.msg import Twist
            if Twist.__class__._TYPE_SUPPORT is None:
                Twist.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BasePose(metaclass=Metaclass_BasePose):
    """Message class 'BasePose'."""

    __slots__ = [
        '_location',
        '_rotation',
        '_velocity',
        '_angular_velocity',
        '_acceleration',
    ]

    _fields_and_field_types = {
        'location': 'geometry_msgs/Point',
        'rotation': 'fq/BaseOrientation3D',
        'velocity': 'geometry_msgs/Twist',
        'angular_velocity': 'geometry_msgs/Twist',
        'acceleration': 'geometry_msgs/Accel',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['fq', 'msg'], 'BaseOrientation3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Twist'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Twist'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Accel'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Point
        self.location = kwargs.get('location', Point())
        from fq.msg import BaseOrientation3D
        self.rotation = kwargs.get('rotation', BaseOrientation3D())
        from geometry_msgs.msg import Twist
        self.velocity = kwargs.get('velocity', Twist())
        from geometry_msgs.msg import Twist
        self.angular_velocity = kwargs.get('angular_velocity', Twist())
        from geometry_msgs.msg import Accel
        self.acceleration = kwargs.get('acceleration', Accel())

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
        if self.location != other.location:
            return False
        if self.rotation != other.rotation:
            return False
        if self.velocity != other.velocity:
            return False
        if self.angular_velocity != other.angular_velocity:
            return False
        if self.acceleration != other.acceleration:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def rotation(self):
        """Message field 'rotation'."""
        return self._rotation

    @rotation.setter
    def rotation(self, value):
        if __debug__:
            from fq.msg import BaseOrientation3D
            assert \
                isinstance(value, BaseOrientation3D), \
                "The 'rotation' field must be a sub message of type 'BaseOrientation3D'"
        self._rotation = value

    @property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if __debug__:
            from geometry_msgs.msg import Twist
            assert \
                isinstance(value, Twist), \
                "The 'velocity' field must be a sub message of type 'Twist'"
        self._velocity = value

    @property
    def angular_velocity(self):
        """Message field 'angular_velocity'."""
        return self._angular_velocity

    @angular_velocity.setter
    def angular_velocity(self, value):
        if __debug__:
            from geometry_msgs.msg import Twist
            assert \
                isinstance(value, Twist), \
                "The 'angular_velocity' field must be a sub message of type 'Twist'"
        self._angular_velocity = value

    @property
    def acceleration(self):
        """Message field 'acceleration'."""
        return self._acceleration

    @acceleration.setter
    def acceleration(self, value):
        if __debug__:
            from geometry_msgs.msg import Accel
            assert \
                isinstance(value, Accel), \
                "The 'acceleration' field must be a sub message of type 'Accel'"
        self._acceleration = value
