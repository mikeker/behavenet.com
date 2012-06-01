<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function media_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function media_node_info() {
  $items = array(
    'book' => array(
      'name' => t('Book'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'movie' => array(
      'name' => t('Movie'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Movie Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_rules_defaults().
 */
function media_rules_defaults() {
  return array(
    'rules' => array(
      'rules_new_comment_entered' => array(
        '#type' => 'rule',
        '#set' => 'event_comment_insert',
        '#label' => 'New comment entered',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'Behavenet',
          'media' => 'media',
        ),
        '#status' => 'default',
        '#conditions' => array(),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Send Berry email about new comments',
              'label callback' => FALSE,
              'module' => 'System',
              'eval input' => array(
                '0' => 'subject',
                '1' => 'message',
                '2' => 'from',
                '3' => 'to',
              ),
            ),
            '#name' => 'rules_action_mail',
            '#settings' => array(
              'to' => 'behavenet@gmail.com',
              'from' => '',
              'subject' => 'There is a new comment on Behavenet.com',
              'message' => 'A new comment has been entered on Behavenet.com:

[comment:comment-body]

Before that comment will be visible to the public, it must be approved.

    http://behavenet.com/admin/content/comment/approval',
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'subject' => array(
                    '0' => ':global',
                  ),
                  'message' => array(
                    '0' => 'comment',
                    '1' => ':global',
                  ),
                  'from' => array(
                    '0' => ':global',
                  ),
                  'to' => array(
                    '0' => ':global',
                  ),
                ),
              ),
            ),
            '#type' => 'action',
          ),
        ),
        '#version' => 6003,
      ),
    ),
  );
}

/**
 * Implementation of hook_views_api().
 */
function media_views_api() {
  return array(
    'api' => '2',
  );
}
