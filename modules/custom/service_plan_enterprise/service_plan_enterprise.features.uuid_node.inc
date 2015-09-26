<?php
/**
 * @file
 * service_plan_enterprise.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function service_plan_enterprise_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Enterprise',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'service_plan',
  'language' => 'und',
  'created' => 1443061506,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '8be855cf-5aa7-46a6-858e-cf83fb163fb1',
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
  'field_advanced_features' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'field_designated_contacts' => array(
    'und' => array(
      0 => array(
        'value' => '2+',
        'format' => NULL,
      ),
    ),
  ),
  'field_experimental_features' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'field_get_additional_tickets' => array(),
  'field_required_and_optional_feat' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'field_response_time' => array(
    'und' => array(
      0 => array(
        'value' => 'up to 2 hrs.',
        'format' => NULL,
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
  'field_support_schedule' => array(
    'und' => array(
      0 => array(
        'value' => 'up to 24x7',
        'format' => NULL,
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
  'field_support_via_phone_hangout' => array(
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
  'field_monthly_price' => array(
    'und' => array(
      0 => array(
        'value' => 'Contact us',
        'format' => NULL,
      ),
    ),
  ),
  'field_weight' => array(
    'und' => array(
      0 => array(
        'value' => 50,
      ),
    ),
  ),
  'field_tickets_per_year_per_cpu' => array(
    'und' => array(
      0 => array(
        'value' => 'Unlimited',
        'format' => NULL,
      ),
    ),
  ),
  'date' => '2015-09-23 19:25:06 -0700',
  'user_uuid' => '1be415d7-9597-491f-b32f-8ee529f33783',
);
  return $nodes;
}
