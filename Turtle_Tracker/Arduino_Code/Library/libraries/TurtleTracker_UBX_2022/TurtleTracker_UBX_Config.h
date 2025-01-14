#ifndef _TurtleTracker_UBX_Config_h
#define _TurtleTracker_UBX_Config_h

#include <stdint.h>
#include <NeoSWSerial.h>

    /*--------------------------------------UBX CONFIURATION------------------------------------*/
    /*
    Byte 1 & 2: Always 0xB5, 0x62
    Byte 2: Always 0x62
    Byte 3: Class Field
    Byte 4: ID Field
    Byte 5 & 6: Payload Length
    */
    // These variablesa are saved to FLASH memory to save SRAM (hence the PROGMEM)

    /*________Enable Messages__________*/
    // Enable AID_INI (Initial Data)
    const uint8_t AID_INI[] PROGMEM = { 0xB5, 0x62, 0x06, 0x01, 0x08, 0x00, 0x0B, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x07 };

    //Enable MON-HW (Hardware Status)
    const uint8_t MON_HW[] PROGMEM = { 0xB5, 0x62, 0x06, 0x01, 0x08, 0x00, 0x0A, 0x09, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x23, 0x37 };
    //Enable MON-TXBUF (TX Buffer)
    const uint8_t MON_TXBUF[] PROGMEM = { 0xB5, 0x62, 0x06, 0x01, 0x08, 0x00, 0x0A, 0x08, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x22, 0x30 };

    //Enable NAV-AOPSTATUS (AssistNow Autonomous Status)
    const uint8_t NAV_AOPSTATUS[] PROGMEM = { 0xB5, 0x62, 0x06, 0x01, 0x08, 0x00, 0x01, 0x60, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x71, 0x50 };
    //Enable NAV-DGPS (DGPS Data)
    const uint8_t NAV_DGPS[] PROGMEM = { 0xB5, 0x62, 0x06, 0x01, 0x08, 0x00, 0x01, 0x31, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x42, 0x07 };
    // Enable NAV-DOP (Dilution of Precision)
    const uint8_t NAV_DOP[] PROGMEM = { 0xB5, 0x62, 0x06, 0x01, 0x08, 0x00, 0x01, 0x04, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x15, 0xCC };
    // Enable NAV-SOL (Navigation Solution)
    const uint8_t NAV_SOL[] PROGMEM = { 0xB5, 0x62, 0x06, 0x01, 0x08, 0x00, 0x01, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x17, 0xDA };
    // Enable NAV-STATUS (Navigation Status)
    const uint8_t NAV_STATUS[] PROGMEM = { 0xB5, 0x62, 0x06, 0x01, 0x08, 0x00, 0x01, 0x03, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x14, 0xC5 };


    /*________GPS Configurtion_________*/
    //CFG-NAV5 - Configure NAV5
    const uint8_t CFG_NAV5[] PROGMEM = { 0xB5, 0x62, 0x06, 0x24, 0x24, 0x00, 0xFF, 0xFF, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x10, 0x27, 0x00, 0x00, 0x05, 0x00, 0xFA, 0x00, 0xFA, 0x00, 0x64, 0x00, 0x2C, 0x01, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4F, 0x82 };

    //CFG-NAVX5 - Configure NAVX5
    const uint8_t CFG_NAVX5[] PROGMEM = { 0xB5, 0x62, 0x06, 0x23, 0x28, 0x00, 0x00, 0x00, 0x4C, 0x66, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x16, 0x07, 0x00, 0x00, 0x00, 0x00, 0x01, 0x9B, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xEA, 0xF7 };

    // CFG-SBAS - Configure SBAS
    const uint8_t CFG_SBAS[] PROGMEM = { 0xB5, 0x62, 0x06, 0x16, 0x08, 0x00, 0x01, 0x03, 0x03, 0x00, 0x00, 0xE8, 0x04, 0x00, 0x17, 0x79 };

    // CFG-CFG - Save Config. setings
    const uint8_t CFG_CFG[] PROGMEM = { 0xB5, 0x62, 0x06, 0x09, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x1D, 0xAB };

    #define CONFIG_SIZE 12

#endif

