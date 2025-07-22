#pragma once
#ifndef _cXeTai
#define _cXeTai

#include "cXe.h"

class cXeTai : public cXe {
private:
    int TrongTaiChuyenCho, NamDangKiem;
    static int DEM;
public:
    cXeTai();
    void Nhap() override;
    void Xuat() const override;
    string DiChuyen() const override;
    string PhatAmThanh() const override;
    double TinhDienTichBaoQuanh() const override;
    static int getDEM();
};

#endif