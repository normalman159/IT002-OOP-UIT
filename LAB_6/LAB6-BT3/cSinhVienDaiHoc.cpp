// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cSinhVienDaiHoc.h"

cSinhVienDaiHoc::cSinhVienDaiHoc() : cSinhVien() {
    TenLuanVan = "";
    DiemLuanVan = 0;
}

void cSinhVienDaiHoc::Nhap() {
    cSinhVien::Nhap();
    cout << "Nhap ten luan van: ";
    cin.ignore();
    getline(cin, TenLuanVan);
    cout << "Nhap diem luan van: ";
    cin >> DiemLuanVan;

    if (!DuDKTN()) demSLKhongDuDKTN++;
}

void cSinhVienDaiHoc::Xuat() const {
    cSinhVien::Xuat();
    cout << "Ten luan van: " << TenLuanVan << '\n';
    cout << "Diem luan van: " << DiemLuanVan << '\n';
}

bool cSinhVienDaiHoc::DuDKTN() const {
    return (SoTinhChi >= 170 && DTB >= 5.0 && DiemLuanVan >= 5.0);
}

double cSinhVienDaiHoc::getDiemLuanVan() const {
    return DiemLuanVan;
}

char cSinhVienDaiHoc::LoaiSinhVien() {
    return '0';
}

int cSinhVienDaiHoc::demSLKhongDuDKTN = 0;

int cSinhVienDaiHoc::getDemSLKhongDuDKTN() {
    return demSLKhongDuDKTN;
}
