<?php

/**
 * Implementation of hook_views_default_views().
 */
function behavenet_directory_views_default_views() {
  $views = array();

  // Exported view: Directory
  $view = new view;
  $view->name = 'Directory';
  $view->description = 'Listings of Directory entries';
  $view->tag = 'behavenet';
  $view->base_table = 'node';
  $view->core = 0;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'title' => array(
      'label' => 'Title',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 1,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
    ),
    'field_location_value' => array(
      'label' => 'Location',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'link',
      'multiple' => array(
        'group' => 1,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => 0,
      ),
      'exclude' => 0,
      'id' => 'field_location_value',
      'table' => 'node_data_field_location',
      'field' => 'field_location_value',
      'relationship' => 'none',
    ),
    'field_general_terms_value' => array(
      'label' => 'Type',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'link_to_node' => 0,
      'label_type' => 'custom',
      'format' => 'link',
      'multiple' => array(
        'group' => 1,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => 0,
      ),
      'exclude' => 0,
      'id' => 'field_general_terms_value',
      'table' => 'node_data_field_general_terms',
      'field' => 'field_general_terms_value',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
  ));
  $handler->override_option('filters', array(
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'directory' => 'directory',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
    'term_node_tid_depth' => array(
      'operator' => 'or',
      'value' => array(
        11961 => '11961',
      ),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'operator' => 'term_node_tid_depth_op',
        'label' => 'Location',
        'use_operator' => 0,
        'identifier' => 'location',
        'bef_filter_description' => '',
        'bef_format' => 'default',
        'optional' => 0,
        'single' => 1,
        'remember' => 0,
        'reduce' => 0,
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'bef_show_term_count' => 0,
        'bef_taxonomy_depth' => '1',
      ),
      'type' => 'select',
      'limit' => TRUE,
      'vid' => '13',
      'depth' => '10',
      'id' => 'term_node_tid_depth',
      'table' => 'node',
      'field' => 'term_node_tid_depth',
      'hierarchy' => 1,
      'relationship' => 'none',
      'reduce_duplicates' => 0,
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'tid' => array(
      'operator' => 'or',
      'value' => array(
        10733 => '10733',
        10730 => '10730',
        10732 => '10732',
        10734 => '10734',
        10729 => '10729',
        10727 => '10727',
        10735 => '10735',
        10728 => '10728',
      ),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'tid_op',
        'identifier' => 'tid',
        'label' => 'Resource',
        'bef_filter_description' => '',
        'bef_format' => 'default',
        'optional' => 1,
        'single' => 1,
        'remember' => 0,
        'reduce' => 1,
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'bef_show_term_count' => 0,
      ),
      'type' => 'select',
      'limit' => TRUE,
      'vid' => '5',
      'id' => 'tid',
      'table' => 'term_node',
      'field' => 'tid',
      'hierarchy' => 1,
      'relationship' => 'none',
      'reduce_duplicates' => 0,
      'override' => array(
        'button' => 'Override',
      ),
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('items_per_page', 50);
  $handler->override_option('use_pager', '1');
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 1,
    'order' => 'asc',
    'summary' => '',
    'columns' => array(
      'title' => 'title',
      'field_location_value' => 'field_location_value',
      'field_general_terms_value' => 'field_general_terms_value',
    ),
    'info' => array(
      'title' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'field_location_value' => array(
        'separator' => '',
      ),
      'field_general_terms_value' => array(
        'separator' => '',
      ),
    ),
    'default' => 'title',
  ));
  $handler = $view->new_display('page', 'Directories by Location', 'page_1');
  $handler->override_option('path', 'list/directories');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler = $view->new_display('panel_pane', 'Directory List by Location', 'panel_pane_1');
  $handler->override_option('fields', array(
    'title' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'link_to_node' => 1,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
  ));
  $handler->override_option('arguments', array(
    'term_node_tid_depth' => array(
      'default_action' => 'not found',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => 'Directory Entries for %1',
      'breadcrumb' => '',
      'default_argument_type' => 'fixed',
      'default_argument' => '',
      'validate_type' => 'taxonomy_term',
      'validate_fail' => 'not found',
      'depth' => '10',
      'break_phrase' => 0,
      'set_breadcrumb' => 0,
      'use_taxonomy_term_path' => 0,
      'id' => 'term_node_tid_depth',
      'table' => 'node',
      'field' => 'term_node_tid_depth',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        2 => 0,
      ),
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'default_options_div_prefix' => '',
      'default_taxonomy_tid_term_page' => 0,
      'default_taxonomy_tid_node' => 0,
      'default_taxonomy_tid_limit' => 0,
      'default_taxonomy_tid_vids' => array(
        9 => 0,
        3 => 0,
        10 => 0,
        11 => 0,
        12 => 0,
        2 => 0,
        13 => 0,
        5 => 0,
      ),
      'default_argument_user' => 0,
      'default_argument_fixed' => '',
      'default_argument_php' => '',
      'validate_argument_node_type' => array(
        'directory' => 0,
        'combinations' => 0,
        'company' => 0,
        'compound' => 0,
        'device' => 0,
        'indication' => 0,
        'page' => 0,
        'people' => 0,
        'preparation' => 0,
        'sources' => 0,
        'generic' => 0,
        'book' => 0,
        'movie' => 0,
        'credit' => 0,
        'dsm' => 0,
        'dsm_caution' => 0,
        'tax_tweaks_extras' => 0,
        'drug' => 0,
        'panel' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(
        13 => 13,
        9 => 0,
        3 => 0,
        10 => 0,
        11 => 0,
        12 => 0,
        2 => 0,
        5 => 0,
      ),
      'validate_argument_type' => 'tid',
      'validate_argument_transform' => 0,
      'validate_user_restrict_roles' => 0,
      'validate_argument_php' => '',
    ),
  ));
  $handler->override_option('filters', array(
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'directory' => 'directory',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('use_ajax', TRUE);
  $handler->override_option('pane_title', 'Directory List by Location');
  $handler->override_option('pane_description', '');
  $handler->override_option('pane_category', array(
    'name' => 'Behavenet',
    'weight' => '0',
  ));
  $handler->override_option('allow', array(
    'use_pager' => FALSE,
    'items_per_page' => FALSE,
    'offset' => FALSE,
    'link_to_view' => FALSE,
    'more_link' => FALSE,
    'path_override' => FALSE,
    'title_override' => FALSE,
    'exposed_form' => FALSE,
    'fields_override' => FALSE,
  ));
  $handler->override_option('argument_input', array(
    'term_node_tid_depth' => array(
      'type' => 'context',
      'context' => 'term.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy: Term ID (with depth)',
    ),
  ));
  $handler->override_option('link_to_view', 0);
  $handler->override_option('inherit_panels_path', 0);
  $handler = $view->new_display('page', 'Directories by Term', 'page_2');
  $handler->override_option('arguments', array(
    'tid' => array(
      'default_action' => 'ignore',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '%1 Directories',
      'breadcrumb' => '',
      'default_argument_type' => 'fixed',
      'default_argument' => '',
      'validate_type' => 'taxonomy_term',
      'validate_fail' => 'not found',
      'break_phrase' => 0,
      'add_table' => 0,
      'require_value' => 0,
      'reduce_duplicates' => 0,
      'set_breadcrumb' => 0,
      'id' => 'tid',
      'table' => 'term_node',
      'field' => 'tid',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        2 => 0,
      ),
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'default_options_div_prefix' => '',
      'default_taxonomy_tid_term_page' => 0,
      'default_taxonomy_tid_node' => 0,
      'default_taxonomy_tid_limit' => 0,
      'default_taxonomy_tid_vids' => array(
        9 => 0,
        3 => 0,
        10 => 0,
        11 => 0,
        12 => 0,
        2 => 0,
        13 => 0,
        5 => 0,
      ),
      'default_argument_user' => 0,
      'default_argument_fixed' => '',
      'default_argument_php' => '',
      'validate_argument_node_type' => array(
        'directory' => 0,
        'combinations' => 0,
        'company' => 0,
        'compound' => 0,
        'device' => 0,
        'indication' => 0,
        'page' => 0,
        'people' => 0,
        'preparation' => 0,
        'sources' => 0,
        'generic' => 0,
        'book' => 0,
        'movie' => 0,
        'credit' => 0,
        'dsm' => 0,
        'dsm_caution' => 0,
        'tax_tweaks_extras' => 0,
        'drug' => 0,
        'panel' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(
        5 => 5,
        9 => 0,
        3 => 0,
        10 => 0,
        11 => 0,
        12 => 0,
        2 => 0,
        13 => 0,
      ),
      'validate_argument_type' => 'convert',
      'validate_argument_transform' => 1,
      'validate_user_restrict_roles' => 0,
      'validate_argument_php' => '',
    ),
  ));
  $handler->override_option('filters', array(
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'directory' => 'directory',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('path', 'directory/%');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler = $view->new_display('panel_pane', 'Directories search pane', 'panel_pane_2');
  $handler->override_option('pane_title', 'Directories search pane');
  $handler->override_option('pane_description', '');
  $handler->override_option('pane_category', array(
    'name' => 'Behavenet',
    'weight' => '0',
  ));
  $handler->override_option('allow', array(
    'use_pager' => FALSE,
    'items_per_page' => FALSE,
    'offset' => FALSE,
    'link_to_view' => FALSE,
    'more_link' => FALSE,
    'path_override' => FALSE,
    'title_override' => FALSE,
    'exposed_form' => FALSE,
    'fields_override' => FALSE,
  ));
  $handler->override_option('argument_input', array());
  $handler->override_option('link_to_view', 0);
  $handler->override_option('inherit_panels_path', 0);

  $views[$view->name] = $view;

  return $views;
}
