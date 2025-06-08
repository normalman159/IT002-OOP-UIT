// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cDEV.h"

cDEV::cDEV() : cNhanVien(), SoGioLamThem(0.0) {
    DEM++;
}

void cDEV::Nhap() {
    cNhanVien::Nhap();
    cout << "Nhap so gio lam them: ";
    cin >> SoGioLamThem;
}

void cDEV::Xuat() const {
    cNhanVien::Xuat();
    cout << "Loai nhan vien: Lap trinh vien\n";
    cout << "So gio lam them: " << SoGioLamThem << '\n';
}

double cDEV::getLuong() const {
    return LuongCoBan + SoGioLamThem * 200000;
}

char cDEV::LoaiNV() const {
    return '0';
}

int cDEV::DEM = 0;

int cDEV::getDEM() {
    return DEM;
}