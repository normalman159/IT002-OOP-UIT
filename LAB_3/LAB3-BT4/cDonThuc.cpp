// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cDonThuc.h"

cDonThuc::cDonThuc() : heSo(0), soMu(0) {}

cDonThuc::cDonThuc(double hs, int n) : heSo(hs), soMu(n) {}
void cDonThuc::Nhap() {
    cout << "Nhap he so: "; cin >> heSo;
    cout << "Nhap soMu: "; cin >> soMu;
}
void cDonThuc::Xuat() const {
    if (soMu == 0) {
        cout << heSo;
    } else if (soMu == 1) {
        cout << heSo << "x";
    } else {
        cout << heSo << "x^" << soMu;
    }
}
double cDonThuc::TinhGiaTri(double x) const {
    return heSo * pow(x, soMu);
}
double cDonThuc::getHeSo() const {
    return heSo;
}
int cDonThuc::getSoMu() const {
    return soMu;
}
void cDonThuc::setHeSo(double hs) {
    heSo = hs;
}
void cDonThuc::setSoMu(int n) {
    soMu = n;
}
cDonThuc operator+(const cDonThuc& A, const cDonThuc& B){
    return cDonThuc(A.getHeSo() + B.getHeSo(), A.getSoMu());
}
cDonThuc operator-(const cDonThuc& A, const cDonThuc& B){
    return cDonThuc(A.getHeSo() - B.getHeSo(), A.getSoMu());
}