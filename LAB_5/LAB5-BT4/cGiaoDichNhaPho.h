// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#pragma one
#ifndef _cGiaoDichNhaPho
#define _cGiaoDichNhaPho

#include "cGiaoDich.h"

class cGiaoDichNhaPho : public cGiaoDich {
private:
    static int DEM;
    string LoaiNha, DiaChi;

public:
    cGiaoDichNhaPho();
    void       Nhap();
    void       Xuat() const;
    double     ThanhTien() const;
    static int getDEM();
    const char getLoai() const;
};

#endif