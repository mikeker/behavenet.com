if (Drupal.jsEnabled) {
  
  /*
   * Change the width and placement of the autocomplete popup
   */
  Drupal.jsAC.prototype._original_populatePopup = Drupal.jsAC.prototype.populatePopup;
  Drupal.jsAC.prototype.populatePopup = function () {
    
    // Call the original routine
    this._original_populatePopup();
    
    // Adjust width and placement of the autocomplete window
    var $popup = $(this.popup);
    $popup.css({
      width: ($popup.width() * 2) + 'px',
      marginLeft: (-1 * $popup.width()) + 'px'
    });
  };
  
  Drupal.behaviors.behavenet = function() {
    behave_jump_menu_init($('select.jump-menu:not(processed)'));
    behave_collasible_menu_init($('ul.bef-tree:not(.processed)'), true);
    behave_collasible_menu_init($('.behavenet-collapsible-menu ul:not(processed)'), false);
    
    // Handle Behavenet admin links
    $('.behavenet-admin-links').hover(
      function() {
        $(this).addClass('behavenet-admin-links-active');
      },
      function() {
        $(this).removeClass('behavenet-admin-links-active');
      }
    )
    $('.behavenet-admin-links + div.panel-display').hover(
      function() {
        $(this)
          .addClass('behavenet-admin-links-highlight')
          .siblings('.behavenet-admin-links')
            .addClass('behavenet-admin-links-active');
      },
      function(e) {
        $(this)
          .removeClass('behavenet-admin-links-highlight')
          .siblings('.behavenet-admin-links')
            .removeClass('behavenet-admin-links-active');
      }
    );
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
        var $this = $(this);
        if (!$this.parent().children('div.form-item').hasClass('hasChildren')) {
          $this
            .addClass('processed')
            .find('ul').each(function() {
              $(this)
                .hide()
                .parent().children('div.form-item')
                  .prepend('<span class="jtree close" style="cursor:pointer;">' + o.close_char + '</span>')
                  .addClass('hasChildren');
            });
        }
      }
      else {
        $(this)
          .addClass('processed')
          .find('ul').each(function() {
            var $this = $(this);
            if (!$this.parent().hasClass('hasChildren')) {
              $this
                .hide()
                .parent()
                  .prepend('<span class="jtree close" style="cursor:pointer;">' + o.close_char + '</span>')
                  .addClass('hasChildren');
            }
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
