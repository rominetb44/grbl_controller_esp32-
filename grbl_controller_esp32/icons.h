#ifndef _icons_h
#define _icons_h

#include "config.h"

#if defined( TFT_SIZE) and (TFT_SIZE == 3)

const uint8_t logoIcon[] = {
#include "icons/bmp74/logo.h"  
};
const uint8_t setupIcon[] = {
#include "icons/bmp74/setup_button.h"  
};
const uint8_t printIcon[] = {
#include "icons/bmp74/mill_button.h"  
};
const uint8_t homeIcon[] = {
#include "icons/bmp74/home_button.h"  
};
const uint8_t unlockIcon[] = {
#include "icons/bmp74/unlock_button.h"  
};
const uint8_t resetIcon[] = {
#include "icons/bmp74/reset_button.h"  
};
const uint8_t sdIcon[] = {
#include "icons/bmp74/sdcard_button.h"  
};
const uint8_t usbIcon[] = {
#include "icons/bmp74/usb_button.h"  
};
const uint8_t telnetIcon[] = {
#include "icons/bmp74/telnet_button.h"  
};
const uint8_t pauseIcon[] = {
#include "icons/bmp74/pause_button.h"  
};
const uint8_t cancelIcon[] = {
#include "icons/bmp74/cancel_button.h"  
};
const uint8_t infoIcon[] = {
#include "icons/bmp74/info_button.h"  
};
const uint8_t cmdIcon[] = {
#include "icons/bmp74/cmd_button.h"  
};
const uint8_t moveIcon[] = {
#include "icons/bmp74/move_button.h"  
};
const uint8_t resumeIcon[] = {
#include "icons/bmp74/resume_button.h"  
};
const uint8_t stopIcon[] = {
#include "icons/bmp74/stop_PC_button.h"  
};
const uint8_t xpIcon[] = {
#include "icons/bmp74/arrow_Xright_button.h"  
};
const uint8_t xmIcon[] = {
#include "icons/bmp74/arrow_Xleft_button.h"  
};
const uint8_t ypIcon[] = {
#include "icons/bmp74/arrow_Yup_button.h"  
};
const uint8_t ymIcon[] = {
#include "icons/bmp74/arrow_Ydown_button.h"  
};
const uint8_t zpIcon[] = {
#include "icons/bmp74/arrow_Zup_button.h"  
};
const uint8_t zmIcon[] = {
#include "icons/bmp74/arrow_Zdown_button.h"  
};
const uint8_t dAutoIcon[] = {
#include "icons/bmp74/pitch_auto_button.h"  
};
const uint8_t d0_01Icon[] = {
#include "icons/bmp74/pitch_0_01_button.h"  
};
const uint8_t d0_1Icon[] = {
#include "icons/bmp74/pitch_0_1_button.h"  
};
const uint8_t d1Icon[] = {
#include "icons/bmp74/pitch_1_button.h"  
};
const uint8_t d10Icon[] = {
#include "icons/bmp74/pitch_10_button.h"  
};
const uint8_t d100Icon[] = {                  
#include "icons/bmp74/pitch_100_button.h"  
};
const uint8_t setWCSIcon[] = {
#include "icons/bmp74/set_WCS_button.h"  
};
const uint8_t setXIcon[] = {
#include "icons/bmp74/set_X_button.h"  
};
const uint8_t setYIcon[] = {
#include "icons/bmp74/set_Y_button.h"  
};
const uint8_t setZIcon[] = {
#include "icons/bmp74/set_Z_button.h"  
};
const uint8_t setXYZIcon[] = {
#include "icons/bmp74/set_XYZ_button.h"  
};
const uint8_t toolIcon[] = {
#include "icons/bmp74/tool_button.h"  
};
const uint8_t backIcon[] = {
#include "icons/bmp74/back_button.h"  
};
//const uint8_t leftIcon[] = {
//#include "icons/bmp74/.h"  
//};
//const uint8_t rightIcon[] = {
//#include "icons/bmp74/ .h"  
//};
const uint8_t upIcon[] = {
#include "icons/bmp74/up_button.h"  
};
const uint8_t morePauseIcon[] = {
#include "icons/bmp74/more_button.h"  
};
const uint8_t pgPrevIcon[] = {
#include "icons/bmp74/previous_button.h"  
};
const uint8_t pgNextIcon[] = {
#include "icons/bmp74/next_button.h"  
};
const uint8_t sdShowIcon[] = {
#include "icons/bmp74/see_gcode_button.h"  
};
const uint8_t overwriteIcon[] = {
#include "icons/bmp74/feedrate_rpm_button.h"  
};
const uint8_t over_switch_to_FeedrateIcon[] = {
#include "icons/bmp74/feedrate_button.h"  
};
const uint8_t over_switch_to_SpindleIcon[] = {
#include "icons/bmp74/rpm_button.h"  
};
const uint8_t communicationIcon[] = {
#include "icons/bmp74/com_button.h"  
};
const uint8_t serialIcon[] = {
#include "icons/bmp74/grbl_serial_button.h"  
};
const uint8_t bluetoothIcon[] = {
#include "icons/bmp74/grbl_bluetooth_button.h"  
};
const uint8_t telnetGrblIcon[] = {
#include "icons/bmp74/grbl_telnet_button.h"  
};
const uint8_t sdGrblIcon[] = {
#include "icons/bmp74/grbl_sd_button.h"  
};
const uint8_t logGrblIcon[] = {
#include "icons/bmp74/grbl_msg_button.h"  
};
const uint8_t yesIcon[] = {
#include "icons/bmp74/yes_button.h"  
};
const uint8_t noIcon[] = {
#include "icons/bmp74/no_button.h"  
};
const uint8_t setCalIcon[] = {
#include "icons/bmp74/calibrate_button.h"  
};
const uint8_t GoChangeIcon[] = {
#include "icons/bmp74/go_to_change_button.h"  
};
const uint8_t setChangeIcon[] = {
#include "icons/bmp74/set_change_button.h"  
};
const uint8_t setProbeIcon[] = {
#include "icons/bmp74/set_zprobe_button.h"  
};
const uint8_t GoProbeIcon[] = {
#include "icons/bmp74/zprobe_button.h"  
};
const uint8_t backXyzIcon[] = {
#include "icons/bmp74/back_XYZ_button.h"  
};
const uint8_t gotoAAxesIcon[] = {
#include "icons/bmp74/go_to_A_axis_button.h"  
};
const uint8_t gotoABAxesIcon[] = {
#include "icons/bmp74/go_to_AB_axes_button.h"  
};
const uint8_t gotoABCAxesIcon[] = {
#include "icons/bmp74/go_to_ABC_axes_button.h"  
};
const uint8_t arrowANegIcon[] = {
#include "icons/bmp74/arrow_Aneg_button.h"  
};
const uint8_t arrowAPosIcon[] = {
#include "icons/bmp74/arrow_Apos_button.h"  
};
const uint8_t arrowBNegIcon[] = {
#include "icons/bmp74/arrow_Bneg_button.h"  
};
const uint8_t arrowBPosIcon[] = {
#include "icons/bmp74/arrow_Bpos_button.h"  
};
const uint8_t arrowCNegIcon[] = {
#include "icons/bmp74/arrow_Cneg_button.h"  
};
const uint8_t arrowCPosIcon[] = {
#include "icons/bmp74/arrow_Cpos_button.h"  
};
const uint8_t deleteIcon[] = {
#include "icons/bmp74/delete_button.h"  
};
const uint8_t setAIcon[] = {
#include "icons/bmp74/set_A_button.h"  
};
const uint8_t setABIcon[] = {
#include "icons/bmp74/set_AB_button.h"  
};
const uint8_t setABCIcon[] = {
#include "icons/bmp74/set_ABC_button.h"  
};
const uint8_t advParametersIcon[] = {
#include "icons/bmp74/adv_parameters_button.h"  
};
const uint8_t setAxisNumberIcon[] = {
#include "icons/bmp74/change_axes_nber_button.h"  
};
const uint8_t rotateTFTIcon[] = {
#include "icons/bmp74/rotate_tft_button.h"  
};
const uint8_t rebootTFTIcon[] = {
#include "icons/bmp74/reboot_TFT_button.h"  
};
const uint8_t rebootGRBLIcon[] = {
#include "icons/bmp74/reboot_grbl_fluid_button.h"  
};
const uint8_t reconnectWifiScreenIcon[] = {
#include "icons/bmp74/reconnect_wifi_screen_button.h" 
};
const uint8_t set3axesCNCIcon[] = {
#include "icons/bmp74/set_3axes_cnc_button.h"
};
const uint8_t set4axesCNCIcon[] = {
#include "icons/bmp74/set_4axes_cnc_button.h"
};
const uint8_t set5axesCNCIcon[] = {
#include "icons/bmp74/set_5axes_cnc_button.h"
};
const uint8_t set6axesCNCIcon[] = {
#include "icons/bmp74/set_6axes_cnc_button.h"
};


