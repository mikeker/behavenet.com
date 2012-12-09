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
    $pane->pid = 'new-aebef287-8680-4e24-713e-9e8f9fe086d5';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Term description',
      'title' => '',
      'body' => '<?php
$term = behavenet_load_term(%term:tid);
print $term->description;
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
    $pane->uuid = 'aebef287-8680-4e24-713e-9e8f9fe086d5';
    $display->content['new-aebef287-8680-4e24-713e-9e8f9fe086d5'] = $pane;
    $display->panels['middle'][3] = 'new-aebef287-8680-4e24-713e-9e8f9fe086d5';
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
    $pane->position = 4;
    $pane->uuid = 'b5c0c580-8251-a664-f59a-1b5cb33ac0c6';
    $display->content['new-b5c0c580-8251-a664-f59a-1b5cb33ac0c6'] = $pane;
    $display->panels['middle'][4] = 'new-b5c0c580-8251-a664-f59a-1b5cb33ac0c6';
    $pane = new stdClass;
    $pane->pid = 'new-03d46673-a565-3424-1186-a2f075709f77';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Members',
      'title' => '',
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
    $pane->position = 5;
    $pane->uuid = '03d46673-a565-3424-1186-a2f075709f77';
    $display->content['new-03d46673-a565-3424-1186-a2f075709f77'] = $pane;
    $display->panels['middle'][5] = 'new-03d46673-a565-3424-1186-a2f075709f77';
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
    $pane->pid = 'new-c758714a-08ec-c534-ed43-9e805addb52e';
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
            'paths' => 'taxonomy/term/11235',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Phobias jump menu',
      'title' => 'Feared Objects & Situations',
      'body' => '<select class="jump-menu"><option selected>- Choose -</option>
