<?php
/**
* @file Contains the code to generate the custom drush commands.
*/

/**
* Implements hook_drush_command().
*/
function ww_migrate_wordpress_drush_command() {
  $items = array();
  $items['import-wordpress'] = [
    'description' => 'Launch the Wordpress import data.',
    'drupal dependencies' => ['ww_migrate_wordpress'],
    'aliases' => ['import:wordpress'],
  ];
  return $items;
}
