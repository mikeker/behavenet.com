<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function general_content_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-directories:directory/academic-center
  $menu_links['menu-directories:directory/academic-center'] = array(
    'menu_name' => 'menu-directories',
    'link_path' => 'directory/academic-center',
    'router_path' => 'directory/%',
    'link_title' => 'Academic Center',
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
    'weight' => '-49',
  );
  // Exported menu link: menu-directories:directory/advocacy-organization
  $menu_links['menu-directories:directory/advocacy-organization'] = array(
    'menu_name' => 'menu-directories',
    'link_path' => 'directory/advocacy-organization',
    'router_path' => 'directory/%',
    'link_title' => 'Advocacy',
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
    'weight' => '-50',
  );
  // Exported menu link: menu-directories:directory/forensic-examiner
  $menu_links['menu-directories:directory/forensic-examiner'] = array(
    'menu_name' => 'menu-directories',
    'link_path' => 'directory/forensic-examiner',
    'router_path' => 'directory/%',
    'link_title' => 'Forensic Examiner',
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
    'weight' => '-47',
  );
  // Exported menu link: menu-directories:directory/professional-association
  $menu_links['menu-directories:directory/professional-association'] = array(
    'menu_name' => 'menu-directories',
    'link_path' => 'directory/professional-association',
    'router_path' => 'directory/%',
    'link_title' => 'Professional Association',
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
  // Exported menu link: menu-directories:directory/support-organization
  $menu_links['menu-directories:directory/support-organization'] = array(
    'menu_name' => 'menu-directories',
    'link_path' => 'directory/support-organization',
    'router_path' => 'directory/%',
    'link_title' => 'Support',
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
    'weight' => '-48',
  );
  // Exported menu link: menu-main-tabs:node/27497
  $menu_links['menu-main-tabs:node/27497'] = array(
    'menu_name' => 'menu-main-tabs',
    'link_path' => 'node/27497',
    'router_path' => 'node/%',
    'link_title' => 'Drugs',
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
    'weight' => '0',
  );
  // Exported menu link: menu-main-tabs:taxonomy/term/6678
  $menu_links['menu-main-tabs:taxonomy/term/6678'] = array(
    'menu_name' => 'menu-main-tabs',
    'link_path' => 'taxonomy/term/6678',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Addiction',
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
    'weight' => '0',
  );
  // Exported menu link: menu-main-tabs:taxonomy/term/6783
  $menu_links['menu-main-tabs:taxonomy/term/6783'] = array(
    'menu_name' => 'menu-main-tabs',
    'link_path' => 'taxonomy/term/6783',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Diagnosis',
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
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Academic Center');
  t('Addiction');
  t('Advocacy');
  t('Diagnosis');
  t('Drugs');
  t('Forensic Examiner');
  t('Professional Association');
  t('Support');


  return $menu_links;
}