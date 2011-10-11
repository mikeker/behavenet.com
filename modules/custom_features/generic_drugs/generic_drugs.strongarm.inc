<?php

/**
 * Implementation of hook_strongarm().
 */
function generic_drugs_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_generic';
  $strongarm->value = '0';
  $export['ant_generic'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_generic';
  $strongarm->value = '';
  $export['ant_pattern_generic'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_generic';
  $strongarm->value = 0;
  $export['ant_php_generic'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_generic';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '14',
    'author' => '18',
    'options' => '19',
    'comment_settings' => '17',
    'menu' => '15',
    'path' => '16',
  );
  $export['content_extra_weights_generic'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_generic';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_generic'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_generic_pattern';
  $strongarm->value = '';
  $export['pathauto_node_generic_pattern'] = $strongarm;

  return $export;
}
