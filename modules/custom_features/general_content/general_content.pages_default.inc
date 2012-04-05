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
  $handler->weight = -26;
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
  $display->uuid = '64e987af-c393-7f24-c556-1d7e0774b137';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-940f53db-931b-2e74-ed50-aa096035f748';
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
    $pane->uuid = '940f53db-931b-2e74-ed50-aa096035f748';
    $display->content['new-940f53db-931b-2e74-ed50-aa096035f748'] = $pane;
    $display->panels['middle'][0] = 'new-940f53db-931b-2e74-ed50-aa096035f748';
    $pane = new stdClass;
    $pane->pid = 'new-7f608c4d-e34b-01f4-6def-550bf992ecc0';
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
    $pane->uuid = '7f608c4d-e34b-01f4-6def-550bf992ecc0';
    $display->content['new-7f608c4d-e34b-01f4-6def-550bf992ecc0'] = $pane;
    $display->panels['middle'][1] = 'new-7f608c4d-e34b-01f4-6def-550bf992ecc0';
    $pane = new stdClass;
    $pane->pid = 'new-c4f204dc-fd92-f4c4-f5d4-de7b2978c27d';
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
    $pane->uuid = 'c4f204dc-fd92-f4c4-f5d4-de7b2978c27d';
    $display->content['new-c4f204dc-fd92-f4c4-f5d4-de7b2978c27d'] = $pane;
    $display->panels['middle'][2] = 'new-c4f204dc-fd92-f4c4-f5d4-de7b2978c27d';
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
  $display->uuid = '64cd0893-2c3c-c014-4dbe-76bd25003ae5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-0d9daeca-77e9-92c4-0db4-1eb14817a401';
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
    $pane->uuid = '0d9daeca-77e9-92c4-0db4-1eb14817a401';
    $display->content['new-0d9daeca-77e9-92c4-0db4-1eb14817a401'] = $pane;
    $display->panels['middle'][0] = 'new-0d9daeca-77e9-92c4-0db4-1eb14817a401';
    $pane = new stdClass;
    $pane->pid = 'new-e4f311a2-dcf7-b7a4-614d-6ab4596886c3';
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
    $pane->uuid = 'e4f311a2-dcf7-b7a4-614d-6ab4596886c3';
    $display->content['new-e4f311a2-dcf7-b7a4-614d-6ab4596886c3'] = $pane;
    $display->panels['middle'][1] = 'new-e4f311a2-dcf7-b7a4-614d-6ab4596886c3';
    $pane = new stdClass;
    $pane->pid = 'new-cedf63c1-ba12-ac74-21f6-b33a2c9b2982';
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
    $pane->uuid = 'cedf63c1-ba12-ac74-21f6-b33a2c9b2982';
    $display->content['new-cedf63c1-ba12-ac74-21f6-b33a2c9b2982'] = $pane;
    $display->panels['middle'][2] = 'new-cedf63c1-ba12-ac74-21f6-b33a2c9b2982';
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
  $display->uuid = '9afb59df-7545-4074-e5ec-9809ec8157f3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-318a324e-1f81-6fc4-953e-9703c23d5392';
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
    $pane->uuid = '318a324e-1f81-6fc4-953e-9703c23d5392';
    $display->content['new-318a324e-1f81-6fc4-953e-9703c23d5392'] = $pane;
    $display->panels['middle'][0] = 'new-318a324e-1f81-6fc4-953e-9703c23d5392';
    $pane = new stdClass;
    $pane->pid = 'new-c8f987de-318e-a304-7dc9-bd62a9278a21';
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
    $pane->uuid = 'c8f987de-318e-a304-7dc9-bd62a9278a21';
    $display->content['new-c8f987de-318e-a304-7dc9-bd62a9278a21'] = $pane;
    $display->panels['middle'][1] = 'new-c8f987de-318e-a304-7dc9-bd62a9278a21';
    $pane = new stdClass;
    $pane->pid = 'new-806a9ce7-f3ea-ccc4-f177-7bf93e77b289';
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
    $pane->uuid = '806a9ce7-f3ea-ccc4-f177-7bf93e77b289';
    $display->content['new-806a9ce7-f3ea-ccc4-f177-7bf93e77b289'] = $pane;
    $display->panels['middle'][2] = 'new-806a9ce7-f3ea-ccc4-f177-7bf93e77b289';
    $pane = new stdClass;
    $pane->pid = 'new-0da9de9d-2aaa-54e4-e122-76cce1ec35a8';
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
    $pane->uuid = '0da9de9d-2aaa-54e4-e122-76cce1ec35a8';
    $display->content['new-0da9de9d-2aaa-54e4-e122-76cce1ec35a8'] = $pane;
    $display->panels['middle'][3] = 'new-0da9de9d-2aaa-54e4-e122-76cce1ec35a8';
    $pane = new stdClass;
    $pane->pid = 'new-4b9bcb8d-e9ef-9334-a90a-bf58f3c250c1';
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
    $pane->uuid = '4b9bcb8d-e9ef-9334-a90a-bf58f3c250c1';
    $display->content['new-4b9bcb8d-e9ef-9334-a90a-bf58f3c250c1'] = $pane;
    $display->panels['middle'][4] = 'new-4b9bcb8d-e9ef-9334-a90a-bf58f3c250c1';
    $pane = new stdClass;
    $pane->pid = 'new-300c7677-72ca-0614-5de4-b25074b9c321';
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
    $pane->uuid = '300c7677-72ca-0614-5de4-b25074b9c321';
    $display->content['new-300c7677-72ca-0614-5de4-b25074b9c321'] = $pane;
    $display->panels['middle'][5] = 'new-300c7677-72ca-0614-5de4-b25074b9c321';
    $pane = new stdClass;
    $pane->pid = 'new-79976b49-001b-2114-5d8c-d3120efc17a2';
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
    $pane->uuid = '79976b49-001b-2114-5d8c-d3120efc17a2';
    $display->content['new-79976b49-001b-2114-5d8c-d3120efc17a2'] = $pane;
    $display->panels['middle'][6] = 'new-79976b49-001b-2114-5d8c-d3120efc17a2';
    $pane = new stdClass;
    $pane->pid = 'new-9e8e7d31-00c1-7974-25a8-f9f03ce4f567';
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
    $pane->uuid = '9e8e7d31-00c1-7974-25a8-f9f03ce4f567';
    $display->content['new-9e8e7d31-00c1-7974-25a8-f9f03ce4f567'] = $pane;
    $display->panels['middle'][7] = 'new-9e8e7d31-00c1-7974-25a8-f9f03ce4f567';
    $pane = new stdClass;
    $pane->pid = 'new-85a1337b-f3a3-ae84-7116-73646b0fe045';
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
    $pane->uuid = '85a1337b-f3a3-ae84-7116-73646b0fe045';
    $display->content['new-85a1337b-f3a3-ae84-7116-73646b0fe045'] = $pane;
    $display->panels['middle'][8] = 'new-85a1337b-f3a3-ae84-7116-73646b0fe045';
    $pane = new stdClass;
    $pane->pid = 'new-8302ca26-c91e-3b74-297b-93fa44e62497';
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
    $pane->uuid = '8302ca26-c91e-3b74-297b-93fa44e62497';
    $display->content['new-8302ca26-c91e-3b74-297b-93fa44e62497'] = $pane;
    $display->panels['middle'][9] = 'new-8302ca26-c91e-3b74-297b-93fa44e62497';
    $pane = new stdClass;
    $pane->pid = 'new-3606aaa3-bef0-7004-c118-d02498e91ae1';
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
    $pane->uuid = '3606aaa3-bef0-7004-c118-d02498e91ae1';
    $display->content['new-3606aaa3-bef0-7004-c118-d02498e91ae1'] = $pane;
    $display->panels['middle'][10] = 'new-3606aaa3-bef0-7004-c118-d02498e91ae1';
    $pane = new stdClass;
    $pane->pid = 'new-1f835651-d6a7-aa54-75f6-282708b9bb85';
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
    $pane->uuid = '1f835651-d6a7-aa54-75f6-282708b9bb85';
    $display->content['new-1f835651-d6a7-aa54-75f6-282708b9bb85'] = $pane;
    $display->panels['middle'][11] = 'new-1f835651-d6a7-aa54-75f6-282708b9bb85';
    $pane = new stdClass;
    $pane->pid = 'new-c0c9fd36-27e9-6e64-d5a1-ab1b662bb0a3';
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
    $pane->uuid = 'c0c9fd36-27e9-6e64-d5a1-ab1b662bb0a3';
    $display->content['new-c0c9fd36-27e9-6e64-d5a1-ab1b662bb0a3'] = $pane;
    $display->panels['middle'][12] = 'new-c0c9fd36-27e9-6e64-d5a1-ab1b662bb0a3';
    $pane = new stdClass;
    $pane->pid = 'new-b510a127-bf52-e584-65e4-ef3b527b2ecc';
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
    $pane->uuid = 'b510a127-bf52-e584-65e4-ef3b527b2ecc';
    $display->content['new-b510a127-bf52-e584-65e4-ef3b527b2ecc'] = $pane;
    $display->panels['middle'][13] = 'new-b510a127-bf52-e584-65e4-ef3b527b2ecc';
    $pane = new stdClass;
    $pane->pid = 'new-4567d04f-f1a9-c214-e515-5e95f4771672';
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
    $pane->uuid = '4567d04f-f1a9-c214-e515-5e95f4771672';
    $display->content['new-4567d04f-f1a9-c214-e515-5e95f4771672'] = $pane;
    $display->panels['middle'][14] = 'new-4567d04f-f1a9-c214-e515-5e95f4771672';
    $pane = new stdClass;
    $pane->pid = 'new-908f3dc3-a780-3a24-7108-c3c2f2d04474';
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
    $pane->uuid = '908f3dc3-a780-3a24-7108-c3c2f2d04474';
    $display->content['new-908f3dc3-a780-3a24-7108-c3c2f2d04474'] = $pane;
    $display->panels['middle'][15] = 'new-908f3dc3-a780-3a24-7108-c3c2f2d04474';
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
  $display->uuid = '0005c5b2-59d2-5134-ed0a-5cd0fd6fcbb8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-977f424d-bd3a-4d24-0d43-9d113672ed82';
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
    $pane->uuid = '977f424d-bd3a-4d24-0d43-9d113672ed82';
    $display->content['new-977f424d-bd3a-4d24-0d43-9d113672ed82'] = $pane;
    $display->panels['footer'][0] = 'new-977f424d-bd3a-4d24-0d43-9d113672ed82';
    $pane = new stdClass;
    $pane->pid = 'new-58e7bd95-b654-1254-d532-a16497beeefc';
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
    $pane->uuid = '58e7bd95-b654-1254-d532-a16497beeefc';
    $display->content['new-58e7bd95-b654-1254-d532-a16497beeefc'] = $pane;
    $display->panels['footer'][1] = 'new-58e7bd95-b654-1254-d532-a16497beeefc';
    $pane = new stdClass;
    $pane->pid = 'new-4f41f755-ce86-bf44-bd79-71d6370d8965';
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
    $pane->uuid = '4f41f755-ce86-bf44-bd79-71d6370d8965';
    $display->content['new-4f41f755-ce86-bf44-bd79-71d6370d8965'] = $pane;
    $display->panels['footer'][2] = 'new-4f41f755-ce86-bf44-bd79-71d6370d8965';
    $pane = new stdClass;
    $pane->pid = 'new-1ce86618-8005-5604-89dc-358c3da0a076';
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
    $pane->uuid = '1ce86618-8005-5604-89dc-358c3da0a076';
    $display->content['new-1ce86618-8005-5604-89dc-358c3da0a076'] = $pane;
    $display->panels['footer'][3] = 'new-1ce86618-8005-5604-89dc-358c3da0a076';
    $pane = new stdClass;
    $pane->pid = 'new-5644b9ee-da30-0114-511c-d7ab47092232';
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
    $pane->uuid = '5644b9ee-da30-0114-511c-d7ab47092232';
    $display->content['new-5644b9ee-da30-0114-511c-d7ab47092232'] = $pane;
    $display->panels['header'][0] = 'new-5644b9ee-da30-0114-511c-d7ab47092232';
    $pane = new stdClass;
    $pane->pid = 'new-c43796b0-125d-3ed4-8908-57818398f5aa';
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
    $pane->uuid = 'c43796b0-125d-3ed4-8908-57818398f5aa';
    $display->content['new-c43796b0-125d-3ed4-8908-57818398f5aa'] = $pane;
    $display->panels['header'][1] = 'new-c43796b0-125d-3ed4-8908-57818398f5aa';
    $pane = new stdClass;
    $pane->pid = 'new-969266d3-5ba7-13b4-e5a6-73fc211dc12b';
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
    $pane->uuid = '969266d3-5ba7-13b4-e5a6-73fc211dc12b';
    $display->content['new-969266d3-5ba7-13b4-e5a6-73fc211dc12b'] = $pane;
    $display->panels['header'][2] = 'new-969266d3-5ba7-13b4-e5a6-73fc211dc12b';
    $pane = new stdClass;
    $pane->pid = 'new-acf36af3-e357-ccd4-89d9-bc8d5351fd52';
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
    $pane->uuid = 'acf36af3-e357-ccd4-89d9-bc8d5351fd52';
    $display->content['new-acf36af3-e357-ccd4-89d9-bc8d5351fd52'] = $pane;
    $display->panels['header'][3] = 'new-acf36af3-e357-ccd4-89d9-bc8d5351fd52';
    $pane = new stdClass;
    $pane->pid = 'new-0ac240c6-25d6-8d84-f9c0-3e497d43e590';
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
    $pane->uuid = '0ac240c6-25d6-8d84-f9c0-3e497d43e590';
    $display->content['new-0ac240c6-25d6-8d84-f9c0-3e497d43e590'] = $pane;
    $display->panels['header'][4] = 'new-0ac240c6-25d6-8d84-f9c0-3e497d43e590';
    $pane = new stdClass;
    $pane->pid = 'new-d867f493-82fb-3654-c989-22767db833f5';
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
    $pane->uuid = 'd867f493-82fb-3654-c989-22767db833f5';
    $display->content['new-d867f493-82fb-3654-c989-22767db833f5'] = $pane;
    $display->panels['left_sidebar'][0] = 'new-d867f493-82fb-3654-c989-22767db833f5';
    $pane = new stdClass;
    $pane->pid = 'new-e9a5a114-86b7-1da4-f109-2e56deded043';
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
    $pane->uuid = 'e9a5a114-86b7-1da4-f109-2e56deded043';
    $display->content['new-e9a5a114-86b7-1da4-f109-2e56deded043'] = $pane;
    $display->panels['left_sidebar'][1] = 'new-e9a5a114-86b7-1da4-f109-2e56deded043';
    $pane = new stdClass;
    $pane->pid = 'new-1cb3add1-1575-6674-856c-50bfc27a29de';
    $pane->panel = 'left_sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Follow us links',
      'title' => '',
      'body' => '<div class="follow-us-links">
