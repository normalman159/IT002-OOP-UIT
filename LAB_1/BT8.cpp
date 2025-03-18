#include <bits/stdc++.h>

using namespace std;

bool ktraKitu(const string &x){
    for (auto ch : x){
        if (!(('a' <= ch && ch <= 'z') ||('A' <= ch && ch <= 'Z'))) return 0;
    }
    return 1;
}

bool ktraThoiGian(const pair<int,int> &x){
    return 0<= x.first && x.first <= 23 && 0 <= x.second && x.second <= 59;
}

bool ktraNgay(const pair<int,int> &x){
    if (x.first < 0 || x.second < 0 || x.first > 31 || x.second > 12) return 0;
    if (x.second == 2) return x.first <= 29;
    if (x.second == 4 || x.second == 6 || x.second == 9 || x.second == 11) return (x.first <= 30);
    return 1;
}

struct Flights{
    string maChuyenBay, noiDen, noiDi;
    pair<int,int> gioDen, gioDi, ngayDi;
    bool isValid(){
        if (maChuyenBay.size() > 5 || !ktraKitu(maChuyenBay)) return 0;
        if (!ktraThoiGian(gioDen) || !ktraThoiGian(gioDi)) return 0;
        if (noiDen.size() > 20 || !ktraKitu(noiDen)) return 0;
        if (noiDi.size() > 20 || !ktraKitu(noiDi)) return 0;
        if (!ktraNgay(ngayDi)) return 0;
        return 1;
    }
    friend istream &operator>>(istream &is, Flights &FL){
        do{
            cout << "Hay nhap thong tin chuyen bay!\n";
            cout << "Hay nhap ma chuyen bay: "; cin >> FL.maChuyenBay;
            cout << "Hay noi di cua chuyen bay: "; cin >> FL.noiDi;
            cout << "Hay noi den cua chuyen bay: "; cin >> FL.noiDen;
            cout << "Hay gio di cua chuyen bay: "; cin >> FL.gioDi.first >> FL.gioDi.second;
            cout << "Hay gio den cua chuyen bay: "; cin >> FL.gioDen.first >> FL.gioDen.second;
            cout << "Hay ngay bay cua chuyen bay: "; cin >> FL.ngayDi.first >> FL.ngayDi.second;

            if (!FL.isValid()){
                cout << "Thong tin khong hop le, hay nhap lai!\n";
            }
            cout << "..................................................\n";
        }while(!FL.isValid());
        return is;
    }
};

void sapXep(Flights *FL, const int &n){
    auto compare = [](const Flights &a, const Flights &b){
        if (a.ngayDi.second != b.ngayDi.second) return a.ngayDi.second > b.ngayDi.second;
        return a.ngayDi.first > a.ngayDi.first;
    };
    sort(FL, FL + n, compare);
}

void ktraMaChuyenBay(Flights *FL, const int &n, const string &name){
    for (int i=0; i < n; i++){
        if (name == FL[i].maChuyenBay){
            cout << "Ton tai!\n"; return;
        }
    }
    cout << "Khong ton tai\n";
}

int main(){
    int n; cout << "Hay nhap so luong chuyen bay: "; cin >> n;
    Flights *flights = new Flights[n];
    for (int i=0; i < n; i++) cin >> flights[i];

    int input;
    do{
        cout << "Hay chon yeu cau!"; cin >> input;
        cout << "1. Sap xep cac chuyen bay!\n";
        cout << "2. Kiem tra ma may bay!\n";
        cout << "3. Dem so chuyen bay tu dia diem nay den dia diem khac\n";
        cout << "4. Danh sach cac chuyen bay khoi hanh tu Ha Noi\n";

        switch (input){
        case 0:
            cout << "BYE............\n";
            break;
        
        case 1:
            for (int i = 0; i < n; i++){
                cout << flights[i].ngayDi.first << "/" << flights[i].ngayDi.second << ": " << flights[i].maChuyenBay << '\n';
            }
            break;

        case 2: {
            string ten;
            cout << "Hay nhap ma muon kiem tra: "; cin >> ten;
            ktraMaChuyenBay(flights,n,ten); 
            break;
        }
        default:
            break;
        }      
        cout << "..........................................\n";
    }while(input != 0);

    delete []flights;
    return 0;
}