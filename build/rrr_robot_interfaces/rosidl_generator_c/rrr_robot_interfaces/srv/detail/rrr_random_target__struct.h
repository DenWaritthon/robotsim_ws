// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rrr_robot_interfaces:srv/RRRRandomTarget.idl
// generated code does not contain a copyright notice

#ifndef RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_RANDOM_TARGET__STRUCT_H_
#define RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_RANDOM_TARGET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/RRRRandomTarget in the package rrr_robot_interfaces.
typedef struct rrr_robot_interfaces__srv__RRRRandomTarget_Request
{
  bool target_call;
} rrr_robot_interfaces__srv__RRRRandomTarget_Request;

// Struct for a sequence of rrr_robot_interfaces__srv__RRRRandomTarget_Request.
typedef struct rrr_robot_interfaces__srv__RRRRandomTarget_Request__Sequence
{
  rrr_robot_interfaces__srv__RRRRandomTarget_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rrr_robot_interfaces__srv__RRRRandomTarget_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/RRRRandomTarget in the package rrr_robot_interfaces.
typedef struct rrr_robot_interfaces__srv__RRRRandomTarget_Response
{
  double random_target_x;
  double random_target_y;
  double random_target_z;
} rrr_robot_interfaces__srv__RRRRandomTarget_Response;

// Struct for a sequence of rrr_robot_interfaces__srv__RRRRandomTarget_Response.
typedef struct rrr_robot_interfaces__srv__RRRRandomTarget_Response__Sequence
{
  rrr_robot_interfaces__srv__RRRRandomTarget_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rrr_robot_interfaces__srv__RRRRandomTarget_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_RANDOM_TARGET__STRUCT_H_
