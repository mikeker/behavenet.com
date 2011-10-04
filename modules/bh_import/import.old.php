<?php

More recent:

// Clear out all Terms terms and start over
//  $results = db_query("SELECT * FROM {term_data} WHERE vid=5");
//  while ($row = db_fetch_object($results)) {
//    taxonomy_del_term($row->tid);
//  }
//  dpr('done.');
//  exit;


  // Flatten hierarchy table
//  $results = db_query("SELECT * FROM {term_data} WHERE vid=5");
//  while ($row = db_fetch_object($results)) {
//    db_query('DELETE FROM {term_hierarchy} WHERE tid = %d', $row->tid);
//    db_query('INSERT INTO {term_hierarchy} (tid, parent) VALUES (%d, 0)', $row->tid);
//  }
//  dpr('done');
//  exit;



// Sanity check the term_hierarchy table
//  $results = db_query("SELECT * FROM {term_data} WHERE tid IS NOT NULL");
//  while ($row = db_fetch_object($results)) {
//    $h = db_query("SELECT * FROM {term_hierarchy} WHERE tid=%d", $row->tid);
//    $entry = db_fetch_object($h);
//    if (empty($entry)) {
//      dpr("Missing hierarchy entry for ". $row->tid);
//    }
//  }
//  exit;

  // Correct capitalization in Terms -- oops, do this right if we reimport (god forbid...)
//  foreach ($old_terms as $name => $old_id) {
//    if (strtolower($name) != $name) {
//      $term = $terms_master[strtolower($name)];
//      $update = new stdClass();
//      $update->tid = $term->tid;
//      $update->name = $name;
//      $update->vid = $term->vid;
//      
//      drupal_write_record('term_data', $update, 'tid');
//      dpr("Updated to $name");
//    }
//  }
//  dpr('done');
//  exit;
  
//  // ONE-TIME: Build migrate_map_terms table
//  foreach ($terms as $name => $term) {
//    $old_tid = $old_terms[$name];
//    $new_tid = $term->tid;
//    db_query("INSERT INTO {migrate_map_terms} (sourceid, destid) VALUES ($old_tid, $new_tid)");
//  }
//  dpr('done');
//  exit;

  























Old stuff:

function get_terms_tid() {
  static $ttid = 0;
  if (empty($ttid)) {
    $t = taxonomy_get_term_by_name('Terms');
    foreach ($t as $possible) {
      if (5 == $possible->vid) {
        $ttid = $possible->tid;
        break;
      }
    }
  }
  return $ttid;
}
function get_lists_tid() {
  static $ltid = 0;
  if (empty($ltid)) {
    // Grab tid's for the Lists and Terms parent terms
    $t = taxonomy_get_term_by_name('Lists');
    foreach ($t as $possible) {
      if (5 == $possible->vid) {
        $ltid = $possible->tid;
        break;
      }
    }
  }
  return $ltid;
}

// Double check terms for missing entries
$results = db_query('SELECT * FROM {term_data} WHERE vid=5');
while ($row = db_fetch_object($results)) {
  if (!isset($terms[$row->name])) {
    dpr('missing entry: ' .$row->name);
    dpr($row);
  }
}
dpr('done.');
exit;

// Singleton: check for dups between lists and terms
foreach ($lists as $list) {
  if (isset($terms[$list->name]) && (4246 != $terms[$list->name]->parents[0])) {
    taxonomy_del_term($list->tid);
    $term = array(
      'tid' => $terms[$list->name]->tid,
      'parent' => $ltid,
    );
    drupal_write_record('term_hierarchy', $term);
  }
}
exit;
  


