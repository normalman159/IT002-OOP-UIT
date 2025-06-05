// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#pragma once
#ifndef _cPhanSo
#define _cPhanSo

#include <bits/stdc++.h>
using namespace std;

class cPhanSo {
private:
    int ts, ms;

public:
    cPhanSo(int = 0, int = 1);
    bool isValid() const;
    void RutGon();
    bool TuSoLaNto() const;
    int  getTS() const;

    friend istream& operator>>(istream&, cPhanSo&);
    friend ostream& operator<<(ostream&, const cPhanSo&);
    friend cPhanSo  operator+(const cPhanSo&, const cPhanSo&);
    friend void     operator+=(cPhanSo&, const cPhanSo&);
    friend bool     operator<(const cPhanSo&, const cPhanSo&);
    friend bool     operator>(const cPhanSo&, const cPhanSo&);
    friend bool     operator==(const cPhanSo&, const cPhanSo&);
    friend bool     operator>=(const cPhanSo&, const cPhanSo&);
    friend bool     operator<=(const cPhanSo&, const cPhanSo&);
};

#endif