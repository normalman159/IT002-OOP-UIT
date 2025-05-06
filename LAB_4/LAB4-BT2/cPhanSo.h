// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#pragma one
#ifndef _cPhanSo
#define _cPhanSo

#include <bits/stdc++.h>
using namespace std;

class cPhanSo{
private:
    int ts,ms;
protected:
    bool isValid() const;
    void RutGon();

public:
    cPhanSo(int = 0, int = 1);

    friend istream& operator>>(istream&, cPhanSo&);
    friend ostream& operator<<(ostream&, const cPhanSo&);
    friend cPhanSo operator+(const cPhanSo&, const cPhanSo&);
    friend cPhanSo operator-(const cPhanSo&, const cPhanSo&);
    friend cPhanSo operator*(const cPhanSo&, const cPhanSo&);
    friend cPhanSo operator/(const cPhanSo&, const cPhanSo&);
    friend bool operator<(const cPhanSo&, const cPhanSo&);
    friend bool operator>(const cPhanSo&, const cPhanSo&);
    friend bool operator==(const cPhanSo&, const cPhanSo&);
    friend bool operator>=(const cPhanSo&, const cPhanSo&);
    friend bool operator<=(const cPhanSo&, const cPhanSo&);
};

#endif