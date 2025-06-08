// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#pragma once
#ifndef _cDSNhanVien
#define _cDSNhanVien

#include "cDEV.h"
#include "cNhanVien.h"
#include "cTester.h"

class cDSNhanVien {
private:
    cNhanVien **p;
    int         n;
    double      getLuongTB() const;

public:
    cDSNhanVien();
    void             Nhap();
    void             Xuat() const;
    void             dsNhanVienCoLuongThapHonTB() const;
    const cNhanVien *NhanVienCoLuongThapNhat() const;
    const cNhanVien *NhanVienCoLuongCaoNhat() const;
    const cNhanVien *NhanVienDevCoLuongCaoNhat() const;
    const cNhanVien *NhanVienTesterCoLuongThapNhat() const;
};

#endif