// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cGiaoDich.h"

#include "cGiaoDichChungCu.h"
#include "cGiaoDichDat.h"
#include "cGiaoDichNhaPho.h"

cGiaoDich::cGiaoDich() : MaGiaoDich(""), NgayGiaoDich(""), DonGia(0), DienTich(0) {}

void cGiaoDich::Nhap() {
    cout << "Nhap ma giao dich: ";
    cin >> MaGiaoDich;
    cout << "Nhap ngay giao dich: ";
    cin >> NgayGiaoDich;
    cout << "Nhap don gia: ";
    cin >> DonGia;
    cout << "Nhap dien tich (met vuong): ";
    cin >> DienTich;
}

void cGiaoDich::Xuat() const {
    cout << "Ma giao dich: " << MaGiaoDich << '\n';
    cout << "Ngay giao dich: " << NgayGiaoDich << '\n';
    cout << "Don gia: " << DonGia << '\n';
    cout << "Dien tich (met vuong): " << DienTich << '\n';
}