<?php
/**
 * @file
 * service_plan_premium.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function service_plan_premium_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Premium',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'service_plan',
  'language' => 'und',
  'created' => 1443061409,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '7f4349f3-8db5-4577-9f5d-1d8fe8f08952',
  'field_price' => array(
    'und' => array(
      0 => array(
        'value' => '80.00',
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
        'value' => 1,
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
        'value' => 1,
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
        'value' => 1,
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
        'value' => '∞',
        'format' => NULL,
      ),
    ),
  ),
  'field_designated_contacts' => array(
    'und' => array(
      0 => array(
        'value' => '1 (+1 backup)',
        'format' => NULL,
      ),
    ),
  ),
  'field_get_additional_tickets' => array(),
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
  'date' => '2015-09-23 19:23:29 -0700',
  'user_uuid' => 'd6425edb-0311-4e76-a122-516dde7d8fe2',
);
  return $nodes;
}
