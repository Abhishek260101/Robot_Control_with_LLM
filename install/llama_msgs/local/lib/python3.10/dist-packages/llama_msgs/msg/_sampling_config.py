# generated from rosidl_generator_py/resource/_idl.py.em
# with input from llama_msgs:msg/SamplingConfig.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'penalty_prompt_tokens'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SamplingConfig(type):
    """Metaclass of message 'SamplingConfig'."""

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
                'llama_msgs.msg.SamplingConfig')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sampling_config
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sampling_config
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sampling_config
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sampling_config
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sampling_config

            from llama_msgs.msg import LogitBiasArray
            if LogitBiasArray.__class__._TYPE_SUPPORT is None:
                LogitBiasArray.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'N_PREV__DEFAULT': 64,
            'N_PROBS__DEFAULT': 1,
            'MIN_KEEP__DEFAULT': 0,
            'IGNORE_EOS__DEFAULT': False,
            'TEMP__DEFAULT': 0.8,
            'DYNATEMP_RANGE__DEFAULT': 0.0,
            'DYNATEMP_EXPONENT__DEFAULT': 1.0,
            'TOP_K__DEFAULT': 40,
            'TOP_P__DEFAULT': 0.95,
            'MIN_P__DEFAULT': 0.05,
            'TFS_Z__DEFAULT': 1.0,
            'TYPICAL_P__DEFAULT': 1.0,
            'PENALTY_LAST_N__DEFAULT': 64,
            'PENALTY_REPEAT__DEFAULT': 1.0,
            'PENALTY_FREQ__DEFAULT': 0.0,
            'PENALTY_PRESENT__DEFAULT': 0.0,
            'MIROSTAT__DEFAULT': 0,
            'MIROSTAT_ETA__DEFAULT': 0.1,
            'MIROSTAT_TAU__DEFAULT': 5.0,
            'PENALIZE_NL__DEFAULT': False,
            'SAMPLERS_SEQUENCE__DEFAULT': 'kfypmt',
            'GRAMMAR__DEFAULT': '',
            'GRAMMAR_SCHEMA__DEFAULT': '',
            'USE_PENALTY_PROMPT_TOKENS__DEFAULT': False,
        }

    @property
    def N_PREV__DEFAULT(cls):
        """Return default value for message field 'n_prev'."""
        return 64

    @property
    def N_PROBS__DEFAULT(cls):
        """Return default value for message field 'n_probs'."""
        return 1

    @property
    def MIN_KEEP__DEFAULT(cls):
        """Return default value for message field 'min_keep'."""
        return 0

    @property
    def IGNORE_EOS__DEFAULT(cls):
        """Return default value for message field 'ignore_eos'."""
        return False

    @property
    def TEMP__DEFAULT(cls):
        """Return default value for message field 'temp'."""
        return 0.8

    @property
    def DYNATEMP_RANGE__DEFAULT(cls):
        """Return default value for message field 'dynatemp_range'."""
        return 0.0

    @property
    def DYNATEMP_EXPONENT__DEFAULT(cls):
        """Return default value for message field 'dynatemp_exponent'."""
        return 1.0

    @property
    def TOP_K__DEFAULT(cls):
        """Return default value for message field 'top_k'."""
        return 40

    @property
    def TOP_P__DEFAULT(cls):
        """Return default value for message field 'top_p'."""
        return 0.95

    @property
    def MIN_P__DEFAULT(cls):
        """Return default value for message field 'min_p'."""
        return 0.05

    @property
    def TFS_Z__DEFAULT(cls):
        """Return default value for message field 'tfs_z'."""
        return 1.0

    @property
    def TYPICAL_P__DEFAULT(cls):
        """Return default value for message field 'typical_p'."""
        return 1.0

    @property
    def PENALTY_LAST_N__DEFAULT(cls):
        """Return default value for message field 'penalty_last_n'."""
        return 64

    @property
    def PENALTY_REPEAT__DEFAULT(cls):
        """Return default value for message field 'penalty_repeat'."""
        return 1.0

    @property
    def PENALTY_FREQ__DEFAULT(cls):
        """Return default value for message field 'penalty_freq'."""
        return 0.0

    @property
    def PENALTY_PRESENT__DEFAULT(cls):
        """Return default value for message field 'penalty_present'."""
        return 0.0

    @property
    def MIROSTAT__DEFAULT(cls):
        """Return default value for message field 'mirostat'."""
        return 0

    @property
    def MIROSTAT_ETA__DEFAULT(cls):
        """Return default value for message field 'mirostat_eta'."""
        return 0.1

    @property
    def MIROSTAT_TAU__DEFAULT(cls):
        """Return default value for message field 'mirostat_tau'."""
        return 5.0

    @property
    def PENALIZE_NL__DEFAULT(cls):
        """Return default value for message field 'penalize_nl'."""
        return False

    @property
    def SAMPLERS_SEQUENCE__DEFAULT(cls):
        """Return default value for message field 'samplers_sequence'."""
        return 'kfypmt'

    @property
    def GRAMMAR__DEFAULT(cls):
        """Return default value for message field 'grammar'."""
        return ''

    @property
    def GRAMMAR_SCHEMA__DEFAULT(cls):
        """Return default value for message field 'grammar_schema'."""
        return ''

    @property
    def USE_PENALTY_PROMPT_TOKENS__DEFAULT(cls):
        """Return default value for message field 'use_penalty_prompt_tokens'."""
        return False


