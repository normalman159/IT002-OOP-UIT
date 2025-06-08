// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#pragma once
#ifndef _cGiaoDich
#define _cGiaoDich

#include <bits/stdc++.h>
using namespace std;

class cGiaoDich {
protected:
    string MaGiaoDich, NgayGiaoDich;
    double DonGia, DienTich;

public:
    cGiaoDich();
    virtual void       Nhap();
    virtual void       Xuat() const;
    virtual double     ThanhTien() const = 0;
    virtual const char getLoai() const = 0;
};

#endif