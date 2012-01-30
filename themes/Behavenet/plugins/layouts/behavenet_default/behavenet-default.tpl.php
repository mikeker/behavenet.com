<?php
/*
 * This pane is intented to be used as the main page content pane,
 * thus the overall #page wrapper and the page-x-y-z div IDs.
 */
?>
<div id="page">
  <div id="page-main-wrapper">
    <?php if (!empty($content['header'])): ?>
      <div class="panel-pane" id="page-header">
        <?php print $content['header']; ?>
      </div>
    <?php endif; ?>
    <?php if (!empty($content['main_callout'])): ?>
      <div class="panel-pane" id="page-main-callout">
        <?php print $content['main_callout']; ?>
      </div>
    <?php endif; ?>
    <?php if (!empty($content['main'])): ?>
      <div class="panel-pane" id="page-main">
        <?php print $content['main']; ?>
      </div>
    <?php endif; ?>
    <?php if (!empty($content['footer'])): ?>
      <div class="panel-pane" id="page-footer">
        <?php print $content['footer']; ?>
      </div>
    <?php endif; ?>
  </div>
  <div class="panel-pane" id="page-left-sidebar">
    <?php if (!empty($content['left_sidebar'])): ?>
      <?php print $content['left_sidebar']; ?>
    <?php endif; ?>
  </div>
</div>