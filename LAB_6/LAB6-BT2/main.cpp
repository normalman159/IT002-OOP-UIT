// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cDSGiaoDich.cpp"
#include "cGiaoDich.cpp"
#include "cGiaoDichChungCu.cpp"
#include "cGiaoDichDat.cpp"
#include "cGiaoDichNhaPho.cpp"

int main() {
    cDSGiaoDich ds;
    ds.Nhap();
    ds.getDEM();

    cout << "Trung binh thanh tien chung cu: " << ds.TBThanhTienChungCu() << '\n';
    cout << ".........................................!\n";

    const cGiaoDich* q = ds.GDNhaPhoGTCaoNhat();
    if (q) {
        cout << "Giao dich nha pho co gia tri cao nhat!\n";
        q->Xuat();
    } else {
        cout << "Khong co giao dich nha pho trong danh sach\n";
    }
    cout << ".........................................!\n";

    cout << "Danh sach cac giao dich!\n";
    ds.Xuat();
}