<?php
/**
 * @file
 * tedxlausanne_event.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tedxlausanne_event_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'clone_of_event_sponsors';
  $view->description = 'Display sponsors related to the event';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Platinium event sponsors';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Gold sponsors';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['class_prefix'] = 'col-md';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Contextual filter: Content: Event (field_sponsor_event) */
  $handler->display->display_options['arguments']['field_sponsor_event_target_id']['id'] = 'field_sponsor_event_target_id';
  $handler->display->display_options['arguments']['field_sponsor_event_target_id']['table'] = 'field_data_field_sponsor_event';
  $handler->display->display_options['arguments']['field_sponsor_event_target_id']['field'] = 'field_sponsor_event_target_id';
  $handler->display->display_options['arguments']['field_sponsor_event_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_sponsor_event_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_sponsor_event_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_sponsor_event_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_sponsor_event_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sponsor' => 'sponsor',
  );
  /* Filter criterion: Content: Sponsor level (field_sponsor_level) */
  $handler->display->display_options['filters']['field_sponsor_level_tid']['id'] = 'field_sponsor_level_tid';
  $handler->display->display_options['filters']['field_sponsor_level_tid']['table'] = 'field_data_field_sponsor_level';
  $handler->display->display_options['filters']['field_sponsor_level_tid']['field'] = 'field_sponsor_level_tid';
  $handler->display->display_options['filters']['field_sponsor_level_tid']['value'] = array(
    12 => '12',
  );
  $handler->display->display_options['filters']['field_sponsor_level_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sponsor_level_tid']['vocabulary'] = 'sponsor_level';

  /* Display: Platinium Block */
  $handler = $view->new_display('block', 'Platinium Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Platinium sponsors';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sponsor' => 'sponsor',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Sponsor level (field_sponsor_level) */
  $handler->display->display_options['filters']['field_sponsor_level_tid']['id'] = 'field_sponsor_level_tid';
  $handler->display->display_options['filters']['field_sponsor_level_tid']['table'] = 'field_data_field_sponsor_level';
  $handler->display->display_options['filters']['field_sponsor_level_tid']['field'] = 'field_sponsor_level_tid';
  $handler->display->display_options['filters']['field_sponsor_level_tid']['value'] = array(
    11 => '11',
  );
  $handler->display->display_options['filters']['field_sponsor_level_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sponsor_level_tid']['vocabulary'] = 'sponsor_level';
  $export['clone_of_event_sponsors'] = $view;

  $view = new view();
  $view->name = 'event_featured_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Event Featured page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['list']['class'] = 'list-group';
  $handler->display->display_options['style_options']['row']['element_type'] = '';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Contextual filter: Content: Event (field_page_event) */
  $handler->display->display_options['arguments']['field_page_event_target_id']['id'] = 'field_page_event_target_id';
  $handler->display->display_options['arguments']['field_page_event_target_id']['table'] = 'field_data_field_page_event';
  $handler->display->display_options['arguments']['field_page_event_target_id']['field'] = 'field_page_event_target_id';
  $handler->display->display_options['arguments']['field_page_event_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_page_event_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_page_event_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_page_event_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_page_event_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['event_featured_page'] = $view;

  $view = new view();
  $view->name = 'event_sponsors';
  $view->description = 'Display sponsors related to the event';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gold event sponsors';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Gold sponsors';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '4';
  $handler->display->display_options['style_options']['class_prefix'] = 'col-md';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Contextual filter: Content: Event (field_sponsor_event) */
  $handler->display->display_options['arguments']['field_sponsor_event_target_id']['id'] = 'field_sponsor_event_target_id';
  $handler->display->display_options['arguments']['field_sponsor_event_target_id']['table'] = 'field_data_field_sponsor_event';
  $handler->display->display_options['arguments']['field_sponsor_event_target_id']['field'] = 'field_sponsor_event_target_id';
  $handler->display->display_options['arguments']['field_sponsor_event_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_sponsor_event_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_sponsor_event_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_sponsor_event_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_sponsor_event_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sponsor' => 'sponsor',
  );
  /* Filter criterion: Content: Sponsor level (field_sponsor_level) */
  $handler->display->display_options['filters']['field_sponsor_level_tid']['id'] = 'field_sponsor_level_tid';
  $handler->display->display_options['filters']['field_sponsor_level_tid']['table'] = 'field_data_field_sponsor_level';
  $handler->display->display_options['filters']['field_sponsor_level_tid']['field'] = 'field_sponsor_level_tid';
  $handler->display->display_options['filters']['field_sponsor_level_tid']['value'] = array(
    12 => '12',
  );
  $handler->display->display_options['filters']['field_sponsor_level_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sponsor_level_tid']['vocabulary'] = 'sponsor_level';

  /* Display: Gold Block */
  $handler = $view->new_display('block', 'Gold Block', 'block_1');
  $export['event_sponsors'] = $view;

  $view = new view();
  $view->name = 'event_talks';
  $view->description = 'Display talks from the given event';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Event Talks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Event Talks';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '24';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '4';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Contextual filter: Content: Featured at (field_talk_event) */
  $handler->display->display_options['arguments']['field_talk_event_target_id']['id'] = 'field_talk_event_target_id';
  $handler->display->display_options['arguments']['field_talk_event_target_id']['table'] = 'field_data_field_talk_event';
  $handler->display->display_options['arguments']['field_talk_event_target_id']['field'] = 'field_talk_event_target_id';
  $handler->display->display_options['arguments']['field_talk_event_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_talk_event_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_talk_event_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_talk_event_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_talk_event_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'talk' => 'talk',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['event_talks'] = $view;

  $view = new view();
  $view->name = 'events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Previous events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Event date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Highlight (field_event_highlight) */
  $handler->display->display_options['filters']['field_event_highlight_value']['id'] = 'field_event_highlight_value';
  $handler->display->display_options['filters']['field_event_highlight_value']['table'] = 'field_data_field_event_highlight';
  $handler->display->display_options['filters']['field_event_highlight_value']['field'] = 'field_event_highlight_value';
  $handler->display->display_options['filters']['field_event_highlight_value']['value'] = array(
    0 => '0',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'events';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Events';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['events'] = $view;

  $view = new view();
  $view->name = 'homepage_speaker';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Homepage Speaker';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Featured talks';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['list']['class'] = 'row';
  $handler->display->display_options['style_options']['row']['first_class'] = 'col-sm-3';
  $handler->display->display_options['style_options']['row']['last_class'] = 'col-sm-3';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '1';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['label'] = 'Watch more talk';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<div class="row">
    <div class="col-xs-12 text-center">
        <a href="/watch" class="btn btn-default isolated btn-lg">Watch more talks</a>
    </div>
</div>';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'talk' => 'talk',
  );
  /* Filter criterion: Content: Featured on homepage (field_talk_highlight) */
  $handler->display->display_options['filters']['field_talk_highlight_value']['id'] = 'field_talk_highlight_value';
  $handler->display->display_options['filters']['field_talk_highlight_value']['table'] = 'field_data_field_talk_highlight';
  $handler->display->display_options['filters']['field_talk_highlight_value']['field'] = 'field_talk_highlight_value';
  $handler->display->display_options['filters']['field_talk_highlight_value']['value'] = array(
    1 => '1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['homepage_speaker'] = $view;

  $view = new view();
  $view->name = 'last_event';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Last event';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Promoted to front page */
  $handler->display->display_options['sorts']['promote']['id'] = 'promote';
  $handler->display->display_options['sorts']['promote']['table'] = 'node';
  $handler->display->display_options['sorts']['promote']['field'] = 'promote';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Highlight (field_event_highlight) */
  $handler->display->display_options['filters']['field_event_highlight_value']['id'] = 'field_event_highlight_value';
  $handler->display->display_options['filters']['field_event_highlight_value']['table'] = 'field_data_field_event_highlight';
  $handler->display->display_options['filters']['field_event_highlight_value']['field'] = 'field_event_highlight_value';
  $handler->display->display_options['filters']['field_event_highlight_value']['value'] = array(
    1 => '1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Coming soon';

  /* Display: Full block */
  $handler = $view->new_display('block', 'Full block', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full_teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['last_event'] = $view;

  $view = new view();
  $view->name = 'silver_event_sponsors';
  $view->description = 'Display sponsors related to the event';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Silver event sponsors';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Silver sponsors';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '6';
  $handler->display->display_options['style_options']['class_prefix'] = 'col-md';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Contextual filter: Content: Event (field_sponsor_event) */
  $handler->display->display_options['arguments']['field_sponsor_event_target_id']['id'] = 'field_sponsor_event_target_id';
  $handler->display->display_options['arguments']['field_sponsor_event_target_id']['table'] = 'field_data_field_sponsor_event';
  $handler->display->display_options['arguments']['field_sponsor_event_target_id']['field'] = 'field_sponsor_event_target_id';
  $handler->display->display_options['arguments']['field_sponsor_event_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_sponsor_event_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_sponsor_event_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_sponsor_event_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_sponsor_event_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sponsor' => 'sponsor',
  );
  /* Filter criterion: Content: Sponsor level (field_sponsor_level) */
  $handler->display->display_options['filters']['field_sponsor_level_tid']['id'] = 'field_sponsor_level_tid';
  $handler->display->display_options['filters']['field_sponsor_level_tid']['table'] = 'field_data_field_sponsor_level';
  $handler->display->display_options['filters']['field_sponsor_level_tid']['field'] = 'field_sponsor_level_tid';
  $handler->display->display_options['filters']['field_sponsor_level_tid']['value'] = array(
    13 => '13',
  );
  $handler->display->display_options['filters']['field_sponsor_level_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sponsor_level_tid']['vocabulary'] = 'sponsor_level';

  /* Display: Silver Block */
  $handler = $view->new_display('block', 'Silver Block', 'block_1');
  $export['silver_event_sponsors'] = $view;

  $view = new view();
  $view->name = 'startup_event_sponsors';
  $view->description = 'Display sponsors related to the event';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Startup event sponsors';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Startup sponsors';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '6';
  $handler->display->display_options['style_options']['class_prefix'] = 'col-md';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Contextual filter: Content: Event (field_sponsor_event) */
  $handler->display->display_options['arguments']['field_sponsor_event_target_id']['id'] = 'field_sponsor_event_target_id';
  $handler->display->display_options['arguments']['field_sponsor_event_target_id']['table'] = 'field_data_field_sponsor_event';
  $handler->display->display_options['arguments']['field_sponsor_event_target_id']['field'] = 'field_sponsor_event_target_id';
  $handler->display->display_options['arguments']['field_sponsor_event_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_sponsor_event_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_sponsor_event_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_sponsor_event_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_sponsor_event_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sponsor' => 'sponsor',
  );
  /* Filter criterion: Content: Sponsor level (field_sponsor_level) */
  $handler->display->display_options['filters']['field_sponsor_level_tid']['id'] = 'field_sponsor_level_tid';
  $handler->display->display_options['filters']['field_sponsor_level_tid']['table'] = 'field_data_field_sponsor_level';
  $handler->display->display_options['filters']['field_sponsor_level_tid']['field'] = 'field_sponsor_level_tid';
  $handler->display->display_options['filters']['field_sponsor_level_tid']['value'] = array(
    14 => '14',
  );
  $handler->display->display_options['filters']['field_sponsor_level_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sponsor_level_tid']['vocabulary'] = 'sponsor_level';

  /* Display: Startup Block */
  $handler = $view->new_display('block', 'Startup Block', 'block_1');
  $export['startup_event_sponsors'] = $view;

  $view = new view();
  $view->name = 'talk_speaker';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'talk_speaker';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Featuring talk';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '4';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Talk speaker (field_talk_speaker) */
  $handler->display->display_options['arguments']['field_talk_speaker_target_id']['id'] = 'field_talk_speaker_target_id';
  $handler->display->display_options['arguments']['field_talk_speaker_target_id']['table'] = 'field_data_field_talk_speaker';
  $handler->display->display_options['arguments']['field_talk_speaker_target_id']['field'] = 'field_talk_speaker_target_id';
  $handler->display->display_options['arguments']['field_talk_speaker_target_id']['relationship'] = 'field_talk_speaker_target_id';
  $handler->display->display_options['arguments']['field_talk_speaker_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_talk_speaker_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_talk_speaker_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_talk_speaker_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_talk_speaker_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'talk' => 'talk',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['talk_speaker'] = $view;

  $view = new view();
  $view->name = 'watch';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Watch';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Watch the TEDxLausanne talks';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '48';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '4';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_talk_event_target_id']['id'] = 'field_talk_event_target_id';
  $handler->display->display_options['relationships']['field_talk_event_target_id']['table'] = 'field_data_field_talk_event';
  $handler->display->display_options['relationships']['field_talk_event_target_id']['field'] = 'field_talk_event_target_id';
  $handler->display->display_options['relationships']['field_talk_event_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'talk' => 'talk',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_talk_event_target_id';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Event';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['title']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['title']['group_info']['label'] = 'Event';
  $handler->display->display_options['filters']['title']['group_info']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'TEDxLausanne 2015',
      'operator' => '=',
      'value' => 'TEDxLausanne 2015',
    ),
    2 => array(
      'title' => 'TEDxLausanne 2014',
      'operator' => '=',
      'value' => 'TEDxLausanne 2014',
    ),
    3 => array(
      'title' => 'TEDxLausanneChange 2013',
      'operator' => '=',
      'value' => 'TEDxLausanneChange 2013',
    ),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'watch';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Watch';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['watch'] = $view;

  return $export;
}
