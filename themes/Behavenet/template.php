<?php
/**
 * Preprocess function for CCK fields.
 *
 * @TODO: move to module?
 *
 * @see http://api.lullabot.com/template_preprocess_content_field
 * @param $vars
 * @return none
 */
function behavenet_preprocess_content_field(&$vars) {
  // Convert these fields from URLs entered as text to links
  $convert = array(
    // CCK_field_name => link_text (empty means use the URL)
    'field_company_url' => '',
    'field_drug_pi_url' => 'FDA Label',
    'field_drug_url' => 'Product Web site',
    'field_generic_medline_url' => 'Medline',
    'field_movie_blog' => '<span class="blogger-link"><img src="/'
      . drupal_get_path('theme', 'Behavenet')
      . '/images/blogger.png" alt="Blogger icon" title="Read a blog entry about this movie" />'
      . ' Movies, Drugs and Psychiatry</span>',
  );
  if (in_array($vars['field_name'], array_keys($convert))) {
    // Convert to a clickable link
    $url = trim($vars['items'][0]['value']);
    if (FALSE === stristr($url, 'http://')) {
      $url = "http://$url";
    }
    $options = array();
    if ('field_movie_blog' == $vars['field_name']) {
      // Movie blog is an image.
      $options['html'] = TRUE;
    }
    if (empty($convert[$vars['field_name']])) {
      $vars['items'][0]['view'] = l($vars['items'][0]['value'], $url, $options);
    }
    else {
      $vars['items'][0]['view'] = l($convert[$vars['field_name']], $url, $options);
    }
  }

  // Put generic drugs in parenthesis
  if ('field_drug_generic' == $vars['field_name'] && 'drug' == $vars['node']->type) {
    $vars['items'][0]['view'] = '(' . $vars['items'][0]['view'] . ')';
  }

  // Link directly to company web site -- skip link to internal node
  if ('field_drug_company' == $vars['field_name']) {
    if (empty($company->field_company_url[0]['value'])) {
      $vars['field_empty'] = TRUE;
    }
    else {
      $company = node_load($vars['items'][0]['nid']);
      $url = $company->field_company_url[0]['value'];
      if (0 !== strpos($url, 'http://')) {
        // Correct poorly formed URLs in the original dataset
        $url = "http://$url";
      }
      $vars['items'][0]['view'] = l('Company Web site', $url, array('external' => TRUE));
    }
  }

  // Changes to how drug combination are shown
  if ('combinations' == $vars['node']->type) {
    // Only show alternate combo names if more than one name is listed
    if ('field_combo_titles' == $vars['field_name']) {
      if (1 == count($vars['items'])) {
        $vars['field_empty'] = TRUE;
      }
    }

    // Rewrite output of generics to be similar to:
    //    <tradename> is a combination of <list of generics>
    if ('field_combo_drugs' == $vars['field_name']) {
      $tradename = '';
      $node = $vars['node'];
      if (!empty($node->field_combo_tradename[0])) {
        $tradename = l(
          $node->field_combo_tradename[0]['safe']['title'],
          'node/' . $node->field_combo_tradename[0]['safe']['nid']
        );
      }
      else if (!empty($node->field_combo_titles[0])) {
        $tradename = $node->field_combo_titles[0]['safe'];
      }
      else {
        $tradename = 'Unknown';
      }
      if (1 == count($vars['items'])) {
        $vars['items'][0]['view'] = "$tradename is a combination including "
          . $vars['items'][0]['view'];
      }
      else {
        $generics = array();
        foreach ($vars['items'] as $index => $item) {
          $generics[] = $item['view'];
          $vars['items'][$index]['empty'] = TRUE;
        }
        $vars['items'][0]['view'] = "$tradename is a combination of "
          . implode_and($generics);
        $vars['items'][0]['empty'] = FALSE;
      }
    }
  }


  // Adjust the display of combination fields such that they show the generics
  if ('field_drug_combo' == $vars['field_name'] && $vars['items'][0]['nid']) {
    foreach ($vars['items'] as $index => $item) {
      if (empty($item['nid'])) {
        continue;
      }
      $combo = node_load($item['nid']);
      $title = array();
      foreach ($combo->field_combo_drugs as $info) {
        $generic = node_load($info['nid']);
        $title[] = l($generic->title, "node/$generic->nid");
      }
      if (1 == count($title)) {
        $last = array_pop($title);
        $link = l($combo->title, "node/$combo->nid");
        $vars['items'][$index]['view'] = "$link: a combination including $last";
      }
      else {
        $last = array_pop($title);
        $link = l($combo->title, "node/$combo->nid");
        $vars['items'][$index]['view'] = "$link: a combination of " . implode(', ', $title) . " and $last";
      }
    }
  }

  // Add date to indications
  if ('field_drug_indications' == $vars['field_name'] && $vars['items'][0]['nid']) {
    foreach ($vars['items'] as $index => $item) {
      $indication = node_load($vars['items'][$index]['nid']);
      $date = date_format_date(
        date_make_date($indication->field_indication_approval[0]['value']),
        'custom',
        'm/d/Y'
      );
      if (!empty($date)) {
        $vars['items'][$index]['view'] = "($date): ";
      }
      else {
        $vars['items'][$index]['view'] = '';
      }
      $vars['items'][$index]['view'] .= l($indication->title, "node/$indication->nid");
    }
  }
}

function behavenet_preprocess_views_view_fields(&$vars) {
  $type = $vars['row']->node_type;
  if ('definition' == $type) {
    // Remove edit links to the end of content fields for inappropriate users
    if (!user_access("edit any $type content")) {
      unset ($vars['fields']['edit_node']);
    }
  }
}

function behavenet_preprocess_panels_pane(&$vars) {
  // Display Lists as dropdown menus, rather than a list of related terms
  $output = $vars['output'];
  if (('term_list' == $output->type) && ('term_list' == $output->subtype) && ('related' == $output->delta)) {
    $ltid = $vars['display']->args[0];
    $lists = variable_get('behave_lists_tids', '');
    if (in_array($ltid, $lists)) {
      $vars['title'] = t('Lists');
      $html = '<select class="jump-menu"><option selected>Select a list item</option>';
      foreach (taxonomy_get_related($ltid) as $term) {
        $html .= '<option value="'. url('taxonomy/term/'. $term->tid) .'">'. $term->name .'</option>';
      }
      $html .= '</select>';
      $vars['content'] = $html;
    }
  }
}


/*****************************************************************************
 *
 * One-off display functions for the Behavenet theme
 *
 * Most of these functions accept a $data object as passed by Customfield's
 * PHP Views field, unless noted otherwise
 *
 *****************************************************************************/

/*
 * Display for books and music
 *
 * $data should include the following fields from Views
 *    - Node:Title
 *    - Node:Type
 *    - Amazon: Product image
 *    - Amazon: Title
 */
function behavenet_display_books_movies($data) {
  $output = '';
  if ('book' == $data->node_type) {
    if (empty($data->amazon_item_node_data_field_general_asin_detailpageurl)) {
      $output .= '<div class="clear-fix clear-left">';
      $output .= $data->node_title;
      $output .= '</div>';
    }
    else {
      $output .= l($data->amazon_item_node_data_field_general_asin_title, $data->amazon_item_node_data_field_general_asin_detailpageurl);
    }
  }
  return $output;
}
