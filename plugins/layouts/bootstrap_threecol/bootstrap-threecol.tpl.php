<div <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="row">
    <div class="col-md-3">
      <?php print $content['left']; ?>
    </div>

    <div class="col-md-6">
      <?php print $content['middle']; ?>
    </div>

    <div class="col-md-3">
      <?php print $content['right']; ?>
    </div>
  </div>
</div>