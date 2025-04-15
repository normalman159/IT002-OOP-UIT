// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#pragma one
#ifndef _cPhanSo
#define _cPhanSo

#include <iostream>
using namespace std;

class cPhanSo{
private:
    int iTu, iMau;

public:
    cPhanSo(int = 0, int = 1);
    bool valid() const;
    void Nhap();
    void Xuat() const;
    void Rutgon();
    cPhanSo Tong(const cPhanSo&) const;
    cPhanSo Hieu(const cPhanSo&) const;
    cPhanSo Tich(const cPhanSo&) const;
    cPhanSo Thuong(const cPhanSo&) const;
    int SoSanh(const cPhanSo&) const;
};

#endif