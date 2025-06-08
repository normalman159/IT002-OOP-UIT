// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cDSSinhVien.h"

cDSSinhVien::cDSSinhVien() : p(NULL), n(0) {}

void cDSSinhVien::Nhap() {
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    p = new cSinhVien*[n];
    int choice;
    for (int i = 0; i < n; i++) {
        cout << "Hay chon loai sinh vien! (1. Cao Dang, 2. Dai Hoc): ";
        cin >> choice;
        if (choice == 1) {
            p[i] = new cSinhVienCaoDang;
        } else {
            p[i] = new cSinhVienDaiHoc;
        }
        p[i]->Nhap();
        cout << "...................................!\n";
    }
}

void cDSSinhVien::Xuat() const {
    cout << "Xuat danh sach cac sinh vien!\n";
    for (int i = 0; i < n; i++) {
        p[i]->Xuat();
        cout << "...................................!\n";
    }
}

void cDSSinhVien::DSDuDKTN() const {
    bool fl = 0;
    for (int i = 0; i < n; i++) {
        if (p[i]->DuDKTN()) {
            p[i]->Xuat();
            fl = 1;
            cout << "...................................!\n";
        }
    }
    if (!fl) {
        cout << "Khong co sinh vien nao du dieu kien tot nghiep!\n";
    }
}

void cDSSinhVien::DSKDuDKTN() const {
    bool fl = 0;
    for (int i = 0; i < n; i++) {
        if (!p[i]->DuDKTN()) {
            p[i]->Xuat();
            fl = 1;
            cout << "...................................!\n";
        }
    }
    if (!fl) {
        cout << "Khong co sinh vien nao khong du dieu kien tot nghiep!\n";
        cout << "...................................!\n";
    }
}

void cDSSinhVien::SoLuongSinhVienKDuDKTN() const {
    cout << "So luong sinh vien khong du dieu kien tot nghiep:\n";
    cout << "Sinh vien Dai Hoc: " << cSinhVienDaiHoc::getDemSLKhongDuDKTN() << '\n';
    cout << "Sinh vien Cao Dang: " << cSinhVienCaoDang::getDemSLKhongDuDKTN() << '\n';
    cout << "...................................!\n";
}

const cSinhVien* cDSSinhVien::SinhVienCaoDangDTBCaoNhat() const {
    const cSinhVien* ans = NULL;
    double           DTB = 0;
    for (int i = 0; i < n; i++) {
        if (p[i]->LoaiSinhVien() == '1' && p[i]->getDTB() > DTB) {
            DTB = p[i]->getDTB();
            ans = p[i];
        }
    }
    return ans;
}

const cSinhVien* cDSSinhVien::SinhVienDaiHocDTBCaoNhat() const {
    const cSinhVien* ans = NULL;
    double           DTB = 0;
    for (int i = 0; i < n; i++) {
        if (p[i]->LoaiSinhVien() == '0' && p[i]->getDTB() > DTB) {
            DTB = p[i]->getDTB();
            ans = p[i];
        }
    }
    return ans;
}