<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function terms_display_user_default_permissions() {
  $permissions = array();

  // Exported permission: create dsm content
  $permissions['create dsm content'] = array(
    'name' => 'create dsm content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete any dsm content
  $permissions['delete any dsm content'] = array(
    'name' => 'delete any dsm content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete own dsm content
  $permissions['delete own dsm content'] = array(
    'name' => 'delete own dsm content',
    'roles' => array(),
  );

  // Exported permission: edit any dsm content
  $permissions['edit any dsm content'] = array(
    'name' => 'edit any dsm content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own dsm content
  $permissions['edit own dsm content'] = array(
    'name' => 'edit own dsm content',
    'roles' => array(),
  );

  return $permissions;
}
