// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cNhanVienSanXuat.h"

cNhanVienSanXuat::cNhanVienSanXuat() : cNhanVien(), LuongCoBan(0), SoSanPham(0) {}

void cNhanVienSanXuat::Nhap() {
    cNhanVien::Nhap();
    cout << "Nhap luong co ban: ";
    cin >> LuongCoBan;
    cout << "Nhap so luong san pham: ";
    cin >> SoSanPham;
}

void cNhanVienSanXuat::Xuat() const {
    cNhanVien::Xuat();
    cout << "Luong co ban: " << LuongCoBan << '\n';
    cout << "So luong san pham: " << SoSanPham << '\n';
}

double cNhanVienSanXuat::ThanhLuong() const {
    return (double)(LuongCoBan + SoSanPham * 5000);
}

char cNhanVienSanXuat::LoaiNhanVien() const {
    return '0';
}

string cNhanVienSanXuat::getNamSinh() const {
    return NamSinh;
}