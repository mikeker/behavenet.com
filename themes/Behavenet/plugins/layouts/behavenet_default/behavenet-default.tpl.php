  <?php
/*
 * This pane is intented to be used as the main page content pane,
 * thus the overall #page wrapper and the page-x-y-z div IDs.
 */
?>
<div id="page">
  <div class="panel-pane" id="page-header">
    <?php if (!empty($content['header'])) { print $content['header']; } ?>
  </div>
  
  <div id="content-wrapper">
    <div class="panel-pane" id="page-main">
      <?php if (!empty($content['main'])) { print $content['main']; } ?>
    </div>
    <div class="panel-pane" id="page-left-sidebar">
      <?php if (!empty($content['left_sidebar'])) { print $content['left_sidebar']; } ?>
    </div>
    <div class="panel-pane" id="page-main-callout"><div id="page-main-callout-inner">
      <?php if (!empty($content['main_callout'])) { print $content['main_callout']; } ?>
    </div></div>
  </div>
  
  <div class="panel-pane" id="page-footer">
    <?php if (!empty($content['footer'])) { print $content['footer']; } ?>
  </div>
  
</div>