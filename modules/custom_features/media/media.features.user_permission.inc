<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function media_user_default_permissions() {
  $permissions = array();

  // Exported permission: create book content
  $permissions['create book content'] = array(
    'name' => 'create book content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: create movie content
  $permissions['create movie content'] = array(
    'name' => 'create movie content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete any book content
  $permissions['delete any book content'] = array(
    'name' => 'delete any book content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete any movie content
  $permissions['delete any movie content'] = array(
    'name' => 'delete any movie content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete own book content
  $permissions['delete own book content'] = array(
    'name' => 'delete own book content',
    'roles' => array(),
  );

  // Exported permission: delete own movie content
  $permissions['delete own movie content'] = array(
    'name' => 'delete own movie content',
    'roles' => array(),
  );

  // Exported permission: edit any book content
  $permissions['edit any book content'] = array(
    'name' => 'edit any book content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit any movie content
  $permissions['edit any movie content'] = array(
    'name' => 'edit any movie content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own book content
  $permissions['edit own book content'] = array(
    'name' => 'edit own book content',
    'roles' => array(),
  );

  // Exported permission: edit own movie content
  $permissions['edit own movie content'] = array(
    'name' => 'edit own movie content',
    'roles' => array(),
  );

  return $permissions;
}
