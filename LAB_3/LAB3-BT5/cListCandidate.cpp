// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cListCandidate.h"

cListCandidate::cListCandidate() : n(0), A(NULL) {}
cListCandidate::cListCandidate(int N){
    n = N;
    A = new cCandidate[N];
}
cListCandidate::~cListCandidate() {
    delete[] A;
}
void cListCandidate::Nhap() {
    cout << "Nhap so luong thi sinh: "; cin >> n;
    cin.ignore();
    A = new cCandidate[n];
    for (int i = 0; i < n; ++i) {
        cout << "\nNhap thi sinh thu " << i + 1 << ":\n";
        A[i].Nhap();
    }
}
void cListCandidate::Xuat() const {
    for (int i = 0; i < n; ++i) {
        cout << "\nThi sinh thu " << i + 1 << ":\n";
        A[i].Xuat();
    }
}
void cListCandidate::DSDiemLonHon15() const {
    cout << "\nCac thi sinh co tong diem > 15:\n";
    for (int i = 0; i < n; ++i) {
        if (A[i].TongDiem() > 15) {
            A[i].Xuat();
        }
    }
}
void cListCandidate::SapXepGiamDan() {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (A[i].TongDiem() < A[j].TongDiem()) {
                swap(A[i], A[j]);
            }
        }
    }
}

