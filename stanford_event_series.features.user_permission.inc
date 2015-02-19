<?php
/**
 * @file
 * stanford_event_series.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function stanford_event_series_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create stanford_event_series content'.
  $permissions['create stanford_event_series content'] = array(
    'name' => 'create stanford_event_series content',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any stanford_event_series content'.
  $permissions['delete any stanford_event_series content'] = array(
    'name' => 'delete any stanford_event_series content',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own stanford_event_series content'.
  $permissions['delete own stanford_event_series content'] = array(
    'name' => 'delete own stanford_event_series content',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any stanford_event_series content'.
  $permissions['edit any stanford_event_series content'] = array(
    'name' => 'edit any stanford_event_series content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own stanford_event_series content'.
  $permissions['edit own stanford_event_series content'] = array(
    'name' => 'edit own stanford_event_series content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  return $permissions;
}
