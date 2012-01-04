<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function behavenet_directory_user_default_permissions() {
  $permissions = array();

  // Exported permission: create directory content
  $permissions['create directory content'] = array(
    'name' => 'create directory content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete any directory content
  $permissions['delete any directory content'] = array(
    'name' => 'delete any directory content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete own directory content
  $permissions['delete own directory content'] = array(
    'name' => 'delete own directory content',
    'roles' => array(),
  );

  // Exported permission: edit any directory content
  $permissions['edit any directory content'] = array(
    'name' => 'edit any directory content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own directory content
  $permissions['edit own directory content'] = array(
    'name' => 'edit own directory content',
    'roles' => array(),
  );

  return $permissions;
}
