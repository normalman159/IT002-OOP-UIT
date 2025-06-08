// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#pragma once
#ifndef _cSinhVien
#define _cSinhVien

#include <bits/stdc++.h>
using namespace std;

class cSinhVien {
protected:
    string       MSSV;
    string       HoVaTen, DiaChi;
    int          SoTinhChi;
    double       DTB;

public:
    cSinhVien();
    virtual void Nhap();
    virtual void Xuat() const;
    virtual char LoaiSinhVien() = 0;
    virtual bool DuDKTN() const = 0;
    double       getDTB() const;
};

#endif