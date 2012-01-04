<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function behavenet_directory_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function behavenet_directory_node_info() {
  $items = array(
    'directory' => array(
      'name' => t('Directory'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Administrative title (leave blank to use URL)'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
