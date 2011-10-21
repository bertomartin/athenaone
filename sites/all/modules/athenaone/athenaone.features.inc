<?php
/**
 * @file
 * athenaone.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function athenaone_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function athenaone_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function athenaone_node_info() {
  $items = array(
    'business' => array(
      'name' => t('Business'),
      'base' => 'node_content',
      'description' => t('A brief description of the business, its function and its website'),
      'has_title' => '1',
      'title_label' => t('Business Name'),
      'help' => '',
    ),
  );
  return $items;
}
