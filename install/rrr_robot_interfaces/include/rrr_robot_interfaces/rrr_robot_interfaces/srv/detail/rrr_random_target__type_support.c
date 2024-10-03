// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rrr_robot_interfaces:srv/RRRRandomTarget.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rrr_robot_interfaces/srv/detail/rrr_random_target__rosidl_typesupport_introspection_c.h"
#include "rrr_robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rrr_robot_interfaces/srv/detail/rrr_random_target__functions.h"
#include "rrr_robot_interfaces/srv/detail/rrr_random_target__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void rrr_robot_interfaces__srv__RRRRandomTarget_Request__rosidl_typesupport_introspection_c__RRRRandomTarget_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rrr_robot_interfaces__srv__RRRRandomTarget_Request__init(message_memory);
}

void rrr_robot_interfaces__srv__RRRRandomTarget_Request__rosidl_typesupport_introspection_c__RRRRandomTarget_Request_fini_function(void * message_memory)
{
  rrr_robot_interfaces__srv__RRRRandomTarget_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rrr_robot_interfaces__srv__RRRRandomTarget_Request__rosidl_typesupport_introspection_c__RRRRandomTarget_Request_message_member_array[1] = {
  {
    "target_call",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rrr_robot_interfaces__srv__RRRRandomTarget_Request, target_call),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rrr_robot_interfaces__srv__RRRRandomTarget_Request__rosidl_typesupport_introspection_c__RRRRandomTarget_Request_message_members = {
  "rrr_robot_interfaces__srv",  // message namespace
  "RRRRandomTarget_Request",  // message name
  1,  // number of fields
  sizeof(rrr_robot_interfaces__srv__RRRRandomTarget_Request),
  rrr_robot_interfaces__srv__RRRRandomTarget_Request__rosidl_typesupport_introspection_c__RRRRandomTarget_Request_message_member_array,  // message members
  rrr_robot_interfaces__srv__RRRRandomTarget_Request__rosidl_typesupport_introspection_c__RRRRandomTarget_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  rrr_robot_interfaces__srv__RRRRandomTarget_Request__rosidl_typesupport_introspection_c__RRRRandomTarget_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rrr_robot_interfaces__srv__RRRRandomTarget_Request__rosidl_typesupport_introspection_c__RRRRandomTarget_Request_message_type_support_handle = {
  0,
  &rrr_robot_interfaces__srv__RRRRandomTarget_Request__rosidl_typesupport_introspection_c__RRRRandomTarget_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rrr_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rrr_robot_interfaces, srv, RRRRandomTarget_Request)() {
  if (!rrr_robot_interfaces__srv__RRRRandomTarget_Request__rosidl_typesupport_introspection_c__RRRRandomTarget_Request_message_type_support_handle.typesupport_identifier) {
    rrr_robot_interfaces__srv__RRRRandomTarget_Request__rosidl_typesupport_introspection_c__RRRRandomTarget_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rrr_robot_interfaces__srv__RRRRandomTarget_Request__rosidl_typesupport_introspection_c__RRRRandomTarget_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rrr_robot_interfaces/srv/detail/rrr_random_target__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rrr_robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rrr_robot_interfaces/srv/detail/rrr_random_target__functions.h"
// already included above
// #include "rrr_robot_interfaces/srv/detail/rrr_random_target__struct.h"


// Include directives for member types
// Member `random_target`
#include "geometry_msgs/msg/point.h"
// Member `random_target`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rrr_robot_interfaces__srv__RRRRandomTarget_Response__rosidl_typesupport_introspection_c__RRRRandomTarget_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rrr_robot_interfaces__srv__RRRRandomTarget_Response__init(message_memory);
}

void rrr_robot_interfaces__srv__RRRRandomTarget_Response__rosidl_typesupport_introspection_c__RRRRandomTarget_Response_fini_function(void * message_memory)
{
  rrr_robot_interfaces__srv__RRRRandomTarget_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rrr_robot_interfaces__srv__RRRRandomTarget_Response__rosidl_typesupport_introspection_c__RRRRandomTarget_Response_message_member_array[1] = {
  {
    "random_target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rrr_robot_interfaces__srv__RRRRandomTarget_Response, random_target),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rrr_robot_interfaces__srv__RRRRandomTarget_Response__rosidl_typesupport_introspection_c__RRRRandomTarget_Response_message_members = {
  "rrr_robot_interfaces__srv",  // message namespace
  "RRRRandomTarget_Response",  // message name
  1,  // number of fields
  sizeof(rrr_robot_interfaces__srv__RRRRandomTarget_Response),
  rrr_robot_interfaces__srv__RRRRandomTarget_Response__rosidl_typesupport_introspection_c__RRRRandomTarget_Response_message_member_array,  // message members
  rrr_robot_interfaces__srv__RRRRandomTarget_Response__rosidl_typesupport_introspection_c__RRRRandomTarget_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  rrr_robot_interfaces__srv__RRRRandomTarget_Response__rosidl_typesupport_introspection_c__RRRRandomTarget_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rrr_robot_interfaces__srv__RRRRandomTarget_Response__rosidl_typesupport_introspection_c__RRRRandomTarget_Response_message_type_support_handle = {
  0,
  &rrr_robot_interfaces__srv__RRRRandomTarget_Response__rosidl_typesupport_introspection_c__RRRRandomTarget_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rrr_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rrr_robot_interfaces, srv, RRRRandomTarget_Response)() {
  rrr_robot_interfaces__srv__RRRRandomTarget_Response__rosidl_typesupport_introspection_c__RRRRandomTarget_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!rrr_robot_interfaces__srv__RRRRandomTarget_Response__rosidl_typesupport_introspection_c__RRRRandomTarget_Response_message_type_support_handle.typesupport_identifier) {
    rrr_robot_interfaces__srv__RRRRandomTarget_Response__rosidl_typesupport_introspection_c__RRRRandomTarget_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rrr_robot_interfaces__srv__RRRRandomTarget_Response__rosidl_typesupport_introspection_c__RRRRandomTarget_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rrr_robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rrr_robot_interfaces/srv/detail/rrr_random_target__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rrr_robot_interfaces__srv__detail__rrr_random_target__rosidl_typesupport_introspection_c__RRRRandomTarget_service_members = {
  "rrr_robot_interfaces__srv",  // service namespace
  "RRRRandomTarget",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // rrr_robot_interfaces__srv__detail__rrr_random_target__rosidl_typesupport_introspection_c__RRRRandomTarget_Request_message_type_support_handle,
  NULL  // response message
  // rrr_robot_interfaces__srv__detail__rrr_random_target__rosidl_typesupport_introspection_c__RRRRandomTarget_Response_message_type_support_handle
};

static rosidl_service_type_support_t rrr_robot_interfaces__srv__detail__rrr_random_target__rosidl_typesupport_introspection_c__RRRRandomTarget_service_type_support_handle = {
  0,
  &rrr_robot_interfaces__srv__detail__rrr_random_target__rosidl_typesupport_introspection_c__RRRRandomTarget_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rrr_robot_interfaces, srv, RRRRandomTarget_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rrr_robot_interfaces, srv, RRRRandomTarget_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rrr_robot_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rrr_robot_interfaces, srv, RRRRandomTarget)() {
  if (!rrr_robot_interfaces__srv__detail__rrr_random_target__rosidl_typesupport_introspection_c__RRRRandomTarget_service_type_support_handle.typesupport_identifier) {
    rrr_robot_interfaces__srv__detail__rrr_random_target__rosidl_typesupport_introspection_c__RRRRandomTarget_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rrr_robot_interfaces__srv__detail__rrr_random_target__rosidl_typesupport_introspection_c__RRRRandomTarget_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rrr_robot_interfaces, srv, RRRRandomTarget_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rrr_robot_interfaces, srv, RRRRandomTarget_Response)()->data;
  }

  return &rrr_robot_interfaces__srv__detail__rrr_random_target__rosidl_typesupport_introspection_c__RRRRandomTarget_service_type_support_handle;
}
