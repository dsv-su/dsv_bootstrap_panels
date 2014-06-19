<?php

/**
 * implementation of hook_panels_layouts
 */
// Plugin definition
$plugin = array(
  'title' => t('Bootstrap DSV Mainpage'),
  'category' => t('Columns: 2'),
  'icon' => 'bootstrap_mainpage.png',
  'theme' => 'bootstrap_mainpage',
  'theme arguments' => array('id', 'content'),
  'css' => 'bootstrap_mainpage.css',
  'regions' => array(
    'left' => t('Left column'),
    'middle_top' => t('Middle top row'),
    'middle_left' => t('Middle left column'),
    'middle_right' => t('Middle right column'),
  ),
);