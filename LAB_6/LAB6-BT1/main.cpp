// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cDSNhanVien.cpp"
#include "cNhanVien.cpp"
#include "cNhanVienSanXuat.cpp"
#include "cNhanVienVanPhong.cpp"

int main() {
    cDSNhanVien dsnv;
    dsnv.Nhap();

    dsnv.Xuat();

    cout << "Tong luong cua tat ca nhan vien: " << dsnv.TongLuong() << '\n';
    cout << "...................................!\n";

    const cNhanVien* NV_1 = dsnv.NhanVienLuongThapNhat();
    cout << "Thong tin nhan vien co luong thap nhat!\n";
    NV_1->Xuat();
    cout << "...................................!\n";
    
    const cNhanVien* NV_2 = dsnv.NhanVienVPTuoiCaoNhat();
    if (NV_2 == NULL)
        cout << "Khong ton tai nhan vien van phong!\n";
    else {
        cout << "Thong tin nhan vien van phong co tuoi cao nhat!\n";
        NV_2->Xuat();
    }
}