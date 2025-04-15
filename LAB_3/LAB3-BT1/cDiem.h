// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#pragma one
#ifndef _cDiem
#define _cDiem

#include <bits/stdc++.h>
using namespace std;

class cDiem{
private:    
    double X, Y;
public:
    cDiem(double = 0, double = 0);
    ~cDiem();
    void setX(double);
    void setY(double);
    double getX() const;
    double getY() const;
    void setXY(double, double);
    void Nhap();
    void Xuat() const;
    double TinhKhoangCach(const cDiem&) const;
    void TinhTien(double, double);
    void Quay(double);
};

#endif