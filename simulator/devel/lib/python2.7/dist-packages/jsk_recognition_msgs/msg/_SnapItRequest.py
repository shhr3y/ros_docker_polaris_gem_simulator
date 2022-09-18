# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from jsk_recognition_msgs/SnapItRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import std_msgs.msg

class SnapItRequest(genpy.Message):
  _md5sum = "5733f480694296678d81cff0483b399b"
  _type = "jsk_recognition_msgs/SnapItRequest"
  _has_header = True  # flag to mark the presence of a Header object
  _full_text = """Header header
uint8 MODEL_PLANE=0
uint8 MODEL_CYLINDER=1
uint8 model_type

geometry_msgs/PolygonStamped target_plane

geometry_msgs/PointStamped center
geometry_msgs/Vector3Stamped direction
float64 radius
float64 height
# parameters, 0 means 
float64 max_distance
float64 eps_angle

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: geometry_msgs/PolygonStamped
# This represents a Polygon with reference coordinate frame and timestamp
Header header
Polygon polygon

================================================================================
MSG: geometry_msgs/Polygon
#A specification of a polygon where the first and last points are assumed to be connected
Point32[] points

================================================================================
MSG: geometry_msgs/Point32
# This contains the position of a point in free space(with 32 bits of precision).
# It is recommeded to use Point wherever possible instead of Point32.  
# 
# This recommendation is to promote interoperability.  
#
# This message is designed to take up less space when sending
# lots of points at once, as in the case of a PointCloud.  

float32 x
float32 y
float32 z
================================================================================
MSG: geometry_msgs/PointStamped
# This represents a Point with reference coordinate frame and timestamp
Header header
Point point

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Vector3Stamped
# This represents a Vector3 with reference coordinate frame and timestamp
Header header
Vector3 vector

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
float64 z"""
  # Pseudo-constants
  MODEL_PLANE = 0
  MODEL_CYLINDER = 1

  __slots__ = ['header','model_type','target_plane','center','direction','radius','height','max_distance','eps_angle']
  _slot_types = ['std_msgs/Header','uint8','geometry_msgs/PolygonStamped','geometry_msgs/PointStamped','geometry_msgs/Vector3Stamped','float64','float64','float64','float64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,model_type,target_plane,center,direction,radius,height,max_distance,eps_angle

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(SnapItRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.model_type is None:
        self.model_type = 0
      if self.target_plane is None:
        self.target_plane = geometry_msgs.msg.PolygonStamped()
      if self.center is None:
        self.center = geometry_msgs.msg.PointStamped()
      if self.direction is None:
        self.direction = geometry_msgs.msg.Vector3Stamped()
      if self.radius is None:
        self.radius = 0.
      if self.height is None:
        self.height = 0.
      if self.max_distance is None:
        self.max_distance = 0.
      if self.eps_angle is None:
        self.eps_angle = 0.
    else:
      self.header = std_msgs.msg.Header()
      self.model_type = 0
      self.target_plane = geometry_msgs.msg.PolygonStamped()
      self.center = geometry_msgs.msg.PointStamped()
      self.direction = geometry_msgs.msg.Vector3Stamped()
      self.radius = 0.
      self.height = 0.
      self.max_distance = 0.
      self.eps_angle = 0.

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
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_B3I().pack(_x.model_type, _x.target_plane.header.seq, _x.target_plane.header.stamp.secs, _x.target_plane.header.stamp.nsecs))
      _x = self.target_plane.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.target_plane.polygon.points)
      buff.write(_struct_I.pack(length))
      for val1 in self.target_plane.polygon.points:
        _x = val1
        buff.write(_get_struct_3f().pack(_x.x, _x.y, _x.z))
      _x = self
      buff.write(_get_struct_3I().pack(_x.center.header.seq, _x.center.header.stamp.secs, _x.center.header.stamp.nsecs))
      _x = self.center.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_3d3I().pack(_x.center.point.x, _x.center.point.y, _x.center.point.z, _x.direction.header.seq, _x.direction.header.stamp.secs, _x.direction.header.stamp.nsecs))
      _x = self.direction.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_7d().pack(_x.direction.vector.x, _x.direction.vector.y, _x.direction.vector.z, _x.radius, _x.height, _x.max_distance, _x.eps_angle))
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
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.target_plane is None:
        self.target_plane = geometry_msgs.msg.PolygonStamped()
      if self.center is None:
        self.center = geometry_msgs.msg.PointStamped()
      if self.direction is None:
        self.direction = geometry_msgs.msg.Vector3Stamped()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 13
      (_x.model_type, _x.target_plane.header.seq, _x.target_plane.header.stamp.secs, _x.target_plane.header.stamp.nsecs,) = _get_struct_B3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.target_plane.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.target_plane.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.target_plane.polygon.points = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Point32()
        _x = val1
        start = end
        end += 12
        (_x.x, _x.y, _x.z,) = _get_struct_3f().unpack(str[start:end])
        self.target_plane.polygon.points.append(val1)
      _x = self
      start = end
      end += 12
      (_x.center.header.seq, _x.center.header.stamp.secs, _x.center.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.center.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.center.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 36
      (_x.center.point.x, _x.center.point.y, _x.center.point.z, _x.direction.header.seq, _x.direction.header.stamp.secs, _x.direction.header.stamp.nsecs,) = _get_struct_3d3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.direction.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.direction.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 56
      (_x.direction.vector.x, _x.direction.vector.y, _x.direction.vector.z, _x.radius, _x.height, _x.max_distance, _x.eps_angle,) = _get_struct_7d().unpack(str[start:end])
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
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_B3I().pack(_x.model_type, _x.target_plane.header.seq, _x.target_plane.header.stamp.secs, _x.target_plane.header.stamp.nsecs))
      _x = self.target_plane.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.target_plane.polygon.points)
      buff.write(_struct_I.pack(length))
      for val1 in self.target_plane.polygon.points:
        _x = val1
        buff.write(_get_struct_3f().pack(_x.x, _x.y, _x.z))
      _x = self
      buff.write(_get_struct_3I().pack(_x.center.header.seq, _x.center.header.stamp.secs, _x.center.header.stamp.nsecs))
      _x = self.center.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_3d3I().pack(_x.center.point.x, _x.center.point.y, _x.center.point.z, _x.direction.header.seq, _x.direction.header.stamp.secs, _x.direction.header.stamp.nsecs))
      _x = self.direction.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_7d().pack(_x.direction.vector.x, _x.direction.vector.y, _x.direction.vector.z, _x.radius, _x.height, _x.max_distance, _x.eps_angle))
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
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.target_plane is None:
        self.target_plane = geometry_msgs.msg.PolygonStamped()
      if self.center is None:
        self.center = geometry_msgs.msg.PointStamped()
      if self.direction is None:
        self.direction = geometry_msgs.msg.Vector3Stamped()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 13
      (_x.model_type, _x.target_plane.header.seq, _x.target_plane.header.stamp.secs, _x.target_plane.header.stamp.nsecs,) = _get_struct_B3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.target_plane.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.target_plane.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.target_plane.polygon.points = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Point32()
        _x = val1
        start = end
        end += 12
        (_x.x, _x.y, _x.z,) = _get_struct_3f().unpack(str[start:end])
        self.target_plane.polygon.points.append(val1)
      _x = self
      start = end
      end += 12
      (_x.center.header.seq, _x.center.header.stamp.secs, _x.center.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.center.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.center.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 36
      (_x.center.point.x, _x.center.point.y, _x.center.point.z, _x.direction.header.seq, _x.direction.header.stamp.secs, _x.direction.header.stamp.nsecs,) = _get_struct_3d3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.direction.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.direction.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 56
      (_x.direction.vector.x, _x.direction.vector.y, _x.direction.vector.z, _x.radius, _x.height, _x.max_distance, _x.eps_angle,) = _get_struct_7d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_3d3I = None
def _get_struct_3d3I():
    global _struct_3d3I
    if _struct_3d3I is None:
        _struct_3d3I = struct.Struct("<3d3I")
    return _struct_3d3I
_struct_3f = None
def _get_struct_3f():
    global _struct_3f
    if _struct_3f is None:
        _struct_3f = struct.Struct("<3f")
    return _struct_3f
_struct_7d = None
def _get_struct_7d():
    global _struct_7d
    if _struct_7d is None:
        _struct_7d = struct.Struct("<7d")
    return _struct_7d
_struct_B3I = None
def _get_struct_B3I():
    global _struct_B3I
    if _struct_B3I is None:
        _struct_B3I = struct.Struct("<B3I")
    return _struct_B3I
