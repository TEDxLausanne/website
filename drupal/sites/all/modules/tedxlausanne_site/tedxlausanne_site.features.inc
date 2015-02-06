<?php
/**
 * @file
 * tedxlausanne_site.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tedxlausanne_site_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tedxlausanne_site_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_custom_breadcrumb_features_default_settings().
 */
function tedxlausanne_site_custom_breadcrumb_features_default_settings() {
  $custom_breadcrumbs = array();

  // Exported custom breadcrumb: event.
  $custom_breadcrumbs['event'] = array(
    'name' => 'Event',
    'titles' => 'Events',
    'paths' => 'events',
    'visibility_php' => '',
    'node_type' => 'event',
    'language' => '',
    'machine_name' => 'event',
  );

  // Exported custom breadcrumb: sponsor.
  $custom_breadcrumbs['sponsor'] = array(
    'name' => 'Sponsor',
    'titles' => 'Sponsors',
    'paths' => '',
    'visibility_php' => '',
    'node_type' => 'sponsor',
    'language' => '',
    'machine_name' => 'sponsor',
  );

  // Exported custom breadcrumb: talk.
  $custom_breadcrumbs['talk'] = array(
    'name' => 'talk',
    'titles' => 'Talks',
    'paths' => 'watch',
    'visibility_php' => '',
    'node_type' => 'talk',
    'language' => '',
    'machine_name' => 'talk',
  );

  return $custom_breadcrumbs;
}

/**
 * Implements hook_custom_breadcrumbs_views_features_default_settings().
 */
function tedxlausanne_site_custom_breadcrumbs_views_features_default_settings() {
  $custom_breadcrumbs = array();

  // Exported custom breadcrumb: watch.
  $custom_breadcrumbs['watch'] = array(
    'name' => 'watch',
    'titles' => 'Home',
    'paths' => '',
    'visibility_php' => '',
    'views_path' => 'watch',
    'language' => '',
    'machine_name' => 'watch',
  );

  return $custom_breadcrumbs;
}

/**
 * Implements hook_image_default_styles().
 */
function tedxlausanne_site_image_default_styles() {
  $styles = array();

  // Exported image style: banner.
  $styles['banner'] = array(
    'name' => 'banner',
    'label' => 'Banner',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1600,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: profile.
  $styles['profile'] = array(
    'name' => 'profile',
    'label' => 'Profile',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1000,
          'height' => 1080,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function tedxlausanne_site_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
