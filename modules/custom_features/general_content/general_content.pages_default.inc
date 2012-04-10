<?php

/**
 * Implementation of hook_default_page_manager_handlers().
 */
function general_content_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'People main page',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/27646',
          ),
          'context' => 'empty',
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
  $display->uuid = 'b0ced91f-9dd5-39c4-c1dc-e53282103c43';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-6880ff81-8513-6384-891e-0acb0c01c444';
    $pane->panel = 'middle';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'page' => 1,
      'no_extras' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_nid_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->uuid = '6880ff81-8513-6384-891e-0acb0c01c444';
    $display->content['new-6880ff81-8513-6384-891e-0acb0c01c444'] = $pane;
    $display->panels['middle'][0] = 'new-6880ff81-8513-6384-891e-0acb0c01c444';
    $pane = new stdClass;
    $pane->pid = 'new-8dc992db-daf4-4d34-a931-be1e9b0ef905';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'People-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/27646',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->uuid = '8dc992db-daf4-4d34-a931-be1e9b0ef905';
    $display->content['new-8dc992db-daf4-4d34-a931-be1e9b0ef905'] = $pane;
    $display->panels['middle'][1] = 'new-8dc992db-daf4-4d34-a931-be1e9b0ef905';
    $pane = new stdClass;
    $pane->pid = 'new-8eec4c5d-2fc8-4c14-3d66-a59e560904bf';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/27646',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Eponyms',
      'title' => 'Eponyms',
      'body' => '<?php
$items = array();
foreach (taxonomy_get_related(10839) as $term) {
  $items[url(\'taxonomy/term/\'. $term->tid)] = $term->name;
}
print behavenet_build_jump_menu($items);
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
    $pane->position = 2;
    $pane->uuid = '8eec4c5d-2fc8-4c14-3d66-a59e560904bf';
    $display->content['new-8eec4c5d-2fc8-4c14-3d66-a59e560904bf'] = $pane;
    $display->panels['middle'][2] = 'new-8eec4c5d-2fc8-4c14-3d66-a59e560904bf';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Home page',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => '<front>',
          ),
          'context' => 'empty',
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
  $display->uuid = '18bd1075-85d2-2304-e9b0-27fd81974407';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-421d6ff1-acb8-cc84-cdf1-a5789afe00cb';
    $pane->panel = 'middle';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'page' => 1,
      'no_extras' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_nid_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->uuid = '421d6ff1-acb8-cc84-cdf1-a5789afe00cb';
    $display->content['new-421d6ff1-acb8-cc84-cdf1-a5789afe00cb'] = $pane;
    $display->panels['middle'][0] = 'new-421d6ff1-acb8-cc84-cdf1-a5789afe00cb';
    $pane = new stdClass;
    $pane->pid = 'new-68dd78b5-7775-1c24-15dc-e5e97010d788';
    $pane->panel = 'middle';
    $pane->type = 'panels_mini';
    $pane->subtype = 'home_page';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => '<front>',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->uuid = '68dd78b5-7775-1c24-15dc-e5e97010d788';
    $display->content['new-68dd78b5-7775-1c24-15dc-e5e97010d788'] = $pane;
    $display->panels['middle'][1] = 'new-68dd78b5-7775-1c24-15dc-e5e97010d788';
    $pane = new stdClass;
    $pane->pid = 'new-386899c4-2aa6-29a4-11e0-1e649c4e3c35';
    $pane->panel = 'middle';
    $pane->type = 'panels_mini';
    $pane->subtype = 'opinion_and_movies';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => '<front>',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->uuid = '386899c4-2aa6-29a4-11e0-1e649c4e3c35';
    $display->content['new-386899c4-2aa6-29a4-11e0-1e649c4e3c35'] = $pane;
    $display->panels['middle'][2] = 'new-386899c4-2aa6-29a4-11e0-1e649c4e3c35';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_3'] = $handler;

  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_5';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -25;
  $handler->conf = array(
    'title' => 'General content',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(),
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
  $display->uuid = '0cafa6ba-881f-2df4-b1f6-37b23e1f2940';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1d3ad850-457b-d274-f5fb-4dbba92754e4';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Content breadcrumbs',
      'title' => '',
      'body' => '<?php
print behavenet_get_content_breadcrumbs(%node:nid);
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
    $pane->uuid = '1d3ad850-457b-d274-f5fb-4dbba92754e4';
    $display->content['new-1d3ad850-457b-d274-f5fb-4dbba92754e4'] = $pane;
    $display->panels['middle'][0] = 'new-1d3ad850-457b-d274-f5fb-4dbba92754e4';
    $pane = new stdClass;
    $pane->pid = 'new-95647de8-2488-c604-e5e8-77100be9f422';
    $pane->panel = 'middle';
    $pane->type = 'content_field';
    $pane->subtype = 'field_people_alt_names';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'people' => 'people',
            ),
          ),
          'context' => 'argument_nid_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'normal',
      'formatter' => 'default',
      'context' => 'argument_nid_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->uuid = '95647de8-2488-c604-e5e8-77100be9f422';
    $display->content['new-95647de8-2488-c604-e5e8-77100be9f422'] = $pane;
    $display->panels['middle'][1] = 'new-95647de8-2488-c604-e5e8-77100be9f422';
    $pane = new stdClass;
    $pane->pid = 'new-0cef0ad5-71fa-14c4-e1f1-61d284db14b2';
    $pane->panel = 'middle';
    $pane->type = 'content_field';
    $pane->subtype = 'field_general_terms';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'normal',
      'formatter' => 'link',
      'context' => 'argument_nid_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->uuid = '0cef0ad5-71fa-14c4-e1f1-61d284db14b2';
    $display->content['new-0cef0ad5-71fa-14c4-e1f1-61d284db14b2'] = $pane;
    $display->panels['middle'][2] = 'new-0cef0ad5-71fa-14c4-e1f1-61d284db14b2';
    $pane = new stdClass;
    $pane->pid = 'new-e4db65d0-1ac2-e3f4-85e6-468a44dabef0';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'people' => 'people',
            ),
          ),
          'context' => 'argument_nid_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Birth/Death dates',
      'title' => '',
      'body' => '<?php
