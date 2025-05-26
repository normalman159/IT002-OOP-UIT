// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "XulycDSGiaoDich.cpp"
#include "XulycGiaoDich.cpp"
#include "XulycGiaoDichTien.cpp"
#include "XulycGiaoDichVang.cpp"
#include "cDSGiaoDich.h"
#include "cGiaoDich.h"
#include "cGiaoDichTien.h"
#include "cGiaoDichVang.h"

int main() {
    cDSGiaoDich A;

    A.Nhap();
    A.Xuat();

    const cGiaoDich* GD_1 = A.GiaoDichVangThanhTienLonNhat();
    cout << "Giao dich vang co thanh tien lon nhat\n";
    if (GD_1 == NULL) {
        cout << "Khong ton tai giao dich vang!\n";
    } else {
        GD_1->Xuat();
    }
    cout << "...................................!\n";

    cout << "Giao dich tien Euro co thanh tien lon nhat\n";
    const cGiaoDich* GD_2 = A.GiaoDichTienEuroThapNhat();
    if (GD_2 == NULL) {
        cout << "Khong ton tai giao dich Euro!\n";
    } else {
        GD_2->Xuat();
    }
    cout << "...................................!\n";

    A.DSGiaoDichTrenMotTy();

    return 0;
}