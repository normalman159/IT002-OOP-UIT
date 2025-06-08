// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#pragma once
#ifndef _cDEV
#define _cDEV

#include "cNhanVien.h"

class cDEV : public cNhanVien {
private:
    double     SoGioLamThem;
    static int DEM;

public:
    cDEV();
    void       Nhap();
    void       Xuat() const;
    double     getLuong() const override;
    char       LoaiNV() const override;
    static int getDEM();
};

#endif
