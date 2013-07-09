<?php
/**
 * @file
 * wl_editing_framework.features.ckeditor_profile.inc
 */

/**
 * Implements hook_ckeditor_profile_defaults().
 */
function wl_editing_framework_ckeditor_profile_defaults() {
  $data = array(
    'CKEditor Global Profile' => array(
      'name' => 'CKEditor Global Profile',
      'settings' => array(
        'ckeditor_path' => '%l/ckeditor',
      ),
      'input_formats' => array(),
    ),
    'Trusted' => array(
      'name' => 'Trusted',
      'settings' => array(
        'ss' => 2,
        'default' => 't',
        'show_toggle' => 't',
        'uicolor' => 'default',
        'uicolor_user' => 'default',
        'toolbar' => '[
    [\'Format\',\'Styles\'],
    [\'Bold\',\'Italic\'],
    [\'NumberedList\',\'BulletedList\'],
    [\'Outdent\',\'Indent\'],
    [\'-\'],
    [\'Subscript\',\'Superscript\'],
    [\'linkit\',\'Unlink\'],
    [\'-\'],
    [\'Blockquote\',\'-\',\'Table\',\'-\',\'Media\'],
    [\'-\'],
    [\'RemoveFormat\',\'PasteFromWord\',\'Scayt\'],
    [\'Templates\'],
    [\'-\',\'Source\']
]',
        'expand' => 't',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'h2;h3;h4;h5;h6;address;pre;p;div',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'self',
        'css_path' => '//netdna.bootstrapcdn.com/twitter-bootstrap/2.3.2/js/bootstrap.min.js,%hsites/all/themes/bootstrap/css/overrides.css,%hsites/all/themes/wl/css/wl-overrides.css,%h%t/css/style.css',
        'css_style' => 'self',
        'styles_path' => '%hsites/all/themes/wl/ckeditor.styles.js',
        'filebrowser' => 'none',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'forcePasteAsPlainText' => 'f',
        'html_entities' => 'f',
        'scayt_autoStartup' => 't',
        'theme_config_js' => 'f',
        'js_conf' => 'config.allowedContent = true;',
        'loadPlugins' => array(
          'linkit' => array(
            'name' => 'linkit',
            'desc' => 'Support for Linkit module',
            'path' => '%base_path%sites/all/modules/linkit/editors/ckeditor/',
            'buttons' => array(
              'linkit' => array(
                'label' => 'Linkit',
                'icon' => 'linkit.png',
              ),
            ),
          ),
          'media' => array(
            'name' => 'media',
            'desc' => 'Plugin for inserting images from Drupal media module',
            'path' => '%plugin_dir%media/',
            'buttons' => array(
              'Media' => array(
                'label' => 'Media',
                'icon' => 'images/icon.gif',
              ),
            ),
            'default' => 'f',
          ),
        ),
      ),
      'input_formats' => array(
        'full_html' => 'Full HTML',
      ),
    ),
    'Untrusted' => array(
      'name' => 'Untrusted',
      'settings' => array(
        'ss' => 2,
        'default' => 't',
        'show_toggle' => 't',
        'uicolor' => 'default',
        'uicolor_user' => 'default',
        'toolbar' => '[
    [\'Format\',\'Styles\'],
    [\'Bold\',\'Italic\'],
    [\'NumberedList\',\'BulletedList\'],
    [\'Outdent\',\'Indent\'],
    [\'-\'],
    [\'Subscript\',\'Superscript\'],
    [\'Link\',\'Unlink\'],
    [\'-\'],
    [\'Blockquote\',\'-\',\'Table\',\'-\',\'Media\'],
    [\'-\'],
    [\'RemoveFormat\',\'PasteFromWord\',\'Scayt\'],
    [\'-\',\'Source\']
]',
        'expand' => 't',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'h2;h3;h4;h5;h6;address;pre;p;div',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'self',
        'css_path' => '//netdna.bootstrapcdn.com/twitter-bootstrap/2.3.2/js/bootstrap.min.js,%hsites/all/themes/bootstrap/css/overrides.css,%hsites/all/themes/wl/css/wl-overrides.css,%h%t/css/style.css',
        'css_style' => 'self',
        'styles_path' => '%hsites/all/themes/wl/ckeditor.styles.js',
        'filebrowser' => 'none',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'forcePasteAsPlainText' => 'f',
        'html_entities' => 'f',
        'scayt_autoStartup' => 't',
        'theme_config_js' => 'f',
        'js_conf' => 'config.allowedContent = true;',
        'loadPlugins' => array(
          'media' => array(
            'name' => 'media',
            'desc' => 'Plugin for inserting images from Drupal media module',
            'path' => '%plugin_dir%media/',
            'buttons' => array(
              'Media' => array(
                'label' => 'Media',
                'icon' => 'images/icon.gif',
              ),
            ),
            'default' => 'f',
          ),
        ),
      ),
      'input_formats' => array(
        'filtered_html' => 'Filtered HTML',
      ),
    ),
  );
  return $data;
}
