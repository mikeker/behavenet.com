<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function terms_display_ctools_plugin_api() {
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
function terms_display_node_info() {
  $items = array(
    'dsm' => array(
      'name' => t('DSM Criteria'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('DSM Criteria Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'dsm_caution' => array(
      'name' => t('Cautionary statement'),
      'module' => 'features',
      'description' => t('The Cautionary statement that appears with many DSM diagnosis'),
      'has_title' => '1',
      'title_label' => t('Title'),
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
function terms_display_views_api() {
  return array(
    'api' => '2',
  );
}
