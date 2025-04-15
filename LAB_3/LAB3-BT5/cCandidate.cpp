// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cCandidate.h"

cCandidate::cCandidate(){
    Ten = ID = "";
    NamSinh = -1;
    dToan = dVan = dAnh = -1;
}
void cCandidate::Nhap() {
    cout << "Nhap ID: "; getline(cin, ID);
    cout << "Nhap Ten: "; getline(cin, Ten);
    cout << "Nhap Nam Sinh: "; cin >> NamSinh;
    cout << "Nhap diem Toan, Van, Anh: ";
    cin >> dToan >> dVan >> dAnh;
    cin.ignore();
}
void cCandidate::Xuat() const {
    cout << "ID: " << ID << ", Ten: " << Ten << ", Nam sinh: " << NamSinh << '\n';
    cout << "Diem: Toan = " << dToan << ", Van = " << dVan << ", Anh = " << dAnh << '\n';
    cout << "Tong diem: " << TongDiem() << '\n';
}
double cCandidate::TongDiem() const {
    return dToan + dVan + dAnh;
}
bool operator<=(const cCandidate& a, const cCandidate& b) {
    return a.TongDiem() <= b.TongDiem();
}
bool operator<(const cCandidate& a, const cCandidate& b) {
    return a.TongDiem() < b.TongDiem();
}
bool operator>=(const cCandidate& a, const cCandidate& b) {
    return a.TongDiem() >= b.TongDiem();
}
bool operator>(const cCandidate& a, const cCandidate& b) {
    return a.TongDiem() > b.TongDiem();
}
bool operator==(const cCandidate& a, const cCandidate& b) {
    return a.TongDiem() == b.TongDiem();
}
