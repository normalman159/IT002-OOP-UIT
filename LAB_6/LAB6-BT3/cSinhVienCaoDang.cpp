// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cSinhVienCaoDang.h"

cSinhVienCaoDang::cSinhVienCaoDang() : cSinhVien() {
    DiemTotNghiep = 0.0;
}

void cSinhVienCaoDang::Nhap() {
    cSinhVien::Nhap();
    cout << "Nhap diem tot nghiep: ";
    cin >> DiemTotNghiep;

    if (!DuDKTN()) demSLKhongDuDKTN++;
}

void cSinhVienCaoDang::Xuat() const {
    cSinhVien::Xuat();
    cout << "Diem tot nghiep: " << DiemTotNghiep << '\n';
}

char cSinhVienCaoDang::LoaiSinhVien() {
    return '1';
}

bool cSinhVienCaoDang::DuDKTN() const {
    return (SoTinhChi >= 120 && DTB >= 5.0 && DiemTotNghiep >= 5.0);
}

double cSinhVienCaoDang::getDiemTotNghiep() const {
    return DiemTotNghiep;
}

int cSinhVienCaoDang::demSLKhongDuDKTN = 0;

int cSinhVienCaoDang::getDemSLKhongDuDKTN() {
    return demSLKhongDuDKTN;
}