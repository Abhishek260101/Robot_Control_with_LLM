# generated from rosidl_generator_py/resource/_idl.py.em
# with input from llama_msgs:srv/UpdateLoRAs.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UpdateLoRAs_Request(type):
    """Metaclass of message 'UpdateLoRAs_Request'."""

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
            module = import_type_support('llama_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'llama_msgs.srv.UpdateLoRAs_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__update_lo_r_as__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__update_lo_r_as__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__update_lo_r_as__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__update_lo_r_as__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__update_lo_r_as__request

            from llama_msgs.msg import LoRA
            if LoRA.__class__._TYPE_SUPPORT is None:
                LoRA.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UpdateLoRAs_Request(metaclass=Metaclass_UpdateLoRAs_Request):
    """Message class 'UpdateLoRAs_Request'."""

    __slots__ = [
        '_loras',
    ]

    _fields_and_field_types = {
        'loras': 'sequence<llama_msgs/LoRA>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['llama_msgs', 'msg'], 'LoRA')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.loras = kwargs.get('loras', [])

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
        if self.loras != other.loras:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def loras(self):
        """Message field 'loras'."""
        return self._loras

    @loras.setter
    def loras(self, value):
        if __debug__:
            from llama_msgs.msg import LoRA
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, LoRA) for v in value) and
                 True), \
                "The 'loras' field must be a set or sequence and each value of type 'LoRA'"
        self._loras = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_UpdateLoRAs_Response(type):
    """Metaclass of message 'UpdateLoRAs_Response'."""

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
            module = import_type_support('llama_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'llama_msgs.srv.UpdateLoRAs_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__update_lo_r_as__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__update_lo_r_as__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__update_lo_r_as__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__update_lo_r_as__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__update_lo_r_as__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UpdateLoRAs_Response(metaclass=Metaclass_UpdateLoRAs_Response):
    """Message class 'UpdateLoRAs_Response'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


class Metaclass_UpdateLoRAs(type):
    """Metaclass of service 'UpdateLoRAs'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('llama_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'llama_msgs.srv.UpdateLoRAs')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__update_lo_r_as

            from llama_msgs.srv import _update_lo_r_as
            if _update_lo_r_as.Metaclass_UpdateLoRAs_Request._TYPE_SUPPORT is None:
                _update_lo_r_as.Metaclass_UpdateLoRAs_Request.__import_type_support__()
            if _update_lo_r_as.Metaclass_UpdateLoRAs_Response._TYPE_SUPPORT is None:
                _update_lo_r_as.Metaclass_UpdateLoRAs_Response.__import_type_support__()


class UpdateLoRAs(metaclass=Metaclass_UpdateLoRAs):
    from llama_msgs.srv._update_lo_r_as import UpdateLoRAs_Request as Request
    from llama_msgs.srv._update_lo_r_as import UpdateLoRAs_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
