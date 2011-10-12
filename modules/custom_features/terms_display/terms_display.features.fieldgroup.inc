<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function terms_display_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_dsm_criteria
  $groups['dsm-group_dsm_criteria'] = array(
    'group_type' => 'multigroup',
    'type_name' => 'dsm',
    'group_name' => 'group_dsm_criteria',
    'label' => 'DSM Criteria',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '-3',
        'parent' => '',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'settings' => array(),
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
      'multigroup' => array(
        'subgroup' => array(
          'weight' => -20,
          'label' => 'above',
          'teaser' => array(
            'format' => 'fieldset',
            'exclude' => 0,
          ),
          'full' => array(
            'format' => 'fieldset',
            'exclude' => 0,
          ),
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
        'multiple-columns' => 0,
        'required' => 1,
        'multiple' => '1',
        'labels' => array(
          '0' => 'Current Diagnostic Criteria',
          '1' => '',
          '2' => '',
          '3' => '',
          '4' => '',
          '5' => '',
          '6' => '',
          '7' => '',
          '8' => '',
          '9' => '',
        ),
      ),
    ),
    'weight' => '-3',
    'parent' => '',
    'fields' => array(
      '0' => 'field_dsm_version',
      '1' => 'field_dsm_body',
    ),
    'depth' => 0,
    'parents' => array(
      '0' => '',
    ),
  );

  // Exported group: group_media
  $groups['tax_tweaks_extras-group_media'] = array(
    'group_type' => 'standard',
    'type_name' => 'tax_tweaks_extras',
    'group_name' => 'group_media',
    'label' => 'Media',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '-2',
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
    'weight' => '-2',
    'parent' => '',
    'fields' => array(
      '0' => 'field_tt_extras_image',
      '1' => 'field_outside_video',
    ),
    'depth' => 0,
    'parents' => array(
      '0' => '',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('DSM Criteria');
  t('Media');

  return $groups;
}
