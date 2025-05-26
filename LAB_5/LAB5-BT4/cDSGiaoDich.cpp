// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cDSGiaoDich.h"

cDSGiaoDich::cDSGiaoDich() : p(NULL), n(0) {}

void cDSGiaoDich::Nhap() {
    cout << "Nhap so luong giao dich: ";
    cin >> n;
    p = new cGiaoDich *[n];
    for (int i = 0; i < n; i++) {
        int choice;
        cout << "Chon loai giao dich: 1. Chung cu, 2. Nha Dat, 3. Nha Pho: ";
        cin >> choice;
        if (choice == 1)
            p[i] = new cGiaoDichChungCu;

        else if (choice == 2)
            p[i] = new cGiaoDichDat;
        else
            p[i] = new cGiaoDichNhaPho;
        p[i]->Nhap();
        cout << ".........................................!\n";
    }
}

void cDSGiaoDich::Xuat() const {
    for (int i = 0; i < n; i++) {
        cout << "Giao dich thu " << i << "! \n";
        p[i]->Xuat();
        cout << ".........................................!\n";
    }
}

void cDSGiaoDich::getDEM() const {
    cout << "So luong giao dich Chung cu: " << cGiaoDichChungCu::getDEM() << '\n';
    cout << "So luong giao dich Dat: " << cGiaoDichDat::getDEM() << '\n';
    cout << "So luong giao dich Nha pho: " << cGiaoDichNhaPho::getDEM() << '\n';
    cout << ".........................................!\n";
}

double cDSGiaoDich::TBThanhTienChungCu() const {
    double ans = 0.0;
    int    dem = 0;
    for (int i = 0; i < n; i++) {
        if (p[i]->getLoai() == '1') {
            ans += p[i]->ThanhTien();
            dem++;
        }
    }
    if (dem == 0) return 0;
    return ans / dem;
}

const cGiaoDich *cDSGiaoDich::GDNhaPhoGTCaoNhat() const {
    cGiaoDich *ans = NULL;
    for (int i = 0; i < n; i++) {
        if (p[i]->getLoai() == '3') {
            if (ans == NULL) {
                ans = p[i];
                continue;
            }
            if (ans->ThanhTien() < p[i]->ThanhTien()) ans = p[i];
        }
    }
    return ans;
}