//********************************************* 4" TFT
#elif defined(TFT_SIZE) and (TFT_SIZE == 4)

const uint8_t logoIcon[] = {   // currently use the logo defined for 3.2" TFT
#include "icons/bmp74/logo.h"  
};
const uint8_t setupIcon[] = {
#include "icons/bmp100/setup_button.h"  
};
const uint8_t printIcon[] = {
#include "icons/bmp100/mill_button.h"  
};
const uint8_t homeIcon[] = {
#include "icons/bmp100/home_button.h"  
};
const uint8_t unlockIcon[] = {
#include "icons/bmp100/unlock_button.h"  
};
const uint8_t resetIcon[] = {
#include "icons/bmp100/reset_button.h"  
};
const uint8_t sdIcon[] = {
#include "icons/bmp100/sdcard_button.h"  
};
const uint8_t usbIcon[] = {
#include "icons/bmp100/usb_button.h"  
};
const uint8_t telnetIcon[] = {
#include "icons/bmp100/telnet_button.h"  
};
const uint8_t pauseIcon[] = {
#include "icons/bmp100/pause_button.h"  
};
const uint8_t cancelIcon[] = {
#include "icons/bmp100/cancel_button.h"  
};
const uint8_t infoIcon[] = {
#include "icons/bmp100/info_button.h"  
};
const uint8_t cmdIcon[] = {
#include "icons/bmp100/cmd_button.h"  
};
const uint8_t moveIcon[] = {
#include "icons/bmp100/move_button.h"  
};
const uint8_t resumeIcon[] = {
#include "icons/bmp100/resume_button.h"  
};
const uint8_t stopIcon[] = {
#include "icons/bmp100/stop_PC_button.h"  
};
const uint8_t xpIcon[] = {
#include "icons/bmp100/arrow_Xright_button.h"  
};
const uint8_t xmIcon[] = {
#include "icons/bmp100/arrow_Xleft_button.h"  
};
const uint8_t ypIcon[] = {
#include "icons/bmp100/arrow_Yup_button.h"  
};
const uint8_t ymIcon[] = {
#include "icons/bmp100/arrow_Ydown_button.h"  
};
const uint8_t zpIcon[] = {
#include "icons/bmp100/arrow_Zup_button.h"  
};
const uint8_t zmIcon[] = {
#include "icons/bmp100/arrow_Zdown_button.h"  
};
const uint8_t dAutoIcon[] = {
#include "icons/bmp100/pitch_auto_button.h"  
};
const uint8_t d0_01Icon[] = {
#include "icons/bmp100/pitch_0_01_button.h"  
};
const uint8_t d0_1Icon[] = {
#include "icons/bmp100/pitch_0_1_button.h"  
};
const uint8_t d1Icon[] = {
#include "icons/bmp100/pitch_1_button.h"  
};
const uint8_t d10Icon[] = {
#include "icons/bmp100/pitch_10_button.h"  
};
const uint8_t d100Icon[] = {                  
#include "icons/bmp100/pitch_100_button.h"  
};
const uint8_t setWCSIcon[] = {
#include "icons/bmp100/set_WCS_button.h"  
};
const uint8_t setXIcon[] = {
#include "icons/bmp100/set_X_button.h"  
};
const uint8_t setYIcon[] = {
#include "icons/bmp100/set_Y_button.h"  
};
const uint8_t setZIcon[] = {
#include "icons/bmp100/set_Z_button.h"  
};
const uint8_t setXYZIcon[] = {
#include "icons/bmp100/set_XYZ_button.h"  
};
const uint8_t toolIcon[] = {
#include "icons/bmp100/tool_button.h"  
};
const uint8_t backIcon[] = {
#include "icons/bmp100/back_button.h"  
};
/*
const uint8_t leftIcon[] = {
#include "icons/bmp100/.h"  
};
const uint8_t rightIcon[] = {
#include "icons/bmp100/ .h"  
};
*/
const uint8_t upIcon[] = {
#include "icons/bmp100/up_button.h"  
};
const uint8_t morePauseIcon[] = {
#include "icons/bmp100/more_button.h"  
};
const uint8_t pgPrevIcon[] = {
#include "icons/bmp100/previous_button.h"  
};
const uint8_t pgNextIcon[] = {
#include "icons/bmp100/next_button.h"  
};
const uint8_t sdShowIcon[] = {
#include "icons/bmp100/see_gcode_button.h"  
};
const uint8_t overwriteIcon[] = {
#include "icons/bmp100/feedrate_rpm_button.h"  
};
const uint8_t over_switch_to_FeedrateIcon[] = {
#include "icons/bmp100/feedrate_button.h"  
};
const uint8_t over_switch_to_SpindleIcon[] = {
#include "icons/bmp100/rpm_button.h"  
};
const uint8_t plus10per100Icon[] = {
#include "icons/bmp100/plus10per100.h"  
};
const uint8_t minus10per100Icon[] = {
#include "icons/bmp100/minus10per100.h"  
};
const uint8_t plus1per100Icon[] = {
#include "icons/bmp100/plus1per100.h"  
};
const uint8_t minus1per100Icon[] = {
#include "icons/bmp100/minus1per100.h"  
};
const uint8_t set100per100Icon[] = {
#include "icons/bmp100/set100per100.h"  
};
const uint8_t communicationIcon[] = {
#include "icons/bmp100/com_button.h"  
};
const uint8_t serialIcon[] = {
#include "icons/bmp100/grbl_serial_button.h"  
};
const uint8_t bluetoothIcon[] = {
#include "icons/bmp100/grbl_bluetooth_button.h"  
};
const uint8_t telnetGrblIcon[] = {
#include "icons/bmp100/grbl_telnet_button.h"  
};
const uint8_t sdGrblIcon[] = {
#include "icons/bmp100/grbl_sd_button.h"  
};
const uint8_t logGrblIcon[] = {
#include "icons/bmp100/grbl_msg_button.h"  
};
const uint8_t yesIcon[] = {
#include "icons/bmp100/yes_button.h"  
};
const uint8_t noIcon[] = {
#include "icons/bmp100/no_button.h"  
};
const uint8_t setCalIcon[] = {
#include "icons/bmp100/calibrate_button.h"  
};
const uint8_t GoChangeIcon[] = {
#include "icons/bmp100/go_to_change_button.h"  
};
const uint8_t setChangeIcon[] = {
#include "icons/bmp100/set_change_button.h"  
};
const uint8_t setProbeIcon[] = {
#include "icons/bmp100/set_zprobe_button.h"  
};
const uint8_t GoProbeIcon[] = {
#include "icons/bmp100/zprobe_button.h"  
};

