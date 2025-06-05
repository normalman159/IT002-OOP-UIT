// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#pragma once
#ifndef _cNhanVienVanPhong
#define _cNhanVienVanPhong

#include "cNhanVien.h"

class cNhanVienVanPhong : public cNhanVien {
private:
    long long SoNgayLamViec;

public:
    cNhanVienVanPhong();
    void   Nhap();
    void   Xuat() const;
    double ThanhLuong() const;
    char   LoaiNhanVien() const;
    string getNamSinh() const;
};

#endif
