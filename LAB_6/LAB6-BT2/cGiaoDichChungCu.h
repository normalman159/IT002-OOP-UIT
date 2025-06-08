// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#pragma once
#ifndef _cGiaoDichChungCu
#define _cGiaoDichChungCu

#include "cGiaoDich.h"

class cGiaoDichChungCu : public cGiaoDich {
private:
    static int DEM;
    string     MaCan;
    double     Tang;

public:
    cGiaoDichChungCu();
    void       Nhap();
    void       Xuat() const;
    double     ThanhTien() const;
    static int getDEM();
    const char getLoai() const;
};

#endif