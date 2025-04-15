// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cDSPhanSo.h"
#include "cPhanSo.h"
#include "cDSPhanSo.cpp"
#include "cPhanSo.cpp"

int main()
{
    int n = 0;
    cout << "--- Nhap so luong phan tu cua mang ---";
    cin >> n;
    cDSPhanSo danhSach(n);

    cout << "--- Danh sach phan so khi khoi tao ---" << '\n';
    for (int i = 0; i < n; i++){
        cout << "Phan so thu " << i + 1 << ": " << danhSach[i];
    }

    cout << "\n--- Nhap lan luot cac phan so ---" << '\n';
    for (int i = 0; i < n; i++){
        cin >> danhSach[i];
    }

    cout << "\n--- Tong cac phan so ---" << '\n';
    cout << "Tong cac phan so: " << danhSach.Tong();

    cout << "\n--- Phan so lon nhat ---" << '\n';
    cout << "Phan so lon nhat: " << danhSach.PhanSoMAX();

    cout << "\n--- Phan so nho nhat ---" << '\n';
    cout << "Phan so nho nhat: " << danhSach.PhanSoMIN();

    cout << "\n--- Phan so co tu so la so nguyen to lon nhat ---" << '\n';
    cout << "Phan so co tu so la so nguyen to lon nhat: " << danhSach.TuSoNtoLonNhat();

    cout << "\n--- Sap xep tang dan ---" << '\n';
    danhSach.SapXepTangDan();
    cout << "Danh sach sau khi sap xep tang dan:" << '\n';
    for (int i = 0; i < n; i++)
    {
        cout << "Phan so thu " << i + 1 << ": " << danhSach[i];
    }

    cout << "\n--- Sap xep giam dan ---" << '\n';
    danhSach.SapXepGiamDan();
    cout << "Danh sach sau khi sap xep giam dan:" << '\n';
    for (int i = 0; i < n; i++){
        cout << "Phan so thu " << i + 1 << ": " << danhSach[i];
    }

    return 0;
}