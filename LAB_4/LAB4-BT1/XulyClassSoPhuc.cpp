// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cSoPhuc.h"

cSoPhuc::cSoPhuc(double x, double y) : a(x), b(y) {}

cSoPhuc operator+(const cSoPhuc& A, const cSoPhuc& B){
    return cSoPhuc(A.a + B.a, A.b + B.b);
}

cSoPhuc operator-(const cSoPhuc& A, const cSoPhuc& B){
    return cSoPhuc(A.a - B.a, A.b - B.b);
}

cSoPhuc operator*(const cSoPhuc& A, const cSoPhuc& B){
    return cSoPhuc(A.a * B.a - A.b * B.b, A.a * B.b + A.b * B.a);
}

cSoPhuc operator/(const cSoPhuc& A, const cSoPhuc& B){
    return cSoPhuc((A.a * B.a + A.b * B.b)/(B.a * B.a + B.b * B.b), (A.b * B.a - A.a * B.b)/(B.a * B.a + B.b * B.b));
}

bool operator==(const cSoPhuc& A, const cSoPhuc& B){
    return A.a == B.a && A.b == B.b;
}

bool operator!=(const cSoPhuc& A, const cSoPhuc& B){
    return !(A==B);
}

ostream& operator<<(ostream& os, const cSoPhuc& A){
    return os << A.a << " + " << A.b << "i\n";
}

istream& operator>>(istream& is, cSoPhuc& A){
    cout << "Hay nhap phan thuc: "; is >> A.a;
    cout << "Hay nhap phan ao: "; is >> A.b;
    return is;
}