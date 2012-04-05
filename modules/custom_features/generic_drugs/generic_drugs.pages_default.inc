<?php

/**
 * Implementation of hook_default_page_manager_handlers().
 */
function generic_drugs_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Drugs',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'context' => 'argument_nid_1',
        'name' => 'term_from_node',
        'id' => 1,
        'identifier' => 'Terms',
        'keyword' => 'terms',
        'relationship_settings' => array(
          'vid' => '5',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'sources' => 'sources',
              'generic' => 'generic',
              'drug' => 'drug',
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
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '47da4483-5c33-b2c4-f512-e36f1b2386a4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-7671841b-fae2-8284-6914-b4d78ba5a44f';
    $pane->panel = 'middle';
    $pane->type = 'content_field';
    $pane->subtype = 'field_drug_generic';
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
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->uuid = '7671841b-fae2-8284-6914-b4d78ba5a44f';
    $display->content['new-7671841b-fae2-8284-6914-b4d78ba5a44f'] = $pane;
    $display->panels['middle'][0] = 'new-7671841b-fae2-8284-6914-b4d78ba5a44f';
    $pane = new stdClass;
    $pane->pid = 'new-195137a0-32c4-10b4-3909-79461a894899';
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
              'sources' => 'sources',
            ),
          ),
          'context' => 'argument_nid_1',
          'not' => FALSE,
        ),
      ),
    );
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
    $pane->position = 1;
    $pane->uuid = '195137a0-32c4-10b4-3909-79461a894899';
    $display->content['new-195137a0-32c4-10b4-3909-79461a894899'] = $pane;
    $display->panels['middle'][1] = 'new-195137a0-32c4-10b4-3909-79461a894899';
    $pane = new stdClass;
    $pane->pid = 'new-8e3369d1-4e9b-bda4-61e4-6ab12e7d0ab6';
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
      'build_mode' => 'teaser',
      'context' => 'argument_nid_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->uuid = '8e3369d1-4e9b-bda4-61e4-6ab12e7d0ab6';
    $display->content['new-8e3369d1-4e9b-bda4-61e4-6ab12e7d0ab6'] = $pane;
    $display->panels['middle'][2] = 'new-8e3369d1-4e9b-bda4-61e4-6ab12e7d0ab6';
    $pane = new stdClass;
    $pane->pid = 'new-16fbf67a-fcf6-bf34-897d-d6268ccc8986';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'Indications-panel_pane_1';
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
    $pane->position = 3;
    $pane->uuid = '16fbf67a-fcf6-bf34-897d-d6268ccc8986';
    $display->content['new-16fbf67a-fcf6-bf34-897d-d6268ccc8986'] = $pane;
    $display->panels['middle'][3] = 'new-16fbf67a-fcf6-bf34-897d-d6268ccc8986';
    $pane = new stdClass;
    $pane->pid = 'new-3ae4eb07-4452-fc74-bd26-08bda5ad3a4a';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Generic drug breadcrumbs',
      'title' => '',
      'body' => '<?php
print behavenet_get_generic_breadcrumbs(%node:nid);
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
    $pane->position = 4;
    $pane->uuid = '3ae4eb07-4452-fc74-bd26-08bda5ad3a4a';
    $display->content['new-3ae4eb07-4452-fc74-bd26-08bda5ad3a4a'] = $pane;
    $display->panels['middle'][4] = 'new-3ae4eb07-4452-fc74-bd26-08bda5ad3a4a';
    $pane = new stdClass;
    $pane->pid = 'new-c74d0743-4ffb-bc04-cdc8-f5fd4a463858';
    $pane->panel = 'middle';
    $pane->type = 'content_field';
    $pane->subtype = 'field_outside_video';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'normal',
      'formatter' => 'video_video',
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
    $pane->position = 5;
    $pane->uuid = 'c74d0743-4ffb-bc04-cdc8-f5fd4a463858';
    $display->content['new-c74d0743-4ffb-bc04-cdc8-f5fd4a463858'] = $pane;
    $display->panels['middle'][5] = 'new-c74d0743-4ffb-bc04-cdc8-f5fd4a463858';
    $pane = new stdClass;
    $pane->pid = 'new-10b2bd81-8279-a2c4-154c-3cd08ca15f5a';
    $pane->panel = 'middle';
    $pane->type = 'term_list';
    $pane->subtype = 'term_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'title' => NULL,
      'type' => 'child',
      'list_type' => 'ul',
      'context' => 'relationship_term_from_node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->uuid = '10b2bd81-8279-a2c4-154c-3cd08ca15f5a';
    $display->content['new-10b2bd81-8279-a2c4-154c-3cd08ca15f5a'] = $pane;
    $display->panels['middle'][6] = 'new-10b2bd81-8279-a2c4-154c-3cd08ca15f5a';
    $pane = new stdClass;
    $pane->pid = 'new-51f58a6d-7f53-f4b4-61ee-2a23d8c0d1e8';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'Media-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_nid_1',
      ),
      'use_pager' => 0,
      'pager_id' => '',
      'items_per_page' => '0',
      'override_title' => 1,
      'override_title_text' => 'Books',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->uuid = '51f58a6d-7f53-f4b4-61ee-2a23d8c0d1e8';
    $display->content['new-51f58a6d-7f53-f4b4-61ee-2a23d8c0d1e8'] = $pane;
    $display->panels['middle'][7] = 'new-51f58a6d-7f53-f4b4-61ee-2a23d8c0d1e8';
    $pane = new stdClass;
    $pane->pid = 'new-2be20fd1-073a-7bf4-1d47-0dd92a27730c';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'Media-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '',
      'items_per_page' => '0',
      'override_title' => 1,
      'override_title_text' => 'Movies',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->uuid = '2be20fd1-073a-7bf4-1d47-0dd92a27730c';
    $display->content['new-2be20fd1-073a-7bf4-1d47-0dd92a27730c'] = $pane;
    $display->panels['middle'][8] = 'new-2be20fd1-073a-7bf4-1d47-0dd92a27730c';
    $pane = new stdClass;
    $pane->pid = 'new-30a9cfae-fdb3-6f94-4102-8c116f88554d';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'drug_combos-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'sources' => 'sources',
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
    $pane->uuid = '30a9cfae-fdb3-6f94-4102-8c116f88554d';
    $display->content['new-30a9cfae-fdb3-6f94-4102-8c116f88554d'] = $pane;
    $display->panels['middle'][9] = 'new-30a9cfae-fdb3-6f94-4102-8c116f88554d';
    $pane = new stdClass;
    $pane->pid = 'new-09f5721f-d186-0554-5918-2da7bd39c7fe';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'drug_combos-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'generic' => 'generic',
              'drug' => 'drug',
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
    $pane->position = 10;
    $pane->uuid = '09f5721f-d186-0554-5918-2da7bd39c7fe';
    $display->content['new-09f5721f-d186-0554-5918-2da7bd39c7fe'] = $pane;
    $display->panels['middle'][10] = 'new-09f5721f-d186-0554-5918-2da7bd39c7fe';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  return $export;
}
