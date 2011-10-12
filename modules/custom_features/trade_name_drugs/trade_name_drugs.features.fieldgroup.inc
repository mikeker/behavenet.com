<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function trade_name_drugs_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_drug_primary_media
  $groups['drug-group_drug_primary_media'] = array(
    'group_type' => 'standard',
    'type_name' => 'drug',
    'group_name' => 'group_drug_primary_media',
    'label' => 'Image or Video',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => 'Select one or more media options.  These will be displayed along with the drug info so adding too many images or videos may make for an awkward display.',
      ),
      'display' => array(
        'weight' => '1',
        'parent' => '',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'no_style',
          'exclude' => 1,
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
    'weight' => '1',
    'parent' => '',
    'fields' => array(
      '0' => 'field_drug_image',
      '1' => 'field_outside_video',
    ),
    'depth' => 0,
    'parents' => array(
      '0' => '',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Image or Video');

  return $groups;
}
