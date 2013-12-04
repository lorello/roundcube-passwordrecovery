
if (window.rcmail) {
  rcmail.addEventListener('init', function(evt) {
    var tab = $('<span>').attr('id', 'settingstabpluginpasswordrecovery').addClass('tablink');    
    var button = $('<a>').attr('href', rcmail.env.comm_path+'&_action=plugin.passwordrecovery').html(rcmail.gettext('Recupero password', 'Recupero password')).appendTo(tab);    
        
    // add button and register command
    rcmail.add_element(tab, 'tabs');
    //rcmail.register_command('plugin.filters-delete', function(){ rcmail.goto_url('plugin.filters-delete') }, true);    
    rcmail.register_command('plugin.passwordrecovery-save', function(){ 
         rcmail.gui_objects.passwordrecoveryform.submit();}, true);
    })
  }


