// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cNhanVien.h"

cNhanVien::cNhanVien() : MaNV(""), HoVaTen(""), SoDienThoai(""), Email(""), Tuoi(0), LuongCoBan(0.0) {}

void cNhanVien::Nhap() {
    cout << "Nhap ma nhan vien: ";
    cin >> MaNV;
    cout << "Nhap ho va ten: ";
    cin >> HoVaTen;
    cout << "Nhap so dien thoai: ";
    cin >> SoDienThoai;
    cout << "Nhap email: ";
    cin >> Email;
    cout << "Nhap tuoi: ";
    cin >> Tuoi;
    cout << "Nhap luong co ban: ";
    cin >> LuongCoBan;
}

void cNhanVien::Xuat() const {
    cout << "Ma nhan vien: " << MaNV << '\n';
    cout << "Ho va ten: " << HoVaTen << '\n';
    cout << "So dien thoai: " << SoDienThoai << '\n';
    cout << "Email: " << Email << '\n';
    cout << "Tuoi: " << Tuoi << '\n';
    cout << "Luong co ban: " << LuongCoBan << '\n';
}
