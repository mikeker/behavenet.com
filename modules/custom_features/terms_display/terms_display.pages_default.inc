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
  $display->uuid = '09e218be-e0f0-a294-71ac-463c870d6f82';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-46ae8921-d974-86b4-dd37-c5b0b2953e16';
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
    $pane->uuid = '46ae8921-d974-86b4-dd37-c5b0b2953e16';
    $display->content['new-46ae8921-d974-86b4-dd37-c5b0b2953e16'] = $pane;
    $display->panels['middle'][0] = 'new-46ae8921-d974-86b4-dd37-c5b0b2953e16';
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
  $display->uuid = 'eaca499c-d13c-b544-7d48-2415b9e5cf74';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-6ea3fc82-c781-8004-b90d-d321c37cad17';
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
    $pane->uuid = '6ea3fc82-c781-8004-b90d-d321c37cad17';
    $display->content['new-6ea3fc82-c781-8004-b90d-d321c37cad17'] = $pane;
    $display->panels['middle'][0] = 'new-6ea3fc82-c781-8004-b90d-d321c37cad17';
    $pane = new stdClass;
    $pane->pid = 'new-936d7cd2-b144-d9a4-59c4-bcb08a1f9b6e';
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
    $pane->uuid = '936d7cd2-b144-d9a4-59c4-bcb08a1f9b6e';
    $display->content['new-936d7cd2-b144-d9a4-59c4-bcb08a1f9b6e'] = $pane;
    $display->panels['middle'][1] = 'new-936d7cd2-b144-d9a4-59c4-bcb08a1f9b6e';
    $pane = new stdClass;
    $pane->pid = 'new-bc7b733a-e542-8d04-9592-9594d2dd4aa7';
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
    $pane->uuid = 'bc7b733a-e542-8d04-9592-9594d2dd4aa7';
    $display->content['new-bc7b733a-e542-8d04-9592-9594d2dd4aa7'] = $pane;
    $display->panels['middle'][2] = 'new-bc7b733a-e542-8d04-9592-9594d2dd4aa7';
    $pane = new stdClass;
    $pane->pid = 'new-ea0819ad-95c6-55a4-61aa-27c21ace89f7';
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
    $pane->uuid = 'ea0819ad-95c6-55a4-61aa-27c21ace89f7';
    $display->content['new-ea0819ad-95c6-55a4-61aa-27c21ace89f7'] = $pane;
    $display->panels['middle'][3] = 'new-ea0819ad-95c6-55a4-61aa-27c21ace89f7';
    $pane = new stdClass;
    $pane->pid = 'new-ed97b4ed-550d-aa44-352c-25369a445ac6';
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
    $pane->uuid = 'ed97b4ed-550d-aa44-352c-25369a445ac6';
    $display->content['new-ed97b4ed-550d-aa44-352c-25369a445ac6'] = $pane;
    $display->panels['middle'][4] = 'new-ed97b4ed-550d-aa44-352c-25369a445ac6';
    $pane = new stdClass;
    $pane->pid = 'new-b5c0c580-8251-a664-f59a-1b5cb33ac0c6';
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
    $pane->uuid = 'b5c0c580-8251-a664-f59a-1b5cb33ac0c6';
    $display->content['new-b5c0c580-8251-a664-f59a-1b5cb33ac0c6'] = $pane;
    $display->panels['middle'][5] = 'new-b5c0c580-8251-a664-f59a-1b5cb33ac0c6';
    $pane = new stdClass;
    $pane->pid = 'new-7f0bae84-68dd-ad34-1d1c-15fcf86944d8';
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
    $pane->uuid = '7f0bae84-68dd-ad34-1d1c-15fcf86944d8';
    $display->content['new-7f0bae84-68dd-ad34-1d1c-15fcf86944d8'] = $pane;
    $display->panels['middle'][6] = 'new-7f0bae84-68dd-ad34-1d1c-15fcf86944d8';
    $pane = new stdClass;
    $pane->pid = 'new-50f15eae-8a08-27f4-a535-889f2498e949';
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
    $pane->uuid = '50f15eae-8a08-27f4-a535-889f2498e949';
    $display->content['new-50f15eae-8a08-27f4-a535-889f2498e949'] = $pane;
    $display->panels['middle'][7] = 'new-50f15eae-8a08-27f4-a535-889f2498e949';
    $pane = new stdClass;
    $pane->pid = 'new-03d46673-a565-3424-1186-a2f075709f77';
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
    $pane->uuid = '03d46673-a565-3424-1186-a2f075709f77';
    $display->content['new-03d46673-a565-3424-1186-a2f075709f77'] = $pane;
    $display->panels['middle'][8] = 'new-03d46673-a565-3424-1186-a2f075709f77';
    $pane = new stdClass;
    $pane->pid = 'new-adacd6c1-9e12-ab04-8dce-b56737d99c37';
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
    $pane->uuid = 'adacd6c1-9e12-ab04-8dce-b56737d99c37';
    $display->content['new-adacd6c1-9e12-ab04-8dce-b56737d99c37'] = $pane;
    $display->panels['middle'][9] = 'new-adacd6c1-9e12-ab04-8dce-b56737d99c37';
    $pane = new stdClass;
    $pane->pid = 'new-bc825a61-6e9c-bfd4-5924-5bcfe4192d86';
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
    $pane->uuid = 'bc825a61-6e9c-bfd4-5924-5bcfe4192d86';
    $display->content['new-bc825a61-6e9c-bfd4-5924-5bcfe4192d86'] = $pane;
    $display->panels['middle'][10] = 'new-bc825a61-6e9c-bfd4-5924-5bcfe4192d86';
    $pane = new stdClass;
    $pane->pid = 'new-82cd0afc-7c2b-1844-691e-9978216e6c2f';
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
    $pane->uuid = '82cd0afc-7c2b-1844-691e-9978216e6c2f';
    $display->content['new-82cd0afc-7c2b-1844-691e-9978216e6c2f'] = $pane;
    $display->panels['middle'][11] = 'new-82cd0afc-7c2b-1844-691e-9978216e6c2f';
    $pane = new stdClass;
    $pane->pid = 'new-3e98813d-cbed-e5c4-892f-5b69c9058bd0';
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
    $pane->uuid = '3e98813d-cbed-e5c4-892f-5b69c9058bd0';
    $display->content['new-3e98813d-cbed-e5c4-892f-5b69c9058bd0'] = $pane;
    $display->panels['middle'][12] = 'new-3e98813d-cbed-e5c4-892f-5b69c9058bd0';
    $pane = new stdClass;
    $pane->pid = 'new-3bace9dc-df47-b024-fd2c-c5f1854c044f';
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
    $pane->uuid = '3bace9dc-df47-b024-fd2c-c5f1854c044f';
    $display->content['new-3bace9dc-df47-b024-fd2c-c5f1854c044f'] = $pane;
    $display->panels['middle'][13] = 'new-3bace9dc-df47-b024-fd2c-c5f1854c044f';
    $pane = new stdClass;
    $pane->pid = 'new-6f92c92f-4d55-bed4-39fb-aa0d42bc4880';
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
    $pane->uuid = '6f92c92f-4d55-bed4-39fb-aa0d42bc4880';
    $display->content['new-6f92c92f-4d55-bed4-39fb-aa0d42bc4880'] = $pane;
    $display->panels['middle'][14] = 'new-6f92c92f-4d55-bed4-39fb-aa0d42bc4880';
    $pane = new stdClass;
    $pane->pid = 'new-7fa267d3-e878-2464-9136-3dc8b0ca96d6';
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
    $pane->uuid = '7fa267d3-e878-2464-9136-3dc8b0ca96d6';
    $display->content['new-7fa267d3-e878-2464-9136-3dc8b0ca96d6'] = $pane;
    $display->panels['middle'][15] = 'new-7fa267d3-e878-2464-9136-3dc8b0ca96d6';
    $pane = new stdClass;
    $pane->pid = 'new-4dc03573-e4a7-5d34-1db4-a0336561ef74';
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
    $pane->uuid = '4dc03573-e4a7-5d34-1db4-a0336561ef74';
    $display->content['new-4dc03573-e4a7-5d34-1db4-a0336561ef74'] = $pane;
    $display->panels['middle'][16] = 'new-4dc03573-e4a7-5d34-1db4-a0336561ef74';
    $pane = new stdClass;
    $pane->pid = 'new-94f7bc77-3517-0724-cd7b-ac0ef909d537';
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
    $pane->uuid = '94f7bc77-3517-0724-cd7b-ac0ef909d537';
    $display->content['new-94f7bc77-3517-0724-cd7b-ac0ef909d537'] = $pane;
    $display->panels['middle'][17] = 'new-94f7bc77-3517-0724-cd7b-ac0ef909d537';
    $pane = new stdClass;
    $pane->pid = 'new-c5d94251-ad3c-5de4-353d-764d6a044693';
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
    $pane->uuid = 'c5d94251-ad3c-5de4-353d-764d6a044693';
    $display->content['new-c5d94251-ad3c-5de4-353d-764d6a044693'] = $pane;
    $display->panels['middle'][18] = 'new-c5d94251-ad3c-5de4-353d-764d6a044693';
    $pane = new stdClass;
    $pane->pid = 'new-d88141a7-6b29-4384-1df9-5dc687d59308';
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
    $pane->uuid = 'd88141a7-6b29-4384-1df9-5dc687d59308';
    $display->content['new-d88141a7-6b29-4384-1df9-5dc687d59308'] = $pane;
    $display->panels['middle'][19] = 'new-d88141a7-6b29-4384-1df9-5dc687d59308';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context'] = $handler;

  return $export;
}
