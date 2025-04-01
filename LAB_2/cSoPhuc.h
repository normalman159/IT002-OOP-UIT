#pragma one
#ifndef _cSoPhuc
#define _cSoPhuc

#include <iostream>
using namespace std;

class cSoPhuc{
private:
    double iThuc, iAo;

public:
    cSoPhuc(double = 0, double = 0);

    void Nhap();
    void Xuat() const;
    cSoPhuc Tong(const cSoPhuc&) const;
    cSoPhuc Hieu(const cSoPhuc&) const;
    cSoPhuc Tich(const cSoPhuc&) const;
    cSoPhuc Thuong(const cSoPhuc&) const;
};

#endif