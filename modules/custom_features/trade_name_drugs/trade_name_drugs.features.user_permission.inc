<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function trade_name_drugs_user_default_permissions() {
  $permissions = array();

  // Exported permission: create drug content
  $permissions['create drug content'] = array(
    'name' => 'create drug content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete any drug content
  $permissions['delete any drug content'] = array(
    'name' => 'delete any drug content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete own drug content
  $permissions['delete own drug content'] = array(
    'name' => 'delete own drug content',
    'roles' => array(),
  );

  // Exported permission: edit any drug content
  $permissions['edit any drug content'] = array(
    'name' => 'edit any drug content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own drug content
  $permissions['edit own drug content'] = array(
    'name' => 'edit own drug content',
    'roles' => array(),
  );

  return $permissions;
}
