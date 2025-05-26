// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cDate.h"
#include <cTime>

time_t now = time(0);

cDate::cDate(){
    tm *ltm = localtime(&now);
    this->D = ltm->tm_mday;
    this->M = ltm->tm_mon+1;
    this->Y = ltm->tm_year + 1900;
}

cDate::cDate(int days){
    tm *ltm = localtime(&now);
    this->D = (days > 31 ? ltm->tm_mday : days);
    this->M = ltm->tm_mon+1;
    this->Y = ltm->tm_year + 1900;
}

cDate::cDate(int days, int months){
    tm *ltm = localtime(&now);
    this->D = (days > 31 ? ltm->tm_mday : days);
    this->M = (months > 31 ? ltm->tm_mon + 1 : months);
    this->Y = ltm->tm_year + 1900;
}

cDate::cDate(int days, int months, int years) : D(days), M(months), Y(years) {}

int cDate::SoNgayTrongThang(){
    int ans;
    switch (this->M){
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        ans = 31;
        break;
    case 4: case 6: case 9: case 11:
        ans = 30;
        break;
    case 2:
        ans = 28;
        break;
    }
    return ans;
}

istream& operator>>(istream& is, cDate& A){
    cout << "Hay nhap vao ngay: "; is >> A.D;
    cout << "Hay nhap vao thang: "; is >> A.M;
    cout << "Hay nhap vao nam: "; is >> A.Y;
    return is;
}

ostream& operator<<(ostream& os, const cDate& A){
    return os << A.D << "/" << A.M << "/" << A.Y << '\n';
}

cDate operator+(const cDate& A, int days){
    cDate tmp = A;
    tmp.D += days;
    while (tmp.D > tmp.SoNgayTrongThang()){
        tmp.D -= tmp.SoNgayTrongThang();
        tmp.M++;
        if (tmp.M > 12){
            tmp.Y++; tmp.M = 1;
        }
    }
    return tmp;
}

cDate operator+(int days, const cDate& A){
    return A + days;
}

cDate operator-(const cDate& A, int days){
    cDate tmp = A;
    tmp.D -= days;
    while (tmp.D <= 0){
        tmp.D += tmp.SoNgayTrongThang();
        tmp.M--;
        if (tmp.M < 1){
            tmp.Y--;
            tmp.M = 12;
        }
    }
    return tmp;
}

cDate cDate::operator++(int){
    cDate tmp = *this;
    *this = *this + 1;
    return tmp;
}

cDate cDate::operator++(){
    *this = *this + 1;
    return *this;
}

cDate cDate::operator--(){
    *this = *this - 1;
    return *this;
}

cDate cDate::operator--(int){
    cDate tmp = *this;
    *this = *this - 1;
    return tmp;
}