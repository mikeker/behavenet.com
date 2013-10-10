<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function general_content_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_media
  $groups['compound-group_media'] = array(
    'group_type' => 'standard',
    'type_name' => 'compound',
    'group_name' => 'group_media',
    'label' => 'Media',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '-1',
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
    'weight' => '0',
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
        'weight' => '4',
        'parent' => '',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'no_style',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'no_style',
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
      '0' => 'field_people_image',
      '1' => 'field_outside_video',
    ),
    'depth' => 0,
    'parents' => array(
      '0' => '',
    ),
  );

  // Exported group: group_media
  $groups['preparation-group_media'] = array(
    'group_type' => 'standard',
    'type_name' => 'preparation',
    'group_name' => 'group_media',
    'label' => 'Media',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '2',
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
    'weight' => '2',
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

  // Exported group: group_media
  $groups['sources-group_media'] = array(
    'group_type' => 'standard',
    'type_name' => 'sources',
    'group_name' => 'group_media',
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
