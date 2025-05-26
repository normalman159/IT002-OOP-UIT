// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cGiaoDichDat.h"

int cGiaoDichDat::DEM = 0;

cGiaoDichDat::cGiaoDichDat() : cGiaoDich(), LoaiDat("") {
    DEM++;
}

void cGiaoDichDat::Nhap() {
    cGiaoDich::Nhap();
    cout << "Nhap loai dat: ";
    cin >> LoaiDat;
}

void cGiaoDichDat::Xuat() const {
    cGiaoDich::Xuat();
    cout << "Loai dat: " << LoaiDat << '\n';
}

double cGiaoDichDat::ThanhTien() const {
    if (LoaiDat == "A") return DienTich * DonGia * 1.5;
    return DienTich * DonGia;
}

int cGiaoDichDat::getDEM() {
    return DEM;
}

const char cGiaoDichDat::getLoai() const{
    return '2';
}