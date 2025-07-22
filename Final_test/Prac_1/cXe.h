#pragma once
#ifndef _cXe
#define _cXe

#include <bits/stdc++.h>
using namespace std;

class cXe{
protected:
    string TenXe;
    double ChieuDai, ChieuRong;
    int AmLuongPhatRa;
    bool TinhTrangDangKiem;
public:
    cXe();
    virtual void Nhap();
    virtual void Xuat() const;
    virtual string DiChuyen() const = 0;
    virtual string PhatAmThanh() const = 0;
    virtual double TinhDienTichBaoQuanh() const = 0;
    bool KiemTraDangKiem() const;
    int getAmLuongPhatRa() const;
};

#endif