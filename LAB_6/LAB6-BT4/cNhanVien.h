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
    string MaNV, HoVaTen, SoDienThoai, Email;
    int    Tuoi;
    double LuongCoBan;

public:
    cNhanVien();
    virtual void   Nhap();
    virtual void   Xuat() const;
    virtual double getLuong() const = 0;
    virtual char   LoaiNV() const = 0;
};

#endif