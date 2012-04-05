<?php

/**
 * Implementation of hook_default_page_manager_handlers().
 */
function terms_display_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_6';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -26;
  $handler->conf = array(
    'title' => 'DSM Criteria',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'dsm' => 'dsm',
            ),
          ),
          'context' => 'argument_nid_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display;
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'c359a68c-0436-eda4-455c-a4da0664d4d8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-efbc9bc7-367f-db44-8173-5b5552f90cbb';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'DSM_Criteria-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_nid_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->uuid = 'efbc9bc7-367f-db44-8173-5b5552f90cbb';
    $display->content['new-efbc9bc7-367f-db44-8173-5b5552f90cbb'] = $pane;
    $display->panels['middle'][0] = 'new-efbc9bc7-367f-db44-8173-5b5552f90cbb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_6'] = $handler;

  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Terms',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'name' => 'vocabulary',
        'id' => 1,
        'identifier' => 'Taxonomy vocabulary',
        'keyword' => 'vocabulary',
        'context_settings' => array(
          'vid' => '5',
        ),
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'vids' => array(),
          ),
          'context' => 'argument_terms_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display;
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:names';
  $display->uuid = '73a4054d-811e-6624-5148-bc185a6c393c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-e278e648-a854-e204-79ca-031aca0c4d12';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Synonyms',
      'title' => '',
      'body' => '<?php
$syn = taxonomy_get_synonyms(%term:tid);
if (!empty($syn)) {
  print \'<p>(\' . implode(\', \', $syn) . \')</p>\';
}
?>',
      'format' => '4',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->uuid = 'e278e648-a854-e204-79ca-031aca0c4d12';
    $display->content['new-e278e648-a854-e204-79ca-031aca0c4d12'] = $pane;
    $display->panels['middle'][0] = 'new-e278e648-a854-e204-79ca-031aca0c4d12';
    $pane = new stdClass;
    $pane->pid = 'new-1e3056d6-0493-e064-0104-1025d1c2b57d';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Breadcrumbs',
      'title' => '',
      'body' => '<?php
