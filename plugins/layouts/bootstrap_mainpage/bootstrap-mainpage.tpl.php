<div <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="row">
    <div class="col-sm-3 content_left">
      <?php print $content['left']; ?>
    </div>

    <div class="col-sm-9 content_middle_top">
      <?php print $content['middle_top']; ?>

      <div class="row">
        <div class="col-md-8 content_middle_left">
          <?php print $content['middle_left']; ?>
        </div>

        <div class="col-md-4 content_middle_right">
          <?php print $content['middle_right']; ?>
        </div>
      </div>

    </div>
  </div>
</div>