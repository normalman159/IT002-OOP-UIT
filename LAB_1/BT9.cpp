#include <bits/stdc++.h>

using namespace std;

bool ktraKitu(const string &x){
    for (auto ch : x){
        if (!(('a' <= ch && ch <= 'z') ||('A' <= ch && ch <= 'Z') || ch == ' ' )) return 0;
    }
    return 1;
}

bool ktraNgay(const pair<int,int> &x){
    if (x.first < 0 || x.second < 0 || x.first > 31 || x.second > 12) return 0;
    if (x.second == 2) return x.first <= 29;
    if (x.second == 4 || x.second == 6 || x.second == 9 || x.second == 11) return (x.first <= 30);
    return 1;
}

class tietKiem{
private:
    string loaiTietKiem, hoVaTen, CMND;
    double soTienGui;
    double laiSuat;

public:
    pair<int,int> ngayMo;
    bool isValid(){
        if (loaiTietKiem.size() > 10 || !ktraKitu(loaiTietKiem)) return 0;
        if (hoVaTen.size() > 30 || !ktraKitu(hoVaTen)) return 0;
        if (soTienGui <= 0) return 0;
        if (!ktraNgay(ngayMo)) return 0;
        return 1;
    }
    friend istream &operator>>(istream &is, tietKiem &TK){
        do{
            cout << "Hay nhap thong tin so tiet kiem!\n";
            cout << "Hay nhap loai tiet kiem: "; cin >> TK.loaiTietKiem;
            cout << "Hay nhap ho va ten chu so huu: "; cin >> TK.hoVaTen;
            cout << "Hay nhap CMND cua chu so huu: "; cin >> TK.CMND;
            cout << "Hay nhap ngay mo: "; cin >> TK.ngayMo.first >> TK.ngayMo.second;
            cout << "Hay nhap so tien gui: "; cin >> TK.soTienGui;

            if (!TK.isValid()){
                cout << "Thong tin khong hop le, hay nhap lai!\n";
            }
            cout << "..................................................\n";
        }while(!TK.isValid());
        return is;
    }
    friend ostream &operator<<(ostream& os, tietKiem &TK){
        cout << "Thong tin so tiet kiem: " << TK.loaiTietKiem << '\n';
        cout << "Thong tin ho va ten chu so huu: " << TK.hoVaTen << '\n';
        cout << "Thong tin CMND cua chu so huu: " << TK.CMND << '\n';
        cout << "Thong tin ngay mo: " << TK.ngayMo.first << "/" << TK.ngayMo.second << '\n';
        cout << "Thong tin so tien gui: " << TK.soTienGui << '\n';
        return os;
    }
    void capNhat(const double &DATA){
        laiSuat = DATA;
    }
    double tienLai() const {
        return laiSuat * soTienGui;
    }
};

void sapXep(tietKiem *FL, const int &n){
    auto compare = [](const tietKiem &a, const tietKiem &b){
        if (a.ngayMo.second != b.ngayMo.second) return a.ngayMo.second > b.ngayMo.second;
        return a.ngayMo.first > a.ngayMo.first;
    };
    sort(FL, FL + n, compare);
}

int main(){
    int n; cout << "Hay nhap so luong so tiet kiem: "; cin >> n;
    tietKiem *TK = new tietKiem[n];
    for (int i = 0; i < n; i++){
        cin >> TK[i];
    }
    int input;
    do{
        cout << "Hay chon yeu cau! "; cin >> input;
        cout << "1. Sap xep cac so tiet kiem!\n";
        cout << "2. Cap nhat lai suat!\n";
        cout << "3. Tinh toan tien lai\n";
        switch (input){
        case 0:
            cout << "BYE............\n";
            break;
        
        case 1:
            for (int i = 0; i < n; i++){
                cout << "So thu " << i+1 << ": " <<TK[i].ngayMo.first << "/" << TK[i].ngayMo.second << '\n';
            }
            break;

        case 2: {
            int choice;
            double laiSuat;
            cout << "Chon so muon cap nhat lai suat: "; cin >> choice;
            cout << "Lai suat moi: "; cin >> laiSuat;
            TK[choice].capNhat(laiSuat);
            break;
        }
        case 3: {
            int choice;
            cout << "Chon so muon tinh tien lai: "; cin >> choice;
            cout << "So tien lai: " << TK[choice].tienLai() << "\n";
            break;
        }
        default:
            break;
        }      
        cout << "..........................................\n";
    }while(input != 0);
    delete []TK;
    return 0;
}