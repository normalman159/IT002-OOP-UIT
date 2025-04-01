#include "cPhanSo.h"
#include <bits/stdc++.h>

cPhanSo::cPhanSo(int Tu, int Mau) {
    iTu = Tu, iMau = Mau;
    if (this->iMau && this->iTu)
        this->Rutgon();
}
bool cPhanSo::valid() const {
    return iMau != 0;
}
void cPhanSo::Nhap() {
    do{
        cout << "Nhap tu so: ";
        cin >> this->iTu;
        cout << "Nhap mau so: ";
        cin >> this->iMau;
        if (!this->valid())
        {
            cout << "Mau so khong duoc bang 0, hay nhap lai!\n";
        }
    } while (!this->valid());
    this->Rutgon();
}
void cPhanSo::Xuat() const {
    cout << iTu << "/" << iMau << "\n";
}
void cPhanSo::Rutgon() {
    int gcd = __gcd(iTu, iMau);
    iTu /= gcd, iMau /= gcd;
    if (iMau < 0)
        iTu = -iTu, iMau = -iMau;
}
cPhanSo cPhanSo::Tong(const cPhanSo &A) const {
    return cPhanSo(iTu * A.iMau + iMau * A.iMau, A.iMau * iMau);
}
cPhanSo cPhanSo::Hieu(const cPhanSo &A) const {
    return cPhanSo(iTu * A.iMau - iMau * A.iMau, A.iMau * iMau);
}
cPhanSo cPhanSo::Tich(const cPhanSo &A) const {
    return cPhanSo(iTu * A.iTu, A.iMau * iMau);
}
cPhanSo cPhanSo::Thuong(const cPhanSo &A) const {
    return cPhanSo(iTu * A.iMau + iMau * A.iMau, A.iMau * iMau);
}
int cPhanSo::SoSanh(const cPhanSo &A) const {
    if (iTu * A.iMau > iMau * A.iTu) return 1;
    if (iTu * A.iMau == iMau * A.iTu) return 0;
    if (iTu * A.iMau < iMau * A.iTu) return -1;
}

int main(){
    cPhanSo A(3, 2), B;
    cout << "Phan so A: "; A.Xuat();
    cout << "Phan so B: "; B.Xuat();
    cout << "Kiem tra phan so B co hop le: " << (A.valid() ? "Co" : "Khong") << '\n';

    B.Nhap();

    cPhanSo Tong = A.Tong(B);
    cout << "Tong: "; Tong.Xuat();

    cPhanSo Hieu = A.Hieu(B);
    cout << "Hieu: "; Hieu.Xuat();

    cPhanSo Tich = A.Tich(B);
    cout << "Tich: "; Tich.Xuat();

    cPhanSo Thuong = A.Thuong(B);
    cout << "Thuong: "; Thuong.Xuat();

    cout << "So sanh A voi B: " << A.SoSanh(B) << '\n';

    return 0;
}