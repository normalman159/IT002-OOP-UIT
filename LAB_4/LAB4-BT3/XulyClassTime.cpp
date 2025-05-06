// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cTime.h"

cTime::cTime(int Giay, int Phut, int Gio) : iGiay(Giay), iPhut(Phut), iGio(Gio) {}

istream& operator>>(istream& is, cTime& A){
    cout << "Nhap vao giay: "; is >> A.iGiay;
    cout << "Nhap vao phut: "; is >> A.iPhut;
    cout << "Nhap vao gio: "; is >> A.iGio;
    return is;
}

ostream& operator<<(ostream& os, const cTime& A){
    return os << A.iGiay << ":" << A.iPhut << ":" << A.iGio << '\n';
}

cTime operator+(const cTime& A, int time){
    cTime tmp = A;
    int tongGiay = tmp.iGio * 3600 + tmp.iPhut * 60 + tmp.iGiay + time;
    tmp.iGio = (tongGiay / 3600) % 24;
    tmp.iPhut = (tongGiay % 3600) / 60;
    tmp.iGiay = tongGiay % 60;
    return tmp;
}

cTime operator+(int time, const cTime& A){
    return A + time;
}

cTime operator-(const cTime& A, int time){
    cTime tmp = A;
    int tongGiay = tmp.iGio * 3600 + tmp.iPhut * 60 + tmp.iGiay - time;
    tmp.iGio = (tongGiay / 3600) % 24;
    tmp.iPhut = (tongGiay % 3600) / 60;
    tmp.iGiay = tongGiay % 60;
    return tmp;
}

cTime cTime::operator++(){
    return *this + 1;
}

cTime cTime::operator++(int){
    cTime tmp = *this;
    *this = *this + 1;
    return tmp;
}

cTime cTime::operator--(){
    return *this - 1;
}

cTime cTime::operator--(int){
    cTime tmp = *this;
    *this = *this - 1;
    return tmp;
}