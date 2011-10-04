if (Drupal.jsEnabled) {
  $(document).ready(function() {
    $('select.jump-menu').change(function() {
      window.location = $(this).val();
      return false;
    });
  });
}
