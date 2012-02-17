if (Drupal.jsEnabled) {
  $(document).ready(function() {
    $('select.jump-menu').change(function() {
      window.location = $(this).val();
      return false;
    });
  });

  Drupal.behaviors.behavenet = function() {
    // options
    var o = {
      open_char : '&#9660;',
      close_char : '&#9658;',
      animation : 300
    };

    $('ul.bef-tree:not(.processed), .behavenet-collapsible-menu ul:not(processed)').each(function() {
      // Find any nested UL elements and hide them until exposed.
      $(this)
        .addClass('processed')
        .find('ul').each(function() {
          $(this)
            .hide()
            .parent().children('div.form-item')
              .prepend('<span class="jtree close" style="cursor:pointer;">' + o.close_char + '</span>')
          ;
        });
    });

    // Setup click events
    $('span.jtree').click(function() {
      if ($(this).hasClass('close')) {
        $(this)
          .html(o.open_char)
          .removeClass('close')
          .addClass('open')
          .parent().parent().children('ul').show(o.animation)
        ;
      }
      else if ($(this).hasClass('open')) {
        $(this)
          .html(o.close_char)
          .removeClass('open')
          .addClass('close')
          .parent().parent().children('ul').hide(o.animation)
        ;
      }
    });
  };
}
