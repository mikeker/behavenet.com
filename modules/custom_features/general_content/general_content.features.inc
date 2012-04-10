<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function general_content_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function general_content_imagecache_default_presets() {
  $items = array(
    'right_callout_image' => array(
      'presetname' => 'right_callout_image',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '240',
            'height' => '',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function general_content_node_info() {
  $items = array(
    'company' => array(
      'name' => t('Company'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Company Name'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'compound' => array(
      'name' => t('Compound'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Compound Name'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'device' => array(
      'name' => t('Device'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Device name'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'indication' => array(
      'name' => t('Indications'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Admin Title'),
      'has_body' => '1',
      'body_label' => t('Indication Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page'),
      'module' => 'features',
      'description' => t('A <em>page</em> is used for creating and displaying information that rarely changes, such as an "About us" section of a website.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'people' => array(
      'name' => t('People'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Bio'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'preparation' => array(
      'name' => t('Preparation'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Preparation'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'sources' => array(
      'name' => t('Sources'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Common name'),
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
function general_content_rules_defaults() {
  return array(
    'rules' => array(
      'rules_new_comment' => array(
        '#type' => 'rule',
        '#set' => 'event_comment_insert',
        '#label' => 'New Comment',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'Behavenet',
          'general_content' => 'general_content',
        ),
        '#status' => 'default',
        '#conditions' => array(),
        '#actions' => array(
          '0' => array(
            '#type' => 'action',
            '#settings' => array(
              'to' => 'behavenet@gmail.com',
              'from' => 'info@behavenet.com',
              'subject' => 'New comment on Behavenet.com',
              'message' => 'A new comment has been saved on Behavenet.com. You need to approve the comment before it appears on the live site.

[comment:comment-body]',
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
            '#name' => 'rules_action_mail',
            '#info' => array(
              'label' => 'Send a mail to an arbitrary mail address',
              'module' => 'System',
              'eval input' => array(
                '0' => 'subject',
                '1' => 'message',
                '2' => 'from',
                '3' => 'to',
              ),
            ),
            '#weight' => 0,
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
function general_content_views_api() {
  return array(
    'api' => '2',
  );
}
