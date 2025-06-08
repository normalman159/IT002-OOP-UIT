// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#pragma once
#ifndef _cTESTER
#define _cTESTER

#include "cNhanVien.h"

class cTester : public cNhanVien {
private:
    int        SoLoi;
    static int DEM;

public:
    cTester();
    void       Nhap();
    void       Xuat() const;
    double     getLuong() const override;
    static int getDEM();
    char       LoaiNV() const override;
};

#endif