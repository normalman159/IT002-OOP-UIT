#include <bits/stdc++.h>

using namespace std;

bool ch(double x){
    return 0 <= x && x <= 10;
}

class Student{
private:
    double diemToan, diemVan, diemNgoaiNgu;
    string hoVaTen;
public:
    Student() : hoVaTen(""), diemToan(0), diemVan(0), diemNgoaiNgu(0) {}
    bool valid() const{
        return ch(diemNgoaiNgu) && ch(diemToan) && ch(diemVan);
    }
    double diemTrungBinh() const{
        return ((2*diemToan) + diemVan + diemNgoaiNgu)/4;
    }
    double getToan() const{
        return diemToan;
    }
    string phanLoai(){
        double dtb = this->diemTrungBinh();
        if (dtb >= 9) return "Xuat sac";
        if (dtb >= 8) return "Gioi";
        if (dtb >= 6.5) return "Kha";
        if (dtb >= 5) return "Trung binh";
        return "Yeu";
    }
    friend istream& operator>>(istream& is, Student& st){
        return is >> st.diemToan >> st.diemVan >> st.diemNgoaiNgu;
    }
};

int main(){
    int n; 
    cout << "So luong hoc sinh la: "; cin >> n;
    
    Student st[n];
    for (int i = 0; i < n;i++){
        do{
            cout << "Hay nhap diem toan, van, ngoai ngu cua hoc sinh thu " << i+1 << ": ";
            cin >> st[i];
            if (!st[i].valid()){
                cout << "Khong hop le, hay nhap lai!\n";
            }
        }while(!st[i].valid()); 
    }
    cout << "....................................\n";
    for (int i =0; i < n; i++){
        cout << "Diem trung binh va xep loai hoc sinh thu " << i+1 << " la: " << st[i].diemTrungBinh() << " " << st[i].phanLoai() << '\n';
    }

    double max_dtb = 0;
    for (int i =0; i < n; i++){
        max_dtb = fmax(max_dtb, st[i].diemTrungBinh());
    }
    cout << "Diem trung binh cao nhat la: " << max_dtb << '\n';

    double min_toan = 10;
    for (int i =0; i < n; i++){
        min_toan = fmax(min_toan, st[i].getToan());
    } 
    cout << "Diem toan thap nhat la: " << min_toan << '\n';

    return 0;
}