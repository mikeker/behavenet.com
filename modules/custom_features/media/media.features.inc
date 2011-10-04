<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function media_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function media_node_info() {
  $items = array(
    'book' => array(
      'name' => t('Book'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'movie' => array(
      'name' => t('Movie'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Movie Title'),
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
function media_views_api() {
  return array(
    'api' => '2',
  );
}
