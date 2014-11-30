<?php

/**
 * @file
 * template.php
 */

/**
 * theme_preprocess_page
 */
function tedxlausanne_preprocess_page(&$variables) {


}

/**
 * Preprocess variables for node.tpl.php
 *
 * @see node.tpl.php
 */
function tedxlausanne_preprocess_node(&$variables) {

  // That will let you use a template file like: node--[type|nodeid]--teaser.tpl.php
  if($variables['view_mode'] == 'teaser') {
    $variables['theme_hook_suggestions'][] = 'node__' . $variables['node']->type . '__teaser';
  }

  if($variables['view_mode'] == 'full_teaser') {
    $variables['theme_hook_suggestions'][] = 'node__' . $variables['node']->type . '__full_teaser';
  }
  // if (module_exists('devel')) {
  //   dpm($variables);
  // }
}
