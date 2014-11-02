<?php
/**
 * @file
 * tedxlausanne_event.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function tedxlausanne_event_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'speaker_talk';
  $context->description = 'Display talk of a speaker in his detail page';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'speaker' => 'speaker',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-talk_speaker-block' => array(
          'module' => 'views',
          'delta' => 'talk_speaker-block',
          'region' => 'full_footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Display talk of a speaker in his detail page');
  $export['speaker_talk'] = $context;

  return $export;
}
