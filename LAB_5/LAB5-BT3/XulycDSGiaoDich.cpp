// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cDSGiaoDich.h"

cDSGiaoDich::cDSGiaoDich() : p(NULL), n(0) {}

cDSGiaoDich::cDSGiaoDich(int N) {
    n = N;
    p = new cGiaoDich*[n];
}

void cDSGiaoDich::Nhap() {
    cout << "Hay nhap so luong giao dich: ";
    cin >> n;
    cout << "...................................!\n";
    p = new cGiaoDich*[n];
    int choice;
    for (int i = 0; i < n; i++) {
        cout << "Nhap vao giao dich thu " << i + 1 << "!\n";
        cout << "Nhap vao loai giao dich (1. Tien - 2. Vang): ";
        cin >> choice;
        if (choice == 1) {
            p[i] = new cGiaoDichTien;
            p[i]->Nhap();
        } else {
            p[i] = new cGiaoDichVang;
            p[i]->Nhap();
        }
        cout << "...................................!\n";
    }
}

void cDSGiaoDich::Xuat() const {
    cout << "So luong giao dich: " << n << '\n';
    for (int i = 0; i < n; i++) {
        cout << "Giao dich thu " << i + 1 << "!\n";
        p[i]->Xuat();
        cout << "...................................!\n";
    }
}

const cGiaoDich* cDSGiaoDich::GiaoDichVangThanhTienLonNhat() const {
    cGiaoDich* ANS = NULL;
    int        i   = 0;
    for (; i < n; i++) {
        if (p[i]->LoaiGiaoDich() == 1) {
            ANS = p[i];
            break;
        }
    }
    if (ANS == NULL) return NULL;
    i++;
    for (; i < n; i++) {
        if (p[i]->LoaiGiaoDich() == 1) {
            ANS = (p[i]->ThanhTien() > ANS->ThanhTien()) ? p[i] : ANS;
        }
    }

    return ANS;
}

const cGiaoDich* cDSGiaoDich::GiaoDichTienEuroThapNhat() const {
    cGiaoDich* ANS = NULL;
    int        i   = 0;
    for (; i < n; i++) {
        if (p[i]->LoaiGiaoDich() == 0) {
            ANS = p[i];
            break;
        }
    }
    if (ANS == NULL) return NULL;
    i++;
    for (; i < n; i++) {
        if (p[i]->LoaiGiaoDich() == 0) {
            ANS = (p[i]->ThanhTien() < ANS->ThanhTien()) ? p[i] : ANS;
        }
    }

    return ANS;
}

void cDSGiaoDich::DSGiaoDichTrenMotTy() const {
    cout << "Danh sach cac giao dich tren 1 ty! \n";
    for (int i = 0; i < n; i++) {
        if (p[i]->ThanhTien() >= 1e6) {
            p[i]->Xuat();
        }
    }
}