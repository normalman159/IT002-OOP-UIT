// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cDate.h"
#include "XulyClassDate.cpp"

int main() {
    cDate A, B(15);

    cout << "\n--- Ngay thang nam khi khoi tao mac dinh ---\n";
    cout << "A: " << A;

    cout << "\n--- Ngay thang nam khi khoi tao voi 1 tham so (ngay) ---\n";
    cout << "B: " << B;

    cout << "\n--- Nhap vao ngay thang nam tu ban phim ---\n";
    cDate C;
    cin >> C;
    cout << "C sau khi nhap: " << C;

    cout << "\n--- Cong ngay cho A ---\n";
    cout << "A + 10 ngay: " << A + 10;

    cout << "\n--- Tru ngay cho A ---\n";
    cout << "A - 20 ngay: " << A - 20;

    cout << "\n--- Cong ngay cho Date bang toan tu + (int + Date) ---\n";
    cout << "5 + A: " << 5 + A;

    cout << "\n--- Hau to (++) ---\n";
    cDate D = B++;
    cout << "B sau khi ++: " << B;

    cout << "\n--- Tien to (++) ---\n";
    cDate E = ++B;
    cout << "(++B): " << E;
    cout << "B sau khi ++: " << B;

    cout << "\n--- Tien to (--) ---\n";
    cout << "B sau khi --: " << --B;

    return 0;
}


