// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#pragma once
#ifndef _cNhanVienSanXuat
#define _cNhanVienSanXuat

#include "cNhanVien.h"

class cNhanVienSanXuat : public cNhanVien {
private:
    double    LuongCoBan;
    long long SoSanPham;

public:
    cNhanVienSanXuat();
    void   Nhap();
    void   Xuat() const;
    double ThanhLuong() const;
    char   LoaiNhanVien() const;
    string getNamSinh() const;
};

#endif
