<?php

/**
 * Implementation of hook_default_panels_mini().
 */
function general_content_default_panels_mini() {
  $export = array();

  $mini = new stdClass;
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'drug_page_lists';
  $mini->category = 'Behavenet';
  $mini->admin_title = 'Drug page lists';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = 'a789d594-f7f3-d644-b92b-383ec6df188a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-04df48ed-6246-6734-2db8-8e65f20e5cea';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'generic_drugs-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Molecular entities',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->uuid = '04df48ed-6246-6734-2db8-8e65f20e5cea';
    $display->content['new-04df48ed-6246-6734-2db8-8e65f20e5cea'] = $pane;
    $display->panels['middle'][0] = 'new-04df48ed-6246-6734-2db8-8e65f20e5cea';
    $pane = new stdClass;
    $pane->pid = 'new-78766b06-9587-1924-49f7-6d25da18d5fe';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'trade_drugs-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Tradename drugs',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->uuid = '78766b06-9587-1924-49f7-6d25da18d5fe';
    $display->content['new-78766b06-9587-1924-49f7-6d25da18d5fe'] = $pane;
    $display->panels['middle'][1] = 'new-78766b06-9587-1924-49f7-6d25da18d5fe';
    $pane = new stdClass;
    $pane->pid = 'new-9b9e5cc5-cf36-5974-49d7-9a6eacc5805e';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'Vocab_listing-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'vid' => '9',
      ),
      'override_title' => 1,
      'override_title_text' => 'Actions',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->uuid = '9b9e5cc5-cf36-5974-49d7-9a6eacc5805e';
    $display->content['new-9b9e5cc5-cf36-5974-49d7-9a6eacc5805e'] = $pane;
    $display->panels['middle'][2] = 'new-9b9e5cc5-cf36-5974-49d7-9a6eacc5805e';
    $pane = new stdClass;
    $pane->pid = 'new-7097feb7-c093-c2d4-8162-fd76678efdab';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'Vocab_listing-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'vid' => '3',
      ),
      'override_title' => 1,
      'override_title_text' => 'Chemical classes',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->uuid = '7097feb7-c093-c2d4-8162-fd76678efdab';
    $display->content['new-7097feb7-c093-c2d4-8162-fd76678efdab'] = $pane;
    $display->panels['middle'][3] = 'new-7097feb7-c093-c2d4-8162-fd76678efdab';
    $pane = new stdClass;
    $pane->pid = 'new-84b83bc7-ad10-1684-0517-5f1e7b8e6d5a';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'Vocab_listing-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'vid' => '10',
      ),
      'override_title' => 1,
      'override_title_text' => 'Clinical classes',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->uuid = '84b83bc7-ad10-1684-0517-5f1e7b8e6d5a';
    $display->content['new-84b83bc7-ad10-1684-0517-5f1e7b8e6d5a'] = $pane;
    $display->panels['middle'][4] = 'new-84b83bc7-ad10-1684-0517-5f1e7b8e6d5a';
    $pane = new stdClass;
    $pane->pid = 'new-93c6f05f-aada-0844-515e-3b6478bd79e5';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'Vocab_listing-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'vid' => '12',
      ),
      'override_title' => 1,
      'override_title_text' => 'Effect classes',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->uuid = '93c6f05f-aada-0844-515e-3b6478bd79e5';
    $display->content['new-93c6f05f-aada-0844-515e-3b6478bd79e5'] = $pane;
    $display->panels['middle'][5] = 'new-93c6f05f-aada-0844-515e-3b6478bd79e5';
    $pane = new stdClass;
    $pane->pid = 'new-4d8aca1d-6f2f-9ea4-5177-18c3ae50bbe1';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'drug_combos-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Drug combinations',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->uuid = '4d8aca1d-6f2f-9ea4-5177-18c3ae50bbe1';
    $display->content['new-4d8aca1d-6f2f-9ea4-5177-18c3ae50bbe1'] = $pane;
    $display->panels['middle'][6] = 'new-4d8aca1d-6f2f-9ea4-5177-18c3ae50bbe1';
    $pane = new stdClass;
    $pane->pid = 'new-286f8891-9c11-b664-15fa-be881320cbee';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'drug_sources-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Drug sources',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->uuid = '286f8891-9c11-b664-15fa-be881320cbee';
    $display->content['new-286f8891-9c11-b664-15fa-be881320cbee'] = $pane;
    $display->panels['middle'][7] = 'new-286f8891-9c11-b664-15fa-be881320cbee';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['drug_page_lists'] = $mini;

  $mini = new stdClass;
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'goodtherapy_250_160';
  $mini->category = 'Behavenet';
  $mini->admin_title = 'GoodTherapy 250x160 ad block';
  $mini->admin_description = 'GoodTherapy.org 250 x 160 ad block';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = '7c18a090-60c1-9b04-9d2f-91b07617bf65';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-7c11c16d-52de-da84-6947-1e6639f5df1c';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div id="gt-widget">
    <link rel="stylesheet" type="text/css" media="all" href="http://www.goodtherapy.org/graph/widget/fat-widget-e/widget-css.css" />
    <a href="http://www.goodtherapy.org/" target="_blank" title="Mental Health and Therapy" class="linktoGT">GoodTherapy.org</a>
    <form id="gtWidget" action="http://www.goodtherapy.org/search.html" method="get" target="_blank">
        <input name="search[zipcode]" type="text" class="zipCode" />
        <input type="hidden" name="search[miles]" value="25" /> <input name="submit" type="submit" class="widgetBtn" value=" " />
    </form>
    <a href="http://www.goodtherapy.org/behavenet-welcome-therapist.html" target="_blank" title="Join our Therapy Directory" class="therapist">Therapists Click Here to Join</a>
