<?php

// Plugin definition
$plugin = array(
  'title' => t('Behavenet Three pods'),
  'category' => t('Columns: 3'),
  'icon' => 'behavenet_threecol.png',
  'theme' => 'behavenet_threecol',
  'css' => 'behavenet_threecol.css',
  'panels' => array(
    'left' => t('Left side'),
    'middle' => t('Middle'),
    'right' => t('Right side')
  ),
);
