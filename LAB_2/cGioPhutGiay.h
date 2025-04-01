#pragma one
#ifndef _cGioPhutGiay
#define _cGioPhutGiay

#include <iostream>
using namespace std;

class cGioPhutGiay{
private:
    int iGiay, iPhut, iGio;

public:
    cGioPhutGiay(int = 0, int = 0, int = 0);
    
    bool valid() const;
    void Nhap();
    void Xuat() const;
    cGioPhutGiay TinhCongThemMotGiay() const;
};

#endif