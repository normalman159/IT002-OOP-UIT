// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cListNhanVienVP.h"

cListNhanVienVP::cListNhanVienVP() : n(0), A(NULL) {}

cListNhanVienVP::cListNhanVienVP(int N) {
    n = N;
    A = new cNhanVienVP[n];
}
cListNhanVienVP::~cListNhanVienVP() {
    delete[] A;
}
void cListNhanVienVP::Nhap() {
    cout << "Nhap so luong nhan vien: ";
    cin >> n;
    cin.ignore();
    A = new cNhanVienVP[n];
    for (int i = 0; i < n; ++i) {
        cout << "\nNhap nhan vien thu " << i + 1 << ":\n";
        A[i].Nhap();
    }
}
void cListNhanVienVP::Xuat() const {
    for (int i = 0; i < n; ++i) {
        A[i].Xuat();
    }
}
cNhanVienVP cListNhanVienVP::TimLuongCaoNhat() const {
    cNhanVienVP max = A[0];
    for (int i = 1; i < n; ++i) {
        if (A[i] > max) {
            max = A[i];
        }
    }
    return max;
}
double cListNhanVienVP::TongLuong() const {
    double tong = 0;
    for (int i = 0; i < n; ++i) {
        tong += A[i].getLuong();
    }
    return tong;
}
cNhanVienVP cListNhanVienVP::TimTuoiCaoNhat() const {
    cNhanVienVP giaNhat = A[0];
    for (int i = 1; i < n; ++i) {
        if (A[i].getNamSinh() < giaNhat.getNamSinh()) {
            giaNhat = A[i];
        }
    }
    return giaNhat;
}
void cListNhanVienVP::SapXepTangTheoLuong() {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (A[j] < A[i]) {
                swap(A[i], A[j]);
            }
        }
    }
}
int cListNhanVienVP::getSoLuong() const{
    return n;
}