$crumbs = behavenet_get_parents_breadcrumbs(%term:tid);
if (!empty($crumbs)) {
  print "$crumbs";
}
?>',
      'format' => '4',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->uuid = '1e3056d6-0493-e064-0104-1025d1c2b57d';
    $display->content['new-1e3056d6-0493-e064-0104-1025d1c2b57d'] = $pane;
    $display->panels['middle'][1] = 'new-1e3056d6-0493-e064-0104-1025d1c2b57d';
    $pane = new stdClass;
    $pane->pid = 'new-a7ec2565-6961-97d4-d148-951e1d62c63a';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'perm',
          'settings' => array(
            'perm' => 'administer behavenet',
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Edit Term Link',
      'title' => '',
      'body' => '(Admin: <?php
print l(\'Edit this term\', \'admin/content/taxonomy_manager/voc/%term:vid/%term:tid\');
?>)
',
      'format' => '4',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->uuid = 'a7ec2565-6961-97d4-d148-951e1d62c63a';
    $display->content['new-a7ec2565-6961-97d4-d148-951e1d62c63a'] = $pane;
    $display->panels['middle'][2] = 'new-a7ec2565-6961-97d4-d148-951e1d62c63a';
    $pane = new stdClass;
    $pane->pid = 'new-b7cbb8ef-1d65-dd54-41df-6fbd7b27524d';
    $pane->panel = 'middle';
    $pane->type = 'term_description';
    $pane->subtype = 'term_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_terms_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->uuid = 'b7cbb8ef-1d65-dd54-41df-6fbd7b27524d';
    $display->content['new-b7cbb8ef-1d65-dd54-41df-6fbd7b27524d'] = $pane;
    $display->panels['middle'][3] = 'new-b7cbb8ef-1d65-dd54-41df-6fbd7b27524d';
    $pane = new stdClass;
    $pane->pid = 'new-60a88a5f-69db-7504-f988-a8e7ed1096ff';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'terms_extras-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_terms_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->uuid = '60a88a5f-69db-7504-f988-a8e7ed1096ff';
    $display->content['new-60a88a5f-69db-7504-f988-a8e7ed1096ff'] = $pane;
    $display->panels['middle'][4] = 'new-60a88a5f-69db-7504-f988-a8e7ed1096ff';
    $pane = new stdClass;
    $pane->pid = 'new-c06c0c7d-1506-f4a4-1d33-206b3b86b5d4';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'terms_extras-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_terms_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->uuid = 'c06c0c7d-1506-f4a4-1d33-206b3b86b5d4';
    $display->content['new-c06c0c7d-1506-f4a4-1d33-206b3b86b5d4'] = $pane;
    $display->panels['middle'][5] = 'new-c06c0c7d-1506-f4a4-1d33-206b3b86b5d4';
    $pane = new stdClass;
    $pane->pid = 'new-a0a00304-6869-b894-01ed-eb5a78a0b60d';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'DSM_Criteria-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_terms_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'dsm-criteria',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->uuid = 'a0a00304-6869-b894-01ed-eb5a78a0b60d';
    $display->content['new-a0a00304-6869-b894-01ed-eb5a78a0b60d'] = $pane;
    $display->panels['middle'][6] = 'new-a0a00304-6869-b894-01ed-eb5a78a0b60d';
    $pane = new stdClass;
    $pane->pid = 'new-8ad1588f-d8be-3c74-7113-90373452771f';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'This term appears in (member of these lists)',
      'title' => 'This term appears in',
      'body' => '<?php
$lists = _behavenet_get_lists(%term:tid);
if (empty($lists)) {
  return;
}
print \'<ul>\';
foreach ($lists as $ltid) {
  $term = taxonomy_get_term($ltid);
  $url = url("taxonomy/term/$term->tid");
  print "<li><a href=\'$url\'>$term->name</a></li>";
}
print \'</ul>\';
?>',
      'format' => '4',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->uuid = '8ad1588f-d8be-3c74-7113-90373452771f';
    $display->content['new-8ad1588f-d8be-3c74-7113-90373452771f'] = $pane;
    $display->panels['middle'][7] = 'new-8ad1588f-d8be-3c74-7113-90373452771f';
    $pane = new stdClass;
    $pane->pid = 'new-a3c1ae38-2a80-50b4-9d97-bb6d66fcb9cb';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Members',
      'title' => 'Members:',
      'body' => '<?php
$children = taxonomy_get_children(%term:tid, %term:vid);
if (!count($children)) {
  return;
}
$return = \'\';
if (count($children) <= 10) {
  // Short lists output as lists
  $return = \'<ul>\';
  foreach ($children as $term) {
    $return .= \'<li>\' . l($term->name, \'taxonomy/term/\'. $term->tid) . \'</li>\';
  }
  $return .= \'</ul>\';
}
else {
  // Longer lists output as dropdowns
  $items = array();
  foreach ($children as $term) {
    $items[url("taxonomy/term/$term->tid")] = $term->name;
  }
  $return = behavenet_build_jump_menu($items);
}

return $return;
?>',
      'format' => '4',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->uuid = 'a3c1ae38-2a80-50b4-9d97-bb6d66fcb9cb';
    $display->content['new-a3c1ae38-2a80-50b4-9d97-bb6d66fcb9cb'] = $pane;
    $display->panels['middle'][8] = 'new-a3c1ae38-2a80-50b4-9d97-bb6d66fcb9cb';
    $pane = new stdClass;
    $pane->pid = 'new-f389e7c3-e0d2-c474-e9d8-7eff5699d12b';
    $pane->panel = 'middle';
    $pane->type = 'term_list';
    $pane->subtype = 'term_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'title' => NULL,
      'type' => 'related',
      'list_type' => 'ul',
      'context' => 'argument_terms_1',
      'override_title' => 1,
      'override_title_text' => 'See also:',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 9;
    $pane->uuid = 'f389e7c3-e0d2-c474-e9d8-7eff5699d12b';
    $display->content['new-f389e7c3-e0d2-c474-e9d8-7eff5699d12b'] = $pane;
    $display->panels['middle'][9] = 'new-f389e7c3-e0d2-c474-e9d8-7eff5699d12b';
    $pane = new stdClass;
    $pane->pid = 'new-c8eb2628-381f-13c4-3591-0f03f80d8fc9';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'Directory-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'vids' => array(
              13 => 13,
            ),
          ),
          'context' => 'argument_terms_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_terms_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 10;
    $pane->uuid = 'c8eb2628-381f-13c4-3591-0f03f80d8fc9';
    $display->content['new-c8eb2628-381f-13c4-3591-0f03f80d8fc9'] = $pane;
    $display->panels['middle'][10] = 'new-c8eb2628-381f-13c4-3591-0f03f80d8fc9';
    $pane = new stdClass;
    $pane->pid = 'new-ccf8f3b3-7a43-59e4-6557-d434935061af';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'related_content-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '',
      'items_per_page' => '0',
      'context' => array(
        0 => 'argument_terms_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Books',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 11;
    $pane->uuid = 'ccf8f3b3-7a43-59e4-6557-d434935061af';
    $display->content['new-ccf8f3b3-7a43-59e4-6557-d434935061af'] = $pane;
    $display->panels['middle'][11] = 'new-ccf8f3b3-7a43-59e4-6557-d434935061af';
    $pane = new stdClass;
    $pane->pid = 'new-72b4ce08-b009-c834-8dfa-6cdb2a686808';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'related_content-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '',
      'items_per_page' => '0',
      'context' => array(
        0 => 'argument_terms_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Movies',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 12;
    $pane->uuid = '72b4ce08-b009-c834-8dfa-6cdb2a686808';
    $display->content['new-72b4ce08-b009-c834-8dfa-6cdb2a686808'] = $pane;
    $display->panels['middle'][12] = 'new-72b4ce08-b009-c834-8dfa-6cdb2a686808';
    $pane = new stdClass;
    $pane->pid = 'new-efe260cf-8cc7-bd14-05ab-5d925add92fc';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'related_content-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_terms_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 13;
    $pane->uuid = 'efe260cf-8cc7-bd14-05ab-5d925add92fc';
    $display->content['new-efe260cf-8cc7-bd14-05ab-5d925add92fc'] = $pane;
    $display->panels['middle'][13] = 'new-efe260cf-8cc7-bd14-05ab-5d925add92fc';
    $pane = new stdClass;
    $pane->pid = 'new-1c76a2dd-ab50-3324-2531-bd4e8a0f58f2';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'Vocab_listing';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '50',
      'pager_id' => '',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page_1',
      'context' => array(
        0 => 'argument_terms_1.name_dashed',
      ),
      'override_title' => 1,
      'override_title_text' => '%term:name list',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 14;
    $pane->uuid = '1c76a2dd-ab50-3324-2531-bd4e8a0f58f2';
    $display->content['new-1c76a2dd-ab50-3324-2531-bd4e8a0f58f2'] = $pane;
    $display->panels['middle'][14] = 'new-1c76a2dd-ab50-3324-2531-bd4e8a0f58f2';
    $pane = new stdClass;
    $pane->pid = 'new-82c18b64-84d1-ef74-c9a7-bc56832ceb3d';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'drugs_by_term-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_terms_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Molecular entities',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 15;
    $pane->uuid = '82c18b64-84d1-ef74-c9a7-bc56832ceb3d';
    $display->content['new-82c18b64-84d1-ef74-c9a7-bc56832ceb3d'] = $pane;
    $display->panels['middle'][15] = 'new-82c18b64-84d1-ef74-c9a7-bc56832ceb3d';
    $pane = new stdClass;
    $pane->pid = 'new-4cecc4ab-ee76-d114-8574-45d19bb7705a';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'Compounds';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '5',
            9 => array(),
            3 => array(),
            10 => array(),
            11 => array(),
            2 => array(),
            5 => array(
              11872 => '11872',
            ),
          ),
          'context' => 'argument_terms_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '50',
      'pager_id' => '',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page_1',
      'override_title' => 1,
      'override_title_text' => 'Compound',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 16;
    $pane->uuid = '4cecc4ab-ee76-d114-8574-45d19bb7705a';
    $display->content['new-4cecc4ab-ee76-d114-8574-45d19bb7705a'] = $pane;
    $display->panels['middle'][16] = 'new-4cecc4ab-ee76-d114-8574-45d19bb7705a';
    $pane = new stdClass;
    $pane->pid = 'new-13648c7c-65f7-3ff4-598d-3c9de41576c1';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'Compounds';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '5',
            9 => array(),
            3 => array(),
            10 => array(),
            11 => array(),
            2 => array(),
            5 => array(
              11871 => '11871',
            ),
          ),
          'context' => 'argument_terms_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '50',
      'pager_id' => '',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page_2',
      'override_title' => 1,
      'override_title_text' => 'Preparation',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 17;
    $pane->uuid = '13648c7c-65f7-3ff4-598d-3c9de41576c1';
    $display->content['new-13648c7c-65f7-3ff4-598d-3c9de41576c1'] = $pane;
    $display->panels['middle'][17] = 'new-13648c7c-65f7-3ff4-598d-3c9de41576c1';
    $pane = new stdClass;
    $pane->pid = 'new-49e59ea1-7755-4974-a558-1fb682567640';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'drug_combos';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '5',
            9 => array(),
            3 => array(),
            10 => array(),
            11 => array(),
            2 => array(),
            5 => array(
              8125 => '8125',
            ),
          ),
          'context' => 'argument_terms_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '10',
      'pager_id' => '',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page_1',
      'override_title' => 1,
      'override_title_text' => 'Combination',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 18;
    $pane->uuid = '49e59ea1-7755-4974-a558-1fb682567640';
    $display->content['new-49e59ea1-7755-4974-a558-1fb682567640'] = $pane;
    $display->panels['middle'][18] = 'new-49e59ea1-7755-4974-a558-1fb682567640';
    $pane = new stdClass;
    $pane->pid = 'new-fa0afe44-5609-2424-9d8d-ae9962370f58';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'drug_sources';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '5',
            9 => array(),
            3 => array(),
            10 => array(),
            11 => array(),
            2 => array(),
            5 => array(
              11873 => '11873',
            ),
          ),
          'context' => 'argument_terms_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 1,
      'override_title_text' => 'Source',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 19;
    $pane->uuid = 'fa0afe44-5609-2424-9d8d-ae9962370f58';
    $display->content['new-fa0afe44-5609-2424-9d8d-ae9962370f58'] = $pane;
    $display->panels['middle'][19] = 'new-fa0afe44-5609-2424-9d8d-ae9962370f58';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context'] = $handler;

  return $export;
}
