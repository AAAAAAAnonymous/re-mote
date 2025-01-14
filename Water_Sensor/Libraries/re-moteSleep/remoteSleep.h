/*
Library for sleeping, used in the re-mote setup found at https://<RETRACTED>/re-mote
Created by Victor Vezina, last updated August 12, 2019
Released into the public domain
*/

#ifndef remoteSleep_h
#define remoteSleep_h

#include <Arduino.h>

class remoteSleep {
    public:
        remoteSleep();
        long sleep(long time);
        long sleep(long time, unsigned long start);
    private:
        void sleep8000();
        void sleep4000();
        void sleep2000();
        void sleep1000();
        void sleep500();
        void sleep250();
        void sleep125();
        void sleep64();
        void sleep32();
        void sleep16();
};

#endif