<?php
/**
 * @file
 * aegirproject_com.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function aegirproject_com_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
