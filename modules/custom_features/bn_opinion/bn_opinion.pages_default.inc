<?php

/**
 * Implementation of hook_default_page_manager_handlers().
 */
function bn_opinion_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_10';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Blog',
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
            'paths' => 'node/30481',
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
    $pane->position = 0;
    $pane->uuid = '636bddd1-427d-f154-21fb-b964d9397cff';
    $display->content['new-636bddd1-427d-f154-21fb-b964d9397cff'] = $pane;
    $display->panels['middle'][0] = 'new-636bddd1-427d-f154-21fb-b964d9397cff';
    $pane = new stdClass;
    $pane->pid = 'new-3db5f514-7361-aa14-cd7d-4c32d03a346f';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'Opinion-panel_pane_2';
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
    $pane->uuid = '3db5f514-7361-aa14-cd7d-4c32d03a346f';
    $display->content['new-3db5f514-7361-aa14-cd7d-4c32d03a346f'] = $pane;
    $display->panels['middle'][1] = 'new-3db5f514-7361-aa14-cd7d-4c32d03a346f';
    $pane = new stdClass;
    $pane->pid = 'new-8a60e83d-98f8-5be4-75d0-2c24995d57fe';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'Opinion-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
      'use_pager' => 1,
      'pager_id' => '',
      'items_per_page' => '4',
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
    $pane->uuid = '8a60e83d-98f8-5be4-75d0-2c24995d57fe';
    $display->content['new-8a60e83d-98f8-5be4-75d0-2c24995d57fe'] = $pane;
    $display->panels['middle'][2] = 'new-8a60e83d-98f8-5be4-75d0-2c24995d57fe';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_10'] = $handler;

  return $export;
}
