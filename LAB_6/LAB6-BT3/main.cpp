// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cDSSinhVien.cpp"
#include "cSinhVien.cpp"
#include "cSinhVienCaoDang.cpp"
#include "cSinhVienDaiHoc.cpp"

int main() {
    cDSSinhVien dssv;
    dssv.Nhap();

    dssv.Xuat();

    cout << "Danh sach sinh vien du dieu kien tot nghiep:\n";
    dssv.DSDuDKTN();

    cout << "Danh sach sinh vien khong du dieu kien tot nghiep:\n";
    dssv.DSKDuDKTN();

    dssv.SoLuongSinhVienKDuDKTN();

    const cSinhVien* svCD = dssv.SinhVienCaoDangDTBCaoNhat();
    if (svCD != NULL) {
        cout << "Sinh vien cao dang co DTB cao nhat:\n";
        svCD->Xuat();
    } else {
        cout << "Khong co sinh vien cao dang nao!\n";
    }
    cout << ".........................................!\n";

    const cSinhVien* svDH = dssv.SinhVienDaiHocDTBCaoNhat();
    if (svDH != NULL) {
        cout << "Sinh vien dai hoc co DTB cao nhat:\n";
        svDH->Xuat();
    } else {
        cout << "Khong co sinh vien dai hoc nao!\n";
    }
    cout << ".........................................!\n";

    return 0;
}