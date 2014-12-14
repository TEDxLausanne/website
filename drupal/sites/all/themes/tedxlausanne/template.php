<?php

/**
 * @file
 * template.php
 */

/**
 * theme_preprocess_page
 */
function tedxlausanne_preprocess_page(&$variables) {

  // Display speaker name in the talk title
  if(isset($variables['node']) && isset($variables['node']->field_talk_speaker['und'][0]['entity']->title) && $variables['node']->type == 'talk'){
    $speaker = $variables['node']->field_talk_speaker['und'][0]['entity']->title;
    $variables['title'] = '<strong>'.$speaker.'</strong><br/> '.$variables['node']->title;
  }

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


}