function add_new_term($name, $orig_id, $existing_tid = NULL) {
  $result = db_query(
    'SELECT * from {data_term_term_drug_relation} WHERE Term=%d OR Assoc=%d OR Member=%d OR List=%d OR Syn=%d',
    $orig_id, $orig_id, $orig_id, $orig_id, $orig_id
  );
  
//  dpr("tid is $existing_tid");
  $terms = get_terms();
  if (!empty($existing_tid)) {
    if ($terms[$name]->tid != $existing_tid) {
      dpr("Mismatch between stored tid (" .$terms[$name]->tid. ")and specified tid ($existing_tid)");
      return;
    }
  }
  
  $related = array();
  $syn = array();
  $parents = array();
  while ($row = db_fetch_object($result)) {
//    dpr('row is'); dpr($row);
    if (!empty($row->Assoc)) {
      if ($tid = old_id_to_tid($row->Assoc)) {
        if ($existing_tid != $tid) {
          $related[] = $tid;
        }
      }
      else {
        dpr("Bogus Assoc specified: ". $row->ID);
      }
    }
    
    if (!empty($row->Member)) {
      if ($tid = old_id_to_tid($row->Member)) {
        if ($tid != $existing_tid) {
          $parents[] = $tid;
        }
      }
      else {
        dpr("Bogus Member specified: ". $row->ID);
      }
    }
    
    if (!empty($row->List)) {
      if ($tid = old_id_to_tid($row->List)) {
        if ($tid != $existing_tid) {
          $parents[] = $tid;
        }
      }
      else {
        dpr("Bogus List specified: ". $row->ID);
      }
    }
    
    if (!empty($row->Syn)) {
      if (isset($orig[$row->Syn])) {
        $syn[] = $orig[$row->Syn];
      }
      else {
        dpr('Bogus syn specified: '. $row->ID);
      }
    }
  }
  
  if (empty($parents)) {
    // Default to the Terms parent
    $pid = array(get_terms_tid());
  }
  else {
    $parents = array_unique($parents);
    if ($existing_tid) {
      $children = taxonomy_get_tree(5, $existing_tid);
  
//      dpr('children'); dpr($children);
      
      // A term can't be the child of itself, nor of its children.
      foreach ($children as $child) {
        if (FALSE !== ($index = array_search($child->tid, $parents))) {
          dpr("cyclical parent-child relationship on $child->tid");
          unset($parents[$index]);
        }
        if (FALSE !== ($index = array_search($existing_tid, $parents))) {
          dpr("cyclical parent-self relationship on $existing_tid");
          unset($parents[$index]);
        }
      }
    }
  }
  
  $related = array_unique($related);
  if ($existing_tid) {
    // Ensure we don't have cyclical related terms loops
    $existing_related = taxonomy_get_related($existing_tid);
    foreach ($existing_related as $rid => $t) {
      if (FALSE !== ($index = array_search($rid, $related))) {
        dpr("cyclical related terms on $rid");
        unset($related[$index]);
      }
    }
  }
  
  $new = array(
    'vid' => 5,
    'name' => $name,
    'parent' => $parents,
  );
  if (!empty($existing_tid)) {
    $new['tid'] = $existing_tid;
  }
  if (!empty($related)) {
    $new['relations'] = $related;
  }
  if (!empty($syn)) {
    $new['synonyms'] = implode("\r\n", array_unique($syn));
  }
//  dpr("would've saved this: "); dpr($new);
  
  taxonomy_save_term($new);
  dpr("saved: ". $new->name);
  
//  $all_parents = taxonomy_get_parents_all($existing_tid);
//  dpr('after save, all parents: '); dpr($all_parents);
//  dpr('saved term: '); dpr($new);
  return $new;
}


function bh_import_test_old($arg = '') {
  $ttid = get_terms_tid();
  $ltid = get_lists_tid();
  
  // Get all the Lists terms and make quick lookup table (name => tax_object)
  $v = taxonomy_get_tree(5, $ltid);
  $lists = array();
  foreach ($v as $term) {
    $lists[$term->name] = $term;
  }  
//  dpr($lists); exit   ;

  $terms = get_terms(TRUE);
//  dpr($terms); exit;


    
  // Get all the terms in the Drupal Terms vocab (not just lists or "terms")
  $v = taxonomy_get_tree(5);
  $all = array();
  foreach ($v as $term) {
    $all[strtolower($term->name)] = $term;
  }  
//  dpr($all); exit   ;
  
  
  // Verify all terms are in Drupal
  $old = get_orig();              // old tid => name
  $missing = array();
  foreach ($old as $old_tid => $old_term) {
    if (empty($all[strtolower($old_term)])) {
      $missing[] = "missing: $old_term ($old_tid)";
//      $all[strtolower($old_term)] = add_new_term($old_term, $old_tid);
    }
  }
//  dpr('done');
  dpr('missing '. count($missing) .' terms: ');
  dpr($missing);
  exit;
  
  
  // Verify old terms and lists
  if (!empty($arg)) {
    $old = get_orig();              // old tid => name
    $old_terms = array_flip($old);  // old name => tid

    // Make $arg an old tid
    if (is_string($arg)) {
      $arg = $old_terms[$arg];
    }
    
    $terms = array();
    $result = db_query(
      'SELECT * from {data_term_term_drug_relation} 
      WHERE Term=%d OR Assoc=%d OR Member=%d OR List=%d OR Syn=%d',
      $arg, $arg, $arg, $arg, $arg
    );
    $results = array();
    while ($row = db_fetch_array($result)) {
      foreach ($row as $field => $value) {
        if (empty($value)) {
          continue;
        }
        if (!isset($results[$field])) {
          $results[$field] = array();
        }
        $results[$field][] = empty($old[$value]) ? "bogus value: $value" : $old[$value]; 
      }
    }
    dpr('Associated terms: ');
    dpr($results['Assoc']);
    dpr('Member terms:');
    dpr($results['Member']);
    dpr('List');
    dpr($results['List']);
    dpr('Synonyms');
    dpr($results['Syn']);   
  }
  
  
  
  
  
  
  
  
  exit;
  
  
  
  
  
  
  
}

