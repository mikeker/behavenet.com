<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function general_content_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-main-tabs:<front>
  $menu_links['menu-main-tabs:<front>'] = array(
    'menu_name' => 'menu-main-tabs',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Disorders',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-main-tabs:node/27644
  $menu_links['menu-main-tabs:node/27644'] = array(
    'menu_name' => 'menu-main-tabs',
    'link_path' => 'node/27644',
    'router_path' => 'node/%',
    'link_title' => 'Drugs',
    'options' => array(
      'attributes' => array(
        'title' => 'Drugs',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-main-tabs:node/27645
  $menu_links['menu-main-tabs:node/27645'] = array(
    'menu_name' => 'menu-main-tabs',
    'link_path' => 'node/27645',
    'router_path' => 'node/%',
    'link_title' => 'Terms',
    'options' => array(
      'attributes' => array(
        'title' => 'Terms',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: menu-main-tabs:node/27646
  $menu_links['menu-main-tabs:node/27646'] = array(
    'menu_name' => 'menu-main-tabs',
    'link_path' => 'node/27646',
    'router_path' => 'node/%',
    'link_title' => 'People',
    'options' => array(
      'attributes' => array(
        'title' => 'People',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-main-tabs:node/27647
  $menu_links['menu-main-tabs:node/27647'] = array(
    'menu_name' => 'menu-main-tabs',
    'link_path' => 'node/27647',
    'router_path' => 'node/%',
    'link_title' => 'Directories',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: menu-main-tabs:node/27648
  $menu_links['menu-main-tabs:node/27648'] = array(
    'menu_name' => 'menu-main-tabs',
    'link_path' => 'node/27648',
    'router_path' => 'node/%',
    'link_title' => 'Disorders',
    'options' => array(
      'attributes' => array(
        'title' => 'Disorders',
      ),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Directories');
  t('Disorders');
  t('Drugs');
  t('People');
  t('Terms');


  return $menu_links;
}
