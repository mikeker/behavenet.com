<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function drug_combinations_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function drug_combinations_node_info() {
  $items = array(
    'combinations' => array(
      'name' => t('Drug Combinations'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Combination Title'),
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
function drug_combinations_views_api() {
  return array(
    'api' => '2',
  );
}
