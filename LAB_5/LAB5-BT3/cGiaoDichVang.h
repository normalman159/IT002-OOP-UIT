// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#pragma once
#ifndef _cGiaoDichVang
#define _cGiaoDichVang

#include "cGiaoDich.h"

class cGiaoDichVang : public cGiaoDich {
private:
    string LoaiVang;

public:
    cGiaoDichVang();
    void   Nhap();
    void   Xuat() const;
    double ThanhTien() const;
    char   LoaiGiaoDich() const;
};

#endif