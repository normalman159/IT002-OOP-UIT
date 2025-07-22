#pragma once
#ifndef _cSelfStudy
#define _cSelfStudy

#include "cHoatDong.h"

class cSelfStudy : public cHoatDong {
private:
    string Topic, Location;
    
public:
    cSelfStudy();
    void Nhap();
    void Xuat() const; 
    char LoaiHoatDong() const;
};

#endif