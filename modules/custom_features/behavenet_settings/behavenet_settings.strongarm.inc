<?php

/**
 * Implementation of hook_strongarm().
 */
function behavenet_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_expanded';
  $strongarm->value = array();
  $export['menu_expanded'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_masks';
  $strongarm->value = array(
    0 => 127,
    1 => 125,
    2 => 63,
    3 => 62,
    4 => 61,
    5 => 59,
    6 => 58,
    7 => 57,
    8 => 56,
    9 => 44,
    10 => 31,
    11 => 30,
    12 => 29,
    13 => 28,
    14 => 24,
    15 => 23,
    16 => 21,
    17 => 15,
    18 => 14,
    19 => 11,
    20 => 7,
    21 => 6,
    22 => 5,
    23 => 4,
    24 => 3,
    25 => 2,
    26 => 1,
  );
  $export['menu_masks'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_behavenet_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 0,
    'toggle_mission' => 1,
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => 0,
    'toggle_search' => 1,
    'toggle_favicon' => 1,
    'toggle_primary_links' => 1,
    'toggle_secondary_links' => 1,
    'default_logo' => 0,
    'logo_path' => 'sites/behavenet.com/themes/Behavenet/images/BehaveNet-logo-with-text.jpg',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'zen_block_editing' => 1,
    'zen_breadcrumb' => 'yes',
    'zen_breadcrumb_separator' => ' › ',
    'zen_breadcrumb_home' => 1,
    'zen_breadcrumb_trailing' => 1,
    'zen_breadcrumb_title' => 0,
    'zen_rebuild_registry' => 1,
    'zen_layout' => 'zen-columns-liquid',
    'zen_wireframes' => 0,
  );
  $export['theme_behavenet_settings'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'behavenet';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_bulk_operations_actions';
  $strongarm->value = 'a:11:{i:0;s:10:"user_roles";i:1;s:6:"delete";i:2;s:16:"content_taxonomy";i:3;s:7:"profile";i:4;s:4:"book";i:5;s:7:"archive";i:6;s:7:"ruleset";i:7;s:6:"fields";i:8;s:8:"taxonomy";i:9;s:17:"argument_selector";i:10;s:6:"script";}';
  $export['views_bulk_operations_actions'] = $strongarm;

  return $export;
}
