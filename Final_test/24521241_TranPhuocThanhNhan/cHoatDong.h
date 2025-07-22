#pragma once
#ifndef _cHoatDong
#define _cHoatDong

#include <bits/stdc++.h>
using namespace std;

class cHoatDong {
protected:
    string Title, startTime, Buoi;
    double Duration, Priority;

public:
    cHoatDong();
    virtual void Nhap();
    virtual void Xuat() const = 0;
    virtual char LoaiHoatDong() const = 0;
    string getBuoi() const;
    double getPriority() const;
};

#endif