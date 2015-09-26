<?php
/**
 * @file
 * text_format_shortcodes.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function text_format_shortcodes_filter_default_formats() {
  $formats = array();

  // Exported format: shortcodes.
  $formats['shortcodes'] = array(
    'format' => 'shortcodes',
    'name' => 'shortcodes',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'shortcode' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(
          'alert' => 1,
          'badge' => 1,
          'breadcrumb' => 1,
          'breadcrumb-item' => 1,
          'button' => 1,
          'button-group' => 1,
          'button-toolbar' => 1,
          'caret' => 1,
          'carousel' => 1,
          'carousel-item' => 1,
          'code' => 1,
          'collapse' => 1,
          'collapsibles' => 1,
          'column' => 1,
          'container' => 1,
          'divider' => 1,
          'dropdown' => 1,
          'dropdown-header' => 1,
          'dropdown-item' => 1,
          'emphasis' => 1,
          'icon' => 1,
          'img' => 1,
          'jumbotron' => 1,
          'label' => 1,
          'lead' => 1,
          'list-group' => 1,
          'list-group-item' => 1,
          'list-group-item-heading' => 1,
          'list-group-item-text' => 1,
          'media' => 1,
          'media-body' => 1,
          'media-object' => 1,
          'modal' => 1,
          'modal-footer' => 1,
          'nav' => 1,
          'nav-item' => 1,
          'page-header' => 1,
          'panel' => 1,
          'popover' => 1,
          'progress' => 1,
          'progress-bar' => 1,
          'responsive' => 1,
          'row' => 1,
          'span' => 1,
          'tab' => 1,
          'table' => 1,
          'table-wrap' => 1,
          'tabs' => 1,
          'thumbnail' => 1,
          'tooltip' => 1,
          'well' => 1,
          'shortcode-help' => 1,
        ),
      ),
      'shortcode_text_corrector' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
