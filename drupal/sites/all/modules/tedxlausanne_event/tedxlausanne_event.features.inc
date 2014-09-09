<?php
/**
 * @file
 * tedxlausanne_event.features.inc
 */

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
