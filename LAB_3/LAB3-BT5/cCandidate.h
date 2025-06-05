// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#pragma once
#ifndef _cCandidate
#define _cCandidate

#include <bits/stdc++.h>
using namespace std;

class cCandidate {
private:
    int    NamSinh;
    string Ten, ID;
    double dToan, dVan, dAnh;

public:
    cCandidate();
    void   Nhap();
    void   Xuat() const;
    double TongDiem() const;

    friend bool operator<=(const cCandidate &, const cCandidate &);
    friend bool operator<(const cCandidate &, const cCandidate &);
    friend bool operator>=(const cCandidate &, const cCandidate &);
    friend bool operator>(const cCandidate &, const cCandidate &);
    friend bool operator==(const cCandidate &, const cCandidate &);
};

#endif