/*




  $result = db_query('SELECT ID, Term, Assoc from {data_term_term_drug_relation} WHERE Assoc IS NOT NULL');
  $correct = 0; $errors = 0;
  while ($row = db_fetch_object($result)) {

    if (!isset($terms[$orig[$row->Assoc]])) {
//      // Add to terms list
//      $new = array(
//        'vid' => 5,
//        'name' => $orig[$row->Assoc],
//      );
//      taxonomy_save_term($new);
//      $terms[$orig[$row->Assoc]] = $new;
      dpr("unable to find term (assoc) for " .$orig[$row->Assoc]);
      $errors++;
      continue;
    }
    else if (!isset($terms[$orig[$row->Term]])) {
      // Add to terms list
      if (!empty($orig[$row->Term])) {
        $new = array(
          'vid' => 5,
          'name' => $orig[$row->Term],
        );
        taxonomy_save_term($new);
        $terms[$orig[$row->Term]] = $new;
        $correct++;
      }
      else {
        dpr("bogus entry (term) for " .$orig[$row->Term]. ' at ' .$row->ID);
        $errors++;
        continue;
      }
    }
    else {
      $correct++;
    }
    
    $assoc = $terms[$orig[$row->Assoc]];
    $term = $terms[$orig[$row->Term]];
    $new = array(
      'tid1' => $assoc->tid,
      'tid2' => $term->tid,
    );
    drupal_write_record('term_relation', $new);
    
//    dpr("$syn is a syn of $term->name");    
//    dpr($syn); dpr($term);
    
    // Move syn to to-be-deleted vocab
//    $syn->vid = 8;
//    drupal_write_record('term_data', $syn, array('tid'));
  }
  print "$correct entries found, $errors errors.  ";



  // Add "List" terms
  $result = db_query('SELECT Term, List from {data_term_term_drug_relation} WHERE List IS NOT NULL');
  $count = 0;
  while ($row = db_fetch_object($result)) {
    // Make sure this list exists
    if (!isset($lists[$orig[$row->List]])) {
      $new = array(
        'vid' => 5,
        'name' => $orig[$row->List],
      );
      taxonomy_save_term($new);
      $lists[$orig[$row->List]] = $new;
      
      $term = array(
        'tid' => $new->tid,
        'parent' => $ltid,
      );
      drupal_write_record('term_hierarchy', $term);
      dpr('added list item: '. $new->name);
    }
    
    // Make sure Term exists
    if (!isset($terms[$orig[$row->Term]])) {
      $new = new stdClass();
      $new->vid = 5;
      $new->name = $orig[$row->Term];
      drupal_write_record('term_data', $new);
      $terms[$orig[$row->Term]] = $new;
    }
    
    // Associate this term with the term in Lists
    $term = array(
      'tid' => $terms[$orig[$row->Term]]->tid,
      'parent' => $lists[$orig[$row->List]]->tid,
    );
    
    drupal_write_record('term_hierarchy', $term);
    //    $list[] = $terms[$orig[$row->Term]]->tid .' is part of '. $terms[$orig[$row->List]]->tid;
    
  }

 *
 * Associating terms with Generics
 *

    if (!isset($generic_map[$row->Gnrc])) {
      dpr("Error: invalid Generic ID: " . $row->Gnrc);
      $errors++;
      continue;
    }
    elseif (!old_id_to_tid($row->Term)) {
      if ($new = add_new_term($orig[$row->Term], $row->Term)) {
        $terms[$orig[$row->Term]] = $new;
        $correct++;
      }
      else {
        dpr("error...");
        $errors++;
        continue;
      }
    } 

    $node = node_load($generic_map[$row->Gnrc]);
    $new_term = $terms[$orig[$row->Term]];
    if (empty($node->field_general_terms[0]['value'])) {
      $node->field_general_terms[0]['value'] = $new_term->tid;
    }
    else {
      $found = FALSE;
      foreach($node->field_general_terms as $item) {
        if ($item['value'] == $new_term->tid) {
          $found = TRUE;
          break;
        }
      }
      if (!$found) {
        $node->field_general_terms[] = array('value' => $new_term->tid);
      }
    }
    if (!isset($node->taxonomy[$new_term->tid])) {
      $node->taxonomy[$new_term->tid] = $new_term;
    }
//    dpr($node); exit;
    node_save($node);
    $correct++;


 */

