<?php
/**
 * @file
 * pro_101_media_infrastructure.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pro_101_media_infrastructure_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer files.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: administer image styles.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'image',
  );

  // Exported permission: edit file.
  $permissions['edit file'] = array(
    'name' => 'edit file',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: view file.
  $permissions['view file'] = array(
    'name' => 'view file',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'assistant',
      2 => 'developer',
      3 => 'professional',
      4 => 'support',
    ),
    'module' => 'file_entity',
  );

  return $permissions;
}