const uint8_t backXyzIcon[] = {
#include "icons/bmp100/back_XYZ_button.h"  
};
const uint8_t gotoAAxesIcon[] = {
#include "icons/bmp100/go_to_A_axis_button.h"  
};
const uint8_t gotoABAxesIcon[] = {
#include "icons/bmp100/go_to_AB_axes_button.h"  
};
const uint8_t gotoABCAxesIcon[] = {
#include "icons/bmp100/go_to_ABC_axes_button.h"  
};
const uint8_t arrowANegIcon[] = {
#include "icons/bmp100/arrow_Aneg_button.h"  
};
const uint8_t arrowAPosIcon[] = {
#include "icons/bmp100/arrow_Apos_button.h"  
};
const uint8_t arrowBNegIcon[] = {
#include "icons/bmp100/arrow_Bneg_button.h"  
};
const uint8_t arrowBPosIcon[] = {
#include "icons/bmp100/arrow_Bpos_button.h"  
};
const uint8_t arrowCNegIcon[] = {
#include "icons/bmp100/arrow_Cneg_button.h"  
};
const uint8_t arrowCPosIcon[] = {
#include "icons/bmp100/arrow_Cpos_button.h"  
};
const uint8_t setAIcon[] = {
#include "icons/bmp100/set_A_button.h"  
};
const uint8_t setABIcon[] = {
#include "icons/bmp100/set_AB_button.h"  
};
const uint8_t setABCIcon[] = {
#include "icons/bmp100/set_ABC_button.h"  
};
const uint8_t advParametersIcon[] = {
#include "icons/bmp100/adv_parameters_button.h"
};
const uint8_t setAxisNumberIcon[] = {
#include "icons/bmp100/change_axes_nber_button.h"
};
const uint8_t rotateTFTIcon[] = {
#include "icons/bmp100/rotate_tft_button.h" 
};
const uint8_t rebootTFTIcon[] = {
#include "icons/bmp100/reboot_TFT_button.h"
};
const uint8_t rebootGRBLIcon[] = {
#include "icons/bmp100/reboot_grbl_fluid_button.h"  
};
const uint8_t reconnectWifiScreenIcon[] = {
#include "icons/bmp100/reconnect_wifi_screen_button.h"
};
const uint8_t set2axesCNCIcon[] = {
#include "icons/bmp100/set_2axes_cnc_button.h"
};
const uint8_t set3axesCNCIcon[] = {
#include "icons/bmp100/set_3axes_cnc_button.h"
};
const uint8_t set4axesCNCIcon[] = {
#include "icons/bmp100/set_4axes_cnc_button.h"
};
const uint8_t set5axesCNCIcon[] = {
#include "icons/bmp100/set_5axes_cnc_button.h"
};
const uint8_t set6axesCNCIcon[] = {
#include "icons/bmp100/set_6axes_cnc_button.h"
};


#else
#error TFT_SIZE must be 3 or 4 (see config.h)
#endif




#endif
