// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cArray.h"
#include "cArray.cpp"

int main() {
    cout << "\n--- Khoi tao mang voi constructor mac dinh ---\n";
    cArray arr1;
    arr1.Xuat();
    
    int n;
    cout << "\n--- Khoi tao mang voi constructor co kich thuoc ---\n";
    cout << "Nhap so phan tu cua mang: "; cin >> n;
    cArray arr2(n);

    cout << "\n--- Nhap mang ---\n";
    arr2.Nhap();
    cout << "\n--- Xuat mang ---\n";
    arr2.Xuat();

    int x;
    cout << "\n--- Tan suat xuat hien ---\n";
    cout << "Nhap gia tri can kiem tra tan suat: "; cin >> x;
    cout << "So lan xuat hien cua " << x << " la: " << arr2.TuanSuat(x) << '\n';

    cout << "\n--- Kiem tra mang tang dan ---\n";
    cout << (arr2.isTangDan() ? "Mang tang dan.\n" : "Mang khong tang dan.\n");

    cout << "\n--- So nguyen to lon nhat trong mang ---\n";
    int maxPrime = arr2.SoNguyenTo();
    if (maxPrime != -1){
        cout << "So nguyen to lon nhat la: " << maxPrime << '\n';
    }
    else{
        cout << "Khong co so nguyen to trong mang.\n";
    }

    cout << "\n--- Sap xep mang tang dan ---\n";
    arr2.SapXepTangDan();
    cout << "Mang sau khi sap xep:\n";
    arr2.Xuat();

    return 0;
}
