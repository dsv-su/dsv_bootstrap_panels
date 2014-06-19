<?php

/**
 * implementation of hook_panels_layouts()
 */
// Plugin definition
$plugin = array(
  'title' => t('Bootstrap single column'),
  'category' => t('Columns: 1'),
  'icon' => 'bootstrap_onecol.png',
  'theme' => 'bootstrap_onecol',
  'css' => 'bootstrap_onecol.css',
  'regions' => array('middle' => t('Middle column')),
);
