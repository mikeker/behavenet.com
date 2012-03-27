<?php

/**
 * Implementation of hook_default_page_manager_handlers().
 */
function general_content_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_5';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
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
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
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
    $display->content['new-1'] = $pane;
    $display->panels['middle'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
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
    $display->content['new-2'] = $pane;
    $display->panels['middle'][1] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
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
    $display->content['new-3'] = $pane;
    $display->panels['middle'][2] = 'new-3';
    $pane = new stdClass;
    $pane->pid = 'new-4';
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
    $display->content['new-4'] = $pane;
    $display->panels['middle'][3] = 'new-4';
    $pane = new stdClass;
    $pane->pid = 'new-5';
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
    $display->content['new-5'] = $pane;
    $display->panels['middle'][4] = 'new-5';
    $pane = new stdClass;
    $pane->pid = 'new-6';
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
    $display->content['new-6'] = $pane;
    $display->panels['middle'][5] = 'new-6';
    $pane = new stdClass;
    $pane->pid = 'new-7';
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
    $display->content['new-7'] = $pane;
    $display->panels['middle'][6] = 'new-7';
    $pane = new stdClass;
    $pane->pid = 'new-8';
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
    $display->content['new-8'] = $pane;
    $display->panels['middle'][7] = 'new-8';
    $pane = new stdClass;
    $pane->pid = 'new-9';
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
    $display->content['new-9'] = $pane;
    $display->panels['middle'][8] = 'new-9';
    $pane = new stdClass;
    $pane->pid = 'new-10';
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
    $pane->position = 9;
    $display->content['new-10'] = $pane;
    $display->panels['middle'][9] = 'new-10';
    $pane = new stdClass;
    $pane->pid = 'new-11';
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
    $pane->position = 10;
    $display->content['new-11'] = $pane;
    $display->panels['middle'][10] = 'new-11';
    $pane = new stdClass;
    $pane->pid = 'new-12';
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
    $pane->position = 11;
    $display->content['new-12'] = $pane;
    $display->panels['middle'][11] = 'new-12';
    $pane = new stdClass;
    $pane->pid = 'new-13';
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
    $pane->position = 12;
    $display->content['new-13'] = $pane;
    $display->panels['middle'][12] = 'new-13';
    $pane = new stdClass;
    $pane->pid = 'new-14';
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
    $pane->position = 13;
    $display->content['new-14'] = $pane;
    $display->panels['middle'][13] = 'new-14';
    $pane = new stdClass;
    $pane->pid = 'new-15';
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
    $pane->position = 14;
    $display->content['new-15'] = $pane;
    $display->panels['middle'][14] = 'new-15';
    $pane = new stdClass;
    $pane->pid = 'new-16';
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
    $pane->position = 15;
    $display->content['new-16'] = $pane;
    $display->panels['middle'][15] = 'new-16';
    $pane = new stdClass;
    $pane->pid = 'new-17';
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
    $pane->position = 16;
    $display->content['new-17'] = $pane;
    $display->panels['middle'][16] = 'new-17';
    $pane = new stdClass;
    $pane->pid = 'new-18';
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
    $pane->position = 17;
    $display->content['new-18'] = $pane;
    $display->panels['middle'][17] = 'new-18';
    $pane = new stdClass;
    $pane->pid = 'new-19';
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
    $pane->position = 18;
    $display->content['new-19'] = $pane;
    $display->panels['middle'][18] = 'new-19';
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
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
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
    $display->content['new-1'] = $pane;
    $display->panels['footer'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
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
    $display->content['new-2'] = $pane;
    $display->panels['footer'][1] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
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
    $display->content['new-3'] = $pane;
    $display->panels['footer'][2] = 'new-3';
    $pane = new stdClass;
    $pane->pid = 'new-4';
    $pane->panel = 'footer';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
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
    $display->content['new-4'] = $pane;
    $display->panels['footer'][3] = 'new-4';
    $pane = new stdClass;
    $pane->pid = 'new-5';
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
    $display->content['new-5'] = $pane;
    $display->panels['header'][0] = 'new-5';
    $pane = new stdClass;
    $pane->pid = 'new-6';
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
    $display->content['new-6'] = $pane;
    $display->panels['header'][1] = 'new-6';
    $pane = new stdClass;
    $pane->pid = 'new-7';
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
    $display->content['new-7'] = $pane;
    $display->panels['header'][2] = 'new-7';
    $pane = new stdClass;
    $pane->pid = 'new-8';
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
    $display->content['new-8'] = $pane;
    $display->panels['header'][3] = 'new-8';
    $pane = new stdClass;
    $pane->pid = 'new-9';
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
    $display->content['new-9'] = $pane;
    $display->panels['header'][4] = 'new-9';
    $pane = new stdClass;
    $pane->pid = 'new-10';
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
    $display->content['new-10'] = $pane;
    $display->panels['left_sidebar'][0] = 'new-10';
    $pane = new stdClass;
    $pane->pid = 'new-11';
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
    $display->content['new-11'] = $pane;
    $display->panels['left_sidebar'][1] = 'new-11';
    $pane = new stdClass;
    $pane->pid = 'new-12';
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
    $display->content['new-12'] = $pane;
    $display->panels['left_sidebar'][2] = 'new-12';
    $pane = new stdClass;
    $pane->pid = 'new-13';
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
    $display->content['new-13'] = $pane;
    $display->panels['left_sidebar'][3] = 'new-13';
    $pane = new stdClass;
    $pane->pid = 'new-14';
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
    $display->content['new-14'] = $pane;
    $display->panels['main'][0] = 'new-14';
    $pane = new stdClass;
    $pane->pid = 'new-15';
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
    $display->content['new-15'] = $pane;
    $display->panels['main'][1] = 'new-15';
    $pane = new stdClass;
    $pane->pid = 'new-16';
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
    $display->content['new-16'] = $pane;
    $display->panels['main'][2] = 'new-16';
    $pane = new stdClass;
    $pane->pid = 'new-17';
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
    $display->content['new-17'] = $pane;
    $display->panels['main_callout'][0] = 'new-17';
    $pane = new stdClass;
    $pane->pid = 'new-18';
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
    $display->content['new-18'] = $pane;
    $display->panels['main_callout'][1] = 'new-18';
    $pane = new stdClass;
    $pane->pid = 'new-19';
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
    $display->content['new-19'] = $pane;
    $display->panels['main_callout'][2] = 'new-19';
    $pane = new stdClass;
    $pane->pid = 'new-20';
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
    $display->content['new-20'] = $pane;
    $display->panels['main_callout'][3] = 'new-20';
    $pane = new stdClass;
    $pane->pid = 'new-21';
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
    $display->content['new-21'] = $pane;
    $display->panels['main_callout'][4] = 'new-21';
    $pane = new stdClass;
    $pane->pid = 'new-22';
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
    $display->content['new-22'] = $pane;
    $display->panels['main_callout'][5] = 'new-22';
    $pane = new stdClass;
    $pane->pid = 'new-23';
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
    $display->content['new-23'] = $pane;
    $display->panels['main_callout'][6] = 'new-23';
    $pane = new stdClass;
    $pane->pid = 'new-24';
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
    $display->content['new-24'] = $pane;
    $display->panels['main_callout'][7] = 'new-24';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-10';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context'] = $handler;

  return $export;
}
