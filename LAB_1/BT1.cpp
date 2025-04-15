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

void input(PhanSo &A){
    do{
        cout << "Hay nhap vao tu so: "; cin >> A.ts;
        cout << "Hay nhap vao mau so: "; cin >> A.ms;
        if (A.ms == 0) cout << "Mau so khong duoc bang 0, vui long nhap lai!\n"; 
    }while(A.ms == 0);
}

int getUCLN(int a, int b){
    return a == 0 ? b : getUCLN(b % a, a);
}

void rutGon(PhanSo &A){
    int UCLN = getUCLN(A.ts, A.ms);
    A.ts /= UCLN, A.ms /= UCLN;
}

void output(const PhanSo &A){
    cout << "Phan so sau khi duoc rut gon: " << A.ts << "/" << A.ms;
}

int main(){
    PhanSo A;
    input(A);
    rutGon(A);
    output(A);

    return 0;
}