<?php

/**
 * Implementation of hook_strongarm().
 */
function drug_combinations_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_combinations';
  $strongarm->value = '1';
  $export['ant_combinations'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_combinations';
  $strongarm->value = 'Drug Combination';
  $export['ant_pattern_combinations'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_combinations';
  $strongarm->value = 0;
  $export['ant_php_combinations'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_combinations';
  $strongarm->value = '0';
  $export['comment_anonymous_combinations'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_combinations';
  $strongarm->value = '0';
  $export['comment_combinations'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_combinations';
  $strongarm->value = '3';
  $export['comment_controls_combinations'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_combinations';
  $strongarm->value = '4';
  $export['comment_default_mode_combinations'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_combinations';
  $strongarm->value = '1';
  $export['comment_default_order_combinations'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_combinations';
  $strongarm->value = '50';
  $export['comment_default_per_page_combinations'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_combinations';
  $strongarm->value = '0';
  $export['comment_form_location_combinations'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_combinations';
  $strongarm->value = '1';
  $export['comment_preview_combinations'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_combinations';
  $strongarm->value = '1';
  $export['comment_subject_field_combinations'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_combinations';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '5',
    'author' => '4',
    'options' => '6',
    'comment_settings' => '7',
    'menu' => '3',
    'path' => '8',
  );
  $export['content_extra_weights_combinations'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_combinations';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_combinations'] = $strongarm;

  return $export;
}