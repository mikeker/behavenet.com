<?php

/**
 * Implementation of hook_content_default_fields().
 */
function bn_opinion_content_default_fields() {
  $fields = array();

  // Exported field: field_terms
  $fields['opinion-field_terms'] = array(
    'field_name' => 'field_terms',
    'type_name' => 'opinion',
    'display_settings' => array(
      'weight' => 0,
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'link',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'link',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'content_taxonomy',
    'required' => '0',
    'multiple' => '1',
    'module' => 'content_taxonomy',
    'active' => '1',
    'save_term_node' => 1,
    'vid' => '5',
    'parent' => '0',
    'parent_php_code' => '',
    'depth' => '',
    'widget' => array(
      'new_terms' => 'deny',
      'extra_parent' => '0',
      'maxlength' => '99999',
      'active_tags' => 1,
      'default_value' => NULL,
      'default_value_php' => NULL,
      'expand_all' => 0,
      'label' => 'Terms',
      'weight' => '-4',
      'description' => '',
      'type' => 'content_taxonomy_autocomplete',
      'module' => 'content_taxonomy_autocomplete',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Terms');

  return $fields;
}
