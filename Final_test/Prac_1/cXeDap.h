#pragma once
#ifndef _cXeDap
#define _cXeDap

#include "cXe.h"

class cXeDap : public cXe {
private:
    static int DEM;
public:
    cXeDap();
    void Nhap() override;
    string DiChuyen() const override;
    string PhatAmThanh() const override;
    double TinhDienTichBaoQuanh() const override;
    static int getDEM();
};  

#endif