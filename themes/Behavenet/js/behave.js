if (Drupal.jsEnabled) {

  Drupal.behaviors.behavenet = function() {
    behave_jump_menu_init($('select.jump-menu:not(processed)'));
    behave_collasible_menu_init($('ul.bef-tree:not(.processed)'), true);
    behave_collasible_menu_init($('.behavenet-collapsible-menu ul:not(processed)'), false);
  };
  
  /*
   * Helper functions
   */
  
  /**
   * Initialize jump menus that are not built by Views.
   */
  function behave_jump_menu_init($elem) {
    $elem.change(function() {
      window.location = $(this).val();
      return false;
    });
  }
  
  function behave_collasible_menu_init($elem, isBEF) {
    // options
    var o = {
      open_char : '&#9660;',
      close_char : '&#9658;',
      animation : 300
    };

    $elem.each(function() {
      // Find any nested UL elements and hide them until exposed.
      if (isBEF) {
        $(this)
          .addClass('processed')
          .find('ul').each(function() {
            $(this)
              .hide()
              .parent().children('div.form-item')
                .prepend('<span class="jtree close" style="cursor:pointer;">' + o.close_char + '</span>')
                .addClass('hasChildren')
            ;
          });
      }
      else {
        $(this)
          .addClass('processed')
          .find('ul').each(function() {
            $(this)
              .hide()
              .parent()
                .prepend('<span class="jtree close" style="cursor:pointer;">' + o.close_char + '</span>')
                .addClass('hasChildren')
            ;
          });
      }
    });

    // Setup click events
    if (isBEF) {
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
    }
    else {
      $('span.jtree').click(function() {
        if ($(this).hasClass('close')) {
          $(this)
            .html(o.open_char)
            .removeClass('close')
            .addClass('open')
            .siblings('ul').show(o.animation)
          ;
        }
        else if ($(this).hasClass('open')) {
          $(this)
            .html(o.close_char)
            .removeClass('open')
            .addClass('close')
            .siblings('ul').hide(o.animation)
          ;
        }
      });
    }
  }  
}
