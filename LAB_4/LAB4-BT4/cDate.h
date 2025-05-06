// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#pragma one
#ifndef _cDate
#define _cDate

#include <bits/stdc++.h>
using namespace std;

class cDate{
protected:
    int SoNgayTrongThang();
public:
    int D, M, Y;
    cDate();
    cDate(int);
    cDate(int, int);
    cDate(int, int, int);

    friend istream& operator>>(istream&, cDate&);
    friend ostream& operator<<(ostream&, const cDate&);
    friend cDate operator+(const cDate&, int);
    friend cDate operator+(int, const cDate&);
    friend cDate operator-(const cDate&, int);

    cDate operator++(int); //D++
    cDate operator++(); //++D
    cDate operator--(int); //D--
    cDate operator--(); //--D
};


#endif