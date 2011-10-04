<?php

/**
 * Implementation of hook_strongarm().
 */
function trade_name_drugs_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_drug';
  $strongarm->value = '0';
  $export['ant_drug'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_drug';
  $strongarm->value = '';
  $export['ant_pattern_drug'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_drug';
  $strongarm->value = 0;
  $export['ant_php_drug'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_drug';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '4',
    'author' => '7',
    'options' => '8',
    'comment_settings' => '6',
    'menu' => '3',
    'path' => '5',
  );
  $export['content_extra_weights_drug'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_drug';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_drug'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_drug_pattern';
  $strongarm->value = '';
  $export['pathauto_node_drug_pattern'] = $strongarm;

  return $export;
}
