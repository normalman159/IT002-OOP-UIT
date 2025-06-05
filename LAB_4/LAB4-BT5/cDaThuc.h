// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#pragma once
#ifndef _cDaThuc
#define _cDaThuc

#include "cDonThuc.h"

class cDaThuc : private cDonThuc {
private:
    cDonThuc* A;
    int       n;

public:
    cDaThuc();
    cDaThuc(int);
    ~cDaThuc();
    void   Nhap();
    void   Xuat() const;
    double TinhGiaTri(double) const;

    friend cDaThuc operator+(const cDaThuc&, const cDaThuc&);
    friend cDaThuc operator-(const cDaThuc&, const cDaThuc&);

    friend istream& operator>>(istream&, cDaThuc&);
    friend ostream& operator<<(ostream&, const cDaThuc&);

    cDonThuc&       operator[](int);
    const cDonThuc& operator[](int) const;
};

#endif