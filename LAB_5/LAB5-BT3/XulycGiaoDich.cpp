// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cGiaoDich.h"

cGiaoDich::cGiaoDich() {
    MaGiaoDich = NgayGiaoDich = "";
    SoLuong = DonGia = 0;
}

void cGiaoDich::Nhap() {
    cout << "Nhap ma giao dich: ";
    cin >> MaGiaoDich;
    cout << "Nhap ngay giao dich: ";
    cin >> NgayGiaoDich;
    cout << "Nhap don gia: ";
    cin >> DonGia;
    cout << "Nhap so luong: ";
    cin >> SoLuong;
}

void cGiaoDich::Xuat() const {
    cout << "Xuat ma giao dich: " << MaGiaoDich << "\n";
    cout << "Xuat ngay giao dich: " << NgayGiaoDich << "\n";
    cout << "Xuat don gia: " << DonGia << "\n";
    cout << "Xuat so luong: " << SoLuong << "\n";
}