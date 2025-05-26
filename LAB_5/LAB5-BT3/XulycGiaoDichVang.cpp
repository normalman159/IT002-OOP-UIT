// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cGiaoDichVang.h"

cGiaoDichVang::cGiaoDichVang() : cGiaoDich() {
    LoaiVang = "";
}

void cGiaoDichVang::Nhap() {
    cGiaoDich::Nhap();
    cout << "Nhap loai vang: ";
    cin >> LoaiVang;
}

void cGiaoDichVang::Xuat() const {
    cGiaoDich::Xuat();
    cout << "Xuat loai vang: " << LoaiVang << '\n';
}

double cGiaoDichVang::ThanhTien() const {
    return SoLuong * DonGia;
}

char cGiaoDichVang::LoaiGiaoDich() const {
    return 1;
}