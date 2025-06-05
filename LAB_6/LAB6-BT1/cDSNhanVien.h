// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#pragma once
#ifndef _cDSNhanVien
#define _cDSNhanVien

#include "cNhanVien.h"
#include "cNhanVienSanXuat.h"
#include "cNhanVienVanPhong.h"

class cDSNhanVien {
private:
    cNhanVien** p;
    int         n;

public:
    cDSNhanVien();
    void             Nhap();
    void             Xuat() const;
    double           TongLuong() const;
    const cNhanVien* NhanVienLuongThapNhat() const;
    const cNhanVien* NhanVienVPTuoiCaoNhat() const;
};

#endif