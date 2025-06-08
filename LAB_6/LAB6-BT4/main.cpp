// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cDEV.cpp"
#include "cDSNhanVien.cpp"
#include "cNhanVien.cpp"
#include "cTESTER.cpp"

int main() {
    cDSNhanVien dsNhanVien;
    dsNhanVien.Nhap();
    dsNhanVien.Xuat();

    dsNhanVien.dsNhanVienCoLuongThapHonTB();

    const cNhanVien *nvThapNhat = dsNhanVien.NhanVienCoLuongThapNhat();
    if (nvThapNhat) {
        cout << "Nhan vien co luong thap nhat:\n";
        nvThapNhat->Xuat();
    } else {
        cout << "Khong co nhan vien trong danh sach.\n";
    }
    cout << ".........................................!\n";

    const cNhanVien *nvCaoNhat = dsNhanVien.NhanVienCoLuongCaoNhat();
    if (nvCaoNhat) {
        cout << "Nhan vien co luong thap nhat:\n";
        nvCaoNhat->Xuat();
    } else {
        cout << "Khong co nhan vien trong danh sach.\n";
    }
    cout << ".........................................!\n";

    const cNhanVien *nvDevCaoNhat = dsNhanVien.NhanVienDevCoLuongCaoNhat();
    if (nvDevCaoNhat) {
        cout << "Lap trinh vien co luong cao nhat:\n";
        nvDevCaoNhat->Xuat();
    } else {
        cout << "Khong co lap trinh vien trong danh sach.\n";
    }
    cout << ".........................................!\n";

    const cNhanVien *nvTesterThapNhat = dsNhanVien.NhanVienTesterCoLuongThapNhat();
    if (nvTesterThapNhat) {
        cout << "Tester co luong thap nhat:\n";
        nvTesterThapNhat->Xuat();
    } else {
        cout << "Khong co tester trong danh sach.\n";
    }
    cout << ".........................................!\n";

    return 0;
}