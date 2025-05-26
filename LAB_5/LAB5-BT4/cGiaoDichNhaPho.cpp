// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cGiaoDichNhaPho.h"

int cGiaoDichNhaPho::DEM = 0;

cGiaoDichNhaPho::cGiaoDichNhaPho() : cGiaoDich(), LoaiNha(""), DiaChi("") {
    DEM++;
}

void cGiaoDichNhaPho::Nhap() {
    cGiaoDich::Nhap();
    cout << "Nhap loai nha: ";
    cin >> LoaiNha;
    cout << "Nhap dia chi: ";
    cin >> DiaChi;
}

void cGiaoDichNhaPho::Xuat() const {
    cGiaoDich::Xuat();
    cout << "Loai nha: " << LoaiNha << '\n';
    cout << "Dia chi: " << DiaChi << '\n';
}

double cGiaoDichNhaPho::ThanhTien() const {
    if (LoaiNha == "cao cap") return DienTich * DonGia;
    return DienTich * DonGia * 0.9;
}

int cGiaoDichNhaPho::getDEM() {
    return DEM;
}

const char cGiaoDichNhaPho::getLoai() const{
    return '3';
}