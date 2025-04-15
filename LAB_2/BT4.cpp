// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cGioPhutGiay.h"
#include <bits/stdc++.h>

cGioPhutGiay::cGioPhutGiay(int Giay, int Phut, int Gio) : iGiay(Giay), iPhut(Phut), iGio(Gio) {}
bool cGioPhutGiay::valid() const{
    return (iGiay >= 0 && iGiay < 60) && (iPhut >= 0 && iPhut < 60) && (iGio  >= 0 && iGio  < 24);
}
void cGioPhutGiay::Xuat() const{
    cout << iGiay << ":" << iPhut << ":" << iGio << '\n';
}
void cGioPhutGiay::Nhap(){
    do{
        cout << "Hay nhap vao gia tri giay: "; cin >> iGiay;
        cout << "Hay nhap vao gia tri phut: "; cin >> iPhut;
        cout << "Hay nhap vao gia tri gio: "; cin >> iGio;
        if (!this->valid()) cout << "Cac gia tri khong hop le! Hay nhap lai!\n";
    }while(!this->valid());
}
cGioPhutGiay cGioPhutGiay::TinhCongThemMotGiay() const{
    if (iGiay + 1 >= 60 && iPhut + 1 >= 60 && iGio +1 >= 24) return cGioPhutGiay(0,0,0);
    if (iGiay + 1 >= 60 && iPhut + 1 >= 60) return cGioPhutGiay(0,0,iGio + 1);
    if (iGiay + 1 >= 60) return cGioPhutGiay(0, iPhut + 1, iGio);
    return cGioPhutGiay(iGiay + 1, iPhut, iGio); 
}

int main(){
    cGioPhutGiay g1(30, 45, 12), g2(61,5,10), g3;

    cout << "Gio 2 co hop le? " << (g2.valid() ? "Co" : "Khong") << '\n';
    cout << "Gio 1: "; g1.Xuat();
    cout << "Gio 3 (khoi tao mac dinh): "; g3.Xuat();

    cout << "Nhap vao gio 3! \n"; g3.Nhap();
    cout << "Gio 3 (sau khi nhap): "; g3.Xuat();

    cGioPhutGiay g4 = g3.TinhCongThemMotGiay();
    cout << "Gio 4 (gio 3 tang them 1 giay): "; g4.Xuat();

    return 0;
}