print behavenet_get_birth_death_dates(%node:nid);
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
    $pane->position = 3;
    $pane->uuid = 'e4db65d0-1ac2-e3f4-85e6-468a44dabef0';
    $display->content['new-e4db65d0-1ac2-e3f4-85e6-468a44dabef0'] = $pane;
    $display->panels['middle'][3] = 'new-e4db65d0-1ac2-e3f4-85e6-468a44dabef0';
    $pane = new stdClass;
    $pane->pid = 'new-6bfc2e2d-d0de-af84-9da0-c4872aebe680';
    $pane->panel = 'middle';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'page' => 1,
      'no_extras' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_nid_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->uuid = '6bfc2e2d-d0de-af84-9da0-c4872aebe680';
    $display->content['new-6bfc2e2d-d0de-af84-9da0-c4872aebe680'] = $pane;
    $display->panels['middle'][4] = 'new-6bfc2e2d-d0de-af84-9da0-c4872aebe680';
    $pane = new stdClass;
    $pane->pid = 'new-de321885-aeaa-f014-c5ac-212d46e5b65d';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'list_terms-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/27645',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Terms',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->uuid = 'de321885-aeaa-f014-c5ac-212d46e5b65d';
    $display->content['new-de321885-aeaa-f014-c5ac-212d46e5b65d'] = $pane;
    $display->panels['middle'][5] = 'new-de321885-aeaa-f014-c5ac-212d46e5b65d';
    $pane = new stdClass;
    $pane->pid = 'new-474d8166-0a41-7814-8daf-a48b547e0784';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/27645',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Acronyms jump-menu',
      'title' => 'Acronyms',
      'body' => '<?php
print behavenet_list_acronyms();
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
    $pane->position = 6;
    $pane->uuid = '474d8166-0a41-7814-8daf-a48b547e0784';
    $display->content['new-474d8166-0a41-7814-8daf-a48b547e0784'] = $pane;
    $display->panels['middle'][6] = 'new-474d8166-0a41-7814-8daf-a48b547e0784';
    $pane = new stdClass;
    $pane->pid = 'new-6b75a35f-bf11-9ab4-0d34-47f60cf43e3e';
    $pane->panel = 'middle';
    $pane->type = 'panels_mini';
    $pane->subtype = 'drug_page_lists';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/27644',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->uuid = '6b75a35f-bf11-9ab4-0d34-47f60cf43e3e';
    $display->content['new-6b75a35f-bf11-9ab4-0d34-47f60cf43e3e'] = $pane;
    $display->panels['middle'][7] = 'new-6b75a35f-bf11-9ab4-0d34-47f60cf43e3e';
    $pane = new stdClass;
    $pane->pid = 'new-782ed461-eaba-5324-e136-6805f2771a95';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/27648',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Disorders Listing',
      'title' => 'Disorders',
      'body' => '<?php
