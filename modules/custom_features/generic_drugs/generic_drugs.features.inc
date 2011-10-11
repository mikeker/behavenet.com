<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function generic_drugs_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function generic_drugs_imagecache_default_presets() {
  $items = array(
    'Image-Standard' => array(
      'presetname' => 'Image-Standard',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '425',
            'height' => '350',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function generic_drugs_node_info() {
  $items = array(
    'generic' => array(
      'name' => t('Generic'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Generic Name'),
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
function generic_drugs_views_api() {
  return array(
    'api' => '2',
  );
}
