//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// V3.h- Contains the Eaglemoss V3 specific declarations
//
// By Suusi Malcolm-Brown
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#ifndef V3_H
  #define V3_H

//defines needed for V3 I2C device

#define V3_I2C_DEVICE          0x48

// Nozzle RGB LED

#define V3_NOZZLE_RED          211    // nozzle RGB LED Red
#define V3_NOZZLE_RED_FLASH    212    // nozzle RGB LED Red Flashing
#define V3_NOZZLE_GREEN        213    // nozzle RGB LED Green 
#define V3_NOZZLE_GREEN_FLASH  214    // nozzle RGB LED Green Flashing
#define V3_NOZZLE_BLUE         215    // nozzle RGB LED Blue
#define V3_NOZZLE_BLUE_FLASH   216    // nozzle RGB LED Blue Flashing
#define V3_NOZZLE_WHITE        217    // nozzle RGB LED White
#define V3_NOZZLE_WHITE_FLASH  218    // nozzle RGB LED White Flashing
#define V3_NOZZLE_ORANGE       219    // nozzle RGB LED Orange
#define V3_NOZZLE_ORANGE_FLASH 220    // nozzle RGB LED Orange Flashing
#define V3_NOZZLE_LED_OFF      221    // nozzle RGB LED off

// front button RGB LEDs

#define V3_BUTTON_RED          222    // button RGB LED Red
#define V3_BUTTON_RED_FLASH    223    // button RGB LED Red Flashing
#define V3_BUTTON_GREEN        224    // button RGB LED Green
#define V3_BUTTON_GREEN_FLASH  225    // button RGB LED Green Flashing
#define V3_BUTTON_BLUE         226    // button RGB LED Blue
#define V3_BUTTON_BLUE_FLASH   227    // button RGB LED Blue Flashing
#define V3_BUTTON_WHITE        228    // button RGB LED White
#define V3_BUTTON_WHITE_FLASH  229    // button RGB LED White Flashing
#define V3_BUTTON_ORANGE       230    // button RGB LED Orange
#define V3_BUTTON_ORANGE_FLASH 231    // button RGB LED Orange Flashing
#define V3_BUTTON_LED_OFF      232    // button RGB LED off ? I havent tested this yet

// beeper

#define V3_3_SHORT_BEEP        233    // Short Beep x 3
#define V3_LONG_BEEP           234    // Long Beep x 1 ( 3 sec)
#define V3_BEEP_FOR_3_MIN      235    // Beep every sec, 3 min.
#define V3_BEEP_OFF            236    // Beep Off
#define V3_SHORT_BEEP          239    // Short Beep x 1

//Hood Switch

#define V3_HOODSWITCH_ENABLE   237    // Hood Switch Enable
#define V3_HOODSWITCH_DISABLE  238    // Hood Switch Disable

#define V3_SWITCHES_MASK       3      // only the lowest two digits are valid switches

#define HOODSWITCH_OPEN        0      // Printer Hood is open
#define HOODSWITCH_CLOSED      1      // Printer Hood is closed
#define HOODSWITCH_ENABLED     1      // true if enabled
#define HOODSWITCH_DISABLED    0      // false if disabled
#define HOODSWITCH_BIT         1      // hoodswitch switch state is in bit 0

// Front Button Switch 

#define FRONT_BUTTON_PRESSED   0      // Front Button is pressed
#define FRONT_BUTTON_RELEASED  2      // Front Button is released
#define FRONT_BUTTON_BIT       2      // Front Button state is in bit 1

#define FSW_COUNTER_MIN        5      //
#define FSW_COUNTER_MAX        30     //

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// function definitions unique to the V3 3D printer
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void V3_I2C_Command(  int iCommand, boolean bEchoCommand ) ;    // bEchoCommand true if command echoed over the serial link
void check_PauseID() ;                                          // function located in V3.cpp
void EmergencyStop();                                           // function located in Sprinter_Melzo_play.pde
float Read_Z_MAX_LENGTH_M240_FromEEPROM();                      // function located in Sprinter_Melzo_play.pde
void Write_Z_MAX_LENGTH_M240_ToEEPROM(float);                   // function located in Sprinter_Melzo_play.pde
void BBB();                                                     // function located in .pde
#endif

/////////////////////////////////////////////////// end of V3.h //////////////////////////////////////////////////

