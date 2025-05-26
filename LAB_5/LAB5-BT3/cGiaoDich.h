// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#pragma one
#ifndef _cGiaoDich
#define _cGiaoDich

#include <bits/stdc++.h>
using namespace std;

class cGiaoDich {
protected:
    string MaGiaoDich;
    string NgayGiaoDich;
    double SoLuong;
    double DonGia;

public:
    cGiaoDich();
    virtual void   Nhap();
    virtual void   Xuat() const;
    virtual double ThanhTien() const = 0;
    virtual char   LoaiGiaoDich() const = 0;
};

#endif