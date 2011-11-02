<?php

/**
 * Implementation of hook_views_default_views().
 */
function media_views_default_views() {
  $views = array();

  // Exported view: Media
  $view = new view;
  $view->name = 'Media';
  $view->description = 'Returns media related to a given node ID';
  $view->tag = 'behavenet';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('relationships', array(
    'field_general_asin_asin' => array(
      'label' => 'ASIN',
      'required' => 0,
      'id' => 'field_general_asin_asin',
      'table' => 'node_data_field_general_asin',
      'field' => 'field_general_asin_asin',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('fields', array(
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
      'link_format' => 'node',
      'exclude' => 1,
      'id' => 'product_image',
      'table' => 'amazon_item_image',
      'field' => 'product_image',
      'relationship' => 'field_general_asin_asin',
      'presentation_format' => 'markup',
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
    ),
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
    ),
    'phpcode' => array(
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
      'value' => '<?php
if ($this->view->args[0] == $data->nid) {
  // Don\'t output this node as related content of itself
  return;
}
if (empty($data->amazon_item_node_data_field_general_asin__amazon_item_image_url)) {
  // No ASIN information, use the node title
  print l($data->node_title, "node/$data->nid");
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
  print l($img, $data->amazon_item_node_data_field_general_asin_detailpageurl, array(\'html\' => TRUE));
  print \'<br />\';
  print l($data->amazon_item_node_data_field_general_asin_title, $data->amazon_item_node_data_field_general_asin_detailpageurl);
}
?>',
      'exclude' => 0,
      'id' => 'phpcode',
      'table' => 'customfield',
      'field' => 'phpcode',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
  ));
  $handler->override_option('arguments', array(
    'field_general_related_content_nid' => array(
      'default_action' => 'not found',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '',
      'breadcrumb' => '',
      'default_argument_type' => 'fixed',
      'default_argument' => '',
      'validate_type' => 'none',
      'validate_fail' => 'not found',
      'break_phrase' => 0,
      'not' => 0,
      'id' => 'field_general_related_content_nid',
      'table' => 'node_data_field_general_related_content',
      'field' => 'field_general_related_content_nid',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        '2' => 0,
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
        '9' => 0,
        '3' => 0,
        '10' => 0,
        '4' => 0,
        '8' => 0,
        '2' => 0,
        '5' => 0,
        '7' => 0,
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
        'book' => 'book',
        'movie' => 'movie',
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
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('use_ajax', TRUE);
  $handler->override_option('use_pager', 'mini');
  $handler->override_option('style_options', array(
    'grouping' => '',
  ));
  $handler = $view->new_display('panel_pane', 'Media for Related Content', 'panel_pane_1');
  $handler->override_option('pane_title', 'Related Books/Movies');
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
    'field_general_related_content_nid' => array(
      'type' => 'context',
      'context' => 'node_edit_form.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Related content (field_general_related_content)',
    ),
  ));
  $handler->override_option('link_to_view', 0);
  $handler->override_option('inherit_panels_path', 0);
  $handler = $view->new_display('panel_pane', 'Media for this node', 'panel_pane_2');
  $handler->override_option('arguments', array(
    'nid' => array(
      'default_action' => 'empty',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '',
      'breadcrumb' => '',
      'default_argument_type' => 'fixed',
      'default_argument' => '',
      'validate_type' => 'node',
      'validate_fail' => 'empty',
      'break_phrase' => 0,
      'not' => 0,
      'id' => 'nid',
      'table' => 'node',
      'field' => 'nid',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        '2' => 0,
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
        'directory' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(
        '9' => 0,
        '3' => 0,
        '10' => 0,
        '4' => 0,
        '8' => 0,
        '11' => 0,
        '2' => 0,
        '5' => 0,
        '7' => 0,
      ),
      'validate_argument_type' => 'tid',
      'validate_argument_transform' => 0,
      'validate_user_restrict_roles' => 0,
      'validate_argument_php' => '',
    ),
  ));
  $handler->override_option('pane_title', '');
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
    'field_general_related_content_nid' => array(
      'type' => 'none',
      'context' => 'node.termpath-raw',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Related content (field_general_related_content)',
    ),
    'nid' => array(
      'type' => 'context',
      'context' => 'node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Node: Nid',
    ),
  ));
  $handler->override_option('link_to_view', 0);
  $handler->override_option('inherit_panels_path', 0);

  $views[$view->name] = $view;

  return $views;
}
