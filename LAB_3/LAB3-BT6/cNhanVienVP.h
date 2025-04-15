// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#pragma one
#ifndef _cNhanVienVP
#define _cNhanVienVP

#include <bits/stdc++.h>
using namespace std;

class cNhanVienVP{
private:
    string ID, ten;
    int NamSinh;
    double luong;
public:
    cNhanVienVP();
    void Nhap();
    void Xuat() const;
    
    double getLuong() const;
    int getNamSinh() const;

    friend bool operator<(const cNhanVienVP&, const cNhanVienVP&);
    friend bool operator<=(const cNhanVienVP&, const cNhanVienVP&);
    friend bool operator>(const cNhanVienVP&, const cNhanVienVP&);
    friend bool operator>=(const cNhanVienVP&, const cNhanVienVP&);
};

#endif