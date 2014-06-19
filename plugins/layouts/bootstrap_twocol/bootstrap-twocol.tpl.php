<div <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="row">
    <div class="col-sm-3">
      <?php print $content['left']; ?>
    </div>

    <div class="col-sm-9">
      <?php print $content['middle']; ?>
    </div>
  </div>
</div>