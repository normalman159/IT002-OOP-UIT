// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cDaThuc.h"

cDaThuc::cDaThuc() : A(NULL), n(0) {}
cDaThuc::cDaThuc(int N){
    A = new cDonThuc[N];
    n = N;
}
cDaThuc::~cDaThuc(){
    delete []A;
}
void cDaThuc::Nhap() {
    int n; cout << "Nhap so don thuc: ";
    cin >> n;
    this->n  = n;
    A = new cDonThuc[n];

    for (int i = 0; i < n; i++) {
        cout << "Nhap don thuc thu " << i + 1 << ":\n";
        A[i].Nhap();
    }
}
void cDaThuc::Xuat() const {
    cout << "So luong don thuc: " << n << '\n';
    cout << "Da thuc: ";
    for (int i = 0; i < n; ++i) {
        double heSo = A[i].getHeSo();
        int soMu = A[i].getSoMu();

        if (heSo >= 0) cout << " + ";
        if (heSo < 0) cout << " - ";

        double absHeSo = abs(heSo);
        if (absHeSo != 1 || soMu == 0) cout << absHeSo;
        if (soMu > 0) cout << "x";
        if (soMu > 1) cout << "^" << soMu;
    }
    cout << '\n';
}
double cDaThuc::TinhGiaTri(double x) const {
    double tong = 0;
    for (int i = 0; i < n; i++) {
        tong += A[i].TinhGiaTri(x);
    }
    return tong;
}
cDonThuc& cDaThuc::operator[](int index) {
    return A[index];
}
const cDonThuc& cDaThuc::operator[](int index) const {
    return A[index];
}
cDaThuc operator+(const cDaThuc& a, const cDaThuc& b) {
    cDaThuc ans(a.n + b.n);
    int k = 0;
    for (int i = 0; i < a.n; ++i) {
        ans[k++] = a[i];
    }
    for (int i = 0; i < b.n; ++i) {
        bool found = false;
        for (int j = 0; j < ans.n; ++j) {
            if (ans[j].getSoMu() == b[i].getSoMu()) {
                ans[j] = ans[j] + b[i];
                found = true;
                break;
            }
        }
        if (!found) {
            ans[k++] = b[i];
        }
    }
    return ans;
}
cDaThuc operator-(const cDaThuc& a, const cDaThuc& b){
    cDaThuc tmp = b;
    for (int i = 0; i < tmp.n; i++){
        tmp[i].setHeSo(-tmp[i].getHeSo());
    }
    return a + tmp;
}