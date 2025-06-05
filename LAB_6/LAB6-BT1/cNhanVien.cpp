// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cNhanVien.h"

cNhanVien::cNhanVien() : HoTen(""), NamSinh(""), Luong(0) {}

void cNhanVien::Nhap() {
    cout << "Nhap ho va ten: ";
    cin >> HoTen;
    cout << "Nhap nam sinh: ";
    cin >> NamSinh;
    cout << "Nhap luong cua nhan vien: ";
    cin >> Luong;
}

void cNhanVien::Xuat() const {
    cout << "Ho va ten: " << HoTen << '\n';
    cout << "Nam sinh: " << NamSinh << '\n';
    cout << "Luong: " << Luong << '\n';
}