<?php

/**
 * implementation of hook_panels_layouts
 */
// Plugin definition
$plugin = array(
  'title' => t('Bootstrap two columns'),
  'category' => t('Columns: 2'),
  'icon' => 'bootstrap_twocol.png',
  'theme' => 'bootstrap_twocol',
  'theme arguments' => array('id', 'content'),
  'css' => 'bootstrap_twocol.css',
  'regions' => array(
    'left' => t('Left column'),
    'middle' => t('Middle column'),
  ),
);