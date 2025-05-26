// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#pragma one
#ifndef _cGiaoDichTien
#define _cGiaoDichTien

#include "cGiaoDich.h"

class cGiaoDichTien : public cGiaoDich {
private:
    int    LoaiTien;
    double TiGia;

public:
    cGiaoDichTien();
    bool   isGiaoDichEuro() const;
    void   Nhap();
    void   Xuat() const;
    double ThanhTien() const;
    char   LoaiGiaoDich() const;
};

#endif