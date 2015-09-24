<?php
/**
 * @file
 * service_plan_premium.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function service_plan_premium_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
