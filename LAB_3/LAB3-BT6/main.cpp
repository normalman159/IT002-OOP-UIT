// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cNhanVienVP.h"
#include "cNhanVienVP.cpp"
#include "cListNhanVienVP.h"
#include "cListNhanVienVP.cpp"

int main()
{
    cListNhanVienVP ds;
    cout << "\n--- So luong nhan vien khi khoi tao ---\n";
    cout << "So nhan vien: " << ds.getSoLuong() << '\n';

    cout << "\n--- Nhap vao cac nhan vien ---\n";
    ds.Nhap();

    cout << "\n--- Danh sach nhan vien ---n";
    ds.Xuat();

    cout << "\n--- Nhan vien co luong cao nhat ---\n";
    cNhanVienVP A = ds.TimLuongCaoNhat();
    A.Xuat();

    cout << "\nTong luong cong ty phai tra: " << ds.TongLuong() << endl;

    cout << "\n---Nhan vien co tuoi cao nhat ---\n";
    cNhanVienVP B = ds.TimTuoiCaoNhat();
    B.Xuat();

    cout << "\n--- Danh sach sau khi sap xep theo luong tang ---\n";
    ds.SapXepTangTheoLuong();
    ds.Xuat();

    return 0;
}