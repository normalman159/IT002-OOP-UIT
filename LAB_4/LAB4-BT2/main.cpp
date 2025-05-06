// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cPhanSo.h"
#include "XulyClassPhanSo.cpp"

int main(){
    cPhanSo ps1, ps2;
    
    cout << "Nhap phan so thu nhat:\n";
    cin >> ps1;
    
    cout << "Nhap phan so thu hai:\n";
    cin >> ps2;
    
    cout << "Phan so thu nhat: " << ps1;
    cout << "Phan so thu hai: " << ps2;
    
    cout << "Tong hai phan so: " << ps1 + ps2;
    
    cout << "Hieu hai phan so: " << ps1 - ps2;

    cout << "Tich hai phan so: " << ps1 * ps2;

    cout << "Thuong hai phan so: " << ps1 / ps2;
    
    cout << "Kiem tra cac phep so sanh:\n";
    cout << "ps1 < ps2: " << (ps1 < ps2 ? "Dung" : "Sai") << '\n';
    cout << "ps1 > ps2: " << (ps1 > ps2 ? "Dung" : "Sai") << '\n';
    cout << "ps1 == ps2: " << (ps1 == ps2 ? "Dung" : "Sai") << '\n';
    cout << "ps1 >= ps2: " << (ps1 >= ps2 ? "Dung" : "Sai") << '\n';
    cout << "ps1 <= ps2: " << (ps1 <= ps2 ? "Dung" : "Sai") << '\n';
    return 0;
}