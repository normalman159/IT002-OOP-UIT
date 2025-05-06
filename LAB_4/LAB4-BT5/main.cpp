// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cDonThuc.h"
#include "cDonThuc.cpp"
#include "cDaThuc.h"
#include "cDaThuc.cpp"

int main(){
    cDaThuc p1, p2;

    cout << "--- Nhap da thuc thu nhat ---\n";
    p1.Nhap();

    cout << "\n--- Nhap da thuc thu hai ---\n";
    p2.Nhap();

    cout << "\n--- Da thuc thu nhat ---\n";
    p1.Xuat();

    cout << "\n--- Da thuc thu hai ---\n";
    p2.Xuat();

    cDaThuc tong = p1 + p2;
    cDaThuc hieu = p1 - p2;

    cout << "\n--- Tong hai da thuc ---\n";
    tong.Xuat();

    cout << "\n--- Hieu hai da thuc ---\n";
    hieu.Xuat();

    double x;
    cout << "\nNhap gia tri x de tinh P(x): ";
    cin >> x;
    cout << "P(" << x << ") = " << p1.TinhGiaTri(x) << '\n';

    return 0;
}