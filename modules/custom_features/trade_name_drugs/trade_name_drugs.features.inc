<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function trade_name_drugs_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function trade_name_drugs_node_info() {
  $items = array(
    'drug' => array(
      'name' => t('Drug'),
      'module' => 'features',
      'description' => t('Trade name drugs'),
      'has_title' => '1',
      'title_label' => t('Name'),
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
function trade_name_drugs_views_api() {
  return array(
    'api' => '2',
  );
}
