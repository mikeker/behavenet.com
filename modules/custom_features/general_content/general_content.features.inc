<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function general_content_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function general_content_node_info() {
  $items = array(
    'company' => array(
      'name' => t('Company'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Company Name'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'compound' => array(
      'name' => t('Compound'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Compound Name'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'device' => array(
      'name' => t('Device'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Device name'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'indication' => array(
      'name' => t('Indications'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Admin Title'),
      'has_body' => '1',
      'body_label' => t('Indication Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page'),
      'module' => 'features',
      'description' => t('A <em>page</em> is used for creating and displaying information that rarely changes, such as an "About us" section of a website.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'people' => array(
      'name' => t('People'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Bio'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'preparation' => array(
      'name' => t('Preparation'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Preparation'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'sources' => array(
      'name' => t('Sources'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Common name'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function general_content_views_api() {
  return array(
    'api' => '2',
  );
}
