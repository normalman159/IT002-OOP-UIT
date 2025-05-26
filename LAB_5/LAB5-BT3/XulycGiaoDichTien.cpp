// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cGiaoDichTien.h"


cGiaoDichTien::cGiaoDichTien() : cGiaoDich() {
    LoaiTien = -1;
    TiGia    = 0;
}

bool cGiaoDichTien::isGiaoDichEuro() const {
    return LoaiTien == 3;
}

void cGiaoDichTien::Nhap() {
    cGiaoDich::Nhap();
    cout << "Nhap loai tien (1. VND, 2. USD, 3. Euro): ";
    cin >> LoaiTien;
    cout << "Nhap ti gia cua loai tien (Neu la VND, nhap 1): ";
    cin >> TiGia;
}

void cGiaoDichTien::Xuat() const {
    cGiaoDich::Xuat();
    cout << "Xuat loai tien (1. VND, 2. USD, 3. Euro): " << LoaiTien << "\n";
    cout << "Xuat ti gia: " << TiGia << "\n";
}

double cGiaoDichTien::ThanhTien() const {
    return SoLuong * DonGia * TiGia;
}

char cGiaoDichTien::LoaiGiaoDich() const {
    return 0;
}
