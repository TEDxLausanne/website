<?php
/**
 * @file
 * tedxlausanne_event.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tedxlausanne_event_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tedxlausanne_event_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tedxlausanne_event_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('Event organized by TEDxLausanne'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'speaker' => array(
      'name' => t('Speaker'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'sponsor' => array(
      'name' => t('Sponsor'),
      'base' => 'node_content',
      'description' => t('Sponsors and partners of TEDxLausanne'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'talk' => array(
      'name' => t('Talk'),
      'base' => 'node_content',
      'description' => t('Talk in an event'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
