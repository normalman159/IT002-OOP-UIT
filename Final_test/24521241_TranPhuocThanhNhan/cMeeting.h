#pragma once
#ifndef _cMeeting
#define _cMeeting

#include "cHoatDong.h"

class cMeeting : public cHoatDong {
private:
    string Partner, Platform;

public:
    cMeeting();
    void   Nhap();
    void   Xuat() const;
    char LoaiHoatDong() const;
};

#endif