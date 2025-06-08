// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cSinhVien.h"

cSinhVien::cSinhVien() : MSSV(""), HoVaTen(""), DiaChi(""), SoTinhChi(0), DTB(0.0) {}

void cSinhVien::Nhap() {
    cout << "Nhap MSSV: ";
    cin >> MSSV;
    cout << "Nhap ho va ten: ";
    cin >> HoVaTen;
    cout << "Nhap dia chi: ";
    cin >> DiaChi;
    cout << "Nhap so tin chi: ";
    cin >> SoTinhChi;
    cout << "Nhap diem trung binh: ";
    cin >> DTB;
}

void cSinhVien::Xuat() const {
    cout << "MSSV: " << MSSV << '\n';
    cout << "Ho va ten: " << HoVaTen << '\n';
    cout << "Dia chi: " << DiaChi << '\n';
    cout << "So tin chi: " << SoTinhChi << '\n';
    cout << "Diem trung binh: " << DTB << '\n';
}

double cSinhVien::getDTB() const {
    return DTB;
}