<?php

$labels   = array();
$messages = array();

$labels['passwordrecovery_label'] = 'Alternative address used to contact you in case you loose your password';
$labels['passwordrecovery_email_desc'] = 'Alternative email address';
$labels['passwordrecovery_sms_desc'] = 'Telephone number';

$messages['successfullysaved'] = "Data successfully saved.";
$messages['unsuccessfullysaved'] = "Error saving your data, please retry in a few minutes.";

$messages['nopasswordrecovery_form_data'] = "Please, specify an email address or a telephone number before saving.";
$messages['nopasswordrecovery_sameidentity'] = "You cannot specify the address of this mailbox.";
$messages['nopasswordrecovery_bademailformat'] = "The email address specified does not seems correct, check it please.";
$messages['nopasswordrecovery_badtelformat'] = "The telephone number specified does not seems correct, check it please. The number must be specified using only digits, without spaces or dots. If needed use the plus sign to specify an international prefix.";
?>
