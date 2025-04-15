// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#pragma one
#ifndef _cArray
#define _cArray

#include <bits/stdc++.h>
using namespace std;

class cArray{
private:
    int n;
    int* A;
public:
    cArray();
    cArray(int);
    void Nhap();
    void Xuat() const;
    int TuanSuat(int) const;
    bool isTangDan() const;
    int SoNguyenTo() const;
    void SapXepTangDan();

    int& operator[](int);
};

#endif