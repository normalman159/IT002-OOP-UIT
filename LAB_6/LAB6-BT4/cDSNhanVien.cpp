// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cDSNhanVien.h"

cDSNhanVien::cDSNhanVien() : p(NULL), n(0) {}

void cDSNhanVien::Nhap() {
    cout << "Nhap so luong nhan vien: ";
    cin >> n;
    p = new cNhanVien *[n];
    int choice;
    for (int i = 0; i < n; i++) {
        cout << "Chon loai nhan vien (1. Lap trinh vien, 2. Tester): ";
        cin >> choice;
        if (choice == 1)
            p[i] = new cDEV;
        else
            p[i] = new cTester;
        p[i]->Nhap();
        cout << ".........................................!\n";
    }
}

void cDSNhanVien::Xuat() const {
    cout << "Danh sach nhan vien:\n";
    cout << "So luong lap trinh vien: " << cDEV::getDEM() << '\n';
    cout << "So luong tester: " << cTester::getDEM() << '\n';
    for (int i = 0; i < n; i++) {
        p[i]->Xuat();
        cout << ".........................................!\n";
    }
}

double cDSNhanVien::getLuongTB() const {
    double tong = 0.0;
    for (int i = 0; i < n; i++) {
        tong += p[i]->getLuong();
    }
    return tong / n;
}

void cDSNhanVien::dsNhanVienCoLuongThapHonTB() const {
    double luongTB = getLuongTB();
    cout << "Danh sach nhan vien co luong thap hon trung binh\n";
    for (int i = 0; i < n; i++) {
        if (p[i]->getLuong() < luongTB) {
            p[i]->Xuat();
            cout << ".........................................!\n";
        }
    }
}

const cNhanVien *cDSNhanVien::NhanVienCoLuongThapNhat() const {
    if (n == 0) return NULL;
    const cNhanVien *ans = p[0];
    for (int i = 1; i < n; i++) {
        if (p[i]->getLuong() < ans->getLuong()) {
            ans = p[i];
        }
    }
    return ans;
}

const cNhanVien *cDSNhanVien::NhanVienCoLuongCaoNhat() const {
    if (n == 0) return NULL;
    const cNhanVien *ans = p[0];
    for (int i = 1; i < n; i++) {
        if (p[i]->getLuong() > ans->getLuong()) {
            ans = p[i];
        }
    }
    return ans;
}

const cNhanVien *cDSNhanVien::NhanVienDevCoLuongCaoNhat() const {
    const cNhanVien *ans = NULL;
    for (int i = 0; i < n; i++) {
        if (p[i]->LoaiNV() == '0') {
            if (ans == NULL || p[i]->getLuong() > ans->getLuong()) {
                ans = p[i];
            }
        }
    }
    return ans;
}

const cNhanVien *cDSNhanVien::NhanVienTesterCoLuongThapNhat() const {
    const cNhanVien *ans = NULL;
    for (int i = 0; i < n; i++) {
        if (p[i]->LoaiNV() == '1') {
            if (ans == NULL || p[i]->getLuong() < ans->getLuong()) {
                ans = p[i];
            }
        }
    }
    return ans;
}