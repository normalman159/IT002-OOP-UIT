// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#pragma one
#ifndef _cDonThuc
#define _cDonThuc

#include <bits/stdc++.h>
using namespace std;

class cDonThuc{
private:
    double heSo;
    int soMu;
public:
    cDonThuc();
    cDonThuc(double, int);
    void Nhap();
    void Xuat() const;
    double TinhGiaTri(double) const;

    double getHeSo() const;
    int getSoMu() const;

    void setHeSo(double);
    void setSoMu(int);

    friend cDonThuc operator+(const cDonThuc&, const cDonThuc&);
    friend cDonThuc operator-(const cDonThuc&, const cDonThuc&);
};

#endif