// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#pragma one
#ifndef _cGiaoDichDat
#define _cGiaoDichDat

#include "cGiaoDich.h"

class cGiaoDichDat : public cGiaoDich {
private:
    static int DEM;
    string LoaiDat;

public:
    cGiaoDichDat();
    void       Nhap();
    void       Xuat() const;
    double     ThanhTien() const;
    static int getDEM();
    const char getLoai() const;
};

#endif