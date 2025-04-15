// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cArray.h"

cArray::cArray() : A(NULL), n(0) {}
cArray::cArray(int N){
    A = new int[N];
    n = N;
}
void cArray::Nhap(){
    for (int i = 0; i < n; i++){
        cin >> A[i];
    }
}
void cArray::Xuat() const{
    if (A == NULL){
        cout << "Mang rong!\n";
        return;
    }
    for (int i = 0; i < n; i++){
        cout << A[i] << " ";
    }
    cout << '\n';
}
int cArray::TuanSuat(int X) const{
    int ans = 0;
    for (int i = 0; i < n; i++){
        if (A[i] == X) ans++;
    }
    return ans;
}
bool cArray::isTangDan() const{
    for (int i = 0; i < n-1; i++){
        if (A[i] > A[i+1]) return 0;
    }
    return 1;
}
int cArray::SoNguyenTo() const{
    auto ktraNT = [&](int X){
        if (X <= 1) return 0;
        if (X > 2 && !(X & 1)) return 0;
        for (int i = 2; i * i <= X; i++){
            if (X % i == 0) return 0;
        }
        return 1;
    };

    int ans = -1;
    for (int i = 0; i < n; i++){
        if (ktraNT(A[i])) ans = max(ans, A[i]);
    }
    return ans;
}
void cArray::SapXepTangDan(){
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if (A[i] > A[j]) swap(A[i], A[j]);
        }
    }
}
int& cArray::operator[](int index){
    return A[index];
}