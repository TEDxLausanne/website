<?php
/**
 * @file
 * tedxlausanne_site.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function tedxlausanne_site_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: contributor.
  $roles['contributor'] = array(
    'name' => 'contributor',
    'weight' => 3,
  );

  // Exported role: super user.
  $roles['super user'] = array(
    'name' => 'super user',
    'weight' => 4,
  );

  return $roles;
}
