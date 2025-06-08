// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#pragma once
#ifndef _cSinhVienDaiHoc
#define _cSinhVienDaiHoc

#include "cSinhVien.h"

class cSinhVienDaiHoc : public cSinhVien {
private:
    string     TenLuanVan;
    double     DiemLuanVan;
    static int demSLKhongDuDKTN;

public:
    cSinhVienDaiHoc();
    void       Nhap();
    void       Xuat() const;
    double     getDiemLuanVan() const;
    char       LoaiSinhVien();
    bool       DuDKTN() const;
    static int getDemSLKhongDuDKTN();
};

#endif
