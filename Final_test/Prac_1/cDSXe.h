#pragma once
#ifndef _cDSXe
#define _cDSXe

#include "cXe.h"
#include "cXeMay.h"
#include "cXeTai.h"
#include "cXeDap.h"

class cDSXe {
private:
    cXe** p;
    int n;
public:
    cDSXe();
    void Nhap();
    void Xuat() const;
    void SoLuongCacLoaiXe() const;
    void AmThanhCuaDoanDuong() const;
    bool DoanDuongCoOnKhong() const;
    void DanhSachKhongDangKiem() const;
    string MatDoDoanDuong();
};

#endif