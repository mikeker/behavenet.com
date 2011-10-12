<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function general_content_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_people_media
  $groups['people-group_people_media'] = array(
    'group_type' => 'standard',
    'type_name' => 'people',
    'group_name' => 'group_people_media',
    'label' => 'Media',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '1',
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
    'weight' => '1',
    'parent' => '',
    'fields' => array(
      '0' => 'field_people_image',
      '1' => 'field_outside_video',
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
