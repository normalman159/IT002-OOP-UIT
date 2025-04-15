// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#pragma one
#ifndef _cDaThuc
#define _cDaThuc

#include "cDonThuc.h"

class cDaThuc: private cDonThuc{
private:
    cDonThuc* A;
    int n;
public:
    cDaThuc();
    cDaThuc(int);
    ~cDaThuc();
    void Nhap();
    void Xuat() const;
    double TinhGiaTri(double) const;

    friend cDaThuc operator+(const cDaThuc&, const cDaThuc&);
    friend cDaThuc operator-(const cDaThuc&, const cDaThuc&);

    cDonThuc& operator[](int);
    const cDonThuc& operator[](int) const;
};

#endif