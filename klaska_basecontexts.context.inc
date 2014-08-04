<?php
/**
 * @file
 * klaska_basecontexts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function klaska_basecontexts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'admin_page';
  $context->description = '';
  $context->tag = 'Base Contexts';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'admin' => 'admin',
        'admin/*' => 'admin/*',
        'node/add' => 'node/add',
        'node/add/*' => 'node/add/*',
        'node/*/edit' => 'node/*/edit',
        'node/*/edit/*' => 'node/*/edit/*',
        'node/*/delete' => 'node/*/delete',
        'node/*/delete/*' => 'node/*/delete/*',
        'node/*/revisions' => 'node/*/revisions',
        'node/*/panelizer' => 'node/*/panelizer',
        'node/*/panelizer/*' => 'node/*/panelizer/*',
        'node/*/devel' => 'node/*/devel',
        'batch' => 'batch',
        'batch/*' => 'batch/*',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Base Contexts');
  $export['admin_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'frontpage';
  $context->description = '';
  $context->tag = 'Base Contexts';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~admin_page' => '~admin_page',
      ),
    ),
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Base Contexts');
  $export['frontpage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'notfontpage';
  $context->description = '';
  $context->tag = 'Base Contexts';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~admin_page' => '~admin_page',
      ),
    ),
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Base Contexts');
  $export['notfontpage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = '';
  $context->tag = 'Base Contexts';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~admin_page' => '~admin_page',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Base Contexts');
  $export['sitewide'] = $context;

  return $export;
}
