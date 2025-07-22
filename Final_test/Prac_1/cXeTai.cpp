#include "cXeTai.h"

int cXeTai::DEM = 0;

int cXeTai::getDEM() {
    return DEM;
}

cXeTai::cXeTai() : cXe(), TrongTaiChuyenCho(0), NamDangKiem(0) {
    DEM++;
}

void cXeTai::Nhap() {
    cXe::Nhap();
    cout << "Trong tai chuyen cho: "; cin >> TrongTaiChuyenCho;
    cout << "Nam dang kiem: "; cin >> NamDangKiem;
    cout << "Muc am luong (65dB - 115db): "; cin >> AmLuongPhatRa;
    if (2025 - NamDangKiem <= 7) TinhTrangDangKiem = 1;
}

void cXeTai::Xuat() const {
    cXe::Xuat();
    cout << "Trong tai chuyen cho: " << TrongTaiChuyenCho << '\n';
    cout << "Nam dang kiem: " << NamDangKiem << '\n';
}

string cXeTai::DiChuyen() const {
    return "Di lan ngoai cung, toc do thap hon";
}

string cXeTai::PhatAmThanh() const {
    return "HONK HONK";
}

double cXeTai::TinhDienTichBaoQuanh() const {
    return ChieuDai * ChieuRong + ChieuDai * 0.4 + ChieuRong * 0.8;
}