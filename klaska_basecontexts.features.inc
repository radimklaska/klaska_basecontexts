<?php
/**
 * @file
 * klaska_basecontexts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function klaska_basecontexts_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
