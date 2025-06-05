// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#pragma once
#ifndef _cTime
#define _cTime

#include <bits/stdc++.h>
using namespace std;

class cTime {
private:
    int iGiay, iPhut, iGio;

public:
    cTime(int = 0, int = 0, int = 0);

    friend ostream& operator<<(ostream&, const cTime&);
    friend istream& operator>>(istream&, cTime&);

    friend cTime operator+(const cTime&, int);
    friend cTime operator+(int, const cTime&);
    friend cTime operator-(const cTime&, int);

    cTime operator++(int);  // D++
    cTime operator++();     //++D
    cTime operator--(int);  // D--
    cTime operator--();     //--D
};

#endif