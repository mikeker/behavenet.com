<?php

/**
 * Implementation of hook_default_mobile_codes_provider().
 */
function general_content_default_mobile_codes_provider() {
  $export = array();

  $provider = new stdClass;
  $provider->disabled = FALSE; /* Edit this to true to make a default provider disabled initially */
  $provider->api_version = 2;
  $provider->name = 'behavenet_google';
  $provider->url = 'https://chart.googleapis.com/chart?chs=[width]x[height]&cht=qr&chl=[data]&choe=UTF-8&chld=L|1';
  $provider->parameters = array(
    'width' => array(
      'label' => 'Width',
      'type' => 'text',
    ),
    'height' => array(
      'label' => 'Height',
      'type' => 'text',
    ),
    'data' => array(
      'type' => 'data',
    ),
  );
  $export['behavenet_google'] = $provider;

  return $export;
}
