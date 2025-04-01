#include "cSoPhuc.h"
#include <bits/stdc++.h>

cSoPhuc::cSoPhuc(double x, double y) : iThuc(x), iAo(y) {}

void cSoPhuc::Nhap(){
    cout << "Hay nhap phan thuc: "; cin >> iThuc;
    cout << "Hay nhap phan ao: "; cin >> iAo;
}
void cSoPhuc::Xuat() const{
    cout << iThuc << (iAo >= 0 ? " +" : "") << iAo << "i\n";
}
cSoPhuc cSoPhuc::Tong(const cSoPhuc& A) const{
    return cSoPhuc(iThuc + A.iThuc, iAo + A.iAo);
}
cSoPhuc cSoPhuc::Hieu(const cSoPhuc& A) const{
    return cSoPhuc(iThuc - A.iThuc, iAo - A.iAo);
}
cSoPhuc cSoPhuc::Tich(const cSoPhuc& A) const{
    return cSoPhuc(iThuc * A.iThuc - iAo * A.iAo, iThuc * A.iAo + iAo * A.iThuc);
}
cSoPhuc cSoPhuc::Thuong(const cSoPhuc& A) const{
    double mau = A.iThuc * A.iThuc + A.iAo * A.iAo;
    if (mau == 0) return cSoPhuc(DBL_MAX, DBL_MAX); //TH khong the chia
    return cSoPhuc((iThuc * A.iThuc + iAo * A.iAo) / mau, (iAo * A.iThuc - iThuc * A.iAo) / mau);
}

int main(){
    cSoPhuc A(-5,2), B;
    cout << "So phuc A: "; A.Xuat();
    cout << "So phuc B: "; B.Xuat();

    cout << "Nhap so phuc B!\n";
    B.Nhap();

    cSoPhuc Tong = A.Tong(B);
    cout << "Tong: "; Tong.Xuat();

    cSoPhuc Hieu = A.Hieu(B);
    cout << "Hieu: "; Hieu.Xuat();

    cSoPhuc Tich = A.Tich(B);
    cout << "Tich: "; Tich.Xuat();

    cSoPhuc Thuong = A.Thuong(B);
    cout << "Thuong: "; Thuong.Xuat();
    
    return 0;
}