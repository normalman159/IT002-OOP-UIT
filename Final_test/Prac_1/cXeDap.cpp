#include "cXeDap.h"

int cXeDap::DEM = 0;

int cXeDap::getDEM() {
    return DEM;
}

cXeDap::cXeDap() : cXe() {
    TinhTrangDangKiem = 1;
    DEM++;
}

void cXeDap::Nhap() {
    cXe::Nhap();
    cout << "Muc am luong (70dB - 80db): "; cin >> AmLuongPhatRa;
}

string cXeDap::PhatAmThanh() const {
    return "Reng Reng";
}

string cXeDap::DiChuyen() const {
    return "Di cham, di lan rieng";
}

double cXeDap::TinhDienTichBaoQuanh() const {
    return ChieuDai * ChieuRong;
}