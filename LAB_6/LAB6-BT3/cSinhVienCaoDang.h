// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#pragma once
#ifndef _cSinhVienCaoDang
#define _cSinhVienCaoDang

#include "cSinhVien.h"

class cSinhVienCaoDang : public cSinhVien {
private:
    double     DiemTotNghiep;
    static int demSLKhongDuDKTN;

public:
    cSinhVienCaoDang();
    void       Nhap();
    void       Xuat() const;
    char       LoaiSinhVien();
    double     getDiemTotNghiep() const;
    bool       DuDKTN() const;
    static int getDemSLKhongDuDKTN();
};

#endif