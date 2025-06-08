// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cTESTER.h"

cTester::cTester() : cNhanVien(), SoLoi(0) {
    DEM++;
}

void cTester::Nhap() {
    cNhanVien::Nhap();
    cout << "Nhap so loi: ";
    cin >> SoLoi;
}

void cTester::Xuat() const {
    cNhanVien::Xuat();
    cout << "Loai nhan vien: Tester\n";
    cout << "So loi: " << SoLoi << '\n';
}

double cTester::getLuong() const {
    return LuongCoBan + SoLoi * 50000;
}

char cTester::LoaiNV() const {
    return '1';
}

int cTester::DEM = 0;

int cTester::getDEM() {
    return DEM;
}