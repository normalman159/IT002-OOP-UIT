// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cTime.h"
#include "XulyClassTime.cpp"

int main(){
    cTime t1;
    cin >> t1;

    cout << "Thoi gian ban vua nhap: " << t1;

    int k;
    cout << "Nhap so giay muon cong them: ";
    cin >> k;

    cTime t2 = t1 + k;
    cout << "Thoi gian sau khi cong " << k << " giay: " << t2;

    cout << "Thoi gian sau khi cong truoc 1 giay: " << ++t1;
    cout << "Thoi gian sau khi cong sau 1 giay: " << t1++;

    cout << "Thoi gian hien tai sau cong sau: " << t1;

    cout << "Thoi gian sau khi tru truoc 1 giay: " << --t1;
    cout << "Thoi gian sau khi tru sau 1 giay: " << t1--;

    cout << "Thoi gian hien tai sau tru sau: " << t1;

    return 0;
}