// File lang/cpp/src/messages/MON.h
// Auto-generated by pyUBX generateCPP.py v0.1 on 2017-11-13T08:52:36.064268
// See https://github.com/mayeranalytics/pyUBX
// DO NOT MODIFY THIS FILE!

#ifndef __MON_H__
#define __MON_H__

#include <stdint.h>
#include "../UBX.h"

/* Message class MON.
 */
struct MON
{
    struct VER;
};

struct MON::VER : public Message
{
    char swVersion[30];
    char hwVersion[10];

    struct Repeated {
        char extension[30];
    };
    typedef _iterator<MON::VER::Repeated> iterator;
    static _iterator<Repeated> iter(char*data, size_t size) {
        return _iterator<Repeated>(data+sizeof(MON::VER), size-sizeof(MON::VER));
    }
    static _iterator<Repeated> iter(MON::VER& msg, size_t size) {
        return iter((char*)(&msg), size);
    }
    static size_t size(size_t n) { return sizeof(MON::VER) + n*sizeof(MON::VER::Repeated); }

    static uint8_t classID;
    static uint8_t messageID;
};

uint8_t MON::VER::classID   = 0x0A;
uint8_t MON::VER::messageID = 0x04;

#endif // ifndef __MON_H__
