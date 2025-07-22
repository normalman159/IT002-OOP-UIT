#include "cDSXe.h"

cDSXe::cDSXe() : p(NULL), n(0) {}

void cDSXe::Nhap(){
    cout << "So luong xe: "; cin >> n;
    p = new cXe*[n];
    int choice;
    for (int i = 0; i < n; i++){
        cout << "Nhap loai xe (1: Xe May, 2: Xe Tai, 3: Xe Dap): "; cin >> choice;
        if (choice == 1) {
            p[i] = new cXeMay();
        } 
        else if (choice == 2) {
            p[i] = new cXeTai();
        } 
        else{
            p[i] = new cXeDap();
        }
        p[i]->Nhap();
    }
}

void cDSXe::Xuat() const {
    for (int i = 0; i < n; i++) {
        p[i]->Xuat();
        cout << "------------------------\n";
    }
}

void cDSXe::SoLuongCacLoaiXe() const {
    cout << "So luong xe may: " << cXeMay::getDEM() << '\n';
    cout << "So luong xe tai: " << cXeTai::getDEM() << '\n';
    cout << "So luong xe dap: " << cXeDap::getDEM() << '\n';
}

void cDSXe::AmThanhCuaDoanDuong() const {
    for (int i = 0; i < n; i++) {
        cout << "Am thanh cua xe " << i + 1 << ": " << p[i]->PhatAmThanh() << '\n';
    }
}

void cDSXe::DanhSachKhongDangKiem() const {
    cout << "Danh sach xe khong dang kiem\n";
    bool fl = 0;
    for (int i = 0; i < n; i++) {
        if (!p[i]->KiemTraDangKiem()) {
            fl = 1;
            p[i]->Xuat();
            cout << "------------------------\n";
        }
    }
    if (!fl){
        cout << "Khong co xe khong dang kiem!\n" << "------------------------\n";
    } 
}

string cDSXe::MatDoDoanDuong() {
    double R = 0;
    for (int i = 0; i < n; i++) {
        R += p[i]->TinhDienTichBaoQuanh();
    }
    double d,r; cin >> d >> r;
    double T = R / (d * r);
    if (T < 0.3) return "Thong Thoang";
    if (T < 0.6) return "Hoi Dong";
    if (T < 0.8) return "Dong Xe";
    return "Rat Dong";
}

bool cDSXe::DoanDuongCoOnKhong() const {
    double TongDoOn = 0;
    for (int i = 0; i < n; i++){
        TongDoOn += p[i]->getAmLuongPhatRa();
    }
    TongDoOn/=n;
    return TongDoOn > 90.0;
}