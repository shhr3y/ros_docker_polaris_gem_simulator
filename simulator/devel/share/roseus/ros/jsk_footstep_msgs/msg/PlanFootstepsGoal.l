;; Auto-generated. Do not edit!


(when (boundp 'jsk_footstep_msgs::PlanFootstepsGoal)
  (if (not (find-package "JSK_FOOTSTEP_MSGS"))
    (make-package "JSK_FOOTSTEP_MSGS"))
  (shadow 'PlanFootstepsGoal (find-package "JSK_FOOTSTEP_MSGS")))
(unless (find-package "JSK_FOOTSTEP_MSGS::PLANFOOTSTEPSGOAL")
  (make-package "JSK_FOOTSTEP_MSGS::PLANFOOTSTEPSGOAL"))

(in-package "ROS")
;;//! \htmlinclude PlanFootstepsGoal.msg.html


(defclass jsk_footstep_msgs::PlanFootstepsGoal
  :super ros::object
  :slots (_goal_footstep _initial_footstep _timeout ))

(defmethod jsk_footstep_msgs::PlanFootstepsGoal
  (:init
   (&key
    ((:goal_footstep __goal_footstep) (instance jsk_footstep_msgs::FootstepArray :init))
    ((:initial_footstep __initial_footstep) (instance jsk_footstep_msgs::FootstepArray :init))
    ((:timeout __timeout) (instance ros::time :init))
    )
   (send-super :init)
   (setq _goal_footstep __goal_footstep)
   (setq _initial_footstep __initial_footstep)
   (setq _timeout __timeout)
   self)
  (:goal_footstep
   (&rest __goal_footstep)
   (if (keywordp (car __goal_footstep))
       (send* _goal_footstep __goal_footstep)
     (progn
       (if __goal_footstep (setq _goal_footstep (car __goal_footstep)))
       _goal_footstep)))
  (:initial_footstep
   (&rest __initial_footstep)
   (if (keywordp (car __initial_footstep))
       (send* _initial_footstep __initial_footstep)
     (progn
       (if __initial_footstep (setq _initial_footstep (car __initial_footstep)))
       _initial_footstep)))
  (:timeout
   (&optional __timeout)
   (if __timeout (setq _timeout __timeout)) _timeout)
  (:serialization-length
   ()
   (+
    ;; jsk_footstep_msgs/FootstepArray _goal_footstep
    (send _goal_footstep :serialization-length)
    ;; jsk_footstep_msgs/FootstepArray _initial_footstep
    (send _initial_footstep :serialization-length)
    ;; duration _timeout
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; jsk_footstep_msgs/FootstepArray _goal_footstep
       (send _goal_footstep :serialize s)
     ;; jsk_footstep_msgs/FootstepArray _initial_footstep
       (send _initial_footstep :serialize s)
     ;; duration _timeout
       (write-long (send _timeout :sec) s) (write-long (send _timeout :nsec) s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; jsk_footstep_msgs/FootstepArray _goal_footstep
     (send _goal_footstep :deserialize buf ptr-) (incf ptr- (send _goal_footstep :serialization-length))
   ;; jsk_footstep_msgs/FootstepArray _initial_footstep
     (send _initial_footstep :deserialize buf ptr-) (incf ptr- (send _initial_footstep :serialization-length))
   ;; duration _timeout
     (send _timeout :sec (sys::peek buf ptr- :integer)) (incf ptr- 4)  (send _timeout :nsec (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get jsk_footstep_msgs::PlanFootstepsGoal :md5sum-) "68011023a311776030c53b8ca437fae1")
(setf (get jsk_footstep_msgs::PlanFootstepsGoal :datatype-) "jsk_footstep_msgs/PlanFootstepsGoal")
(setf (get jsk_footstep_msgs::PlanFootstepsGoal :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# goal
FootstepArray goal_footstep
FootstepArray initial_footstep
duration timeout

================================================================================
MSG: jsk_footstep_msgs/FootstepArray
Header header
Footstep[] footsteps
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
MSG: jsk_footstep_msgs/Footstep
uint8 RIGHT=2
uint8 LEFT=1

# Constants to visualize progress
uint8 REJECTED=3
uint8 APPROVED=4

## limb_indicator values
uint8 LLEG=1
uint8 RLEG=2
uint8 LARM=5
uint8 RARM=6

uint8 leg ## value should be one of limb_indicator values.
geometry_msgs/Pose pose ## 'pose' represents nominal pose. It may be an end-effector of limb.
duration duration
# optional parameters
uint32 footstep_group
geometry_msgs/Vector3 dimensions ## cube [length(x), width(y), height(z)]
geometry_msgs/Vector3 offset     ## offset from pose to center of cube
float32 swing_height
float32 cost

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

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
float64 z
")



(provide :jsk_footstep_msgs/PlanFootstepsGoal "68011023a311776030c53b8ca437fae1")


