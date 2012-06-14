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
  $handler->weight = -24;
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
              'compound' => 'compound',
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
  $display->uuid = 'c9974604-d206-9f64-e5ad-6b135d6a2e27';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-f7fe594c-10ea-5e74-f54d-529d908bd47c';
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
    $pane->uuid = 'f7fe594c-10ea-5e74-f54d-529d908bd47c';
    $display->content['new-f7fe594c-10ea-5e74-f54d-529d908bd47c'] = $pane;
    $display->panels['middle'][0] = 'new-f7fe594c-10ea-5e74-f54d-529d908bd47c';
    $pane = new stdClass;
    $pane->pid = 'new-123b7ab1-909c-e9f4-1d6b-53e8c471439d';
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
              'compound' => 'compound',
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
    $pane->uuid = '123b7ab1-909c-e9f4-1d6b-53e8c471439d';
    $display->content['new-123b7ab1-909c-e9f4-1d6b-53e8c471439d'] = $pane;
    $display->panels['middle'][1] = 'new-123b7ab1-909c-e9f4-1d6b-53e8c471439d';
    $pane = new stdClass;
    $pane->pid = 'new-d1e9afe6-b4ea-7bc4-cd9d-e31bb6d7b523';
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
    $pane->uuid = 'd1e9afe6-b4ea-7bc4-cd9d-e31bb6d7b523';
    $display->content['new-d1e9afe6-b4ea-7bc4-cd9d-e31bb6d7b523'] = $pane;
    $display->panels['middle'][2] = 'new-d1e9afe6-b4ea-7bc4-cd9d-e31bb6d7b523';
    $pane = new stdClass;
    $pane->pid = 'new-1a6e4b0e-bacd-9a24-a577-fa1b9ebb8d17';
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
    $pane->uuid = '1a6e4b0e-bacd-9a24-a577-fa1b9ebb8d17';
    $display->content['new-1a6e4b0e-bacd-9a24-a577-fa1b9ebb8d17'] = $pane;
    $display->panels['middle'][3] = 'new-1a6e4b0e-bacd-9a24-a577-fa1b9ebb8d17';
    $pane = new stdClass;
    $pane->pid = 'new-8b1758b4-2398-0ea4-1985-bae7881ef2cc';
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
    $pane->uuid = '8b1758b4-2398-0ea4-1985-bae7881ef2cc';
    $display->content['new-8b1758b4-2398-0ea4-1985-bae7881ef2cc'] = $pane;
    $display->panels['middle'][4] = 'new-8b1758b4-2398-0ea4-1985-bae7881ef2cc';
    $pane = new stdClass;
    $pane->pid = 'new-8a22db34-9630-c5d4-4183-480b42fd0c38';
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
    $pane->position = 5;
    $pane->uuid = '8a22db34-9630-c5d4-4183-480b42fd0c38';
    $display->content['new-8a22db34-9630-c5d4-4183-480b42fd0c38'] = $pane;
    $display->panels['middle'][5] = 'new-8a22db34-9630-c5d4-4183-480b42fd0c38';
    $pane = new stdClass;
    $pane->pid = 'new-74fe7855-41f4-20c4-ed85-edc76e43a55d';
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
    $pane->position = 6;
    $pane->uuid = '74fe7855-41f4-20c4-ed85-edc76e43a55d';
    $display->content['new-74fe7855-41f4-20c4-ed85-edc76e43a55d'] = $pane;
    $display->panels['middle'][6] = 'new-74fe7855-41f4-20c4-ed85-edc76e43a55d';
    $pane = new stdClass;
    $pane->pid = 'new-376eb690-8238-a0c4-e57a-e7e88b5e7e47';
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
    $pane->position = 7;
    $pane->uuid = '376eb690-8238-a0c4-e57a-e7e88b5e7e47';
    $display->content['new-376eb690-8238-a0c4-e57a-e7e88b5e7e47'] = $pane;
    $display->panels['middle'][7] = 'new-376eb690-8238-a0c4-e57a-e7e88b5e7e47';
    $pane = new stdClass;
    $pane->pid = 'new-eb896c1a-b12a-4a44-39df-939738f0fcce';
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
    $pane->position = 8;
    $pane->uuid = 'eb896c1a-b12a-4a44-39df-939738f0fcce';
    $display->content['new-eb896c1a-b12a-4a44-39df-939738f0fcce'] = $pane;
    $display->panels['middle'][8] = 'new-eb896c1a-b12a-4a44-39df-939738f0fcce';
    $pane = new stdClass;
    $pane->pid = 'new-acefa8d4-919e-8c64-09d0-ca62e1d6adb3';
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
    $pane->position = 9;
    $pane->uuid = 'acefa8d4-919e-8c64-09d0-ca62e1d6adb3';
    $display->content['new-acefa8d4-919e-8c64-09d0-ca62e1d6adb3'] = $pane;
    $display->panels['middle'][9] = 'new-acefa8d4-919e-8c64-09d0-ca62e1d6adb3';
    $pane = new stdClass;
    $pane->pid = 'new-bd5d60e6-524b-2894-d910-3b9e4c65a26f';
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
    $pane->position = 10;
    $pane->uuid = 'bd5d60e6-524b-2894-d910-3b9e4c65a26f';
    $display->content['new-bd5d60e6-524b-2894-d910-3b9e4c65a26f'] = $pane;
    $display->panels['middle'][10] = 'new-bd5d60e6-524b-2894-d910-3b9e4c65a26f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  return $export;
}
