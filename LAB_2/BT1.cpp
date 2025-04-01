#include "cTime.h"
#include <bits/stdc++.h>

int daysOfMonth[] = {-1 ,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
cTime::cTime(int Ngay, int Thang, int Nam) : iNgay(Ngay), iThang(Thang), iNam(Nam) {}

bool cTime::valid() const {
    return 1 <= iNgay && iNgay <= 31 && 1 <= iThang && iThang <= 12;
}
void cTime::Nhap(){
    do{
        cout << "Hay nhap vao ngay: "; cin >> this->iNgay;
        cout << "Hay nhap vao thang: "; cin >> this->iThang;
        cout << "Hay nhap vao nam: "; cin >> this->iNam;
        if (!this->valid()){
            cout << "Ngay thang nam khong hop le, hay nhap lai!\n";
        }
    }while(!this->valid());
    cout << "Da nhap xong!\n";
}
void cTime::Xuat() const {
    cout << "Ngay/thang/nam (xuat cach 1): " << iNgay << "/" << iThang << "/" << iNam << '\n';
}
ostream& operator<<(ostream& os, const cTime& A){
    return os << "Ngay/thang/nam (xuat cach 2): " << A.iNgay << "/" << A.iThang << "/" << A.iNam << '\n';
}
cTime cTime::NgayThangNamTiepTheo() const {
    if (this->iNgay < daysOfMonth[this->iThang]){
        return cTime(this->iNgay + 1, this->iThang, this->iNam);
    }
    if (this->iThang < 12) return cTime(1, this->iThang + 1, this->iNam + 1); 
    return cTime(1,1, this->iNam + 1);
}

int main(){
    cTime A(25,4,2025), B;
    B.Nhap();
    if (B.valid()){
        cout << "Ngay thang nam hop le\n";
    }
    A.Xuat();
    B.Xuat();
    cTime C = A.NgayThangNamTiepTheo();
    cout << C;
    C.Xuat();

    return 0;
}