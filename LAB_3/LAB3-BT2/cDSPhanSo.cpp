// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cDSPhanSo.h"

cDSPhanSo::cDSPhanSo(int N){
    A = new cPhanSo[N];
    n = N;
}
void cDSPhanSo::input(){
    for (int i = 0; i < n; i++){
        cin >> A[i];
    }
}
cPhanSo cDSPhanSo::Tong() const{
    cPhanSo ans;
    for (int i = 0; i < n; i++){
        ans += A[i];
    }   
    return ans;
}
cPhanSo cDSPhanSo::PhanSoMAX() const{
    cPhanSo ans(-1e6, 1);
    for (int i=0; i < n; i++){
        if (ans < A[i]) ans = A[i];
    }
    return ans;
}
cPhanSo cDSPhanSo::PhanSoMIN() const{
    cPhanSo ans(1e6, 1);
    for (int i=0; i < n; i++){
        if (ans > A[i]) ans = A[i];
    }
    return ans;
}
cPhanSo cDSPhanSo::TuSoNtoLonNhat() const{
    int pos = 0;
    for (int i = 0; i < n; i++){
        if (A[i].TuSoLaNto()){
            pos = (A[i].getTS() >= A[pos].getTS()) ? i : pos;
        }
    }
    return A[pos];
}
void cDSPhanSo::SapXepTangDan(){
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if (A[i] > A[j]) swap(A[i], A[j]);
        }
    }
}
void cDSPhanSo::SapXepGiamDan(){
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if (A[i] < A[j]) swap(A[i], A[j]);
        }
    }
}
cPhanSo& cDSPhanSo::operator[](int index){
    return A[index]; 
}