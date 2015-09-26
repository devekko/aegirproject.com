<?php
/**
 * @file
 * service_plan.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function service_plan_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function service_plan_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function service_plan_node_info() {
  $items = array(
    'service_plan' => array(
      'name' => t('Service Plan'),
      'base' => 'node_content',
      'description' => t('These are the service plans offered by the coop.'),
      'has_title' => '1',
      'title_label' => t('Subscription Level'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
