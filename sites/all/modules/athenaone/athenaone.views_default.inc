<?php
/**
 * @file
 * athenaone.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function athenaone_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'business_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'business-list';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'AthenaOne Capital Family of Businesses';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'biz-item';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_bizlink']['id'] = 'field_bizlink';
  $handler->display->display_options['fields']['field_bizlink']['table'] = 'field_data_field_bizlink';
  $handler->display->display_options['fields']['field_bizlink']['field'] = 'field_bizlink';
  $handler->display->display_options['fields']['field_bizlink']['label'] = '';
  $handler->display->display_options['fields']['field_bizlink']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_bizlink']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_bizlink']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_bizlink']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_bizlink']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_bizlink']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_bizlink']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_bizlink']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_bizlink']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_bizlink']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_bizlink']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_bizlink']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_bizlink']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_bizlink']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bizlink']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_bizlink']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_bizlink']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_bizlink']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_bizlink']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_bizlink']['type'] = 'link_url';
  $handler->display->display_options['fields']['field_bizlink']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_bizlink']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_bizlink']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_bizlink']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'business' => 'business',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'businesses';
  $export['business_list'] = $view;

  return $export;
}
