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

  // Exported permission: add media from remote sources.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: add media from remote urls.
  $permissions['add media from remote urls'] = array(
    'name' => 'add media from remote urls',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'remote_stream_wrapper',
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

  // Exported permission: import media.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'media',
  );

  return $permissions;
}
