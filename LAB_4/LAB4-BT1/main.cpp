// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cSoPhuc.h"
#include "XulyClassSoPhuc.cpp"

int main(){
    cSoPhuc A, B;
    cin >> A >> B;

    cout << "\n--- Tong hai so phuc A + B ---\n";
    cout << (A + B);

    cout << "\n--- Hieu hai so phuc A - B ---\n";
    cout << (A - B);

    cout << "\n--- Tich hai so phuc A * B ---\n";
    cout << (A * B);

    cout << "\n--- Thuong hai so phuc A / B ---\n";
    cout << (A / B);

    cout << "\n--- So sanh hai so phuc A va B ---\n";
    if (A == B) {
        cout << "A bang B\n";
    } else {
        cout << "A khac B\n";
    }
}