print behavenet_display_term_children(7358);
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
    $pane->uuid = '782ed461-eaba-5324-e136-6805f2771a95';
    $display->content['new-782ed461-eaba-5324-e136-6805f2771a95'] = $pane;
    $display->panels['middle'][8] = 'new-782ed461-eaba-5324-e136-6805f2771a95';
    $pane = new stdClass;
    $pane->pid = 'new-3ab7b95b-b083-5034-d5ec-166e1463f090';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'Indications-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'device' => 'device',
            ),
          ),
          'context' => 'argument_nid_1',
          'not' => FALSE,
        ),
      ),
    );
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
    $pane->position = 9;
    $pane->uuid = '3ab7b95b-b083-5034-d5ec-166e1463f090';
    $display->content['new-3ab7b95b-b083-5034-d5ec-166e1463f090'] = $pane;
    $display->panels['middle'][9] = 'new-3ab7b95b-b083-5034-d5ec-166e1463f090';
    $pane = new stdClass;
    $pane->pid = 'new-a7d1b78a-986a-e1a4-4129-754fefec64a7';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'Media-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '',
      'items_per_page' => '0',
      'context' => array(
        0 => 'argument_nid_1',
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
    $pane->position = 10;
    $pane->uuid = 'a7d1b78a-986a-e1a4-4129-754fefec64a7';
    $display->content['new-a7d1b78a-986a-e1a4-4129-754fefec64a7'] = $pane;
    $display->panels['middle'][10] = 'new-a7d1b78a-986a-e1a4-4129-754fefec64a7';
    $pane = new stdClass;
    $pane->pid = 'new-5daa3699-bd4d-d0c4-91c9-f820dece0d97';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'Media-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '',
      'items_per_page' => '0',
      'context' => array(
        0 => 'argument_nid_1',
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
    $pane->position = 11;
    $pane->uuid = '5daa3699-bd4d-d0c4-91c9-f820dece0d97';
    $display->content['new-5daa3699-bd4d-d0c4-91c9-f820dece0d97'] = $pane;
    $display->panels['middle'][11] = 'new-5daa3699-bd4d-d0c4-91c9-f820dece0d97';
    $pane = new stdClass;
    $pane->pid = 'new-e126766b-cad8-1a24-191d-070c5ebfcd29';
    $pane->panel = 'middle';
    $pane->type = 'panels_mini';
    $pane->subtype = 'goodtherapy_250_160';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/27647',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 12;
    $pane->uuid = 'e126766b-cad8-1a24-191d-070c5ebfcd29';
    $display->content['new-e126766b-cad8-1a24-191d-070c5ebfcd29'] = $pane;
    $display->panels['middle'][12] = 'new-e126766b-cad8-1a24-191d-070c5ebfcd29';
    $pane = new stdClass;
    $pane->pid = 'new-b9bd81b9-4704-5f34-7dde-738ed56e2fb6';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'Directory-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/27647',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 13;
    $pane->uuid = 'b9bd81b9-4704-5f34-7dde-738ed56e2fb6';
    $display->content['new-b9bd81b9-4704-5f34-7dde-738ed56e2fb6'] = $pane;
    $display->panels['middle'][13] = 'new-b9bd81b9-4704-5f34-7dde-738ed56e2fb6';
    $pane = new stdClass;
    $pane->pid = 'new-75988c4b-863f-54b4-3d7b-466b8234632b';
    $pane->panel = 'middle';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '2',
      'order' => '2',
      'comments_per_page' => '50',
      'anchor' => 1,
      'context' => 'argument_nid_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'comments-list',
    );
    $pane->extras = array();
    $pane->position = 14;
    $pane->uuid = '75988c4b-863f-54b4-3d7b-466b8234632b';
    $display->content['new-75988c4b-863f-54b4-3d7b-466b8234632b'] = $pane;
    $display->panels['middle'][14] = 'new-75988c4b-863f-54b4-3d7b-466b8234632b';
    $pane = new stdClass;
    $pane->pid = 'new-13588c1f-d1a1-4ed4-9586-563587ffbe75';
    $pane->panel = 'middle';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'movie' => 'movie',
            ),
          ),
          'context' => 'argument_nid_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'anon_links' => 0,
      'context' => 'argument_nid_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'comment-form',
    );
    $pane->extras = array();
    $pane->position = 15;
    $pane->uuid = '13588c1f-d1a1-4ed4-9586-563587ffbe75';
    $display->content['new-13588c1f-d1a1-4ed4-9586-563587ffbe75'] = $pane;
    $display->panels['middle'][15] = 'new-13588c1f-d1a1-4ed4-9586-563587ffbe75';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_5'] = $handler;

  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template_panel_context';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default page view',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display;
  $display->layout = 'behavenet_default';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'main' => NULL,
      'main_callout' => NULL,
      'left_sidebar' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2696da32-0baf-4ca4-fd24-44cfecaa2336';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-e95ee5a7-66f1-0114-f105-8c53477c8b86';
    $pane->panel = 'footer';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'behavenet_show_ads()',
            'php' => 'return behavenet_show_ads();',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Bottom Leaderboard Ad',
      'title' => '',
      'body' => '<!-- begin ad tag -->