//  // Build map of old_id -> new_nid for a given import
//  $result = db_query('SELECT * FROM {migrate_map_generic_names} WHERE 1');
//  $generic_map = array();
//  while ($row = db_fetch_object($result)) {
//    $generic_map[$row->sourceid] = $row->destid;
//  }
//
//  $low = $_REQUEST['low'];
//  $num = $_REQUEST['num'];
//  $correct = $_REQUEST['correct'];
//  $error = $_REQUEST['error'];
//  if (empty($low)) {
//    $low = 0;
//  }
//  if (empty($error)) {
//    $error = 0;
//  }
//  if (empty($correct)) {
//    $correct = 0;
//  }
//  if (empty($num)) {
//    $num = 500;
//  }
//  
//  $result = db_query(
//    "SELECT ID, Term, Person from {data_term_term_drug_relation} 
//     WHERE Gnrc IS NOT NULL AND Term IS NOT NULL LIMIT $low, $num"
//  );
//  
//  $generic_to_terms = array();
//  while ($row = db_fetch_object($result)) {
////    dpr($row);
//    $nid = $generic_map[$row->Gnrc];
//    if (empty($generic_to_terms[$nid])) {
//      $generic_to_terms[$nid] = array();
//    }
//    
//    $term = taxonomy_get_term(old_id_to_tid($row->Term));
//    if (!empty($term)) {
//      $generic_to_terms[$nid][$term->tid] = $term;
//    }
//    else {
//      dpr("Bogus entry: " . $row->Term . " on ID " .$row->ID);
//    }
//  }
////  dpr('generic to terms');
////  dpr($generic_to_terms); 
//  
//  foreach ($generic_to_terms as $nid => $terms_list) {
//    $node = node_load($nid);
//    $node->field_general_terms = array();
//    
//    foreach ($terms_list as $tid => $term) {
//      $node->field_general_terms[] = array('value' => $tid);
//      $node->taxonomy[$tid] = $term;
//    }
//    node_save($node);
////    dpr ($node); exit;
//  }
//  dpr('done');
//  exit;



  // Build map of old_id => nid for the People import
//  $result = db_query('SELECT * FROM {migrate_map_people} WHERE 1');
//  $people_map = array();
//  while ($row = db_fetch_object($result)) {
//    $people_map[$row->sourceid] = $row->destid;
//  }
  
  // Get list of People -> Term relationships.  Store as nid => array(term_obj1, term_obj2, ...)
//  $person_terms = array();
//  $result = db_query('SELECT ID, Person, Term FROM {data_people_term_drug_relation} 
//                      WHERE Person IS NOT NULL AND Term IS NOT NULL');
//  while ($row = db_fetch_object($result)) {
//    if (!isset($person_terms[$people_map[$row->Person]])) {
//      $person_terms[$people_map[$row->Person]] = array();
//    }
//    
//    $term = taxonomy_get_term(old_id_to_tid($row->Term));
//    if (empty($term)) {
//      dpr('Bogus term in ID '. $row->ID .': '. $row->Term);
//    }
//    $person_terms[$people_map[$row->Person]][$term->tid] = $term;
//  }    
//
//  foreach ($person_terms as $nid => $terms) {
//    $node = node_load($nid);
//    if (empty($node)) {
//      dpr("Bogus Person specified with nid of $nid");
//    }
//    foreach ($terms as $tid => $term) {
//      if (!isset($node->taxonomy[$tid])) {
//        $node->taxonomy[$tid] = $term;
//        
//        // And Content taxonomy field
//        $node->field_terms[] = array('value' => $tid);
//      }
//    }
//    
//    node_save($node);
//    dpr('Updated node: '. $node->nid);
//  }
