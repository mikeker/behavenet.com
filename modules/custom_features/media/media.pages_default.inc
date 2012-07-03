<?php

/**
 * Implementation of hook_default_page_manager_handlers().
 */
function media_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_4';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Movie main page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
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
            'paths' => 'node/28597',
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
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'fa88ada1-974b-bf34-b5f1-f623e173ab00';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-22e238ba-f486-6514-5192-2420cfc77e21';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Intro text',
      'title' => '',
      'body' => '<p>A catalog of films, indexed by time, with content, themes or depictions related to psychiatry, substance abuse and their treatment.</p>',
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
    $pane->uuid = '22e238ba-f486-6514-5192-2420cfc77e21';
    $display->content['new-22e238ba-f486-6514-5192-2420cfc77e21'] = $pane;
    $display->panels['middle'][0] = 'new-22e238ba-f486-6514-5192-2420cfc77e21';
    $pane = new stdClass;
    $pane->pid = 'new-e4a4ed4e-afe6-6024-fd58-d16cfeac4f73';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'Movies-panel_pane_1';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->uuid = 'e4a4ed4e-afe6-6024-fd58-d16cfeac4f73';
    $display->content['new-e4a4ed4e-afe6-6024-fd58-d16cfeac4f73'] = $pane;
    $display->panels['middle'][1] = 'new-e4a4ed4e-afe6-6024-fd58-d16cfeac4f73';
    $pane = new stdClass;
    $pane->pid = 'new-fe708945-966e-2c34-017c-d91079690d96';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'Movies-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '1',
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
    $pane->uuid = 'fe708945-966e-2c34-017c-d91079690d96';
    $display->content['new-fe708945-966e-2c34-017c-d91079690d96'] = $pane;
    $display->panels['middle'][2] = 'new-fe708945-966e-2c34-017c-d91079690d96';
    $pane = new stdClass;
    $pane->pid = 'new-636bddd1-427d-f154-21fb-b964d9397cff';
    $pane->panel = 'middle';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'page' => 1,
      'no_extras' => 1,
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
    $pane->position = 3;
    $pane->uuid = '636bddd1-427d-f154-21fb-b964d9397cff';
    $display->content['new-636bddd1-427d-f154-21fb-b964d9397cff'] = $pane;
    $display->panels['middle'][3] = 'new-636bddd1-427d-f154-21fb-b964d9397cff';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e4a4ed4e-afe6-6024-fd58-d16cfeac4f73';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_4'] = $handler;

  return $export;
}
