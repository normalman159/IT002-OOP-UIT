// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cTamGiac.h"
#include "cTamGiac.cpp"
#include "cDiem.h"
#include "cDiem.cpp"

int main(){
    cDiem A, B, C;
    cTamGiac tg1;
    cout << "Toa do tam giac 1: \n"; tg1.Xuat();
    cout << ".................................................\n";
    cout << "Nhap vao toa do cua tam giac 2: \n";
    A.Nhap(), B.Nhap(), C.Nhap();
    cTamGiac tg2(A,B,C), tg3;

    cout << "Toa do tam giac 2: \n"; tg2.Xuat();
    cout << ".................................................\n";
    cout << "Nhap vao toa do cua tam giac 3: \n";
    tg3.Nhap();
    cout << "Toa do tam giac 3: \n"; tg3.Xuat();
    cout << ".................................................\n";

    cout << "Loai tam giac 1: " << tg1.PhanLoaiTamGiac() << '\n';
    cout << "Loai tam giac 2: " << tg2.PhanLoaiTamGiac() << '\n';
    cout << "Loai tam giac 3: " << tg3.PhanLoaiTamGiac() << '\n';
    cout << ".................................................\n";

    cout << "Dien tich tam giac 1: " << tg1.TinhDienTich() << '\n';
    cout << "Dien tich tam giac 2: " << tg2.TinhDienTich() << '\n';
    cout << "Dien tich tam giac 3: " << tg3.TinhDienTich() << '\n';
    cout << ".................................................\n";

    cout << "Chu vi tam giac 1: " << tg1.TinhChuVi() << '\n';
    cout << "Chu vi tam giac 2: " << tg2.TinhChuVi() << '\n';
    cout << "Chu vi tam giac 3: " << tg3.TinhChuVi() << '\n';
    cout << ".................................................\n";

    tg3.TinhTien(3,4);
    cout << "Tinh tien tam giac 3 (dX = 3, dY = 4): \n"; tg3.Xuat();
    cout << ".................................................\n";
    
    tg2.PhongTo(2);
    cout << "Phong to tam giac 2 hai lab (x2): \n"; tg2.Xuat();
    cout << ".................................................\n";

    tg1.Quay(90);
    cout << "Xoay tam giac 1 90 do: \n"; tg1.Xuat();
    cout << ".................................................\n";
}