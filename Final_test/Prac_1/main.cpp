#include "cDSXe.cpp"
#include "cXe.cpp"
#include "cXeDap.cpp"
#include "cXeMay.cpp"
#include "cXeTai.cpp"

int main() {
    cDSXe dsxe;
    dsxe.Nhap();
    cout << "------------------------\n";
    
    cout << "Xuat danh sach cac xe!\n";
    dsxe.Xuat();

    cout << "So luong cac loai xe!\n";
    dsxe.SoLuongCacLoaiXe();
    cout << "------------------------\n";

    cout << "Am thanh cua doan duong!\n";
    dsxe.AmThanhCuaDoanDuong();
    cout << "------------------------\n";

    cout << "Doan duong co on khong: " << (dsxe.DoanDuongCoOnKhong() ? "Co" : "Khong") << '\n';
    cout << "------------------------\n";

    cout << "Danh sach cac phuong tien khong dam bao dang kiem!\n";
    dsxe.DanhSachKhongDangKiem();
    cout << "------------------------\n";

    cout << "Mat do doan duong: " << dsxe.MatDoDoanDuong() << '\n';
}