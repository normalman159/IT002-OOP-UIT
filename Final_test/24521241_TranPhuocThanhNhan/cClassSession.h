#pragma once
#ifndef _cClassSession
#define _cClassSession

#include "cHoatDong.h"

class cClassSession : public cHoatDong {
private:
    string courseCode, Subject;

public:
    cClassSession();
    void Nhap();
    void Xuat() const;    
    char LoaiHoatDong() const;
};

#endif