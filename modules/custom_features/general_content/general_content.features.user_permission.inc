<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function general_content_user_default_permissions() {
  $permissions = array();

  // Exported permission: create company content
  $permissions['create company content'] = array(
    'name' => 'create company content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: create compound content
  $permissions['create compound content'] = array(
    'name' => 'create compound content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: create indication content
  $permissions['create indication content'] = array(
    'name' => 'create indication content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: create page content
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: create people content
  $permissions['create people content'] = array(
    'name' => 'create people content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: create preparation content
  $permissions['create preparation content'] = array(
    'name' => 'create preparation content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: create sources content
  $permissions['create sources content'] = array(
    'name' => 'create sources content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete any company content
  $permissions['delete any company content'] = array(
    'name' => 'delete any company content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete any compound content
  $permissions['delete any compound content'] = array(
    'name' => 'delete any compound content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete any indication content
  $permissions['delete any indication content'] = array(
    'name' => 'delete any indication content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete any page content
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete any people content
  $permissions['delete any people content'] = array(
    'name' => 'delete any people content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete any preparation content
  $permissions['delete any preparation content'] = array(
    'name' => 'delete any preparation content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete any sources content
  $permissions['delete any sources content'] = array(
    'name' => 'delete any sources content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete own company content
  $permissions['delete own company content'] = array(
    'name' => 'delete own company content',
    'roles' => array(),
  );

  // Exported permission: delete own compound content
  $permissions['delete own compound content'] = array(
    'name' => 'delete own compound content',
    'roles' => array(),
  );

  // Exported permission: delete own indication content
  $permissions['delete own indication content'] = array(
    'name' => 'delete own indication content',
    'roles' => array(),
  );

  // Exported permission: delete own page content
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(),
  );

  // Exported permission: delete own people content
  $permissions['delete own people content'] = array(
    'name' => 'delete own people content',
    'roles' => array(),
  );

  // Exported permission: delete own preparation content
  $permissions['delete own preparation content'] = array(
    'name' => 'delete own preparation content',
    'roles' => array(),
  );

  // Exported permission: delete own sources content
  $permissions['delete own sources content'] = array(
    'name' => 'delete own sources content',
    'roles' => array(),
  );

  // Exported permission: edit any company content
  $permissions['edit any company content'] = array(
    'name' => 'edit any company content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit any compound content
  $permissions['edit any compound content'] = array(
    'name' => 'edit any compound content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit any indication content
  $permissions['edit any indication content'] = array(
    'name' => 'edit any indication content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit any page content
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit any people content
  $permissions['edit any people content'] = array(
    'name' => 'edit any people content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit any preparation content
  $permissions['edit any preparation content'] = array(
    'name' => 'edit any preparation content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit any sources content
  $permissions['edit any sources content'] = array(
    'name' => 'edit any sources content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own company content
  $permissions['edit own company content'] = array(
    'name' => 'edit own company content',
    'roles' => array(),
  );

  // Exported permission: edit own compound content
  $permissions['edit own compound content'] = array(
    'name' => 'edit own compound content',
    'roles' => array(),
  );

  // Exported permission: edit own indication content
  $permissions['edit own indication content'] = array(
    'name' => 'edit own indication content',
    'roles' => array(),
  );

  // Exported permission: edit own page content
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(),
  );

  // Exported permission: edit own people content
  $permissions['edit own people content'] = array(
    'name' => 'edit own people content',
    'roles' => array(),
  );

  // Exported permission: edit own preparation content
  $permissions['edit own preparation content'] = array(
    'name' => 'edit own preparation content',
    'roles' => array(),
  );

  // Exported permission: edit own sources content
  $permissions['edit own sources content'] = array(
    'name' => 'edit own sources content',
    'roles' => array(),
  );

  return $permissions;
}
