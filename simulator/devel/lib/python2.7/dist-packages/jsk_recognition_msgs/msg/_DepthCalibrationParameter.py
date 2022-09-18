# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from jsk_recognition_msgs/DepthCalibrationParameter.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class DepthCalibrationParameter(genpy.Message):
  _md5sum = "d8318983ee0a76ad66ecf4b504350888"
  _type = "jsk_recognition_msgs/DepthCalibrationParameter"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# each vector stands for C(u, v)
# C(u, v) = a_0 * u^2 + a_1 * u + a_2 * v^2 + a_3 * v + a_4
float64[] coefficients2
float64[] coefficients1
float64[] coefficients0
bool use_abs
"""
  __slots__ = ['coefficients2','coefficients1','coefficients0','use_abs']
  _slot_types = ['float64[]','float64[]','float64[]','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       coefficients2,coefficients1,coefficients0,use_abs

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(DepthCalibrationParameter, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.coefficients2 is None:
        self.coefficients2 = []
      if self.coefficients1 is None:
        self.coefficients1 = []
      if self.coefficients0 is None:
        self.coefficients0 = []
      if self.use_abs is None:
        self.use_abs = False
    else:
      self.coefficients2 = []
      self.coefficients1 = []
      self.coefficients0 = []
      self.use_abs = False

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      length = len(self.coefficients2)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.Struct(pattern).pack(*self.coefficients2))
      length = len(self.coefficients1)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.Struct(pattern).pack(*self.coefficients1))
      length = len(self.coefficients0)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.Struct(pattern).pack(*self.coefficients0))
      _x = self.use_abs
      buff.write(_get_struct_B().pack(_x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.coefficients2 = s.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.coefficients1 = s.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.coefficients0 = s.unpack(str[start:end])
      start = end
      end += 1
      (self.use_abs,) = _get_struct_B().unpack(str[start:end])
      self.use_abs = bool(self.use_abs)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      length = len(self.coefficients2)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.coefficients2.tostring())
      length = len(self.coefficients1)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.coefficients1.tostring())
      length = len(self.coefficients0)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.coefficients0.tostring())
      _x = self.use_abs
      buff.write(_get_struct_B().pack(_x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.coefficients2 = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.coefficients1 = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.coefficients0 = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 1
      (self.use_abs,) = _get_struct_B().unpack(str[start:end])
      self.use_abs = bool(self.use_abs)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B