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

  // Exported permission: create dsm_caution content
  $permissions['create dsm_caution content'] = array(
    'name' => 'create dsm_caution content',
    'roles' => array(),
  );

  // Exported permission: create tax_tweaks_extras content
  $permissions['create tax_tweaks_extras content'] = array(
    'name' => 'create tax_tweaks_extras content',
    'roles' => array(),
  );

  // Exported permission: delete any dsm content
  $permissions['delete any dsm content'] = array(
    'name' => 'delete any dsm content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete any dsm_caution content
  $permissions['delete any dsm_caution content'] = array(
    'name' => 'delete any dsm_caution content',
    'roles' => array(),
  );

  // Exported permission: delete any tax_tweaks_extras content
  $permissions['delete any tax_tweaks_extras content'] = array(
    'name' => 'delete any tax_tweaks_extras content',
    'roles' => array(),
  );

  // Exported permission: delete own dsm content
  $permissions['delete own dsm content'] = array(
    'name' => 'delete own dsm content',
    'roles' => array(),
  );

  // Exported permission: delete own dsm_caution content
  $permissions['delete own dsm_caution content'] = array(
    'name' => 'delete own dsm_caution content',
    'roles' => array(),
  );

  // Exported permission: delete own tax_tweaks_extras content
  $permissions['delete own tax_tweaks_extras content'] = array(
    'name' => 'delete own tax_tweaks_extras content',
    'roles' => array(),
  );

  // Exported permission: edit any dsm content
  $permissions['edit any dsm content'] = array(
    'name' => 'edit any dsm content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit any dsm_caution content
  $permissions['edit any dsm_caution content'] = array(
    'name' => 'edit any dsm_caution content',
    'roles' => array(),
  );

  // Exported permission: edit any tax_tweaks_extras content
  $permissions['edit any tax_tweaks_extras content'] = array(
    'name' => 'edit any tax_tweaks_extras content',
    'roles' => array(),
  );

  // Exported permission: edit own dsm content
  $permissions['edit own dsm content'] = array(
    'name' => 'edit own dsm content',
    'roles' => array(),
  );

  // Exported permission: edit own dsm_caution content
  $permissions['edit own dsm_caution content'] = array(
    'name' => 'edit own dsm_caution content',
    'roles' => array(),
  );

  // Exported permission: edit own tax_tweaks_extras content
  $permissions['edit own tax_tweaks_extras content'] = array(
    'name' => 'edit own tax_tweaks_extras content',
    'roles' => array(),
  );

  return $permissions;
}
