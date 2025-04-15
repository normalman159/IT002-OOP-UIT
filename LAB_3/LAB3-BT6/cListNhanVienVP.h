// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#pragma one
#ifndef _cListNhanVienVP
#define _cListNhanVienVP

#include "cNhanVienVP.h"

class cListNhanVienVP: private cNhanVienVP{
private:
    int n;
    cNhanVienVP *A;
public:
    cListNhanVienVP();
    cListNhanVienVP(int);
    ~cListNhanVienVP();

    void Nhap();
    void Xuat() const;

    int getSoLuong() const;
    cNhanVienVP TimLuongCaoNhat() const;
    double TongLuong() const;
    cNhanVienVP TimTuoiCaoNhat() const;
    void SapXepTangTheoLuong();
};

#endif