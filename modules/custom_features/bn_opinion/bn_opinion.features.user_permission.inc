<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function bn_opinion_user_default_permissions() {
  $permissions = array();

  // Exported permission: create opinion content
  $permissions['create opinion content'] = array(
    'name' => 'create opinion content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete any opinion content
  $permissions['delete any opinion content'] = array(
    'name' => 'delete any opinion content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete own opinion content
  $permissions['delete own opinion content'] = array(
    'name' => 'delete own opinion content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit any opinion content
  $permissions['edit any opinion content'] = array(
    'name' => 'edit any opinion content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own opinion content
  $permissions['edit own opinion content'] = array(
    'name' => 'edit own opinion content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}
