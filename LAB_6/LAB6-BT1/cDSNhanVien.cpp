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
        cout << "Hay chon loai nhan vien! (1. Van Phong, 2. San xuat): ";
        cin >> choice;
        if (choice == 1) {
            p[i] = new cNhanVienVanPhong;
        } else {
            p[i] = new cNhanVienSanXuat;
        }
        p[i]->Nhap();
        cout << "...................................!\n";
    }
}

void cDSNhanVien::Xuat() const {
    cout << "Xuat danh sach cac nhan vien!\n";
    for (int i = 0; i < n; i++) {
        p[i]->Xuat();
        cout << "...................................!\n";
    }
}

double cDSNhanVien::TongLuong() const {
    double ans;
    for (int i = 0; i < n; i++) {
        ans += p[i]->ThanhLuong();
    }
    return ans;
}

const cNhanVien *cDSNhanVien::NhanVienLuongThapNhat() const {
    const cNhanVien *ans = p[0];
    for (int i = 1; i < n; i++) {
        if (ans->ThanhLuong() > p[i]->ThanhLuong()) ans = p[i];
    }
    return ans;
}

const cNhanVien *cDSNhanVien::NhanVienVPTuoiCaoNhat() const {
    const cNhanVien *ans = NULL;
    for (int i = 0; i < n; i++) {
        if (p[i]->LoaiNhanVien() == '1') {
            ans = p[i];
            break;
        }
    }
    if (ans == NULL) return NULL;
    for (int i = 0; i < n; i++) {
        if (p[i]->LoaiNhanVien() != '1') continue;
        if (stoll(ans->getNamSinh()) < stoll(p[i]->getNamSinh())) ans = p[i];
    }
    return ans;
}
