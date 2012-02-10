<?php

/**
 * Implementation of hook_views_default_views().
 */
function related_content_views_default_views() {
  $views = array();

  // Exported view: related_content
  $view = new view;
  $view->name = 'related_content';
  $view->description = 'Shows related content for a given term';
  $view->tag = 'behavenet';
  $view->base_table = 'node';
  $view->core = 0;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('relationships', array(
    'field_general_asin_asin' => array(
      'label' => 'ASIN',
      'required' => 0,
      'id' => 'field_general_asin_asin',
      'table' => 'node_data_field_general_asin',
      'field' => 'field_general_asin_asin',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('fields', array(
    'title' => array(
      'label' => '',
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
      'exclude' => 1,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'type' => array(
      'label' => '',
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
      'machine_name' => 0,
      'exclude' => 1,
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'product_image' => array(
      'label' => '',
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
      'image_size' => 'mediumimage',
      'link_format' => 'amazon',
      'presentation_format' => 'markup',
      'exclude' => 1,
      'id' => 'product_image',
      'table' => 'amazon_item_image',
      'field' => 'product_image',
      'relationship' => 'field_general_asin_asin',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'title_1' => array(
      'label' => '',
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
      'link_format' => 'amazon',
      'exclude' => 1,
      'id' => 'title_1',
      'table' => 'amazon_item',
      'field' => 'title',
      'relationship' => 'field_general_asin_asin',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'phpcode' => array(
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
      'value' => '<?php
// For books, just show title with link to Amazon (or just title if no ASIN is available)
if (\'book\' == $data->node_type) {
  if (empty($data->amazon_item_node_data_field_general_asin_detailpageurl)) {
    print \'<div class="clear-fix clear-left">\';
    print $data->node_title;
    print \'</div>\';
  }
  else {
    print l($data->amazon_item_node_data_field_general_asin_title, $data->amazon_item_node_data_field_general_asin_detailpageurl);
  }
  return;  // Save us from indentation hell when we don\'t have a real code editor to work with...
}
if (empty($data->amazon_item_node_data_field_general_asin__amazon_item_image_url)) {
  // No ASIN information, use the node title
  print \'<div class="clear-fix clear-left">\';
  print l($data->node_title, "node/$data->nid");
  print \'</div>\';
}
else {
  // Show Amazon item image and link to Amazon\'s site
  $img = \'<img class="amazon-item-image" src="\'
    . $data->amazon_item_node_data_field_general_asin__amazon_item_image_url
    . \'" alt="\'
    . $data->amazon_item_node_data_field_general_asin_title
    . \'" height="\'
    . $data->amazon_item_node_data_field_general_asin__amazon_item_image_height
    . \'" width="\'
    . $data->amazon_item_node_data_field_general_asin__amazon_item_image_width
    . \'" />\';
  print \'<div class="books-and-movies">\';
  print l($img, $data->amazon_item_node_data_field_general_asin_detailpageurl, array(\'html\' => TRUE));
  print \'<br />\';
  print l($data->amazon_item_node_data_field_general_asin_title, $data->amazon_item_node_data_field_general_asin_detailpageurl);
  print \'</div>\';
}
?>',
      'exclude' => 0,
      'id' => 'phpcode',
      'table' => 'customfield',
      'field' => 'phpcode',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('arguments', array(
    'tid' => array(
      'default_action' => 'not found',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '',
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
      'relationship' => 'none',
      'default_options_div_prefix' => '',
      'default_argument_fixed' => '',
      'default_argument_user' => 0,
      'default_argument_php' => '',
      'validate_argument_node_type' => array(
        'panel' => 0,
        'book' => 0,
        'combinations' => 0,
        'company' => 0,
        'compound' => 0,
        'directory' => 0,
        'drug' => 0,
        'generic' => 0,
        'indication' => 0,
        'movie' => 0,
        'page' => 0,
        'people' => 0,
        'preparation' => 0,
        'sources' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(
        9 => 0,
        3 => 0,
        10 => 0,
        4 => 0,
        8 => 0,
        2 => 0,
        5 => 0,
        7 => 0,
      ),
      'validate_argument_type' => 'tid',
      'validate_argument_transform' => 0,
      'validate_user_restrict_roles' => 0,
      'validate_argument_php' => '',
    ),
  ));
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'not in',
      'value' => array(
        'page' => 'page',
        'credit' => 'credit',
        'dsm' => 'dsm',
        'dsm_caution' => 'dsm_caution',
        'tax_tweaks_extras' => 'tax_tweaks_extras',
        'panel' => 'panel',
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
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('header_format', '2');
  $handler->override_option('header_empty', 0);
  $handler->override_option('footer_format', '2');
  $handler->override_option('footer_empty', 0);
  $handler->override_option('use_ajax', TRUE);
  $handler->override_option('items_per_page', 15);
  $handler->override_option('use_pager', 'mini');
  $handler->override_option('use_more', 0);
  $handler->override_option('use_more_always', 0);
  $handler->override_option('style_options', array(
    'grouping' => 'type',
  ));
  $handler = $view->new_display('panel_pane', 'Related content by term', 'panel_pane_1');
  $handler->override_option('pane_title', 'Related content by term');
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
    'tid' => array(
      'type' => 'context',
      'context' => 'term.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy: Term ID',
    ),
  ));
  $handler->override_option('link_to_view', 0);
  $handler->override_option('inherit_panels_path', 0);
  $handler = $view->new_display('panel_pane', 'Generics by source', 'panel_pane_2');
  $handler->override_option('arguments', array(
    'field_generic_sources_nid' => array(
      'default_action' => 'ignore',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '',
      'breadcrumb' => '',
      'default_argument_type' => 'fixed',
      'default_argument' => '',
      'validate_type' => 'node',
      'validate_fail' => 'not found',
      'break_phrase' => 0,
      'not' => 0,
      'id' => 'field_generic_sources_nid',
      'table' => 'node_data_field_generic_sources',
      'field' => 'field_generic_sources_nid',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        2 => 0,
      ),
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'default_options_div_prefix' => '',
      'default_argument_fixed' => '',
      'default_argument_user' => 0,
      'default_argument_php' => '',
      'validate_argument_node_type' => array(
        'panel' => 0,
        'book' => 0,
        'combinations' => 0,
        'company' => 0,
        'compound' => 0,
        'directory' => 0,
        'drug' => 0,
        'generic' => 0,
        'indication' => 0,
        'movie' => 0,
        'page' => 0,
        'people' => 0,
        'preparation' => 0,
        'sources' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(
        9 => 0,
        3 => 0,
        10 => 0,
        4 => 0,
        8 => 0,
        2 => 0,
        5 => 0,
        7 => 0,
      ),
      'validate_argument_type' => 'tid',
      'validate_argument_transform' => 0,
      'validate_user_restrict_roles' => 0,
      'validate_argument_php' => '',
    ),
  ));
  $handler->override_option('pane_title', 'Generics by source');
  $handler->override_option('pane_description', '');
  $handler->override_option('pane_category', array(
    'name' => 'View panes',
    'weight' => 0,
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
    'field_generic_sources_nid' => array(
      'type' => 'context',
      'context' => 'node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Sources (field_generic_sources)',
    ),
  ));
  $handler->override_option('link_to_view', 0);
  $handler->override_option('inherit_panels_path', 0);

  $views[$view->name] = $view;

  return $views;
}
