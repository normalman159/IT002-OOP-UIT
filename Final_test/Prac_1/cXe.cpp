#include "cXe.h"

cXe::cXe() {
    TenXe = "";
    ChieuDai = 0;
    ChieuRong = 0;
    AmLuongPhatRa = 0;
    TinhTrangDangKiem = false;
}

void cXe::Nhap() {
    cout << "Ten xe: "; cin >> TenXe;
    cout << "Chieu dai: "; cin >> ChieuDai;
    cout << "Chieu rong: "; cin >> ChieuRong;
}

void cXe::Xuat() const {
    cout << "Ten xe: " << TenXe << '\n';
    cout << "Chieu dai: " << ChieuDai << '\n';
    cout << "Chieu rong: " << ChieuRong << '\n';
    cout << "Am luong (DB): " << AmLuongPhatRa << '\n';
    cout << "Tieng am thanh: " << PhatAmThanh() << '\n';
    cout << "Di chuyen: " << DiChuyen() << '\n';
    cout << "Dien tich bao quanh: " << TinhDienTichBaoQuanh() << '\n';    
}

bool cXe::KiemTraDangKiem() const {
    return TinhTrangDangKiem;
}

int cXe::getAmLuongPhatRa() const {
    return AmLuongPhatRa;
}