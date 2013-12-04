/**
 * Password Recovery info plugin for RoundCube
 *
 * Plugin that add a tab to settings to let the user specify some alternative addresses to recover password.
 * There is no a ready way for an administrator to use that info, I get it from the database when needed,
 * I suppose that something better could be developed.
 *
 * Mainly based on checksizeinbox from Marco Marcantelli
 *
 * @version 1.0
 * @author Lorenzo Salvadorini <lorello@openweb.it>
 */

To install the plugin you have to:
1. copy the folder passwordrecovery in the plugins folder of roundcube;
2. add "passwordrecovery" in the plugins section of the roundcube configuration (config/main.inc.php).

Note:
There are only the Italian and the English localization.
