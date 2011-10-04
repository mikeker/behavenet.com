<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function generic_drugs_user_default_permissions() {
  $permissions = array();

  // Exported permission: create generic content
  $permissions['create generic content'] = array(
    'name' => 'create generic content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete any generic content
  $permissions['delete any generic content'] = array(
    'name' => 'delete any generic content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete own generic content
  $permissions['delete own generic content'] = array(
    'name' => 'delete own generic content',
    'roles' => array(),
  );

  // Exported permission: edit any generic content
  $permissions['edit any generic content'] = array(
    'name' => 'edit any generic content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own generic content
  $permissions['edit own generic content'] = array(
    'name' => 'edit own generic content',
    'roles' => array(),
  );

  return $permissions;
}
