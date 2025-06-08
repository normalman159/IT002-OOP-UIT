// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cGiaoDichChungCu.h"

int cGiaoDichChungCu::DEM = 0;

cGiaoDichChungCu::cGiaoDichChungCu() : cGiaoDich() {
    MaCan = "";
    Tang = 0;
    DEM++;
}

void cGiaoDichChungCu::Nhap() {
    cGiaoDich::Nhap();
    cout << "Nhap ma can: ";
    cin >> MaCan;
    cout << "Nhap tang: ";
    cin >> Tang;
}

void cGiaoDichChungCu::Xuat() const {
    cGiaoDich::Xuat();
    cout << "Ma can: " << MaCan << '\n';
    cout << "Nhap tang: " << Tang << '\n';
}

double cGiaoDichChungCu::ThanhTien() const {
    if (Tang == 1) return DienTich * DonGia * 2;
    if (Tang >= 15) return DienTich * DonGia * 1.2;
    return DienTich * DonGia;
}

int cGiaoDichChungCu::getDEM() {
    return DEM;
}

const char cGiaoDichChungCu::getLoai() const{
    return '1';
}