<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function generic_drugs_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_media
  $groups['generic-group_media'] = array(
    'group_type' => 'standard',
    'type_name' => 'generic',
    'group_name' => 'group_media',
    'label' => 'Media',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '6',
        'parent' => '',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '6',
    'parent' => '',
    'fields' => array(
      '0' => 'field_generic_graphic',
      '1' => 'field_outside_video',
      '2' => 'field_tt_extras_credit',
    ),
    'depth' => 0,
    'parents' => array(
      '0' => '',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Media');

  return $groups;
}