<script type="text/javascript">
//<![CDATA[
if (!behave_is_mobile()) {
ord=Math.random()*10000000000000000;
document.write(\'<script type="text/javascript" src="http://ad.doubleclick.net/adj/ubm.behavenet/<?php behavenet_get_ad_tag(\'%node:nid\', \'%term:tid\'); ?>;pos=bottom;sz=728x90;ord=\' + ord + \'?"><\\/script>\');
}
//]]>
</script>
<noscript><a href="http://ad.doubleclick.net/jump/ubm.behavenet/<?php behavenet_get_ad_tag(\'%node:nid\', \'%term:tid\'); ?>;pos=bottom;sz=728x90;ord=123456789?" target="_blank" ><img src="http://ad.doubleclick.net/ad/ubm.behavenet/<?php behavenet_get_ad_tag(\'%node:nid\', \'%term:tid\'); ?>;pos=bottom;sz=728x90;ord=123456789?" border="0" alt="" /></a></noscript>
<!-- end ad tag -->
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
    $pane->position = 0;
    $pane->uuid = 'e95ee5a7-66f1-0114-f105-8c53477c8b86';
    $display->content['new-e95ee5a7-66f1-0114-f105-8c53477c8b86'] = $pane;
    $display->panels['footer'][0] = 'new-e95ee5a7-66f1-0114-f105-8c53477c8b86';
    $pane = new stdClass;
    $pane->pid = 'new-b8bff65a-007c-da44-e139-e8063863e996';
    $pane->panel = 'footer';
    $pane->type = 'page_footer_message';
    $pane->subtype = 'page_footer_message';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->uuid = 'b8bff65a-007c-da44-e139-e8063863e996';
    $display->content['new-b8bff65a-007c-da44-e139-e8063863e996'] = $pane;
    $display->panels['footer'][1] = 'new-b8bff65a-007c-da44-e139-e8063863e996';
    $pane = new stdClass;
    $pane->pid = 'new-497c44d2-7cf9-e464-bd50-d6c756b73f92';
    $pane->panel = 'footer';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Medica Registration Bar',
      'title' => '',
      'body' => '<script src="https://member.cmpmedica.com/ssonp/networkbar.js.php?partnerGUID=130B7ACB-9CE9-4562-8C37-B5E3E5E49EAA" type="text/javascript" ></script>',
      'format' => '2',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->uuid = '497c44d2-7cf9-e464-bd50-d6c756b73f92';
    $display->content['new-497c44d2-7cf9-e464-bd50-d6c756b73f92'] = $pane;
    $display->panels['footer'][2] = 'new-497c44d2-7cf9-e464-bd50-d6c756b73f92';
    $pane = new stdClass;
    $pane->pid = 'new-bc75b15e-ca9a-f964-d5cf-948878e71c95';
    $pane->panel = 'footer';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => '',
            'php' => 'return behavenet_show_ads();',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Interstitial Ad',
      'title' => '',
      'body' => '<script language="JavaScript" type="text/javascript">
// <![CDATA[
if (!behave_is_mobile()) {
ord=Math.random()*10000000000000000;
document.write(\'<script language="JavaScript" src="http://ad.doubleclick.net/adj/ubm.behavenet/<?php behavenet_get_ad_tag(\'%node:nid\', \'%term:tid\'); ?>;pos=interstitial;dcopt=ist;sz=10x1;ord=\' + ord + \'?" type="text/javascript"><\\/scr\' + \'ipt>\');
}
// ]]>
</script>',
      'format' => '4',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->uuid = 'bc75b15e-ca9a-f964-d5cf-948878e71c95';
    $display->content['new-bc75b15e-ca9a-f964-d5cf-948878e71c95'] = $pane;
    $display->panels['footer'][3] = 'new-bc75b15e-ca9a-f964-d5cf-948878e71c95';
    $pane = new stdClass;
    $pane->pid = 'new-7d45874d-3dc7-34f4-3d4b-3181dea146b9';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Mobile-only ads',
      'title' => '',
      'body' => '<script type="text/javascript">if(behave_is_mobile())document.write(\'\\x3cscript type="text/javascript" src="http://impel.mobiletheory.com/ad/mobiletheory.php?f=c&pid=NDY2">\\x3c/script>\');</script>',
      'format' => '2',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->uuid = '7d45874d-3dc7-34f4-3d4b-3181dea146b9';
    $display->content['new-7d45874d-3dc7-34f4-3d4b-3181dea146b9'] = $pane;
    $display->panels['header'][0] = 'new-7d45874d-3dc7-34f4-3d4b-3181dea146b9';
    $pane = new stdClass;
    $pane->pid = 'new-9c251e93-6d21-0304-21bd-e455c61bfd3b';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'behavenet_show_ads()',
            'php' => 'return behavenet_show_ads();',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Leaderboard Ad',
      'title' => '',
      'body' => '<!-- begin ad tag -->
<script type="text/javascript">
//<![CDATA[
if (!behave_is_mobile()) {
ord=Math.random()*10000000000000000;
document.write(\'<script type="text/javascript" src="http://ad.doubleclick.net/adj/ubm.behavenet/<?php behavenet_get_ad_tag(\'%node:nid\', \'%term:tid\'); ?>;pos=top;sz=728x90;ord=\' + ord + \'?"><\\/script>\');
}
//]]>
</script>
<noscript><a href="http://ad.doubleclick.net/jump/ubm.behavenet/<?php behavenet_get_ad_tag(\'%node:nid\', \'%term:tid\'); ?>;pos=top;sz=728x90;ord=123456789?" target="_blank" ><img src="http://ad.doubleclick.net/ad/ubm.behavenet/<?php behavenet_get_ad_tag(\'%node:nid\', \'%term:tid\'); ?>;pos=top;sz=728x90;ord=123456789?" border="0" alt="" /></a></noscript>
<!-- end ad tag -->
',
      'format' => '4',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'leaderboard-ad',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->uuid = '9c251e93-6d21-0304-21bd-e455c61bfd3b';
    $display->content['new-9c251e93-6d21-0304-21bd-e455c61bfd3b'] = $pane;
    $display->panels['header'][1] = 'new-9c251e93-6d21-0304-21bd-e455c61bfd3b';
    $pane = new stdClass;
    $pane->pid = 'new-40097a7f-5512-0074-e136-94a39aa0726d';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'views--exp-search-default';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 0,
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->uuid = '40097a7f-5512-0074-e136-94a39aa0726d';
    $display->content['new-40097a7f-5512-0074-e136-94a39aa0726d'] = $pane;
    $display->panels['header'][2] = 'new-40097a7f-5512-0074-e136-94a39aa0726d';
    $pane = new stdClass;
    $pane->pid = 'new-9d0438ab-9bbc-48a4-194b-1d23cc5ffed3';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-main-tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'main-tabs',
      'css_class' => 'main-tabs',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->uuid = '9d0438ab-9bbc-48a4-194b-1d23cc5ffed3';
    $display->content['new-9d0438ab-9bbc-48a4-194b-1d23cc5ffed3'] = $pane;
    $display->panels['header'][3] = 'new-9d0438ab-9bbc-48a4-194b-1d23cc5ffed3';
    $pane = new stdClass;
    $pane->pid = 'new-cf1a6057-f27a-da04-d160-0af4cc6814a9';
    $pane->panel = 'header';
    $pane->type = 'pane_messages';
    $pane->subtype = 'pane_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->uuid = 'cf1a6057-f27a-da04-d160-0af4cc6814a9';
    $display->content['new-cf1a6057-f27a-da04-d160-0af4cc6814a9'] = $pane;
    $display->panels['header'][4] = 'new-cf1a6057-f27a-da04-d160-0af4cc6814a9';
    $pane = new stdClass;
    $pane->pid = 'new-a0f83f80-007e-7314-b96d-995964c370ad';
    $pane->panel = 'left_sidebar';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->uuid = 'a0f83f80-007e-7314-b96d-995964c370ad';
    $display->content['new-a0f83f80-007e-7314-b96d-995964c370ad'] = $pane;
    $display->panels['left_sidebar'][0] = 'new-a0f83f80-007e-7314-b96d-995964c370ad';
    $pane = new stdClass;
    $pane->pid = 'new-6fa76278-7f63-0f64-897e-3b28142a747d';
    $pane->panel = 'left_sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Nested menu',
      'title' => 'Glossaries',
      'body' => '<div class="behavenet-collapsible-menu">
<ul>
  <li><a href="<?php print url(\'taxonomy/term/6678\'); ?>">Addiction</a>
    <ul>
      <li><a href="<?php print url(\'taxonomy/term/6663\'); ?>">Recovery</a>
        <ul>
          <li><a href="<?php print url(\'taxonomy/term/10770\'); ?>">12 Step talk</a></li>
        </ul>
      </li>
    </ul>
  </li>
  <li><a href="<?php print url(\'taxonomy/term/7558\'); ?>">Forensic</a></li>
  <li><a href="<?php print url(\'taxonomy/term/7814\'); ?>">HIPAA</a></li>
  <li><a href="<?php print url(\'taxonomy/term/7885\'); ?>">Memory</a></li>
  <li><a href="<?php print url(\'taxonomy/term/8171\'); ?>">Pharmacology</a></li>
  <li><a href="<?php print url(\'taxonomy/term/8041\'); ?>">Psychopathology</a></li>
  <li><a href="<?php print url(\'taxonomy/term/7084\'); ?>">Psychotherapy</a>
    <ul>
      <li><a href="<?php print url(\'taxonomy/term/8207\'); ?>">Adlerian (Individual) Psychology</a></li>
      <li><a href="<?php print url(\'taxonomy/term/8654\'); ?>">Cognitive Behavior Therapy</a></li>
      <li><a href="<?php print url(\'taxonomy/term/9120\'); ?>">Eye Movement Desensitization &amp; Reprocessing</a></li>
      <li><a href="<?php print url(\'taxonomy/term/8798\'); ?>">Family Psychotherapy</a></li>
      <li><a href="<?php print url(\'taxonomy/term/8947\'); ?>">Gestalt Therapy</a></li>
      <li><a href="<?php print url(\'taxonomy/term/9127\'); ?>">Internal Family Systems</a></li>
      <li><a href="<?php print url(\'taxonomy/term/9018\'); ?>">Jungian</a></li>
      <li><a href="<?php print url(\'taxonomy/term/9061\'); ?>">Narrative</a></li>
      <li><a href="<?php print url(\'taxonomy/term/11331\'); ?>">Psychoanalytic</a></li>
      <li><a href="<?php print url(\'taxonomy/term/8603\'); ?>">Psychodynamic</a></li>
      <li><a href="<?php print url(\'taxonomy/term/9140\'); ?>">Transactional Analysis</a></li>
    </ul>
  </li>
  <li><a href="<?php print url(\'taxonomy/term/8520\'); ?>">Reimbursement</a></li>
  <li><a href="<?php print url(\'taxonomy/term/8349\'); ?>">Sleep Medicine</a>
    <ul>
      <li><a href="<?php print url(\'taxonomy/term/7627\'); ?>">Chronobiology</a></li>
      <li><a href="<?php print url(\'taxonomy/term/6831\'); ?>">EEG</a></li>
      <li><a href="<?php print url(\'taxonomy/term/6847\'); ?>">Polysomnography</a></li>
    </ul>
  </li>
  <li><a href="<?php print url(\'taxonomy/term/7481\'); ?>">Stuttering</a></li>
</ul></div>',
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
    $pane->uuid = '6fa76278-7f63-0f64-897e-3b28142a747d';
    $display->content['new-6fa76278-7f63-0f64-897e-3b28142a747d'] = $pane;
    $display->panels['left_sidebar'][1] = 'new-6fa76278-7f63-0f64-897e-3b28142a747d';
    $pane = new stdClass;
    $pane->pid = 'new-8ee52c91-c81d-1044-7500-81090f20a104';
    $pane->panel = 'left_sidebar';
    $pane->type = 'panels_mini';
    $pane->subtype = 'social_media_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->uuid = '8ee52c91-c81d-1044-7500-81090f20a104';
    $display->content['new-8ee52c91-c81d-1044-7500-81090f20a104'] = $pane;
    $display->panels['left_sidebar'][2] = 'new-8ee52c91-c81d-1044-7500-81090f20a104';
    $pane = new stdClass;
    $pane->pid = 'new-45ad5814-ce2b-8314-49ca-946ae623b75d';
    $pane->panel = 'left_sidebar';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '27767',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => 'Daily Tweets',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'daily-tweets',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->uuid = '45ad5814-ce2b-8314-49ca-946ae623b75d';
    $display->content['new-45ad5814-ce2b-8314-49ca-946ae623b75d'] = $pane;
    $display->panels['left_sidebar'][3] = 'new-45ad5814-ce2b-8314-49ca-946ae623b75d';
    $pane = new stdClass;
    $pane->pid = 'new-3145d2d3-c226-77a4-d54a-03a442e34030';
    $pane->panel = 'left_sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'behavenet_show_ads()',
            'php' => 'return behavenet_show_ads();',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Skyscraper Ad 1',
      'title' => '',
      'body' => '<!-- begin ad tag -->
<script type="text/javascript">
//<![CDATA[
if (!behave_is_mobile()) {
ord=Math.random()*10000000000000000;
document.write(\'<script type="text/javascript" src="http://ad.doubleclick.net/adj/ubm.behavenet/<?php behavenet_get_ad_tag(\'%node:nid\', \'%term:tid\'); ?>;pos=sky1;sz=120x600,160x600;ord=\' + ord + \'?"><\\/script>\');
}
//]]>
</script>
<noscript><a href="http://ad.doubleclick.net/jump/ubm.behavenet/<?php behavenet_get_ad_tag(\'%node:nid\', \'%term:tid\'); ?>;pos=sky1;sz=120x600,160x600;ord=123456789?" target="_blank" ><img src="http://ad.doubleclick.net/ad/ubm.behavenet/<?php behavenet_get_ad_tag(\'%node:nid\', \'%term:tid\'); ?>;pos=sky1;sz=120x600,160x600;ord=123456789?" border="0" alt="" /></a></noscript>
<!-- end ad tag -->
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
    $pane->position = 4;
    $pane->uuid = '3145d2d3-c226-77a4-d54a-03a442e34030';
    $display->content['new-3145d2d3-c226-77a4-d54a-03a442e34030'] = $pane;
    $display->panels['left_sidebar'][4] = 'new-3145d2d3-c226-77a4-d54a-03a442e34030';
    $pane = new stdClass;
    $pane->pid = 'new-a2616248-a51f-bf84-156a-6235ebe2e705';
    $pane->panel = 'main';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '0',
            'paths' => '<front>',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => 'page-title',
      'id' => '',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'page-title',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->uuid = 'a2616248-a51f-bf84-156a-6235ebe2e705';
    $display->content['new-a2616248-a51f-bf84-156a-6235ebe2e705'] = $pane;
    $display->panels['main'][0] = 'new-a2616248-a51f-bf84-156a-6235ebe2e705';
    $pane = new stdClass;
    $pane->pid = 'new-a99b6d09-b692-7df4-3951-eed79c62671e';
    $pane->panel = 'main';
    $pane->type = 'page_messages';
    $pane->subtype = 'page_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->uuid = 'a99b6d09-b692-7df4-3951-eed79c62671e';
    $display->content['new-a99b6d09-b692-7df4-3951-eed79c62671e'] = $pane;
    $display->panels['main'][1] = 'new-a99b6d09-b692-7df4-3951-eed79c62671e';
    $pane = new stdClass;
    $pane->pid = 'new-6a68ad39-7fdc-aec4-e5eb-546ee98ce68e';
    $pane->panel = 'main';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'search-form',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->uuid = '6a68ad39-7fdc-aec4-e5eb-546ee98ce68e';
    $display->content['new-6a68ad39-7fdc-aec4-e5eb-546ee98ce68e'] = $pane;
    $display->panels['main'][2] = 'new-6a68ad39-7fdc-aec4-e5eb-546ee98ce68e';
    $pane = new stdClass;
    $pane->pid = 'new-81099c77-56fa-e334-152c-106ed669bf40';
    $pane->panel = 'main_callout';
    $pane->type = 'panels_mini';
    $pane->subtype = 'people_callout';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'people' => 'people',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'context' => array(
        0 => 'node',
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->uuid = '81099c77-56fa-e334-152c-106ed669bf40';
    $display->content['new-81099c77-56fa-e334-152c-106ed669bf40'] = $pane;
    $display->panels['main_callout'][0] = 'new-81099c77-56fa-e334-152c-106ed669bf40';
    $pane = new stdClass;
    $pane->pid = 'new-10ebfb77-f103-af64-95fa-ce3f017bfe77';
    $pane->panel = 'main_callout';
    $pane->type = 'content_field';
    $pane->subtype = 'field_general_asin';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'book' => 'book',
              'movie' => 'movie',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'normal',
      'formatter' => 'thumbnail',
      'context' => 'node',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->uuid = '10ebfb77-f103-af64-95fa-ce3f017bfe77';
    $display->content['new-10ebfb77-f103-af64-95fa-ce3f017bfe77'] = $pane;
    $display->panels['main_callout'][1] = 'new-10ebfb77-f103-af64-95fa-ce3f017bfe77';
    $pane = new stdClass;
    $pane->pid = 'new-806f5e37-26b6-ff94-6d71-01e2cc81c29c';
    $pane->panel = 'main_callout';
    $pane->type = 'content_field';
    $pane->subtype = 'field_generic_graphic';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'combinations' => 'combinations',
              'compound' => 'compound',
              'device' => 'device',
              'preparation' => 'preparation',
              'sources' => 'sources',
              'generic' => 'generic',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'normal',
      'formatter' => 'right_callout_image_default',
      'context' => 'node',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->uuid = '806f5e37-26b6-ff94-6d71-01e2cc81c29c';
    $display->content['new-806f5e37-26b6-ff94-6d71-01e2cc81c29c'] = $pane;
    $display->panels['main_callout'][2] = 'new-806f5e37-26b6-ff94-6d71-01e2cc81c29c';
    $pane = new stdClass;
    $pane->pid = 'new-77c175db-5452-bf34-3d1e-1d2ba57d88df';
    $pane->panel = 'main_callout';
    $pane->type = 'views_panes';
    $pane->subtype = 'terms_extras-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'vids' => array(
              9 => 9,
              3 => 3,
              10 => 10,
              12 => 12,
              2 => 2,
              5 => 5,
            ),
          ),
          'context' => 'term',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'context' => array(
        0 => 'term',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->uuid = '77c175db-5452-bf34-3d1e-1d2ba57d88df';
    $display->content['new-77c175db-5452-bf34-3d1e-1d2ba57d88df'] = $pane;
    $display->panels['main_callout'][3] = 'new-77c175db-5452-bf34-3d1e-1d2ba57d88df';
    $pane = new stdClass;
    $pane->pid = 'new-9da743af-652b-3464-f944-a3c3cb86f07f';
    $pane->panel = 'main_callout';
    $pane->type = 'content_field';
    $pane->subtype = 'field_drug_image';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'drug' => 'drug',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'normal',
      'formatter' => 'right_callout_image_default',
      'context' => 'node',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->uuid = '9da743af-652b-3464-f944-a3c3cb86f07f';
    $display->content['new-9da743af-652b-3464-f944-a3c3cb86f07f'] = $pane;
    $display->panels['main_callout'][4] = 'new-9da743af-652b-3464-f944-a3c3cb86f07f';
    $pane = new stdClass;
    $pane->pid = 'new-539aa328-187d-2f04-fdfd-44a33fbd8dee';
    $pane->panel = 'main_callout';
    $pane->type = 'content_field';
    $pane->subtype = 'field_tt_extras_image';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'vids' => array(
              9 => 9,
              3 => 3,
              10 => 10,
              12 => 12,
              2 => 2,
              5 => 5,
            ),
          ),
          'context' => 'term',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'normal',
      'formatter' => 'right_callout_image_default',
      'context' => 'node',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->uuid = '539aa328-187d-2f04-fdfd-44a33fbd8dee';
    $display->content['new-539aa328-187d-2f04-fdfd-44a33fbd8dee'] = $pane;
    $display->panels['main_callout'][5] = 'new-539aa328-187d-2f04-fdfd-44a33fbd8dee';
    $pane = new stdClass;
    $pane->pid = 'new-6ba974f7-a60b-a974-01e9-f0e0872e61da';
    $pane->panel = 'main_callout';
    $pane->type = 'views_panes';
    $pane->subtype = 'Credit-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '1',
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'context' => array(
        0 => 'node',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->uuid = '6ba974f7-a60b-a974-01e9-f0e0872e61da';
    $display->content['new-6ba974f7-a60b-a974-01e9-f0e0872e61da'] = $pane;
    $display->panels['main_callout'][6] = 'new-6ba974f7-a60b-a974-01e9-f0e0872e61da';
    $pane = new stdClass;
    $pane->pid = 'new-84bd6d7d-cfac-c114-c9cd-1126540d1ff2';
    $pane->panel = 'main_callout';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'behavenet_show_ads()',
            'php' => 'return behavenet_show_ads();',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Rectangle Ad (300 x 250)',
      'title' => '',
      'body' => '<!-- begin ad tag -->
<script type="text/javascript">
//<![CDATA[
if (!behave_is_mobile()) {
ord=Math.random()*10000000000000000;
document.write(\'<script type="text/javascript" src="http://ad.doubleclick.net/adj/ubm.behavenet/<?php behavenet_get_ad_tag(\'%node:nid\', \'%term:tid\'); ?>;pos=rec1;sz=300x250;ord=\' + ord + \'?"><\\/script>\');
}
//]]>
</script>
<noscript><a href="http://ad.doubleclick.net/jump/ubm.behavenet/<?php behavenet_get_ad_tag(\'%node:nid\', \'%term:tid\'); ?>;pos=rec1;sz=300x250;ord=123456789?" target="_blank" ><img src="http://ad.doubleclick.net/ad/ubm.behavenet/<?php behavenet_get_ad_tag(\'%node:nid\', \'%term:tid\'); ?>;pos=rec1;sz=300x250;ord=123456789?" border="0" alt="" /></a></noscript>
<!-- end ad tag -->
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
    $pane->position = 7;
    $pane->uuid = '84bd6d7d-cfac-c114-c9cd-1126540d1ff2';
    $display->content['new-84bd6d7d-cfac-c114-c9cd-1126540d1ff2'] = $pane;
    $display->panels['main_callout'][7] = 'new-84bd6d7d-cfac-c114-c9cd-1126540d1ff2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a0f83f80-007e-7314-b96d-995964c370ad';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context'] = $handler;

  return $export;
}
