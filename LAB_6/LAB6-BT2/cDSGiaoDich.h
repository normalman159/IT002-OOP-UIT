// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#pragma once
#ifndef _cDSGiaoDich
#define _cDSGiaoDich

#include "cGiaoDich.h"
#include "cGiaoDichChungCu.h"
#include "cGiaoDichDat.h"
#include "cGiaoDichNhaPho.h"

class cDSGiaoDich {
private:
    cGiaoDich **p;
    int         n;

public:
    cDSGiaoDich();
    void             Nhap();
    void             Xuat() const;
    void             getDEM() const;
    double           TBThanhTienChungCu() const;
    const cGiaoDich *GDNhaPhoGTCaoNhat() const;
};

#endif