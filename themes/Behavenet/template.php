<?php
function cmp_values($a, $b) {
  return strnatcasecmp($a['value'], $b['value']);
}

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
  // dsm($vars['field_name']);
  // dsm($vars);

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
    'field_general_facebook_page' => 'Facebook',
    'field_general_twitter' => '%value',
    'field_movie_url' => 'Official Web site',
  );
  if (in_array($vars['field_name'], array_keys($convert))) {
    // Convert to a clickable link
    $url = trim($vars['items'][0]['value']);

    // Some fields need special tweaking
    $options = array();
    if ('field_movie_blog' == $vars['field_name']) {
      // Movie blog is an image.
      $options['html'] = TRUE;
    }
    if ('field_general_twitter' == $vars['field_name']) {
      // @hashtag goes to Twitter, #hashtag goes to TweetChat
      if ('#' == substr($url, 0, 1)) {
        $url = 'http://tweetchat.com/room/' . substr($url, 1);
      }
      else if ('@' == substr($url, 0, 1)) {
        $url = "https://twitter.com/$url";
      }
    }

    // Protect from poorly formed URLs
    if (FALSE === stristr($url, 'http://') && FALSE === stristr($url, 'https://')) {
      $url = "http://$url";
    }

    if (empty($convert[$vars['field_name']])) {
      $vars['items'][0]['view'] = l($vars['items'][0]['value'], $url, $options);
    }
    else {
      $text = str_replace('%value', $vars['items'][0]['view'], $convert[$vars['field_name']]);
      $vars['items'][0]['view'] = l($text, $url, $options);
    }
  }

  // Link directly to company web site -- skip link to internal node
  if ('field_drug_company' == $vars['field_name']) {
    if (empty($vars['items'][0]['nid'])) {
      $vars['field_empty'] = TRUE;
    }
    else {
      $company = node_load($vars['items'][0]['nid']);
      $url = $company->field_company_url[0]['value'];
      $name = empty($company->title) ? 'Company Web site' : $company->title;
      if (0 !== strpos($url, 'http://')) {
        // Correct poorly formed URLs in the original dataset
        $url = "http://$url";
      }
      $vars['items'][0]['view'] = l($name, $url, array('external' => TRUE));
    }
  }

  // Rewrite some Amazon links to include lowest price
  if ('field_general_asin' == $vars['field_name'] && 'inline' == $vars['element']['items'][0]['#formatter']) {
    $amzn = $vars['node']->{0};
    $link = '';
    if (!empty($amzn['lowestpriceformattedprice'])) {
      $link = l(
        'Buy from Amazon for ' . $amzn['lowestpriceformattedprice'],
        $amzn['detailpageurl']
      );
    }
    else {
      $link = l('Buy from Amazon', $amzn['detailpageurl']);
    }
    $vars['items'][0]['view'] = $link;
  }

  // Rewrite secondary Amazon links
  if ('field_general_additional_asin' == $vars['field_name'] && 'inline' == $vars['element']['items'][0]['#formatter']) {
    $vars['label'] = 'Read the book';
  }

  // Avoid overly long lists of slang terms taking over the page
  if ('field_gen_slang_terms' == $vars['field_name']) {
    // Order list alphabetically
    usort($vars['items'], 'cmp_values');

    if (count($vars['items'] > 10)) {
      // Rewrite as dropdown list
      $output = '<select>';
      foreach ($vars['items'] as $item) {
        $output .= '<option>' . $item['view'] . '</option>';
      }
      $output .= '</select>';
      $vars['items'] = array(0 => array('view' => $output));
    }
  }

  // Combine author first/last name for books
  if ('book' == $vars['node']->type) {
    if ('field_book_lastname' == $vars['field_name']) {
      // Hide last name field
      $vars['field_empty'] = TRUE;
    }
    if ('field_book_firstname' == $vars['field_name']) {
      // Include last name along with first name
      $vars['label'] = t('Author');
      $vars['items'][0]['view'] .= ' ' . $vars['node']->field_book_lastname[0]['safe'];
    }
  }

  // Put generic drugs in parenthesis
  if ('field_drug_generic' == $vars['field_name'] && 'drug' == $vars['node']->type) {
    $vars['items'][0]['view'] = '(' . $vars['items'][0]['view'] . ')';
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

  /*
   * Movie display adjustments
   */
  if ('field_movie_release' == $vars['field_name']) {
    $vars['label'] = 'Released';
  }
  if ('field_movie_spoiler' == $vars['field_name']) {
    if (0 == $vars['items'][0]['value']) {
      $vars['field_empty'] = TRUE;
    }
    else {
      $vars['items'][0]['view'] = '<span class="spoiler">Spoiler alert!</span>';
    }
  }

  /*
   * Rewrite display for noderelationship fields.
   *
   * NOTE: we assume that the display is a jump menu, but that's handled
   * by the view behavenet_backref
   */
  if ('noderelationships_backref' == $vars['field_type'] && !$vars['field_empty']) {
    // Backreferences module gives us terrible labels
    $pos = strpos($vars['label'], ' in ');
    if ($pos !== FALSE) {
      $vars['label'] = substr($vars['label'], $pos + 4);
      if ('s' != substr($vars['label'], -1)) {
        // Make it plural
        $vars['label'] .= 's';
      }

      // Swap out the Generics label for Molecular entity
      if ('Generics' == $vars['label']) {
        $vars['label'] = t('Molecular entity');
      }

      $vars['is_backref'] = TRUE;
    }
  }


  /*
   * Change display for Generic drugs
   */
  if ('generic' == $vars['node']->type) {
    if ('field_generic_alt_name' == $vars['field_name']) {
      $vars['label'] = $vars['label_display'] = '';
      $alts = array();
      foreach ($vars['items'] as $item) {
        $alts[] = $item['view'];
      }
      $vars['items'] = array(0 => array('view' => '(' . implode(', ', $alts) . ')'));
    }
  }

  /*
   * Change display details for People
   */
  if ('people' == $vars['node']->type) {
    // Put alternate people names in parenthesis
    if ('field_people_alt_names' == $vars['field_name']) {
      $vars['items'][0]['view'] = '(' . $vars['items'][0]['view'] . ')';
    }
  }

  /*
   *  Combine Terms and Related Content fields for books, movies, people
   */
  if ('movie' == $vars['node']->type || 'book' == $vars['node']->type || 'people' == $vars['node']->type) {
    if ('field_terms' == $vars['field_name'] || 'field_general_terms' == $vars['field_name']) {
      // We'll show terms when we display related content
      // Show as part of "related content"
      $vars['field_empty'] = TRUE;
    }
    if ('field_general_related_content' == $vars['field_name']) {
      $output = behavenet_display_rc_and_terms($vars['node']);
      if (empty($output)) {
        $vars['field_empty'] = TRUE;
      }
      else {
        $vars['field_empty'] = FALSE;
        $vars['items'] = array(0 => array('view' => $output));
        // Remove label
        $vars['label'] = '';
        $vars['label_display'] = '';
      }
    }
  }
  else {
    // Make sure terms list doesn't take over the page: convert to jump menu
    // if longer than 10 items
    if ('field_terms' == $vars['field_name'] || 'field_general_terms' == $vars['field_name']) {
      if (count($vars['items']) > 10) {
        $output .= '<select class="jump-menu"><option selected>- Choose -</option>';
        foreach ($vars['items'] as $item) {
          $line = str_replace('<a href="', '<option value="', $item['view']);
          $line = str_replace('</a>', '</option>', $line);
          $output .= $line;
        }
        $output .= '</select>';
        $vars['items'] = array(0 => array('view' => $output));
      }
    }
  }

  /*
   * Rewrite display for drug combinations
   */
  if ('combinations' == $vars['node']->type) {
    // Only show alternate combo names if more than one name is listed
    if ('field_combo_titles' == $vars['field_name']) {
      if (1 == count($vars['items'])) {
        $vars['field_empty'] = TRUE;
      }
      if (count($vars['items'] > 10)) {
        // Rewrite as dropdown list
        $output = '<select>';
        foreach ($vars['items'] as $item) {
          $output .= '<option>' . $item['view'] . '</option>';
        }
        $output .= '</select>';
        $vars['items'] = array(0 => array('view' => $output));
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
      $vars['title'] = t('Glossary');
      $items = array();
      foreach (taxonomy_get_related($ltid) as $term) {
        $items[url('taxonomy/term/'. $term->tid)] = $term->name;
      }
      $vars['content'] = behavenet_build_jump_menu($items);
    }
  }
}

/**
 * Overrides function theme_noderelationships_backref_view provided by the
 * noderelationships module
 */
function behavenet_noderelationships_backref_view($title, $content) {
  return '<div class="pane-content">'. $content .'</div>';
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

/**
 * Displays the children of a term. Defaults to jump-menu.
 * Other styles to be added later.
 */
function behavenet_display_term_children($tid, $style = 'jump-menu') {
  $children = taxonomy_get_children($tid);
  if (!count($children)) {
    return NULL;
  }
  $output = '';

  if ('jump-menu' == $style) {
    $output .= '<select class="jump-menu"><option selected>- Choose -</option>';
    foreach ($children as $tid => $term) {
      $output .= '<option value="'. url('taxonomy/term/'. $tid) .'">'. $term->name .'</option>';
    }
    $output .= '</select>';
  }

  return $output;
}


/**
 * Returns the display of related content and terms in pipe-delimited format
 * for a given node.
 *
 * @param $node - either an nid or a fully loaded node object.
 */
function behavenet_display_rc_and_terms($node) {
  if (is_numeric($node)) {
    $node = node_load($node);
  }

  $links = array();
  $terms = taxonomy_link('taxonomy terms', $node);
  if ($terms) {
    foreach ($terms as $link) {
      $links[] = l($link['title'], $link['href'], $link['attributes']);
    }
  }
  if (!empty($node->field_general_related_content)) {
    foreach ($node->field_general_related_content as $item) {
      if (!empty($item['nid'])) {
        $links[] = l($item['safe']['title'], 'node/' . $item['nid']);
      }
    }
  }

  // Rewrite output as a single pipe-delimited field
  $output = '<div class="terms-and-related-content">';
  $output .= implode(' | ', $links);
  $output .= '</div>';
  return $output;
}

/*
 * Pulls recent entries from an RSS feed and displays them as
 * "date entry_title" in an unformatted list
 */
function behavenet_get_recent_from_rss($url, $num_entries = 10) {
  // Grab entries
  $ch = curl_init($url);
  curl_setopt($ch, CURLOPT_RETURNTRANSFER, 1);
  curl_setopt($ch, CURLOPT_HEADER, 0);
  $page = curl_exec($ch);
  curl_close($ch);
  if (empty($page)) {
    return '';
  }

  // Parse entries
  $xml = new SimpleXMLElement($page);
  $items = array();
  $count = 1;
  foreach ($xml->entry as $entry) {
    $items[] = format_date(strtotime($entry->published), 'custom', 'm/d/y')
      . ' ' . l($entry->title, $entry->link[4]['href']);
    $count++;
    if ($count > $num_entries) {
      break;
    }
  }
  print implode('<br />', $items);
}

/*
 * Builds a jump-menu of acronyms
 */
function behavenet_list_acronyms() {
  $acronyms = taxonomy_tweaks_get_acronyms();
  $items = array();
  foreach ($acronyms as $tid) {
    $term = taxonomy_get_term($tid);
    if ($term) {
      $items[url("taxonomy/term/$tid")] = $term->name;
    }
  }
  return behavenet_build_jump_menu($items);
}

/*
 * Displays an array of url => title as a jump menu
 */
function behavenet_build_jump_menu($items, $sort_by_title = TRUE) {
  $output = '';
  if (count($items)) {
    if ($sort_by_title) {
      natcasesort($items);
    }
    $output .= '<select class="jump-menu"><option selected>- Choose -</option>';
    foreach ($items as $url => $item) {
      $output .= '<option value="' . $url . '">' . $item . '</option>';
    }
    $output .= '</select>';
  }
  return $output;
}

/*
 * Returns TRUE if this user should have ads shown to them
 *
 * Current removes ads for uid == 1
 */
function behavenet_show_ads() {
  global $user;
  if (1 == $user->uid) {
    return FALSE;
  }
  return TRUE;
}

/*
 * Single point of entry to ad tags to make the panels code simplier
 */
function behavenet_get_ad_tag($node = NULL, $term = NULL) {
  static $tag = '';
  if (empty($tag)) {
    $tag = 'psychiatry';    // Default
    if (!empty($node)) {
      $tag = behavenet_get_node_ad_tag($node);
    }
    if (!empty($term)) {
      $tag = behavenet_get_term_ad_tag($term);
    }
    if (user_access('administer behavenet')) {
      drupal_set_message ("Admin: Ad tag for this page is $tag");
    }
  }

  return $tag;
}
/*
 * Returns the appropriate ad tag for a given piece of content
 */
function behavenet_get_node_ad_tag($node) {
  if (is_numeric($node)) {
    $node = node_load($node);
  }
  $tags = behavenet_get_ad_tag_lookup();
  $possible = array();
  foreach ($tags as $tid => $tag) {
    // Since tags are ordered from most specific to least specific, we can use
    // the first match we get
    if (isset($node->taxonomy[$tid])) {
      return $tag;
    }
  }

  // Check ancestors of terms on this node for possibilities
  $parents = array();
  foreach ($node->taxonomy as $tid => $term) {
    $parents += taxonomy_get_parents_all($tid);
  }
  foreach ($tags as $tid => $tag) {
    if (isset($parents[$tid])) {
      return $tag;
    }
  }

  // Default
  return 'psychiatry';
}

function behavenet_get_term_ad_tag($term) {
  if (is_numeric($term)) {
    $term = taxonomy_get_term($term);
  }

  $tags = behavenet_get_ad_tag_lookup();
  if (isset($tags[$term->tid])) {
    return $tags[$term->tid];
  }

  // Check ancestors -- still need to go through the order specified in $tags
  // since that goes from most specific to least specific
  $parents = taxonomy_get_parents_all($term->tid);
  $ptids = array();
  foreach ($parents as $parent) {
    $ptids[] = $parent->tid;
  }
  foreach ($tags as $tid => $tag) {
    if (in_array($tid, $ptids)) {
      return $tag;
    }
  }

  // Default
  return 'psychiatry';
}

/*
 * Returns an ad tag lookup in the form of tid => tag_name
 */
function behavenet_get_ad_tag_lookup() {
  return (array(
    7194 => 'anxiety',
    7279 => 'dementia',
    7297 => 'eating',
    7268 => 'dissociat',
    7360 => 'Mood',
    7341 => 'impulse',
    7415 => 'personal',
    7467 => 'sleep',
    7482 => 'substance',
    7358 => 'mental',
  ));
}
