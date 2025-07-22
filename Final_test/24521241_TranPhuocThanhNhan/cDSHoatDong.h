#pragma once
#ifndef _cDSHoatDong
#define _cDSHoatDong

#include "cClassSession.h"
#include "cHoatDong.h"
#include "cMeeting.h"
#include "cSelfStudy.h"

class cDSHoatDong {
private:
    int         n;
    cHoatDong **p;
    void XuatHoatDongBuoiSang() const;
    void XuatHoatDongBuoiChieu() const;
    void XuatHoatDongBuoiToi() const;
public:
    cDSHoatDong();
    void Nhap();
    void Xuat() const;
    const cHoatDong* HoatDongBuoiSangCaoNhat() const;
    const cHoatDong* HoatDongBuoiChieuCaoNhat() const;
    const cHoatDong* HoatDongBuoiToiCaoNhat() const;
};

#endif