#include "cXeMay.h"

int cXeMay::DEM = 0;

int cXeMay::getDEM() {
    return DEM;
}

cXeMay::cXeMay() : cXe(), HangXe(""), NamDangKiem(0) {
    DEM++;
}

void cXeMay::Nhap() {
    cXe::Nhap();
    cout << "Nhap hang xe: "; cin >> HangXe;
    cout << "Nam dang kiem: "; cin >> NamDangKiem;
    cout << "Muc am luong (65dB - 115db): "; cin >> AmLuongPhatRa;
    if (2025 - NamDangKiem <= 5) TinhTrangDangKiem = 1;
}

void cXeMay::Xuat() const {
    cXe::Xuat();
    cout << "Hang xe: " << HangXe << '\n';
    cout << "Nam dang kiem: " << NamDangKiem << '\n';
}

string cXeMay::DiChuyen() const{
    return "Luot nhe tren duong voi toc do trung binh";
}

string cXeMay::PhatAmThanh() const {
    return "Beep beep";
}

double cXeMay::TinhDienTichBaoQuanh() const {
    return ChieuDai * ChieuRong + 0.5;
}

