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
  $display->uuid = 'f3b2dcf6-434d-fe04-5980-38d542824508';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-127b95f8-da54-9384-599f-b93cd77f12a1';
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
    $pane->uuid = '127b95f8-da54-9384-599f-b93cd77f12a1';
    $display->content['new-127b95f8-da54-9384-599f-b93cd77f12a1'] = $pane;
    $display->panels['middle'][0] = 'new-127b95f8-da54-9384-599f-b93cd77f12a1';
    $pane = new stdClass;
    $pane->pid = 'new-0ca95a41-d670-41a4-6982-f53fea40c69e';
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
    $pane->uuid = '0ca95a41-d670-41a4-6982-f53fea40c69e';
    $display->content['new-0ca95a41-d670-41a4-6982-f53fea40c69e'] = $pane;
    $display->panels['middle'][1] = 'new-0ca95a41-d670-41a4-6982-f53fea40c69e';
    $pane = new stdClass;
    $pane->pid = 'new-623fd91e-eafc-56e4-29d7-a9afbeeb5221';
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
    $pane->uuid = '623fd91e-eafc-56e4-29d7-a9afbeeb5221';
    $display->content['new-623fd91e-eafc-56e4-29d7-a9afbeeb5221'] = $pane;
    $display->panels['middle'][2] = 'new-623fd91e-eafc-56e4-29d7-a9afbeeb5221';
    $pane = new stdClass;
    $pane->pid = 'new-1523bbfd-a41f-3494-59b2-efa295e47065';
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
    $pane->uuid = '1523bbfd-a41f-3494-59b2-efa295e47065';
    $display->content['new-1523bbfd-a41f-3494-59b2-efa295e47065'] = $pane;
    $display->panels['middle'][3] = 'new-1523bbfd-a41f-3494-59b2-efa295e47065';
    $pane = new stdClass;
    $pane->pid = 'new-d2d99d6b-14c1-1b34-d1f0-3b48a4d069c8';
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
    $pane->uuid = 'd2d99d6b-14c1-1b34-d1f0-3b48a4d069c8';
    $display->content['new-d2d99d6b-14c1-1b34-d1f0-3b48a4d069c8'] = $pane;
    $display->panels['middle'][4] = 'new-d2d99d6b-14c1-1b34-d1f0-3b48a4d069c8';
    $pane = new stdClass;
    $pane->pid = 'new-65550e3e-2620-5204-45ee-9743dfce9c0b';
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
    $pane->uuid = '65550e3e-2620-5204-45ee-9743dfce9c0b';
    $display->content['new-65550e3e-2620-5204-45ee-9743dfce9c0b'] = $pane;
    $display->panels['middle'][5] = 'new-65550e3e-2620-5204-45ee-9743dfce9c0b';
    $pane = new stdClass;
    $pane->pid = 'new-a49ca289-56b5-35d4-4137-0e59e22b0d84';
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
    $pane->uuid = 'a49ca289-56b5-35d4-4137-0e59e22b0d84';
    $display->content['new-a49ca289-56b5-35d4-4137-0e59e22b0d84'] = $pane;
    $display->panels['middle'][6] = 'new-a49ca289-56b5-35d4-4137-0e59e22b0d84';
    $pane = new stdClass;
    $pane->pid = 'new-5ec32a1b-f4e3-1784-4906-328c43d2ac75';
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
    $pane->uuid = '5ec32a1b-f4e3-1784-4906-328c43d2ac75';
    $display->content['new-5ec32a1b-f4e3-1784-4906-328c43d2ac75'] = $pane;
    $display->panels['middle'][7] = 'new-5ec32a1b-f4e3-1784-4906-328c43d2ac75';
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
  $display->uuid = '873b232b-a105-9324-2112-ce8271f2625b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-96b59336-d745-f1c4-91ed-ba5ace4f39f0';
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
    $pane->uuid = '96b59336-d745-f1c4-91ed-ba5ace4f39f0';
    $display->content['new-96b59336-d745-f1c4-91ed-ba5ace4f39f0'] = $pane;
    $display->panels['middle'][0] = 'new-96b59336-d745-f1c4-91ed-ba5ace4f39f0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-96b59336-d745-f1c4-91ed-ba5ace4f39f0';
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
  $display->uuid = 'cef74234-aa77-a554-492e-c28fb7d4936e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-ef02ef16-a8dd-7b74-e9f4-fee46e0786c1';
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
    $pane->uuid = 'ef02ef16-a8dd-7b74-e9f4-fee46e0786c1';
    $display->content['new-ef02ef16-a8dd-7b74-e9f4-fee46e0786c1'] = $pane;
    $display->panels['left'][0] = 'new-ef02ef16-a8dd-7b74-e9f4-fee46e0786c1';
    $pane = new stdClass;
    $pane->pid = 'new-becf47eb-0afe-9b64-b9c3-6a843f47437c';
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
    $pane->uuid = 'becf47eb-0afe-9b64-b9c3-6a843f47437c';
    $display->content['new-becf47eb-0afe-9b64-b9c3-6a843f47437c'] = $pane;
    $display->panels['middle'][0] = 'new-becf47eb-0afe-9b64-b9c3-6a843f47437c';
    $pane = new stdClass;
    $pane->pid = 'new-7d6bce8c-b75d-d204-d9d3-f8751443864c';
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
    $pane->uuid = '7d6bce8c-b75d-d204-d9d3-f8751443864c';
    $display->content['new-7d6bce8c-b75d-d204-d9d3-f8751443864c'] = $pane;
    $display->panels['right'][0] = 'new-7d6bce8c-b75d-d204-d9d3-f8751443864c';
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
  $display->uuid = '219e8faf-0a0a-6864-e150-a9c156a9f7b4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-eaa33547-0771-c944-151a-67b14b7450c2';
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
    $pane->uuid = 'eaa33547-0771-c944-151a-67b14b7450c2';
    $display->content['new-eaa33547-0771-c944-151a-67b14b7450c2'] = $pane;
    $display->panels['left'][0] = 'new-eaa33547-0771-c944-151a-67b14b7450c2';
    $pane = new stdClass;
    $pane->pid = 'new-93f1af37-efd2-d3b4-c13a-e3cf75f0a359';
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
    $pane->uuid = '93f1af37-efd2-d3b4-c13a-e3cf75f0a359';
    $display->content['new-93f1af37-efd2-d3b4-c13a-e3cf75f0a359'] = $pane;
    $display->panels['right'][0] = 'new-93f1af37-efd2-d3b4-c13a-e3cf75f0a359';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-eaa33547-0771-c944-151a-67b14b7450c2';
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
  $display->uuid = 'bc812aac-a3d9-7c84-9557-c55e2c8913e4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-0a142d85-0cb7-dbb4-fdb5-31185ddd43f8';
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
    $pane->uuid = '0a142d85-0cb7-dbb4-fdb5-31185ddd43f8';
    $display->content['new-0a142d85-0cb7-dbb4-fdb5-31185ddd43f8'] = $pane;
    $display->panels['middle'][0] = 'new-0a142d85-0cb7-dbb4-fdb5-31185ddd43f8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['people_callout'] = $mini;

  return $export;
}
