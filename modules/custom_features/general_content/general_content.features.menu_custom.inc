<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function general_content_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-directories
  $menus['menu-directories'] = array(
    'menu_name' => 'menu-directories',
    'title' => 'Directories',
    'description' => '',
  );
  // Exported menu: menu-main-tabs
  $menus['menu-main-tabs'] = array(
    'menu_name' => 'menu-main-tabs',
    'title' => 'Main tabs',
    'description' => 'Main Behavenet tabs, rendered at the top right of the page',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Directories');
  t('Main Behavenet tabs, rendered at the top right of the page');
  t('Main tabs');


  return $menus;
}
