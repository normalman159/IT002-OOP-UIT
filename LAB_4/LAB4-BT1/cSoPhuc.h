// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#pragma once
#ifndef _cSoPhuc
#define _cSoPhuc

#include <iostream>
using namespace std;

class cSoPhuc {
private:
    double a, b;

public:
    cSoPhuc(double = 0, double = 0);

    friend cSoPhuc operator+(const cSoPhuc&, const cSoPhuc&);
    friend cSoPhuc operator-(const cSoPhuc&, const cSoPhuc&);
    friend cSoPhuc operator*(const cSoPhuc&, const cSoPhuc&);
    friend cSoPhuc operator/(const cSoPhuc&, const cSoPhuc&);

    friend bool operator==(const cSoPhuc&, const cSoPhuc&);
    friend bool operator!=(const cSoPhuc&, const cSoPhuc&);

    friend ostream& operator<<(ostream&, const cSoPhuc&);
    friend istream& operator>>(istream&, cSoPhuc&);
};

#endif