</div>
',
      'format' => '2',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->uuid = '7c11c16d-52de-da84-6947-1e6639f5df1c';
    $display->content['new-7c11c16d-52de-da84-6947-1e6639f5df1c'] = $pane;
    $display->panels['middle'][0] = 'new-7c11c16d-52de-da84-6947-1e6639f5df1c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-7c11c16d-52de-da84-6947-1e6639f5df1c';
  $mini->display = $display;
  $export['goodtherapy_250_160'] = $mini;

  $mini = new stdClass;
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'home_page';
  $mini->category = 'Behavenet';
  $mini->admin_title = 'Home Page top items';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display;
  $display->layout = 'behavenet_threecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ef21b2e2-3ad1-8604-19d9-81f653f9bda9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-0471d52b-60b9-d544-6153-a6c6010ea33b';
    $pane->panel = 'left';
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
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->uuid = '0471d52b-60b9-d544-6153-a6c6010ea33b';
    $display->content['new-0471d52b-60b9-d544-6153-a6c6010ea33b'] = $pane;
    $display->panels['left'][0] = 'new-0471d52b-60b9-d544-6153-a6c6010ea33b';
    $pane = new stdClass;
    $pane->pid = 'new-753a9817-5430-6344-19c4-e048a031de47';
    $pane->panel = 'middle';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '27768',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->uuid = '753a9817-5430-6344-19c4-e048a031de47';
    $display->content['new-753a9817-5430-6344-19c4-e048a031de47'] = $pane;
    $display->panels['middle'][0] = 'new-753a9817-5430-6344-19c4-e048a031de47';
    $pane = new stdClass;
    $pane->pid = 'new-88b194c8-f9df-8b44-81c9-3df34bb6e89e';
    $pane->panel = 'right';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '27769',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->uuid = '88b194c8-f9df-8b44-81c9-3df34bb6e89e';
    $display->content['new-88b194c8-f9df-8b44-81c9-3df34bb6e89e'] = $pane;
    $display->panels['right'][0] = 'new-88b194c8-f9df-8b44-81c9-3df34bb6e89e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['home_page'] = $mini;

  $mini = new stdClass;
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'opinion_and_movies';
  $mini->category = 'Behavenet';
  $mini->admin_title = 'Home page opinion and movies';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display;
  $display->layout = 'behavenet_twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c73553ca-fdfb-8c74-e92f-5ec08bc4735c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-343a444a-6e08-5294-a1c5-6b494702d242';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Opinion Feed',
      'title' => 'Opinion',
      'body' => '<a href="http://behavenetopinion.blogspot.com/"><img src="<?php print base_path() . drupal_get_path(\'theme\', \'Behavenet\') . \'/images/blogger-rectangle.gif\'; ?>" /></a><br />
<?php behavenet_get_recent_from_rss(\'http://behavenetopinion.blogspot.com/rss.xml\', 5); ?>
',
      'format' => '4',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->uuid = '343a444a-6e08-5294-a1c5-6b494702d242';
    $display->content['new-343a444a-6e08-5294-a1c5-6b494702d242'] = $pane;
    $display->panels['left'][0] = 'new-343a444a-6e08-5294-a1c5-6b494702d242';
    $pane = new stdClass;
    $pane->pid = 'new-00c43380-df14-5504-c983-5bc111b10bcc';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'Media-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Movies',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->uuid = '00c43380-df14-5504-c983-5bc111b10bcc';
    $display->content['new-00c43380-df14-5504-c983-5bc111b10bcc'] = $pane;
    $display->panels['right'][0] = 'new-00c43380-df14-5504-c983-5bc111b10bcc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-343a444a-6e08-5294-a1c5-6b494702d242';
  $mini->display = $display;
  $export['opinion_and_movies'] = $mini;

  $mini = new stdClass;
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'people_callout';
  $mini->category = 'Behavenet';
  $mini->admin_title = 'People right-side callout';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'name' => 'node',
      'id' => 1,
      'identifier' => 'Node',
      'keyword' => 'node',
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = 'a001256d-8e92-d0d4-b56b-abe1e36b9222';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-321a3ea7-ea35-e824-c527-32b3adf63450';
    $pane->panel = 'middle';
    $pane->type = 'content_field';
    $pane->subtype = 'field_people_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'normal',
      'formatter' => 'image_plain',
      'context' => 'requiredcontext_node_1',
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
    $pane->uuid = '321a3ea7-ea35-e824-c527-32b3adf63450';
    $display->content['new-321a3ea7-ea35-e824-c527-32b3adf63450'] = $pane;
    $display->panels['middle'][0] = 'new-321a3ea7-ea35-e824-c527-32b3adf63450';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['people_callout'] = $mini;

  return $export;
}
