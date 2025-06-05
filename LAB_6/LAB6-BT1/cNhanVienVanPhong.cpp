// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cNhanVienVanPhong.h"

cNhanVienVanPhong::cNhanVienVanPhong() : cNhanVien(), SoNgayLamViec(0) {}

void cNhanVienVanPhong::Nhap() {
    cNhanVien::Nhap();
    cout << "Nhap so luong ngay lam viec: ";
    cin >> SoNgayLamViec;
}

void cNhanVienVanPhong::Xuat() const {
    cNhanVien::Xuat();
    cout << "So ngay lam viec: " << SoNgayLamViec << '\n';
}

double cNhanVienVanPhong::ThanhLuong() const {
    return (double)SoNgayLamViec * 100000;
}

char cNhanVienVanPhong::LoaiNhanVien() const {
    return '1';
}

string cNhanVienVanPhong::getNamSinh() const {
    return NamSinh;
}