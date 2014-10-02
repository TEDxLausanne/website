<?php
/**
 * @file
 * tedxlausanne_site.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function tedxlausanne_site_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage';
  $context->description = 'Homepage context';
  $context->tag = 'homepage';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-last_event-block' => array(
          'module' => 'views',
          'delta' => 'last_event-block',
          'region' => 'full_header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Homepage context');
  t('homepage');
  $export['homepage'] = $context;

  return $export;
}