class SamplingConfig(metaclass=Metaclass_SamplingConfig):
    """Message class 'SamplingConfig'."""

    __slots__ = [
        '_n_prev',
        '_n_probs',
        '_min_keep',
        '_ignore_eos',
        '_logit_bias',
        '_temp',
        '_dynatemp_range',
        '_dynatemp_exponent',
        '_top_k',
        '_top_p',
        '_min_p',
        '_tfs_z',
        '_typical_p',
        '_penalty_last_n',
        '_penalty_repeat',
        '_penalty_freq',
        '_penalty_present',
        '_mirostat',
        '_mirostat_eta',
        '_mirostat_tau',
        '_penalize_nl',
        '_samplers_sequence',
        '_grammar',
        '_grammar_schema',
        '_penalty_prompt_tokens',
        '_use_penalty_prompt_tokens',
    ]

    _fields_and_field_types = {
        'n_prev': 'int32',
        'n_probs': 'int32',
        'min_keep': 'int32',
        'ignore_eos': 'boolean',
        'logit_bias': 'llama_msgs/LogitBiasArray',
        'temp': 'float',
        'dynatemp_range': 'float',
        'dynatemp_exponent': 'float',
        'top_k': 'int32',
        'top_p': 'float',
        'min_p': 'float',
        'tfs_z': 'float',
        'typical_p': 'float',
        'penalty_last_n': 'int32',
        'penalty_repeat': 'float',
        'penalty_freq': 'float',
        'penalty_present': 'float',
        'mirostat': 'int32',
        'mirostat_eta': 'float',
        'mirostat_tau': 'float',
        'penalize_nl': 'boolean',
        'samplers_sequence': 'string',
        'grammar': 'string',
        'grammar_schema': 'string',
        'penalty_prompt_tokens': 'sequence<int32>',
        'use_penalty_prompt_tokens': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['llama_msgs', 'msg'], 'LogitBiasArray'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.n_prev = kwargs.get(
            'n_prev', SamplingConfig.N_PREV__DEFAULT)
        self.n_probs = kwargs.get(
            'n_probs', SamplingConfig.N_PROBS__DEFAULT)
        self.min_keep = kwargs.get(
            'min_keep', SamplingConfig.MIN_KEEP__DEFAULT)
        self.ignore_eos = kwargs.get(
            'ignore_eos', SamplingConfig.IGNORE_EOS__DEFAULT)
        from llama_msgs.msg import LogitBiasArray
        self.logit_bias = kwargs.get('logit_bias', LogitBiasArray())
        self.temp = kwargs.get(
            'temp', SamplingConfig.TEMP__DEFAULT)
        self.dynatemp_range = kwargs.get(
            'dynatemp_range', SamplingConfig.DYNATEMP_RANGE__DEFAULT)
        self.dynatemp_exponent = kwargs.get(
            'dynatemp_exponent', SamplingConfig.DYNATEMP_EXPONENT__DEFAULT)
        self.top_k = kwargs.get(
            'top_k', SamplingConfig.TOP_K__DEFAULT)
        self.top_p = kwargs.get(
            'top_p', SamplingConfig.TOP_P__DEFAULT)
        self.min_p = kwargs.get(
            'min_p', SamplingConfig.MIN_P__DEFAULT)
        self.tfs_z = kwargs.get(
            'tfs_z', SamplingConfig.TFS_Z__DEFAULT)
        self.typical_p = kwargs.get(
            'typical_p', SamplingConfig.TYPICAL_P__DEFAULT)
        self.penalty_last_n = kwargs.get(
            'penalty_last_n', SamplingConfig.PENALTY_LAST_N__DEFAULT)
        self.penalty_repeat = kwargs.get(
            'penalty_repeat', SamplingConfig.PENALTY_REPEAT__DEFAULT)
        self.penalty_freq = kwargs.get(
            'penalty_freq', SamplingConfig.PENALTY_FREQ__DEFAULT)
        self.penalty_present = kwargs.get(
            'penalty_present', SamplingConfig.PENALTY_PRESENT__DEFAULT)
        self.mirostat = kwargs.get(
            'mirostat', SamplingConfig.MIROSTAT__DEFAULT)
        self.mirostat_eta = kwargs.get(
            'mirostat_eta', SamplingConfig.MIROSTAT_ETA__DEFAULT)
        self.mirostat_tau = kwargs.get(
            'mirostat_tau', SamplingConfig.MIROSTAT_TAU__DEFAULT)
        self.penalize_nl = kwargs.get(
            'penalize_nl', SamplingConfig.PENALIZE_NL__DEFAULT)
        self.samplers_sequence = kwargs.get(
            'samplers_sequence', SamplingConfig.SAMPLERS_SEQUENCE__DEFAULT)
        self.grammar = kwargs.get(
            'grammar', SamplingConfig.GRAMMAR__DEFAULT)
        self.grammar_schema = kwargs.get(
            'grammar_schema', SamplingConfig.GRAMMAR_SCHEMA__DEFAULT)
        self.penalty_prompt_tokens = array.array('i', kwargs.get('penalty_prompt_tokens', []))
        self.use_penalty_prompt_tokens = kwargs.get(
            'use_penalty_prompt_tokens', SamplingConfig.USE_PENALTY_PROMPT_TOKENS__DEFAULT)

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
        if self.n_prev != other.n_prev:
            return False
        if self.n_probs != other.n_probs:
            return False
        if self.min_keep != other.min_keep:
            return False
        if self.ignore_eos != other.ignore_eos:
            return False
        if self.logit_bias != other.logit_bias:
            return False
        if self.temp != other.temp:
            return False
        if self.dynatemp_range != other.dynatemp_range:
            return False
        if self.dynatemp_exponent != other.dynatemp_exponent:
            return False
        if self.top_k != other.top_k:
            return False
        if self.top_p != other.top_p:
            return False
        if self.min_p != other.min_p:
            return False
        if self.tfs_z != other.tfs_z:
            return False
        if self.typical_p != other.typical_p:
            return False
        if self.penalty_last_n != other.penalty_last_n:
            return False
        if self.penalty_repeat != other.penalty_repeat:
            return False
        if self.penalty_freq != other.penalty_freq:
            return False
        if self.penalty_present != other.penalty_present:
            return False
        if self.mirostat != other.mirostat:
            return False
        if self.mirostat_eta != other.mirostat_eta:
            return False
        if self.mirostat_tau != other.mirostat_tau:
            return False
        if self.penalize_nl != other.penalize_nl:
            return False
        if self.samplers_sequence != other.samplers_sequence:
            return False
        if self.grammar != other.grammar:
            return False
        if self.grammar_schema != other.grammar_schema:
            return False
        if self.penalty_prompt_tokens != other.penalty_prompt_tokens:
            return False
        if self.use_penalty_prompt_tokens != other.use_penalty_prompt_tokens:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def n_prev(self):
        """Message field 'n_prev'."""
        return self._n_prev

    @n_prev.setter
    def n_prev(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'n_prev' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'n_prev' field must be an integer in [-2147483648, 2147483647]"
        self._n_prev = value

    @builtins.property
    def n_probs(self):
        """Message field 'n_probs'."""
        return self._n_probs

    @n_probs.setter
    def n_probs(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'n_probs' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'n_probs' field must be an integer in [-2147483648, 2147483647]"
        self._n_probs = value

    @builtins.property
    def min_keep(self):
        """Message field 'min_keep'."""
        return self._min_keep

    @min_keep.setter
    def min_keep(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'min_keep' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'min_keep' field must be an integer in [-2147483648, 2147483647]"
        self._min_keep = value

    @builtins.property
    def ignore_eos(self):
        """Message field 'ignore_eos'."""
        return self._ignore_eos

    @ignore_eos.setter
    def ignore_eos(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ignore_eos' field must be of type 'bool'"
        self._ignore_eos = value

    @builtins.property
    def logit_bias(self):
        """Message field 'logit_bias'."""
        return self._logit_bias

    @logit_bias.setter
    def logit_bias(self, value):
        if __debug__:
            from llama_msgs.msg import LogitBiasArray
            assert \
                isinstance(value, LogitBiasArray), \
                "The 'logit_bias' field must be a sub message of type 'LogitBiasArray'"
        self._logit_bias = value

    @builtins.property
    def temp(self):
        """Message field 'temp'."""
        return self._temp

    @temp.setter
    def temp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temp = value

    @builtins.property
    def dynatemp_range(self):
        """Message field 'dynatemp_range'."""
        return self._dynatemp_range

    @dynatemp_range.setter
    def dynatemp_range(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dynatemp_range' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'dynatemp_range' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._dynatemp_range = value

    @builtins.property
    def dynatemp_exponent(self):
        """Message field 'dynatemp_exponent'."""
        return self._dynatemp_exponent

    @dynatemp_exponent.setter
    def dynatemp_exponent(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dynatemp_exponent' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'dynatemp_exponent' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._dynatemp_exponent = value

    @builtins.property
    def top_k(self):
        """Message field 'top_k'."""
        return self._top_k

    @top_k.setter
    def top_k(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'top_k' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'top_k' field must be an integer in [-2147483648, 2147483647]"
        self._top_k = value

    @builtins.property
    def top_p(self):
        """Message field 'top_p'."""
        return self._top_p

    @top_p.setter
    def top_p(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'top_p' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'top_p' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._top_p = value

    @builtins.property
    def min_p(self):
        """Message field 'min_p'."""
        return self._min_p

    @min_p.setter
    def min_p(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min_p' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'min_p' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._min_p = value

    @builtins.property
    def tfs_z(self):
        """Message field 'tfs_z'."""
        return self._tfs_z

    @tfs_z.setter
    def tfs_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tfs_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'tfs_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._tfs_z = value

    @builtins.property
    def typical_p(self):
        """Message field 'typical_p'."""
        return self._typical_p

    @typical_p.setter
    def typical_p(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'typical_p' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'typical_p' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._typical_p = value

    @builtins.property
    def penalty_last_n(self):
        """Message field 'penalty_last_n'."""
        return self._penalty_last_n

    @penalty_last_n.setter
    def penalty_last_n(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'penalty_last_n' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'penalty_last_n' field must be an integer in [-2147483648, 2147483647]"
        self._penalty_last_n = value

    @builtins.property
    def penalty_repeat(self):
        """Message field 'penalty_repeat'."""
        return self._penalty_repeat

    @penalty_repeat.setter
    def penalty_repeat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'penalty_repeat' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'penalty_repeat' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._penalty_repeat = value

    @builtins.property
    def penalty_freq(self):
        """Message field 'penalty_freq'."""
        return self._penalty_freq

    @penalty_freq.setter
    def penalty_freq(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'penalty_freq' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'penalty_freq' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._penalty_freq = value

    @builtins.property
    def penalty_present(self):
        """Message field 'penalty_present'."""
        return self._penalty_present

    @penalty_present.setter
    def penalty_present(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'penalty_present' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'penalty_present' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._penalty_present = value

    @builtins.property
    def mirostat(self):
        """Message field 'mirostat'."""
        return self._mirostat

    @mirostat.setter
    def mirostat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mirostat' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mirostat' field must be an integer in [-2147483648, 2147483647]"
        self._mirostat = value

    @builtins.property
    def mirostat_eta(self):
        """Message field 'mirostat_eta'."""
        return self._mirostat_eta

    @mirostat_eta.setter
    def mirostat_eta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mirostat_eta' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'mirostat_eta' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._mirostat_eta = value

    @builtins.property
    def mirostat_tau(self):
        """Message field 'mirostat_tau'."""
        return self._mirostat_tau

    @mirostat_tau.setter
    def mirostat_tau(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mirostat_tau' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'mirostat_tau' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._mirostat_tau = value

    @builtins.property
    def penalize_nl(self):
        """Message field 'penalize_nl'."""
        return self._penalize_nl

    @penalize_nl.setter
    def penalize_nl(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'penalize_nl' field must be of type 'bool'"
        self._penalize_nl = value

    @builtins.property
    def samplers_sequence(self):
        """Message field 'samplers_sequence'."""
        return self._samplers_sequence

    @samplers_sequence.setter
    def samplers_sequence(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'samplers_sequence' field must be of type 'str'"
        self._samplers_sequence = value

    @builtins.property
    def grammar(self):
        """Message field 'grammar'."""
        return self._grammar

    @grammar.setter
    def grammar(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'grammar' field must be of type 'str'"
        self._grammar = value

    @builtins.property
    def grammar_schema(self):
        """Message field 'grammar_schema'."""
        return self._grammar_schema

    @grammar_schema.setter
    def grammar_schema(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'grammar_schema' field must be of type 'str'"
        self._grammar_schema = value

    @builtins.property
    def penalty_prompt_tokens(self):
        """Message field 'penalty_prompt_tokens'."""
        return self._penalty_prompt_tokens

    @penalty_prompt_tokens.setter
    def penalty_prompt_tokens(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'penalty_prompt_tokens' array.array() must have the type code of 'i'"
            self._penalty_prompt_tokens = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'penalty_prompt_tokens' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._penalty_prompt_tokens = array.array('i', value)

    @builtins.property
    def use_penalty_prompt_tokens(self):
        """Message field 'use_penalty_prompt_tokens'."""
        return self._use_penalty_prompt_tokens

    @use_penalty_prompt_tokens.setter
    def use_penalty_prompt_tokens(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'use_penalty_prompt_tokens' field must be of type 'bool'"
        self._use_penalty_prompt_tokens = value
