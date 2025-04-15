// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#pragma one
#ifndef _cTamGiac
#define _cTamGiac

#include "cDiem.h"

class cTamGiac: private cDiem{
private:
    cDiem A, B, C;
public:
    cTamGiac();
    cTamGiac(const cDiem&, const cDiem&, const cDiem&);
    ~cTamGiac();
    void Nhap();
    void Xuat() const;
    string PhanLoaiTamGiac() const;
    double TinhDienTich() const;
    double TinhChuVi() const;
    void TinhTien(double, double);
    void PhongTo(double);
    void Quay(double);
};

#endif