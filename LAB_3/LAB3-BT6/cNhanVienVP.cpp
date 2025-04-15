// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cNhanVienVP.h"

cNhanVienVP::cNhanVienVP() {
    ID = ten = "";
    NamSinh = 0;
    luong = 0;
}
void cNhanVienVP::Nhap() {
    cout << "Nhap ma NV: "; getline(cin, ID);
    cout << "Nhap ho ten: "; getline(cin, ten);
    cout << "Nhap nam sinh: "; cin >> NamSinh;
    cout << "Nhap luong: "; cin >> luong;
    cin.ignore();
}
void cNhanVienVP::Xuat() const {
    cout << "Ma NV: " << ID << "\n"; 
    cout << "Ten: " << ten << "\n";
    cout << "Nam sinh: " << NamSinh << "\n";
    cout << "Luong: " << luong << "\n";
}
double cNhanVienVP::getLuong() const {
    return luong;
}
int cNhanVienVP::getNamSinh() const {
    return NamSinh;
}
bool operator<(const cNhanVienVP& a, const cNhanVienVP& b) {
    return a.luong < b.luong;
}
bool operator<=(const cNhanVienVP& a, const cNhanVienVP& b) {
    return a.luong <= b.luong;
}
bool operator>(const cNhanVienVP& a, const cNhanVienVP& b) {
    return a.luong > b.luong;
}
bool operator>=(const cNhanVienVP& a, const cNhanVienVP& b) {
    return a.luong >= b.luong;
}