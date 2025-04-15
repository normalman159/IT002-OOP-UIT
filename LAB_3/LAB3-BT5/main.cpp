// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cCandidate.h"
#include "cCandidate.cpp"
#include "cListCandidate.h"
#include "cListCandidate.cpp"

int main() {
    cListCandidate danhSach;

    cout << "--- Nhap danh sach thi sinh ---\n";
    danhSach.Nhap();

    cout << "\n--- Danh sach cac thi sinh ---\n";
    danhSach.Xuat();

    cout << "\n--- Cac thi sinh co diem lon hon > 15 ---\n";
    danhSach.DSDiemLonHon15();

    cout << "\n--- Danh sach cac thi sinh sau khi sap xep giam dan theo tong diem ---\n";
    danhSach.SapXepGiamDan();
    danhSach.Xuat();

    return 0;
}