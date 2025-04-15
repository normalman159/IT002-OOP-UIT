// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include <bits/stdc++.h>

using namespace std;

struct PhanSo
{
    int ts, ms;
    PhanSo(int ts = 0, int ms = 1){
        this->ts = ts, this->ms = ms;
        this->Rutgon();
    }

    void Rutgon()
    {
        int UCLN = __gcd(this->ts, this->ms);
        this->ts /= UCLN, this->ms /= UCLN;
        if (this->ms < 0){
            this->ts = -this->ts;
            this->ms = -this->ms;
        }
    }

    PhanSo operator+(const PhanSo &B) const
    {
        return PhanSo(this->ts * B.ms + this->ms * B.ts, this->ms * B.ms);
    }

    PhanSo operator-(const PhanSo &B) const
    {
        return PhanSo(this->ts * B.ms - this->ms * B.ts, this->ms * B.ms);
    }

    PhanSo operator*(const PhanSo &B) const
    {
        return PhanSo(this->ts * B.ts, this->ms * B.ms);
    }

    PhanSo operator/(const PhanSo &B) const
    {
        if (B.ts == 0){ //Truong hop khong the tinh thuong.
            return PhanSo(0,1);
        }
        return PhanSo(this->ts * B.ms, this->ms * B.ts);
    }

    friend ostream& operator<<(ostream &os, PhanSo &A){
        if (A.ts % A.ms == 0){
            os << A.ts/A.ms;
        }
        else os << A.ts << "/" << A.ms;
        return os;
    }
};

void input(PhanSo &A, PhanSo &B){
    do{
        cout << "Hay nhap vao tu so thu nhat: "; cin >> A.ts;
        cout << "Hay nhap vao mau so thu nhat: "; cin >> A.ms;
        if (A.ms == 0) cout << "Mau so khong duoc bang 0, vui long nhap lai!\n"; 
    }while(A.ms == 0);

    do{
        cout << "Hay nhap vao tu so thu hai: "; cin >> B.ts;
        cout << "Hay nhap vao mau so thu hai: "; cin >> B.ms;
        if (B.ms == 0) cout << "Mau so khong duoc bang 0, vui long nhap lai!\n"; 
    }while(B.ms == 0);
}

int main()
{   
    PhanSo A, B;
    input(A,B);
    PhanSo tong = A + B;
    PhanSo hieu = A - B;
    PhanSo tich = A * B;
    PhanSo thuong = A/B;

    cout << "Tong hai phan so la: " << tong << '\n';
    cout << "Hieu hai phan so la: " << hieu << '\n';
    cout << "Tich hai phan so la: " << tich << '\n';

    if (thuong.ts == 0 && thuong.ms == 1){
        cout << "Khong the tinh thuong!!";
    }
    else cout << "Thuong hai phan so la: " << thuong;

    return 0;
}