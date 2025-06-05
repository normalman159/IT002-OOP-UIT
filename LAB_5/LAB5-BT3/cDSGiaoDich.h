// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#pragma once
#ifndef _cDSGiaoDich
#define _cDSGiaoDich

#include "cGiaoDich.h"
#include "cGiaoDichTien.h"
#include "cGiaoDichVang.h"

class cDSGiaoDich {
private:
    cGiaoDich** p;
    int         n;

public:
    cDSGiaoDich();
    cDSGiaoDich(int);
    void Nhap();
    void Xuat() const;

    const cGiaoDich* GiaoDichVangThanhTienLonNhat() const;
    const cGiaoDich* GiaoDichTienEuroThapNhat() const;
    void             DSGiaoDichTrenMotTy() const;
};

#endif