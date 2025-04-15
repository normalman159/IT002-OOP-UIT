// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include <bits/stdc++.h>

using namespace std;

const double eps = 0.00001;

double cal_sin(double x){
    x = fmod(x, 2 * 3.14);
    double ans = x, tmp = x;
    int i = 1;
    while (fabs(tmp) > eps){
        tmp *= -(x*x)/((2*i)*(2*i+1));
        ans += tmp;
        i++;
    }
    return ans;
}

int main(){
    double x;
    cout << "Hay nhap gia tri x: "; cin >> x;
    cout << "Gia tri cua sin(x) la: " << cal_sin(x);

    return 0;
}