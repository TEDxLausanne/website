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
  $context->name = 'all_sponsors';
  $context->description = '';
  $context->tag = 'pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'our-sponsors' => 'our-sponsors',
        'nos-sponsors' => 'nos-sponsors',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-clone_of_event_sponsors-block_1' => array(
          'module' => 'views',
          'delta' => 'clone_of_event_sponsors-block_1',
          'region' => 'content',
          'weight' => '0',
        ),
        'views-event_sponsors-block_2' => array(
          'module' => 'views',
          'delta' => 'event_sponsors-block_2',
          'region' => 'content',
          'weight' => '2',
        ),
        'views-silver_event_sponsors-block_2' => array(
          'module' => 'views',
          'delta' => 'silver_event_sponsors-block_2',
          'region' => 'content',
          'weight' => '3',
        ),
        'views-startup_event_sponsors-block_2' => array(
          'module' => 'views',
          'delta' => 'startup_event_sponsors-block_2',
          'region' => 'content',
          'weight' => '5',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('pages');
  $export['all_sponsors'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'event_detail';
  $context->description = 'Event detail page';
  $context->tag = 'event';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'event' => 'event',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-event_featured_page-block' => array(
          'module' => 'views',
          'delta' => 'event_featured_page-block',
          'region' => 'event_sidebar',
          'weight' => '-10',
        ),
        'views-clone_of_event_sponsors-block' => array(
          'module' => 'views',
          'delta' => 'clone_of_event_sponsors-block',
          'region' => 'full_footer',
          'weight' => '-9',
        ),
        'views-event_sponsors-block_1' => array(
          'module' => 'views',
          'delta' => 'event_sponsors-block_1',
          'region' => 'full_footer',
          'weight' => '-8',
        ),
        'views-silver_event_sponsors-block_1' => array(
          'module' => 'views',
          'delta' => 'silver_event_sponsors-block_1',
          'region' => 'full_footer',
          'weight' => '-7',
        ),
        'views-startup_event_sponsors-block_1' => array(
          'module' => 'views',
          'delta' => 'startup_event_sponsors-block_1',
          'region' => 'full_footer',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Event detail page');
  t('event');
  $export['event_detail'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'event_page';
  $context->description = '';
  $context->tag = 'event';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'events' => 'events',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-last_event-block_2' => array(
          'module' => 'views',
          'delta' => 'last_event-block_2',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('event');
  $export['event_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'event_talks';
  $context->description = '';
  $context->tag = 'event';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'event' => 'event',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-event_talks-block' => array(
          'module' => 'views',
          'delta' => 'event_talks-block',
          'region' => 'full_footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('event');
  $export['event_talks'] = $context;

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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'webform';
  $context->description = '';
  $context->tag = 'event';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'webform' => 'webform',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'event*' => 'event*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-last_event-block' => array(
          'module' => 'views',
          'delta' => 'last_event-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('event');
  $export['webform'] = $context;

  return $export;
}
