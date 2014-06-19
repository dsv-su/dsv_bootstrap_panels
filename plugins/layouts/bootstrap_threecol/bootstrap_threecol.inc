<?php

/**
 * implementation of hook_panels_layouts
 */
// Plugin definition
$plugin = array(
  'title' => t('Bootstrap three columns'),
  'category' => t('Columns: 3'),
  'icon' => 'bootstrap_threecol.png',
  'theme' => 'bootstrap_threecol',
  'theme arguments' => array('id', 'content'),
  'css' => 'bootstrap_threecol.css',
  'regions' => array(
    'left' => t('Left column'),
    'middle' => t('Middle column'),
    'right' => t('Right column')
  ),
);