// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include <bits/stdc++.h>

using namespace std;

const int LimN = 1e5 + 5;

int A[LimN], B[LimN];

int main(){
    int n1, n2; cin >> n1 >> n2;
    for (int i = 0; i < n1; i++) cin >> A[i];
    for (int i = 0; i < n2; i++) cin >> B[i];
    vector<int> pos; 
    int cnt = 0;
    for (int i = 0; i <= n2 - n1; i++){
        bool ch = 1;
        for (int j = 0; j < n1; j++){
            if (A[j] != B[i+j]){
                ch = 0; break;
            }
        }
        if (ch) {
            cnt++;
            pos.push_back(i);
        }   
    }
    cout << "So phan xuat hien la: " << cnt << "\n";
    cout << "Cac vi tri xuat hien la: ";
    for (auto x : pos){
        cout << x << " ";
    }
    return 0;
}