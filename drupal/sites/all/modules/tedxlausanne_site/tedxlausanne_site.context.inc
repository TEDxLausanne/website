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
  $context->name = 'basic_pages';
  $context->description = '';
  $context->tag = 'pages';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'page' => 'page',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('pages');
  $export['basic_pages'] = $context;

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
        'context_ui-editor' => array(
          'module' => 'context_ui',
          'delta' => 'editor',
          'region' => 'full_header',
          'weight' => '-10',
        ),
        'views-last_event-block' => array(
          'module' => 'views',
          'delta' => 'last_event-block',
          'region' => 'full_header',
          'weight' => '-9',
        ),
        'views-homepage_speaker-block' => array(
          'module' => 'views',
          'delta' => 'homepage_speaker-block',
          'region' => 'full_footer',
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
