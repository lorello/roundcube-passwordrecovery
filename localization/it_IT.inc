<?php

$labels   = array();
$messages = array();

$labels['passwordrecovery_label'] = 'Recapiti alternativi a cui &egrave; possibile inviare una nuova password in caso di smarrimento';
$labels['passwordrecovery_email_desc'] = 'Indirizzo email alternativo';
$labels['passwordrecovery_sms_desc'] = 'Numero di cellulare';

$messages['successfullysaved'] = "I parametri sono stati salvati con successo.";
$messages['unsuccessfullysaved'] = "Errore nel salvataggio dei parametri.";

$messages['nopasswordrecovery_form_data'] = "Prima di premere salva inserisci un indirizzo email o numero di cellulare.";
$messages['nopasswordrecovery_sameidentity'] = "Devi inserire un indirizzo email diverso dal tuo indirizzo attuale.";
$messages['nopasswordrecovery_bademailformat'] = "L'indirizzo di email fornito non sembra avere un formato corretto, ricontrolla per favore.";
$messages['nopasswordrecovery_badtelformat'] = "Il numero di telefono fornito non sembra avere un formato corretto, ricontrolla per favore. Il numero di telefono deve essere inserito senza spazi o punti, solo con le cifre. Se necessario specificare il prefisso internazionale con il carattere +";
?>
