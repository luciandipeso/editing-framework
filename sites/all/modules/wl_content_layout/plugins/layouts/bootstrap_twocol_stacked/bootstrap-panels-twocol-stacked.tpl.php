<?php
/**
 * @file
 * Template for a 2 column panel layout.
 *
 * This template provides a two column panel display layout, with
 * additional areas for the top and the bottom.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['top']: Content in the top row.
 *   - $content['left']: Content in the left column.
 *   - $content['right']: Content in the right column.
 *   - $content['bottom']: Content in the bottom row.
 */
?>
<div class="panel-bootstrap-2col-stacked panel-display" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if ($content['top']): ?>
    <div class="row-fluid panel-col-top panel-panel">
      <div class="span12"><?php print $content['top']; ?></div>
    </div>
  <?php endif; ?>

  <div class="row-fluid center-wrapper">
    <div class="panel-col-first span6 panel-panel">
      <?php print $content['left']; ?>
    </div>
    <div class="panel-col-last span6 panel-panel">
      <?php print $content['right']; ?>
    </div>
  </div>

  <?php if ($content['bottom']): ?>
    <div class="row-fluid panel-col-bottom panel-panel">
      <div class="span12"><?php print $content['bottom']; ?></div>
    </div>
  <?php endif; ?>
</div>