<?php $images = base_path() . drupal_get_path(\'theme\', \'Behavenet\') . \'/images\'; ?>
<a href="http://www.facebook.com/pages/BehaveNet/121151723906"><img src="<?php print "$images/findus_facebook.gif"; ?>" /></a><br />
<a href="http://twitter.com/behavenet"><img src="<?php print "$images/findus_twitter.gif"; ?>" /></a>
</div>',
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
    $pane->uuid = '1cb3add1-1575-6674-856c-50bfc27a29de';
    $display->content['new-1cb3add1-1575-6674-856c-50bfc27a29de'] = $pane;
    $display->panels['left_sidebar'][2] = 'new-1cb3add1-1575-6674-856c-50bfc27a29de';
    $pane = new stdClass;
    $pane->pid = 'new-1148ddf7-3721-1444-410d-a59fcbd375b4';
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
    $pane->position = 3;
    $pane->uuid = '1148ddf7-3721-1444-410d-a59fcbd375b4';
    $display->content['new-1148ddf7-3721-1444-410d-a59fcbd375b4'] = $pane;
    $display->panels['left_sidebar'][3] = 'new-1148ddf7-3721-1444-410d-a59fcbd375b4';
    $pane = new stdClass;
    $pane->pid = 'new-6467f9d2-56a3-8cc4-9506-1ca39410ce1f';
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
    $pane->uuid = '6467f9d2-56a3-8cc4-9506-1ca39410ce1f';
    $display->content['new-6467f9d2-56a3-8cc4-9506-1ca39410ce1f'] = $pane;
    $display->panels['main'][0] = 'new-6467f9d2-56a3-8cc4-9506-1ca39410ce1f';
    $pane = new stdClass;
    $pane->pid = 'new-0ae34942-84db-af34-e5f0-2b0a53a2e238';
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
    $pane->uuid = '0ae34942-84db-af34-e5f0-2b0a53a2e238';
    $display->content['new-0ae34942-84db-af34-e5f0-2b0a53a2e238'] = $pane;
    $display->panels['main'][1] = 'new-0ae34942-84db-af34-e5f0-2b0a53a2e238';
    $pane = new stdClass;
    $pane->pid = 'new-ba3af668-c519-0c04-31dc-6da08850a06a';
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
    $pane->uuid = 'ba3af668-c519-0c04-31dc-6da08850a06a';
    $display->content['new-ba3af668-c519-0c04-31dc-6da08850a06a'] = $pane;
    $display->panels['main'][2] = 'new-ba3af668-c519-0c04-31dc-6da08850a06a';
    $pane = new stdClass;
    $pane->pid = 'new-8dac1e67-bf96-aec4-f9ac-d6a4e1ce5c22';
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
    $pane->uuid = '8dac1e67-bf96-aec4-f9ac-d6a4e1ce5c22';
    $display->content['new-8dac1e67-bf96-aec4-f9ac-d6a4e1ce5c22'] = $pane;
    $display->panels['main_callout'][0] = 'new-8dac1e67-bf96-aec4-f9ac-d6a4e1ce5c22';
    $pane = new stdClass;
    $pane->pid = 'new-ec7853ec-c9b3-2934-e517-1dd5ab5dac5d';
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
    $pane->uuid = 'ec7853ec-c9b3-2934-e517-1dd5ab5dac5d';
    $display->content['new-ec7853ec-c9b3-2934-e517-1dd5ab5dac5d'] = $pane;
    $display->panels['main_callout'][1] = 'new-ec7853ec-c9b3-2934-e517-1dd5ab5dac5d';
    $pane = new stdClass;
    $pane->pid = 'new-d0049dc9-7d5c-a154-f9bd-5217573bfb06';
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
    $pane->uuid = 'd0049dc9-7d5c-a154-f9bd-5217573bfb06';
    $display->content['new-d0049dc9-7d5c-a154-f9bd-5217573bfb06'] = $pane;
    $display->panels['main_callout'][2] = 'new-d0049dc9-7d5c-a154-f9bd-5217573bfb06';
    $pane = new stdClass;
    $pane->pid = 'new-88eac536-8da6-50e4-950e-4d2a0459d284';
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
    $pane->uuid = '88eac536-8da6-50e4-950e-4d2a0459d284';
    $display->content['new-88eac536-8da6-50e4-950e-4d2a0459d284'] = $pane;
    $display->panels['main_callout'][3] = 'new-88eac536-8da6-50e4-950e-4d2a0459d284';
    $pane = new stdClass;
    $pane->pid = 'new-c10894c4-7ea7-0594-11e0-65c327df8456';
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
    $pane->uuid = 'c10894c4-7ea7-0594-11e0-65c327df8456';
    $display->content['new-c10894c4-7ea7-0594-11e0-65c327df8456'] = $pane;
    $display->panels['main_callout'][4] = 'new-c10894c4-7ea7-0594-11e0-65c327df8456';
    $pane = new stdClass;
    $pane->pid = 'new-8f777618-0f7a-a194-c95b-376f5585af76';
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
    $pane->uuid = '8f777618-0f7a-a194-c95b-376f5585af76';
    $display->content['new-8f777618-0f7a-a194-c95b-376f5585af76'] = $pane;
    $display->panels['main_callout'][5] = 'new-8f777618-0f7a-a194-c95b-376f5585af76';
    $pane = new stdClass;
    $pane->pid = 'new-57358fc6-a70c-c5d4-4dcd-b673eb1a25a4';
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
    $pane->uuid = '57358fc6-a70c-c5d4-4dcd-b673eb1a25a4';
    $display->content['new-57358fc6-a70c-c5d4-4dcd-b673eb1a25a4'] = $pane;
    $display->panels['main_callout'][6] = 'new-57358fc6-a70c-c5d4-4dcd-b673eb1a25a4';
    $pane = new stdClass;
    $pane->pid = 'new-f7ca04e6-b768-1764-1d80-d1aa93256714';
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
    $pane->uuid = 'f7ca04e6-b768-1764-1d80-d1aa93256714';
    $display->content['new-f7ca04e6-b768-1764-1d80-d1aa93256714'] = $pane;
    $display->panels['main_callout'][7] = 'new-f7ca04e6-b768-1764-1d80-d1aa93256714';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-d867f493-82fb-3654-c989-22767db833f5';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context'] = $handler;

  return $export;
}
