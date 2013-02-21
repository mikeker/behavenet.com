<?php

/**
 * Implementation of hook_strongarm().
 */
function media_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_book';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '5',
    'author' => '6',
    'options' => '7',
    'comment_settings' => '9',
    'menu' => '4',
    'path' => '8',
  );
  $export['content_extra_weights_book'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_movie';
  $strongarm->value = array(
    'title' => '0',
    'revision_information' => '15',
    'author' => '14',
    'options' => '16',
    'comment_settings' => '17',
    'menu' => '13',
    'path' => '18',
    'xmlsitemap' => '19',
  );
  $export['content_extra_weights_movie'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_book';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_book'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_movie';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_movie'] = $strongarm;

  return $export;
}
