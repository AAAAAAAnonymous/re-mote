/*
Library for reading from a GPS, used in the re-mote setup found at https://<RETRACTED>/re-mote
Created by Victor Vezina, last updated July 25, 2019
Released into the public domain
*/

/* To do:
- Add support to use built-in RTC
*/

#include <Arduino.h>

#ifndef remoteGPS_h
#define remoteGPS_h

class remoteGPS {
    public:
        remoteGPS();
        void initialise();
        void offsetTime(long offset);
        void getData(unsigned long* time, float* lat, float* lon, unsigned long timeout = 0);
    private:
        float latitude = 0.0;
        float longitude = 0.0;
        unsigned long unixTime = 0;
        unsigned long timeLastUpdated = 0;
};

#endif
