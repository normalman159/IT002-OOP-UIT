// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#pragma once
#ifndef _cNhanVien
#define _cNhanVien

#include <bits/stdc++.h>
using namespace std;

class cNhanVien {
protected:
    string HoTen, NamSinh;
    double Luong;

public:
    cNhanVien();
    virtual void   Nhap();
    virtual void   Xuat() const;
    virtual double ThanhLuong() const = 0;
    virtual char   LoaiNhanVien() const = 0;
    virtual string getNamSinh() const = 0;
};

#endif