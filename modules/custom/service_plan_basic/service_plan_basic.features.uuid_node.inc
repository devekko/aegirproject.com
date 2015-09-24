<?php
/**
 * @file
 * service_plan_basic.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function service_plan_basic_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Basic',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'service_plan',
  'language' => 'und',
  'created' => 1443046119,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '80af0e3f-b8c1-43f8-9214-b1b9eda0ba4d',
  'field_price' => array(
    'und' => array(
      0 => array(
        'value' => '20.00',
      ),
    ),
  ),
  'field_access_to_pre_built_images' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'field_advance_security_notificat' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'field_stable_software_updates' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'field_required_and_optional_feat' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'field_advanced_features' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'field_experimental_features' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'field_support_via_community_foru' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'field_support_via_email_portal' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'field_support_via_remote_ssh' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'field_support_via_phone_hangout' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'field_tickets_per_year' => array(
    'und' => array(
      0 => array(
        'value' => 3,
        'format' => NULL,
      ),
    ),
  ),
  'field_designated_contacts' => array(
    'und' => array(
      0 => array(
        'value' => 1,
        'format' => NULL,
      ),
    ),
  ),
  'field_get_additional_tickets' => array(
    'und' => array(
      0 => array(
        'value' => '$60/each',
        'format' => NULL,
      ),
    ),
  ),
  'field_response_time' => array(
    'und' => array(
      0 => array(
        'value' => '1 business day',
        'format' => NULL,
      ),
    ),
  ),
  'field_support_schedule' => array(
    'und' => array(
      0 => array(
        'value' => '8x5',
        'format' => NULL,
      ),
    ),
  ),
  'date' => '2015-09-23 15:08:39 -0700',
  'user_uuid' => 'd6425edb-0311-4e76-a122-516dde7d8fe2',
);
  return $nodes;
}
