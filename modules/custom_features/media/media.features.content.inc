<?php

/**
 * Implementation of hook_content_default_fields().
 */
function media_content_default_fields() {
  $fields = array();

  // Exported field: field_book_firstname
  $fields['book-field_book_firstname'] = array(
    'field_name' => 'field_book_firstname',
    'type_name' => 'book',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_book_firstname][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Author First Name',
      'weight' => '-2',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_book_lastname
  $fields['book-field_book_lastname'] = array(
    'field_name' => 'field_book_lastname',
    'type_name' => 'book',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_book_lastname][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Author Last Name',
      'weight' => '-3',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_book_pubdate
  $fields['book-field_book_pubdate'] = array(
    'field_name' => 'field_book_pubdate',
    'type_name' => 'book',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '0',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
    ),
    'timezone_db' => '',
    'tz_handling' => 'none',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'short',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'Y-m-d H:i:s',
      'input_format_custom' => 'Y',
      'increment' => 1,
      'text_parts' => array(),
      'year_range' => '-3:+3',
      'label_position' => 'above',
      'label' => 'Published',
      'weight' => '-1',
      'description' => '',
      'type' => 'date_text',
      'module' => 'date',
    ),
  );

  // Exported field: field_chemical_class
  $fields['book-field_chemical_class'] = array(
    'field_name' => 'field_chemical_class',
    'type_name' => 'book',
    'display_settings' => array(
      'weight' => '1',
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
    'multiple' => '0',
    'module' => 'content_taxonomy',
    'active' => '1',
    'save_term_node' => 1,
    'vid' => '3',
    'parent' => '0',
    'parent_php_code' => '',
    'depth' => '',
    'widget' => array(
      'group_parent' => '0',
      'show_depth' => 1,
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Chemical Class',
      'weight' => '1',
      'description' => '',
      'type' => 'content_taxonomy_select',
      'module' => 'content_taxonomy_options',
    ),
  );

  // Exported field: field_general_asin
  $fields['book-field_general_asin'] = array(
    'field_name' => 'field_general_asin',
    'type_name' => 'book',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'inline',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'inline',
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
    'type' => 'asin',
    'required' => '0',
    'multiple' => '0',
    'module' => 'asin',
    'active' => '1',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'asin' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Amazon ASIN',
      'weight' => '-4',
      'description' => '',
      'type' => 'asin_text',
      'module' => 'asin',
    ),
  );

  // Exported field: field_general_related_content
  $fields['book-field_general_related_content'] = array(
    'field_name' => 'field_general_related_content',
    'type_name' => 'book',
    'display_settings' => array(
      'weight' => '3',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
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
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'company' => 'company',
      'compound' => 'compound',
      'drug' => 'drug',
      'combinations' => 'combinations',
      'generic' => 'generic',
      'indication' => 'indication',
      'people' => 'people',
      'preparation' => 'preparation',
      'sources' => 'sources',
      'book' => 0,
      'dsm_caution' => 0,
      'credit' => 0,
      'dsm' => 0,
      'device' => 0,
      'directory' => 0,
      'movie' => 0,
      'page' => 0,
      'panel' => 0,
      'tax_tweaks_extras' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_general_related_content][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Related content',
      'weight' => '3',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_general_terms
  $fields['book-field_general_terms'] = array(
    'field_name' => 'field_general_terms',
    'type_name' => 'book',
    'display_settings' => array(
      'weight' => '2',
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
      'label' => 'Terms',
      'weight' => '2',
      'description' => '',
      'type' => 'content_taxonomy_autocomplete',
      'module' => 'content_taxonomy_autocomplete',
    ),
  );

  // Exported field: field_chemical_class
  $fields['movie-field_chemical_class'] = array(
    'field_name' => 'field_chemical_class',
    'type_name' => 'movie',
    'display_settings' => array(
      'weight' => '7',
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
    'multiple' => '0',
    'module' => 'content_taxonomy',
    'active' => '1',
    'save_term_node' => 1,
    'vid' => '3',
    'parent' => '0',
    'parent_php_code' => '',
    'depth' => '',
    'widget' => array(
      'group_parent' => '0',
      'show_depth' => 1,
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Chemical Class',
      'weight' => '7',
      'description' => '',
      'type' => 'content_taxonomy_select',
      'module' => 'content_taxonomy_options',
    ),
  );

  // Exported field: field_general_additional_asin
  $fields['movie-field_general_additional_asin'] = array(
    'field_name' => 'field_general_additional_asin',
    'type_name' => 'movie',
    'display_settings' => array(
      'weight' => '4',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'inline',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'inline',
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
    'type' => 'asin',
    'required' => '0',
    'multiple' => '1',
    'module' => 'asin',
    'active' => '1',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'asin' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Additional ASINs',
      'weight' => '4',
      'description' => 'Use these fields for additional ASINs associated with this movie entry, such as other movie formats or the book it was based on.',
      'type' => 'asin_text',
      'module' => 'asin',
    ),
  );

  // Exported field: field_general_asin
  $fields['movie-field_general_asin'] = array(
    'field_name' => 'field_general_asin',
    'type_name' => 'movie',
    'display_settings' => array(
      'weight' => '3',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'inline',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'inline',
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
    'type' => 'asin',
    'required' => '0',
    'multiple' => '0',
    'module' => 'asin',
    'active' => '1',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'asin' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Amazon ASIN',
      'weight' => '3',
      'description' => 'Enter the primary ASIN associated with this movie.',
      'type' => 'asin_text',
      'module' => 'asin',
    ),
  );

  // Exported field: field_general_facebook_page
  $fields['movie-field_general_facebook_page'] = array(
    'field_name' => 'field_general_facebook_page',
    'type_name' => 'movie',
    'display_settings' => array(
      'weight' => '1',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
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
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_general_facebook_page][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Facebook page',
      'weight' => '1',
      'description' => 'Enter the URL of this movie\'s Facebook page. Be sure to include <i>http://</i>.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_general_related_content
  $fields['movie-field_general_related_content'] = array(
    'field_name' => 'field_general_related_content',
    'type_name' => 'movie',
    'display_settings' => array(
      'weight' => '11',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
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
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'company' => 'company',
      'compound' => 'compound',
      'drug' => 'drug',
      'combinations' => 'combinations',
      'generic' => 'generic',
      'indication' => 'indication',
      'people' => 'people',
      'preparation' => 'preparation',
      'sources' => 'sources',
      'book' => 0,
      'dsm_caution' => 0,
      'credit' => 0,
      'dsm' => 0,
      'device' => 0,
      'directory' => 0,
      'movie' => 0,
      'page' => 0,
      'panel' => 0,
      'tax_tweaks_extras' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_general_related_content][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Related content',
      'weight' => '8',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_general_terms
  $fields['movie-field_general_terms'] = array(
    'field_name' => 'field_general_terms',
    'type_name' => 'movie',
    'display_settings' => array(
      'weight' => '12',
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
      'group_parent' => '0',
      'show_depth' => 1,
      'label' => 'Terms',
      'weight' => '9',
      'description' => '',
      'type' => 'content_taxonomy_autocomplete',
      'module' => 'content_taxonomy_autocomplete',
    ),
  );

  // Exported field: field_general_twitter
  $fields['movie-field_general_twitter'] = array(
    'field_name' => 'field_general_twitter',
    'type_name' => 'movie',
    'display_settings' => array(
      'weight' => '2',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
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
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_general_twitter][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Twitter',
      'weight' => '2',
      'description' => 'Enter a TweetChat hashtag (eg: <i>#movie-name</i>, including the \'#\' character) or a Twitter user (eg: <i>@movie-name</i>, including the \'@\' character).',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_movie_actors
  $fields['movie-field_movie_actors'] = array(
    'field_name' => 'field_movie_actors',
    'type_name' => 'movie',
    'display_settings' => array(
      'weight' => '5',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
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
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_movie_actors][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Actors',
      'weight' => '5',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_movie_blog
  $fields['movie-field_movie_blog'] = array(
    'field_name' => 'field_movie_blog',
    'type_name' => 'movie',
    'display_settings' => array(
      'weight' => '9',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
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
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_movie_blog][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Blog entry (Blogger.com)',
      'weight' => '11',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_movie_blog_entry
  $fields['movie-field_movie_blog_entry'] = array(
    'field_name' => 'field_movie_blog_entry',
    'type_name' => 'movie',
    'display_settings' => array(
      'weight' => '10',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
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
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_movie_blog_entry][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Blog entry',
      'weight' => '12',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_movie_release
  $fields['movie-field_movie_release'] = array(
    'field_name' => 'field_movie_release',
    'type_name' => 'movie',
    'display_settings' => array(
      'weight' => '6',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
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
    'type' => 'date',
    'required' => '0',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
    ),
    'timezone_db' => '',
    'tz_handling' => 'none',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'medium',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'm/d/Y - g:i:sa',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-100:+3',
      'label_position' => 'above',
      'label' => 'Year Released',
      'weight' => '6',
      'description' => '',
      'type' => 'date_select',
      'module' => 'date',
    ),
  );

  // Exported field: field_movie_spoiler
  $fields['movie-field_movie_spoiler'] = array(
    'field_name' => 'field_movie_spoiler',
    'type_name' => 'movie',
    'display_settings' => array(
      'weight' => '8',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'unformatted',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'unformatted',
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
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '0
1|<span class="spoiler">Spoiler alert!</span>',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 0,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Spoiler alert',
      'weight' => '10',
      'description' => '',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Actors');
  t('Additional ASINs');
  t('Amazon ASIN');
  t('Author First Name');
  t('Author Last Name');
  t('Blog entry');
  t('Blog entry (Blogger.com)');
  t('Chemical Class');
  t('Facebook page');
  t('Published');
  t('Related content');
  t('Spoiler alert');
  t('Terms');
  t('Twitter');
  t('Year Released');

  return $fields;
}
