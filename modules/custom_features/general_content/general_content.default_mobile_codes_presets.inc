<?php

/**
 * Implementation of hook_default_mobile_codes_preset().
 */
function general_content_default_mobile_codes_preset() {
  $export = array();

  $preset = new stdClass;
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 2;
  $preset->name = 'behavenet_qr';
  $preset->provider = 'behavenet_google';
  $preset->defaults = array(
    'width' => '125',
    'height' => '125',
  );
  $export['behavenet_qr'] = $preset;

  return $export;
}
