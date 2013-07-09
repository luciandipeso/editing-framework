/*
Copyright (c) 2003-2013, CKSource - Frederico Knabben. All rights reserved.
For licensing, see LICENSE.html or http://ckeditor.com/license
*/

/*
 * This file is used/requested by the 'Styles' button.
 * The 'Styles' button is not enabled by default in DrupalFull and DrupalFiltered toolbars.
 */
if(typeof(CKEDITOR) !== 'undefined') {
  CKEDITOR.addStylesSet( 'drupal',
  [
    /* Block Styles */

    // These styles are already available in the "Format" drop-down list, so they are
    // not needed here by default. You may enable them to avoid placing the
    // "Format" drop-down list in the toolbar, maintaining the same features.
    /*
    { name : 'Paragraph'    , element : 'p' },
    { name : 'Heading 1'    , element : 'h1' },
    { name : 'Heading 2'    , element : 'h2' },
    { name : 'Heading 3'    , element : 'h3' },
    { name : 'Heading 4'    , element : 'h4' },
    { name : 'Heading 5'    , element : 'h5' },
    { name : 'Heading 6'    , element : 'h6' },
    { name : 'Preformatted Text', element : 'pre' },
    { name : 'Address'      , element : 'address' },
    */

    { 
      name: 'Lead paragraph',  
      element: 'p',  
      attributes: { 'class': 'lead' } 
    },
    { 
      name: 'Muted paragraph', 
      element: 'p',  
      attributes: { 'class': 'muted' } 
    },
    { 
      name: 'Alert',
      element: 'p',  
      attributes: { 'class' : 'alert' } 
    },

    { 
      name: 'Success alert',
      element: 'p',  
      attributes: { 'class' : 'alert alert-success' } 
    },

    { 
      name: 'Info alert',
      element: 'p',  
      attributes: { 'class' : 'alert alert-info' } 
    },

    /* Inline Styles */

    // These are core styles available as toolbar buttons. You may opt enabling
    // some of them in the "Styles" drop-down list, removing them from the toolbar.
    /*
    { name : 'Strong'     , element : 'strong', overrides : 'b' },
    { name : 'Emphasis'     , element : 'em'  , overrides : 'i' },
    { name : 'Underline'    , element : 'u' },
    { name : 'Strikethrough'  , element : 'strike' },
    { name : 'Subscript'    , element : 'sub' },
    { name : 'Superscript'    , element : 'sup' },
    */

    {
      name: "Badge",
      element: 'span',
      attributes: { 'class': 'badge' }
    },

    {
      name: "Success badge",
      element: 'span',
      attributes: { 'class': 'badge badge-success' }
    },

    {
      name: "Warning badge",
      element: 'span',
      attributes: { 'class': 'badge badge-warning' }
    },

    {
      name: "Important badge",
      element: 'span',
      attributes: { 'class': 'badge badge-important' }
    },

    {
      name: "Info badge",
      element: 'span',
      attributes: { 'class': 'badge badge-info' }
    },

    {
      name: "Inverse badge",
      element: 'span',
      attributes: { 'class': 'badge badge-inverse' }
    },

    {
      name: "Label",
      element: 'span',
      attributes: { 'class': 'label' }
    },

    {
      name: "Success label",
      element: 'span',
      attributes: { 'class': 'label label-success' }
    },

    {
      name: "Warning label",
      element: 'span',
      attributes: { 'class': 'label label-warning' }
    },

    {
      name: "Important label",
      element: 'span',
      attributes: { 'class': 'label label-important' }
    },

    {
      name: "Info label",
      element: 'span',
      attributes: { 'class': 'label label-info' }
    },

    {
      name: "Inverse label",
      element: 'span',
      attributes: { 'class': 'label label-inverse' }
    },

    { 
      name: 'Computer Code', 
      element: 'code' 
    },

    { 
      name: 'Cited Work',        
      element: 'cite' 
    },
    { 
      name: 'Inline Quotation', 
      element: 'q' 
    },

    { 
      name: 'Muted text', 
      element: 'span', 
      attributes: { 'class': 'muted' } 
    },

    /* Object Styles */
    {
      name: 'Pull right',
      element: 'img',
      attributes: { 'class': 'pull-right' }
    },

    {
      name: 'Pull left',
      element: 'img',
      attributes: { 'class': 'pull-left' }
    }
  ]);
}