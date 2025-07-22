#include "cDSHoatDong.h"

cDSHoatDong::cDSHoatDong() : n(0), p(NULL) {}

void cDSHoatDong::Nhap() {
    cin >> n;
    p = new cHoatDong*[n];
    string Loai;
    for (int i = 0; i < n; i++) {
        cin >> Loai;
        if (Loai == "ClassSession") p[i] = new cClassSession;
        else if (Loai == "Meeting") p[i] = new cMeeting;
        else if (Loai == "SelfStudy") p[i] = new cSelfStudy;
        p[i]->Nhap();
    }
}

void cDSHoatDong::XuatHoatDongBuoiSang() const{
    cout << "=== Buoi sang ===\n";
    for (int i = 0; i < n; i++){
        if (p[i]->getBuoi() == "Sang") p[i]->Xuat();
    }
}

void cDSHoatDong::XuatHoatDongBuoiChieu() const{
    cout << "=== Buoi chieu ===\n";
    for (int i = 0; i < n; i++){
        if (p[i]->getBuoi() == "Chieu") p[i]->Xuat();
    }
}

void cDSHoatDong::XuatHoatDongBuoiToi() const{
    cout << "=== Buoi toi ===\n";
    for (int i = 0; i < n; i++){
        if (p[i]->getBuoi() == "Toi") p[i]->Xuat();
    }
}


void cDSHoatDong::Xuat() const {
    cout << "--- Thong tin hoat dong va diem uu tien ---\n";
    for (int i = 0; i < n; i++){
        if (p[i]->LoaiHoatDong() == '0') p[i]->Xuat();
    }
    for (int i = 0; i < n; i++){
        if (p[i]->LoaiHoatDong() == '1') p[i]->Xuat();
    }
    for (int i = 0; i < n; i++){
        if (p[i]->LoaiHoatDong() == '2') p[i]->Xuat();
    }

    cout << "--- Danh sach hoat dong theo buoi ---\n";
    XuatHoatDongBuoiSang();
    XuatHoatDongBuoiChieu();
    XuatHoatDongBuoiToi();
}

const cHoatDong* cDSHoatDong::HoatDongBuoiSangCaoNhat() const {
    cHoatDong* ans = NULL;
    for (int i = 0; i < n; i++) {
        if (p[i]->getBuoi() == "Sang") {
            if (ans == NULL || p[i]->getPriority() > ans->getPriority()) {
                ans = p[i];
            }
        }
    }
    return ans;
}


const cHoatDong* cDSHoatDong::HoatDongBuoiChieuCaoNhat() const {
    cHoatDong* ans = NULL;
    for (int i = 0; i < n; i++) {
        if (p[i]->getBuoi() == "Chieu") {
            if (ans == NULL || p[i]->getPriority() > ans->getPriority()) {
                ans = p[i];
            }
        }
    }
    return ans;
}

const cHoatDong* cDSHoatDong::HoatDongBuoiToiCaoNhat() const {
    cHoatDong* ans = NULL;
    for (int i = 0; i < n; i++) {
        if (p[i]->getBuoi() == "Toi") {
            if (ans == NULL || p[i]->getPriority() > ans->getPriority()) {
                ans = p[i];
            }
        }
    }
    return ans;
}
