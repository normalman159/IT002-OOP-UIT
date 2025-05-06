// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cPhanSo.h"

cPhanSo::cPhanSo(int ts, int ms) {
    this->ts = ts;
    this->ms = ms;
    if (this->ts && this->ms) this->RutGon();
}

bool cPhanSo::isValid() const {
    return ms != 0;
}

void cPhanSo::RutGon(){
    int GCD = __gcd(ts,ms);
    ts/=GCD, ms/=GCD;
    if (ms < 0){
        ts = -ts, ms = -ms;
    }
}

istream& operator>>(istream& is, cPhanSo& A){
    do{
        cout << "Nhap lan luot tu so va mau so: "; is >> A.ts >> A.ms;
        if (!A.isValid())
        {
            cout << "Mau so khong duoc bang 0, hay nhap lai!\n";
        }
    } while (!A.isValid());
    A.RutGon();
    return is;
}

ostream& operator<<(ostream& os, const cPhanSo& A){
    return os << A.ts << "/" << A.ms << '\n';
}

cPhanSo operator+(const cPhanSo& A, const cPhanSo& B){
    return cPhanSo(A.ts * B.ms + A.ms * B.ts, A.ms * B.ms);    
}

cPhanSo operator-(const cPhanSo& A, const cPhanSo& B){
    return cPhanSo(A.ts * B.ms - A.ms * B.ts, A.ms * B.ms);    
}

cPhanSo operator*(const cPhanSo& A, const cPhanSo& B){
    return cPhanSo(A.ts * B.ts, A.ms * B.ms);    
}

cPhanSo operator/(const cPhanSo& A, const cPhanSo& B){
    return cPhanSo(A.ts * B.ms, A.ms * B.ts);    
}

bool operator<(const cPhanSo& A, const cPhanSo& B) {
    return (A.ts * B.ms) < (B.ts * A.ms);
}

bool operator>(const cPhanSo& A, const cPhanSo& B) {
    return (A.ts * B.ms) > (B.ts * A.ms);
}

bool operator==(const cPhanSo& A, const cPhanSo& B) {
    return (A.ts * B.ms) == (B.ts * A.ms);
}

bool operator>=(const cPhanSo& A, const cPhanSo& B) {
    return (A.ts * B.ms) >= (B.ts * A.ms);
}

bool operator<=(const cPhanSo& A, const cPhanSo& B) {
    return (A.ts * B.ms) <= (B.ts * A.ms);
}