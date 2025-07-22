#pragma once
#ifndef _cXeMay
#define _cXeMay

#include "cXe.h"

class cXeMay : public cXe {
private:
    static int DEM;
    string HangXe;
    int NamDangKiem;
public:
    cXeMay();
    void Nhap() override;
    void Xuat() const override;
    string DiChuyen() const override;
    string PhatAmThanh() const override;
    double TinhDienTichBaoQuanh() const override;
    static int getDEM();
};

#endif