<option value="/triskaidekaphobia">13, the number</option>
<option value="/tetraphobia">4, the number</option>
<option value="/hexakosioihexekontahexaphobia">666, the number</option>
<option value="/octophobia">8, the number</option>
<option value="/agraphobia">abuse, sexual</option>
<option value="/dystychiphobia">accidents</option>
<option value="/ergasiophobia">action</option>
<option value="/anemophobia">air</option>
<option value="/aerophobia">air swallowing</option>
<option value="/aerophobia">airborne noxious substances</option>
<option value="/aeronausiphobia">airsickness</option>
<option value="/methyphobia">alcohol</option>
<option value="/autophobia">aloneness</option>
<option value="/amnesiphobia">amnesia</option>
<option value="/angrophobia">anger</option>
<option value="/cholerophobia">anger</option>
<option value="/doraphobia">animal skin or fur</option>
<option value="/zoophobia">animals</option>
<option value="/agrizoophobia">animals, wild</option>
<option value="myrmecophobia">ants</option>
<option value="/proctophobia">anuses</option>
<option value="/asymmetriphobia">asymmetrical things</option>
<option value="/ataxiophobia">ataxia</option>
<option value="/atomosophobia">atomic explosions</option>
<option value="/motorphobia">automobiles</option>
<option value="/ochophobia">automobiles</option>
<option value="/bacillophobia">bacteria</option>
<option value="/scelerophobia">bad men</option>
<option value="/peladophobia">bald headed people</option>
<option value="/phalacrophobia">bald, becoming</option>
<option value="/ablutophobia">bathing</option>
<option value="/chiroptophobia">bats</option>
<option value="/pogonophobia">beards</option>
<option value="/teratophobia">bearing a deformed child</option>
<option value="/rhabdophobia">beaten, being severely</option>
<option value="/caligynephobia">beautiful women</option>
<option value="/clinophobia">beds</option>
<option value="/apiphobia">bees</option>
<option value="/hobophobia">beggars</option>
<option value="/ergasiophobia">behavior</option>
<option value="/omphalophobia">belly buttons</option>
<option value="/cyclophobia">bicycles</option>
<option value="/ornithophobia">birds</option>
<option value="/melanophobia">black</option>
<option value="/atomosophobia">blasts, nuclear</option>
<option value="/hemophobia">blood</option>
<option value="/ereuthrophobia">blushing</option>
<option value="/dysmorphophobia">body image, unattractive </option>
<option value="/autodysomophobia">body odor, that one emits a vile</option>
<option value="/osmophobia">body odors</option>
<option value="/levophobia">body, things to the left side of the</option>
<option value="/dextrophobia">body, things to the right side of the</option>
<option value="/bogyphobia">bogeymen</option>
<option value="/bogyphobia">bogies</option>
<option value="/Bolshephobia">Bolsheviks</option>
<option value="/bibliophobia">books</option>
<option value="/merinthophobia">bound, being</option>
<option value="/defecaloesiophobia">bowel movements, painful</option>
<option value="/meningitophobia">brain disease</option>
<option value="/halitophobia">breath, bad</option>
<option value="/gephyrophobia">bridges</option>
<option value="/spasmenagaliaphobia">broken glass</option>
<option value="/batophobia">buildings, being close to high</option>
<option value="/ballistophobia">bullets</option>
<option value="/taurophobia">bulls</option>
<option value="/hobophobia">bums</option>
<option value="/scelerophobia">burglars</option>
<option value="/taphephobia">buried alive, being</option>
<option value="/cancerophobia">cancer</option>
<option value="/felinophobia">cats</option>
<option value="/bovinophobia">cattle</option>
<option value="/astrophobia">celestial space</option>
<option value="/Celtophobia">Celtic, anything</option>
<option value="/coimetrophobia">cemeteries</option>
<option value="/taphephobia">cemeteries</option>
<option value="/teleophobia">ceremonies, religious</option>
<option value="/metathesiophobia">change</option>
<option value="/chemophobia">chemicals or handling them</option>
<option value="/anginophobia">chest pain</option>
<option value="/alektorophobia">chickens</option>
<option value="/teratophobia">child, bearing a deformed </option>
<option value="/parturiphobia">childbirth</option>
<option value="/tocophobia">childbirth</option>
<option value="/pedophobia">children</option>
<option value="/Sinophobia">Chinese, anything</option>
<option value="/geniophobia">chins</option>
<option value="/anginophobia">choking</option>
<option value="/pnigophobia">choking</option>
<option value="/cholerophobia">cholera</option>
<option value="/consecotaleophobia">chopsticks</option>
<option value="/ecclesiophobia">church</option>
<option value="/climacophobia">climbing stairs</option>
<option value="/chronomentrophobia">clocks</option>
<option value="/chronophobia">clocks</option>
<option value="/vestiphobia">clothing</option>
<option value="/nephophobia">clouds</option>
<option value="/coulrophobia">clowns</option>
<option value="/coitophobia">coitus</option>
<option value="/cheimaphobia">cold</option>
<option value="/cheimaphobia">cold things</option>
<option value="/cryophobia">cold, extreme</option>
<option value="/porphyrophobia">color purple</option>
<option value="/ereuthrophobia">color red</option>
<option value="/leukophobia">color white</option>
<option value="/xanthophobia">color yellow</option>
<option value="/chromophobia">colors</option>
<option value="/cometophobia">comets</option>
<option value="/computerphobia">computers</option>
<option value="/logizomechanophobia">computers</option>
<option value="/claustrophobia">confined spaces</option>
<option value="/coprastasophobia">constipation</option>
<option value="/molysmophobia">contamination</option>
<option value="/misophobia">contamination with dirt or germs</option>
<option value="/deipnophobia">conversations, dinner</option>
<option value="/mageirocophobia">cooking</option>
<option value="/necrophobia">corpses</option>
<option value="/kosmikophobia">cosmic phenomena</option>
<option value="/enosiophobia">criticism</option>
<option value="/rhabdophobia">criticized severely, being</option>
<option value="/staurophobia">crosses</option>
<option value="/gephyrophobia">crossing bridges</option>
<option value="/agyrophobia">crossing streets</option>
<option value="/agoraphobia">crowded public places</option>
<option value="/demophobia">crowds</option>
<option value="/staurophobia">crucifixes</option>
<option value="/crystallophobia">crystals</option>
<option value="/hygrophobia">dampness</option>
<option value="/chorophobia">dancing</option>
<option value="/nyctophobia">dark</option>
<option value="/nyctophobia">dark places, being in</option>
<option value="/nyctohylophobia">dark wooded areas</option>
<option value="/nyctophobia">darkness</option>
<option value="/eosophobia">dawn</option>
<option value="/eosophobia">daylight</option>
<option value="/phengophobia">daylight</option>
<option value="/necrophobia">dead things</option>
<option value="/necrophobia">death</option>
<option value="/thanatophobia">death</option>
<option value="/seplophobia">decaying matter</option>
<option value="/decidophobia">decisions</option>
<option value="/kakorrhaphiophobia">defeat</option>
<option value="/teratophobia">deformed people</option>
<option value="/dysmorphophobia">deformity</option>
<option value="/demonophobia">demons</option>
<option value="/odontophobia">dental surgery</option>
<option value="/dentophobia">dentists</option>
<option value="/soteriophobia">dependence on others</option>
<option value="/bathophobia">depth</option>
<option value="/diabetophobia">diabetes</option>
<option value="/deipnophobia">dining</option>
<option value="/deipnophobia">dinner conversations</option>
<option value="/coprophobia">dirt</option>
<option value="/molysmophobia">dirt</option>
<option value="/automysophobia">dirty, being</option>
<option value="/panthophobia">disease and suffering</option>
<option value="/meningitophobia">disease of the brain</option>
<option value="/monopathophobia">disease, a specific</option>
<option value="/pathophobia">disease, contracting</option>
<option value="/albuminurophobia">disease, kidney</option>
<option value="/rectophobia">disease, rectal</option>
<option value="/dermatosiophobia">disease, skin </option>
<option value="/ataxophobia">disorder</option>
<option value="/dinophobia">dizziness</option>
<option value="/illyngophobia">dizziness when looking down</option>
<option value="/iatrophobia">doctor, going to the</option>
<option value="/canophobia">dogs</option>
<option value="/pediophobia">dolls</option>
<option value="/diplophobia">double vision</option>
<option value="/aerophobia">draughts</option>
<option value="/anemophobia">draughts</option>
<option value="/oneirophobia">dreams</option>
<option value="/oneirogmophobia">dreams, wet</option>
<option value="/dipsophobia">drinking</option>
<option value="/neopharmaphobia">drugs, new</option>
<option value="/xerophobia">dryness</option>
<option value="/automatonophobia">dummies, ventriloquist\'s </option>
<option value="/koniophobia">dust</option>
<option value="/Dutchphobia">Dutch, anything</option>
<option value="/paralipophobia">duty, neglecting</option>
<option value="/thanatophobia">dying</option>
<option value="/seismophobia">earthquakes</option>
<option value="/phagophobia">eaten, being</option>
<option value="/cibophobia">eating</option>
<option value="/phagophobia">eating</option>
<option value="/octophobia">eight, the number</option>
<option value="/electrophobia">electricity</option>
<option value="/cenophobia">empty rooms</option>
<option value="/cleithrophobia">enclosed place, being locked in an</option>
<option value="/anglophobia">English, anything</option>
<option value="/medorthophobia">erect penis</option>
<option value="/ithyphallophobia">erect penis: seeing, thinking about or having an</option>
<option value="/medomalacuphobia">erection, losing an</option>
<option value="/mesomalacophobia">erection, loss of</option>
<option value="/Europhobia">European, anything</option>
<option value="/pantophobia">everything</option>
<option value="/ommetaphobia">evil eye</option>
<option value="/doxophobia">expressing opinions</option>
<option value="/ommetaphobia">eyes</option>
<option value="/optophobia">eyes, opening one\'s</option>
<option value="/textophobia">fabrics, specific types</option>
<option value="/atychiphobia">failure</option>
<option value="/kakorrhaphiophobia">failure</option>
<option value="/asthenophobia">fainting</option>
<option value="/mythophobia">falsehoods</option>
<option value="/kopophobia">fatigue</option>
<option value="/lipophobia">fatty foods</option>
<option value="/pteronophobia">feathers</option>
<option value="/coprophobia">feces</option>
<option value="/eurotophobia">female genitalia</option>
<option value="/kolpophobia">female genitals</option>
<option value="/febriphobia">fever, developing</option>
<option value="/coprophobia">filth</option>
<option value="/automysophobia">filth, personal </option>
<option value="/arsonphobia">fire</option>
<option value="/pyrophobia">fire</option>
<option value="/hoplophobia">firearms</option>
<option value="/ichthyophobia">fish</option>
<option value="/selaphobia">flashes of light</option>
<option value="/mastigophobia">flogging</option>
<option value="/antlophobia">floods</option>
<option value="/anthrophobia">flowers</option>
<option value="/aulophobia">flutes</option>
<option value="/aviophobia">flying</option>
<option value="/pteroswinophobia">flying pigs</option>
<option value="/homichlophobia">fog</option>
<option value="/cibophobia">food</option>
<option value="/neophobia">foods, new</option>
<option value="/xenoglossophobia">foreign languages</option>
<option value="/xenophobia">foreigners</option>
<option value="/hylephobia">forests</option>
<option value="/nyctohylophobia">forests at night</option>
<option value="/athazagoraphobia">forgetting or being forgotten</option>
<option value="/athazagoraphobia">forgotten, being</option>
<option value="/tetraphobia">four, the number</option>
<option value="/eleutherophobia">freedom</option>
<option value="/Francophobia">French, anything</option>
<option value="/parascavedekatriaphobia">friday the 13th</option>
<option value="/batrachophobia">frogs</option>
<option value="/ranidaphobia">frogs</option>
<option value="/cryophobia">frost</option>
<option value="/pagophobia">frost or ice</option>
<option value="/doraphobia">fur of animals</option>
<option value="/cherophobia">gaiety</option>
<option value="/obesophobia">gaining weight </option>
<option value="/alliumphobia">garlic</option>
<option value="/heterophobia">gender, persons of the opposite</option>
<option value="/eurotophobia">genitalia, female</option>
<option value="/kolpophobia">genitals, particularly female</option>
<option value="/Germanophobia">German, anything</option>
<option value="/bacillophobia">germs</option>
<option value="/misophobia">germs or dirt, contamination with</option>
<option value="/bogyphobia">ghosts</option>
<option value="/bogyphobia">ghosts</option>
<option value="/parthenophobia">girls, young</option>
<option value="/photoaugliaphobia">glaring lights</option>
<option value="/crystallophobia">glass</option>
<option value="/hyelophobia">glass</option>
<option value="/nyctophobia">gloomy places, being in</option>
<option value="/theophobia">gods</option>
<option value="/zeusophobia">gods</option>
<option value="/clinophobia">going to bed</option>
<option value="/aurophobia">gold</option>
<option value="/euphobia">good news</option>
<option value="/barophobia">gravity</option>
<option value="/hellenologophobia">Greek terms</option>
<option value="/hellenophobia">Greek, anything</option>
<option value="/chaetophobia">hair</option>
<option value="/trichopathophobia">hair in unwanted locations, body</option>
<option value="/hypertrichophobia">hair, body</option>
<option value="/halitophobia">halitosis</option>
<option value="/samhainophobia">Halloween</option>
<option value="/chirophobia">hands</option>
<option value="/graphophobia">handwriting</option>
<option value="/euphobia">hearing good news</option>
<option value="/cardiophobia">heart</option>
<option value="/thermophobia">heat</option>
<option value="/ouranophobia">heaven</option>
<option value="/acrophobia">heights</option>
<option value="/hadephobia">hell</option>
<option value="/patroiophobia">heredity</option>
<option value="/heresyphobia">heresy</option>
<option value="/batophobia">high objects, proximity to</option>
<option value="/aeroacrophobia">high places, open </option>
<option value="/hypertrichophobia">hirsutism</option>
<option value="/disposophobia">hoarding</option>
<option value="/hagiophobia">holy things</option>
<option value="/domatophobia">home surroundings</option>
<option value="/nostophobia">home, returning</option>
<option value="/homophobia">homosexual, becoming</option>
<option value="/homophobia">homosexuality</option>
<option value="/equinophobia">horses</option>
<option value="/nosocomephobia">hospitals</option>
<option value="/domatophobia">house, being in a</option>
<option value="/domatophobia">houses</option>
<option value="/lilapsophobia">hurricanes</option>
<option value="/hypnophobia">hypnotized, being</option>
<option value="/cryophobia">ice</option>
<option value="/pagophobia">ice or frost</option>
<option value="/hierophobia">icons, religious</option>
<option value="/ideophobia">ideas</option>
<option value="/athazagoraphobia">ignored, being</option>
<option value="/ankylophobia">immobility of joints</option>
<option value="/atelophobia">imperfection</option>
<option value="/mesomalacophobia">impotence</option>
<option value="/basophobia">inability to stand</option>
<option value="/molysmophobia">infection</option>
<option value="/amaxophobia">infinity</option>
<option value="/trypanophobia">injections</option>
<option value="/traumatophobia">injury</option>
<option value="/dementophobia">insanity</option>
<option value="/acarophobia">insects</option>
<option value="/acarophobia">insects that cause itching</option>
<option value="/isopterophobia">insects that eat wood</option>
<option value="/siderophobia">iron</option>
<option value="/autophobia">isolation</option>
<option value="/acarophobia">itching</option>
<option value="/Japanophobia">Japanese, anything</option>
<option value="/zelophobia">jealousy</option>
<option value="/Judeophobia">Jews</option>
<option value="/ankylophobia">joint immobility</option>
<option value="/catapedaphobia">jumping from high or low places</option>
<option value="/dikephobia">justice</option>
<option value="/albuminurophobia">kidney disease</option>
<option value="/philemaphobia">kissing</option>
<option value="/genuphobia">knees</option>
<option value="/epistemophobia">knowledge</option>
<option value="/limnophobia">lakes</option>
<option value="/megalophobia">large things</option>
<option value="/geliophobia">laughter</option>
<option value="/liticaphobia">lawsuits</option>
<option value="/sophophobia">learning</option>
<option value="/sinistrophobia">left side of the body, objects at the </option>
<option value="/levophobia">left side of the body, things to the </option>
<option value="/leprophobia">leprosy</option>
<option value="/dermatophobia">lesions, skin</option>
<option value="/pediculophobia">lice</option>
<option value="/photophobia">light</option>
<option value="/selaphobia">light flashes</option>
<option value="/astraphobia">lightning</option>
<option value="/photoaugliaphobia">lights, glaring</option>
<option value="/hygrophobia">liquids</option>
<option value="/cleithrophobia">locked in an enclosed place, being</option>
<option value="/tetanophobia">lockjaw</option>
<option value="/eremophobia">loneliness</option>
<option value="/anablephobia">looking up</option>
<option value="/ligyrophobia">loud noises</option>
<option value="/malaxophobia">love play</option>
<option value="/philophobia">love, being or falling in</option>
<option value="/luiphobia">lues, contracting</option>
<option value="/mechanophobia">machines</option>
<option value="/lyssophobia">mad, going</option>
<option value="/dementophobia">madness</option>
<option value="/decidophobia">making decisions</option>
<option value="/gamophobia">marriage</option>
<option value="/seplophobia">matter, decaying</option>
<option value="/carnophobia">meat</option>
<option value="/opiophobia">medicine, prescribing by a doctor</option>
<option value="/pharmacophobia">medicine, taking</option>
<option value="/hydrargyophobia">medicines, mercurial</option>
<option value="/mnemophobia">memories</option>
<option value="/androphobia">men</option>
<option value="/hominophobia">men</option>
<option value="/menophobia">menstruation</option>
<option value="/hydrargyophobia">mercurial medicines</option>
<option value="/metallophobia">metal</option>
<option value="/meteorophobia">meteors</option>
<option value="/musophobia">mice</option>
<option value="/bacillophobia">microbes</option>
<option value="/psychophobia">mind</option>
<option value="/catoptrophobia">mirrors</option>
<option value="/eisoptrophobia">mirrors</option>
<option value="/ballistophobia">missiles</option>
<option value="/nomophobia">mobile phone contact, loss of</option>
<option value="/demophobia">mobs</option>
<option value="/hygrophobia">moisture</option>
<option value="/chrematophobia">money</option>
<option value="/homophobia">monotony</option>
<option value="/selenophobia">moon</option>
<option value="/pentheraphobia">mothers-in-law</option>
<option value="/mottephobia">moths</option>
<option value="/kinetophobia">motion</option>
<option value="/amaxophobia">motor vehicles</option>
<option value="/tropophobia">moving</option>
<option value="/descendophobia">moving down an incline or stairs</option>
<option value="/blennophobia">mucous</option>
<option value="/ataxiophobia">muscular incoordination (ataxia)</option>
<option value="/mycophobia">mushrooms</option>
<option value="/melophobia">music</option>
<option value="/mythophobia">myths</option>
<option value="/nomatophobia">names</option>
<option value="/onomatophobia">names or hearing a certain name</option>
<option value="/stenophobia">narrow things or places</option>
<option value="/anginophobia">narrowness</option>
<option value="/aichmophobia">needles</option>
<option value="/aichmophobia">needles</option>
<option value="/social phobia">negative appraisal in social situations</option>
<option value="/paralipophobia">neglecting responsibility or duty</option>
<option value="/neophobia">new, anything</option>
<option value="/cainophobia">newness</option>
<option value="/euphobia">news, hearing good </option>
<option value="/noctiphobia">night</option>
<option value="/nyctophobia">night</option>
<option value="/oneirogmophobia">nocturnal emission</option>
<option value="/acousticophobia">noise</option>
<option value="/phonophobia">noises</option>
<option value="/ligyrophobia">noises, loud</option>
<option value="/auroraphobia">northern lights</option>
<option value="/epistaxiophobia">nosebleeds</option>
<option value="/cainophobia">novelty</option>
<option value="/atomosophobia">nuclear blasts</option>
<option value="/nucleomituphobia">nuclear weapons</option>
<option value="/gymnophobia">nudity</option>
<option value="/triskadekaphobia">number 13</option>
<option value="/tetraphobia">number 4</option>
<option value="/octophobia">number 8</option>
<option value="/arithmophobia">numbers</option>
<option value="/polyphobia">numerous things</option>
<option value="/tapinophobia">objects, small</option>
<option value="/pornophobia">obscenity</option>
<option value="/nautophobia">ocean</option>
<option value="/bromidrosiphobia">odor, personal</option>
<option value="/autodysomophobia">odor, that one has a vile body</option>
<option value="/olfactophobia">odors</option>
<option value="/heresyphobia">official doctrine, challenges to</option>
<option value="/gerascophobia">old people</option>
<option value="/gerascophobia">old, growing</option>
<option value="/autophobia">oneself, being</option>
<option value="/eremophobia">oneself, being</option>
<option value="/aeroacrophobia">open high places</option>
<option value="/agoraphobia">open spaces</option>
<option value="/tomophobia">operations, surgical</option>
<option value="/allodoxaphobia">opinions</option>
<option value="/doxophobia">opinions, expressing</option>
<option value="/heterophobia">opposite gender, persons of the </option>
<option value="/soteriophobia">others, dependence on</option>
<option value="/lutraphobia">otters</option>
<option value="/spacephobia">outer space</option>
<option value="/algophobia">pain</option>
<option value="/papyrophobia">paper</option>
<option value="/parasitophobia">parasites</option>
<option value="/soceraphobia">parents-in-law</option>
<option value="/arachibutyrophobia">peanut butter sticking to roof of mouth</option>
<option value="/pellagrophobia">pellagra</option>
<option value="/medomalacuphobia">penile erection, losing a</option>
<option value="/ithyphallophobia">penile erection: seeing, thinking about or having</option>
<option value="/medorthophobia">penis, erect</option>
<option value="/phallophobia">penises, especially if erect</option>
<option value="/anthropophobia">people</option>
<option value="/gerascophobia">people, old</option>
<option value="/pharmacophobia">pharmaceutical</option>
<option value="/philosophobia">philosophy</option>
<option value="/phobophobia">phobias</option>
<option value="/ipovlopsychophobia">photographed, being </option>
<option value="/pteroswinophobia">pigs, flying </option>
<option value="/aichmophobia">pins</option>
<option value="/enetophobia">pins</option>
<option value="/topophobia">places, certain</option>
<option value="/stenophobia">places, narrow</option>
<option value="/botanophobia">plants</option>
<option value="/hedonophobia">pleasure, feeling</option>
<option value="/metrophobia">poetry</option>
<option value="/aichmophobia">pointed objects</option>
<option value="/iophobia">poison</option>
<option value="/toxiphobia">poisoned, being</option>
<option value="/poliosophobia">poliomyelitis, contracting</option>
<option value="/politicophobia">politicians</option>
<option value="/papaphobia">pope</option>
<option value="/peniaphobia">poverty</option>
<option value="/doxophobia">praise, receiving</option>
<option value="/cremnophobia">precipices</option>
<option value="/tocophobia">pregnancy</option>
<option value="/opiophobia">prescribing medicine for patients by a doctor</option>
<option value="/prosophobia">progress</option>
<option value="/orthophobia">property</option>
<option value="/cypridophobia">prostitutes</option>
<option value="/pornophobia">prostitutes</option>
<option value="/phrenophobia">psychosis</option>
<option value="/agoraphobia">public places, crowded </option>
<option value="/glossophobia">public speaking</option>
<option value="/mastigophobia">punishment</option>
<option value="/poinephobia">punishment</option>
<option value="/rhabdophobia">punishment by a rod or other instrument-or of being severely criticized</option>
<option value="/pupaphobia">puppets</option>
<option value="/porphyrophobia">purple, the color</option>
<option value="/erotophobia">questions, sexual</option>
<option value="/hydrophobophobia">rabies</option>
<option value="/lyssophobia">rabies</option>
<option value="/radiophobia">radiation</option>
<option value="/siderodromophobia">railroads</option>
<option value="/ombrophobia">rain</option>
<option value="/virginitiphobia">rape</option>
<option value="/zemmiphobia">rat,  the great mole</option>
<option value="/xyrophobia">razors</option>
<option value="/doxophobia">receiving praise</option>
<option value="/proctophobia">rectum</option>
<option value="/ereuthrophobia">red</option>
<option value="/syngenesophobia">relatives</option>
<option value="/theophobia">religion</option>
<option value="/teleophobia">religious ceremonies</option>
<option value="/hierophobia">religious icons</option>
<option value="/hierophobia">religious rituals</option>
<option value="/herpetophobia">reptiles</option>
<option value="/hypengyophobia">responsibility</option>
<option value="/paralipophobia">responsibility, neglecting</option>
<option value="/catagelophobia">ridiculed, being</option>
<option value="/amaxophobia">riding in a motor vehicle</option>
<option value="/dextrophobia">right side of the body, things on the</option>
<option value="/hierophobia">rituals, religious</option>
<option value="/potamophobia">rivers</option>
<option value="/hodophobia">road travel</option>
<option value="/harpaxophobia">robbed, being</option>
<option value="/harpaxophobia">robbers</option>
<option value="/koinoniphobia">rooms</option>
<option value="/cenophobia">rooms, empty</option>
<option value="/atephobia">ruin</option>
<option value="/potamophobia">running water</option>
<option value="/Russophobia">Russian, anything</option>
<option value="/hierophobia">sacred things</option>
<option value="/homophobia">sameness</option>
<option value="/satanophobia">satan</option>
<option value="/scabiophobia">scabies</option>
<option value="/scolionophobia">school</option>
<option value="/didaskaleinophobia">school, going to</option>
<option value="/hellenologophobia">scientific terminology, complex</option>
<option value="/scotomaphobia">scotomata</option>
<option value="/Scotophobia">Scottish, anything</option>
<option value="/amychophobia">scratches</option>
<option value="/nautophobia">sea</option>
<option value="/eisoptrophobia">seeing oneself in a mirror</option>
<option value="/scopophobia">seen, being</option>
<option value="/autophobia">self, being by one\'s</option>
<option value="/spermatophobia">semen</option>
<option value="/homilophobia">sermons</option>
<option value="/rhabdophobia">severely criticized, being </option>
<option value="/erotophobia">sex</option>
<option value="/heterophobia">sex, persons of the opposite</option>
<option value="/erotophobia">sex, the subject of </option>
<option value="/agraphobia">sexual abuse</option>
<option value="/coitophobia">sexual intercourse</option>
<option value="/erotophobia">sexual love</option>
<option value="/paraphobia">sexual perversion</option>
<option value="/erotophobia">sexual questions</option>
<option value="/sciophobia">shadows</option>
<option value="/selachophobia">sharks</option>
<option value="/ostraconophobia">shellfish</option>
<option value="/hormephobia">shock</option>
<option value="/nosophobia">sick, becoming</option>
<option value="/hamartophobia">sin</option>
<option value="/anuptaphobia">single, staying</option>
<option value="/peccatophobia">sinning</option>
<option value="/cathisophobia">sitting down</option>
<option value="/topophobia">situations, certain</option>
<option value="/hexakosioihexekontahexaphobia">six hundred sixty-six, the number</option>
<option value="/dermatosiophobia">skin disease</option>
<option value="/dermatophobia">skin lesions</option>
<option value="/doraphobia">skins of animals</option>
<option value="/hypnophobia">sleep</option>
<option value="/somniphobia">sleep</option>
<option value="/blennophobia">slime</option>
<option value="/bathmophobia">slopes, steep</option>
<option value="/microphobia">small things</option>
<option value="/olfactophobia">smells</option>
<option value="/pnigophobia">smothered, being</option>
<option value="/ophidiophobia">snakes</option>
<option value="/chionophobia">snow</option>
<option value="/anthropophobia">society</option>
<option value="/autophobia">solitude</option>
<option value="/eremophobia">solitude</option>
<option value="/acousticophobia">sounds</option>
<option value="/acerophobia">sourness</option>
<option value="/astrophobia">space, celestial </option>
<option value="/spacephobia">space, outer</option>
<option value="/claustrophobia">spaces, confined</option>
<option value="/kenophobia">spaces, empty</option>
<option value="/agoraphobia">spaces, open</option>
<option value="/glossophobia">speak, trying to</option>
<option value="/laliophobia">speaking</option>
<option value="/phonophobia">speaking aloud</option>
<option value="/glossophobia">speaking in public</option>
<option value="/bogyphobia">specters</option>
<option value="/tachophobia">speed</option>
<option value="/arachnophobia">spiders</option>
<option value="/pneumatiphobia">spirits</option>
<option value="/topophobia">stage fright</option>
<option value="/climacophobia">stairs</option>
<option value="/bathmophobia">stairways</option>
<option value="/basophobia">standing</option>
<option value="/ophthalmophobia">stared at, being</option>
<option value="/astrophobia">stars</option>
<option value="/siderophobia">stars</option>
<option value="/automatonophobia">statues, wax</option>
<option value="/anuptaphobia">staying single</option>
<option value="/cleptophobia">stealing</option>
<option value="/bathmophobia">steep slopes</option>
<option value="/vitricophobia">step-fathers</option>
<option value="/novercaphobia">step-mothers</option>
<option value="/cnidophobia">stings</option>
<option value="/kyphophobia">stooping</option>
<option value="/mythophobia">stories</option>
<option value="/astraphobia">storms, thunder</option>
<option value="/xenophobia">strangers</option>
<option value="/agyrophobia">streets, crossing</option>
<option value="/linonophobia">string</option>
<option value="/psellismophobia">stuttering</option>
<option value="/panthophobia">suffering and disease</option>
<option value="/heliophobia">sun, the</option>
<option value="/heliophobia">sunlight</option>
<option value="/phengophobia">sunshine</option>
<option value="/ergasiophobia">surgery, performing</option>
<option value="/tomophobia">surgical operations</option>
<option value="/phagophobia">swallowing</option>
<option value="/symbolophobia">symbolism</option>
<option value="/symmetrophobia">symmetry</option>
<option value="/luiphobia">syphillis, contracting</option>
<option value="/taeniophobia">tapeworms</option>
<option value="/geumaphobia">taste</option>
<option value="/technophobia">technology</option>
<option value="/ephebiphobia">teenagers</option>
<option value="/odontophobia">teeth</option>
<option value="/phonophobia">telephones</option>
<option value="/telephonophobia">telephones</option>
<option value="/hellenologophobia">terminology, complex scientific</option>
<option value="/isopterophobia">termites</option>
<option value="/testophobia">tests, taking</option>
<option value="/tetanophobia">tetanus</option>
<option value="/theatrophobia">theaters</option>
<option value="/theologicophobia">theology</option>
<option value="/stenophobia">things, narrow</option>
<option value="/polyphobia">things, numerous</option>
<option value="/microphobia">things, small</option>
<option value="/phronemophobia">thinking</option>
<option value="/phrenophobia">thinking</option>
<option value="/triskaidekaphobia">thirteen, the number</option>
<option value="/astraphobia">thunder</option>
<option value="/astraphobia">thunder</option>
<option value="/tonitrophobia">thunder</option>
<option value="/pteronophobia">tickled by feathers, being</option>
<option value="/merinthophobia">tied up, being</option>
<option value="/chronophobia">time</option>
<option value="/bufonophobia">toads</option>
<option value="/placophobia">tombstones</option>
<option value="/lilapsophobia">tornadoes</option>
<option value="/haphephobia">touched, being </option>
<option value="/siderodromophobia">train travel</option>
<option value="/siderodromophobia">trains</option>
<option value="/hodophobia">travel</option>
<option value="/dendrophobia">trees</option>
<option value="/tremophobia">trembling</option>
<option value="/trichinophobia">trichinosis</option>
<option value="/phthisiophobia">tuberculosis</option>
<option value="/tyrannophobia">tyrants</option>
<option value="/cacophobia">ugliness</option>
<option value="/dysmorphophobia">unattractive body image</option>
<option value="/dishabiliophobia">undressing in front of someone</option>
<option value="/enosiophobia">unpardonable sin, having committted an </option>
<option value="/ataxophobia">untidiness</option>
<option value="/urophobia">urinating</option>
<option value="/urophobia">urine</option>
<option value="/vaccinophobia">vaccination</option>
<option value="/lachanophobia">vegetables</option>
<option value="/ochophobia">vehicles</option>
<option value="/cypridophobia">venereal disease</option>
<option value="/automatonophobia">ventriloquist\'s dummies</option>
<option value="/vermiphobia">vermin</option>
<option value="/illyngophobia">vertigo when looking down</option>
<option value="/primeisodophobia">virginity, losing one\'s</option>
<option value="/parthenophobia">virgins</option>
<option value="/diplophobia">vision, double</option>
<option value="/scotomaphobia">visual field defect</option>
<option value="/phonophobia">voices</option>
<option value="/kenophobia">voids</option>
<option value="/emetophobia">vomiting</option>
<option value="/aeronausiphobia">vomiting from air travel</option>
<option value="/macrophobia">waits, long</option>
<option value="/ambulophobia">walking</option>
<option value="/basophobia">walking</option>
<option value="/ablutophobia">washing</option>
<option value="/spheksophobia">wasps</option>
<option value="/hydrophobia">water</option>
<option value="/cymophobia">wave-like motion</option>
<option value="/cymophobia">waves</option>
<option value="/automatonophobia">wax statues</option>
<option value="/asthenophobia">weakness</option>
<option value="/plutophobia">wealth</option>
<option value="/nucleomituphobia">weapons, nuclear</option>
<option value="/obesophobia">weight gain</option>
<option value="/oneirogmophobia">wet dreams</option>
<option value="/dinophobia">whirlpools</option>
<option value="/leukophobia">white, the color</option>
<option value="/agrizoophobia">wild animals</option>
<option value="/anemophobia">wind</option>
<option value="/oenophobia">wine</option>
<option value="/wiccaphobia">witches and witchcraft</option>
<option value="/gynephobia">women</option>
<option value="/caligynephobia">women, beautiful</option>
<option value="/hylephobia">wood</option>
<option value="/nyctohylophobia">wooded areas, dark </option>
<option value="/logophobia">words</option>
<option value="/hippopotomonstrosesquipedaliophobia">words, long</option>
<option value="/ergophobia">work</option>
<option value="/computerphobia">working on computers</option>
<option value="/ponophobia">working too much</option>
<option value="/scoleciphobia">worms</option>
<option value="/vermiphobia">worms</option>
<option value="/helminthophobia">worms, being infested with</option>
<option value="/rhytiphobia">wrinkles, developing</option>
<option value="/graphophobia">writing</option>
<option value="/scriptophobia">writing in public</option>
<option value="/radiophobia">x-rays</option>
<option value="/xanthophobia">yellow color</option>
</select>',
      'format' => '2',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->uuid = 'c758714a-08ec-c534-ed43-9e805addb52e';
    $display->content['new-c758714a-08ec-c534-ed43-9e805addb52e'] = $pane;
    $display->panels['middle'][8] = 'new-c758714a-08ec-c534-ed43-9e805addb52e';
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
    $pane->pid = 'new-92f25702-42fd-38e4-157b-c9236a65bae9';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'People-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_terms_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'People',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 13;
    $pane->uuid = '92f25702-42fd-38e4-157b-c9236a65bae9';
    $display->content['new-92f25702-42fd-38e4-157b-c9236a65bae9'] = $pane;
    $display->panels['middle'][13] = 'new-92f25702-42fd-38e4-157b-c9236a65bae9';
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
    $pane->position = 14;
    $pane->uuid = '3bace9dc-df47-b024-fd2c-c5f1854c044f';
    $display->content['new-3bace9dc-df47-b024-fd2c-c5f1854c044f'] = $pane;
    $display->panels['middle'][14] = 'new-3bace9dc-df47-b024-fd2c-c5f1854c044f';
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
    $pane->position = 15;
    $pane->uuid = '6f92c92f-4d55-bed4-39fb-aa0d42bc4880';
    $display->content['new-6f92c92f-4d55-bed4-39fb-aa0d42bc4880'] = $pane;
    $display->panels['middle'][15] = 'new-6f92c92f-4d55-bed4-39fb-aa0d42bc4880';
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
    $pane->position = 16;
    $pane->uuid = '7fa267d3-e878-2464-9136-3dc8b0ca96d6';
    $display->content['new-7fa267d3-e878-2464-9136-3dc8b0ca96d6'] = $pane;
    $display->panels['middle'][16] = 'new-7fa267d3-e878-2464-9136-3dc8b0ca96d6';
    $pane = new stdClass;
    $pane->pid = 'new-f6bf515e-5761-3754-a1c0-841eb2748e33';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'trade_drugs-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'taxonomy/term/14345',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Trade names',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 17;
    $pane->uuid = 'f6bf515e-5761-3754-a1c0-841eb2748e33';
    $display->content['new-f6bf515e-5761-3754-a1c0-841eb2748e33'] = $pane;
    $display->panels['middle'][17] = 'new-f6bf515e-5761-3754-a1c0-841eb2748e33';
    $pane = new stdClass;
    $pane->pid = 'new-4dc03573-e4a7-5d34-1db4-a0336561ef74';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'Compounds';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'taxonomy/term/11872',
          ),
          'context' => 'empty',
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
    $pane->position = 18;
    $pane->uuid = '4dc03573-e4a7-5d34-1db4-a0336561ef74';
    $display->content['new-4dc03573-e4a7-5d34-1db4-a0336561ef74'] = $pane;
    $display->panels['middle'][18] = 'new-4dc03573-e4a7-5d34-1db4-a0336561ef74';
    $pane = new stdClass;
    $pane->pid = 'new-94f7bc77-3517-0724-cd7b-ac0ef909d537';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'Compounds';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'taxonomy/term/10599',
          ),
          'context' => 'empty',
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
    $pane->position = 19;
    $pane->uuid = '94f7bc77-3517-0724-cd7b-ac0ef909d537';
    $display->content['new-94f7bc77-3517-0724-cd7b-ac0ef909d537'] = $pane;
    $display->panels['middle'][19] = 'new-94f7bc77-3517-0724-cd7b-ac0ef909d537';
    $pane = new stdClass;
    $pane->pid = 'new-c5d94251-ad3c-5de4-353d-764d6a044693';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'drug_combos';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'taxonomy/term/8125',
          ),
          'context' => 'empty',
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
    $pane->position = 20;
    $pane->uuid = 'c5d94251-ad3c-5de4-353d-764d6a044693';
    $display->content['new-c5d94251-ad3c-5de4-353d-764d6a044693'] = $pane;
    $display->panels['middle'][20] = 'new-c5d94251-ad3c-5de4-353d-764d6a044693';
    $pane = new stdClass;
    $pane->pid = 'new-d88141a7-6b29-4384-1df9-5dc687d59308';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'drug_sources';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'taxonomy/term/11873',
          ),
          'context' => 'empty',
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
    $pane->position = 21;
    $pane->uuid = 'd88141a7-6b29-4384-1df9-5dc687d59308';
    $display->content['new-d88141a7-6b29-4384-1df9-5dc687d59308'] = $pane;
    $display->panels['middle'][21] = 'new-d88141a7-6b29-4384-1df9-5dc687d59308';
    $pane = new stdClass;
    $pane->pid = 'new-b5b377c8-4d5b-1da4-e5bc-b5cfcd388985';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'Directory-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_terms_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Resources',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 22;
    $pane->uuid = 'b5b377c8-4d5b-1da4-e5bc-b5cfcd388985';
    $display->content['new-b5b377c8-4d5b-1da4-e5bc-b5cfcd388985'] = $pane;
    $display->panels['middle'][22] = 'new-b5b377c8-4d5b-1da4-e5bc-b5cfcd388985';
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
    $pane->position = 23;
    $pane->uuid = 'ed97b4ed-550d-aa44-352c-25369a445ac6';
    $display->content['new-ed97b4ed-550d-aa44-352c-25369a445ac6'] = $pane;
    $display->panels['middle'][23] = 'new-ed97b4ed-550d-aa44-352c-25369a445ac6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context'] = $handler;

  return $export;
}
