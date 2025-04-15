// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include <bits/stdc++.h>

using namespace std;

struct PhanSo{
    int ts, ms;
    PhanSo() : ts(0), ms(1) {}
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

void timPhanSoLonNhat(PhanSo &A, PhanSo &B, PhanSo &ANS){
    if (A.ts * B.ms >= B.ts * A.ms){
        ANS = A;
    }
    else{
        ANS = B;
    }
}

void output(const PhanSo &A){
    cout << "Phan so lon nhat trong hai phan so la: " << A.ts << "/" << A.ms;
}

int main(){
    PhanSo A,B, ANS;
    input(A,B);
    timPhanSoLonNhat(A,B,ANS);
    output(ANS);

    return 0;
}