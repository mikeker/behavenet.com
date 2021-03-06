<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function drug_combinations_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_media
  $groups['combinations-group_media'] = array(
    'group_type' => 'standard',
    'type_name' => 'combinations',
    'group_name' => 'group_media',
    'label' => 'Media',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '4',
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
    'weight' => '4',
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
