// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#pragma one
#ifndef _cDSPhanSo
#define _cDSPhanSo

#include "cPhanSo.h"

class cDSPhanSo: private cPhanSo{
private:
    int n;
    cPhanSo* A;
public:
    cDSPhanSo(int = 0);
    void input();
    cPhanSo Tong() const;
    cPhanSo PhanSoMAX() const;
    cPhanSo PhanSoMIN() const;
    cPhanSo TuSoNtoLonNhat() const;

    void SapXepTangDan();
    void SapXepGiamDan();

    cPhanSo& operator[](int);
};

#endif