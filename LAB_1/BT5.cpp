// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include <bits/stdc++.h>

using namespace std;

int daysOfMonth[] = {-1 ,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

struct Time{
    int days,months;
    Time(int day = 0, int month = 0){
        this->days = day;
        this->months = month;
    }
    bool valid(){
        return this->months >= 1 && this->months <= 12 && 0 <= this->days && this->days <= daysOfMonth[this->months];
    }
    Time nextDay() const{
        if (this->days < daysOfMonth[this->months]){
            return Time(this->days + 1, this->months);
        }
        if (this->months < 12) return Time(1, this->months + 1); 
        return Time(1,1);
    }
    Time previousDay() const{
        if (this->days > 1){
            return Time(this->days - 1, this->months);
        }
        if (this->months > 1) return Time(daysOfMonth[this->months - 1], this->months - 1);
        return Time(31,12);
    }
    int daysInYear() const{
        int day = 0;
        for (int i = 1; i < this->months; i++){
            day += daysOfMonth[i];
        }
        return day + this->days;
    }
};

void input(Time &time){
    do{
        cout << "Hay nhap vao ngay: "; cin >> time.days;
        cout << "Hay nhap vao thang: "; cin >> time.months;
        if (!time.valid()){
            cout << "Ngay va thang khong hop le, vui long nhap lai!\n";
        }
    }while(!time.valid());
}

int main(){
    Time time;
    input(time);
    Time nextDays = time.nextDay(), previousDays = time.previousDay();
    cout << "Ngay tiep theo la: " << nextDays.days << "/" << nextDays.months << '\n';
    cout << "Ngay truoc do la: " << previousDays.days << "/" << previousDays.months << '\n';
    cout << "Ngay " << time.days << "/" << time.months << " la ngay thu: " << time.daysInYear();
    
    return 0;
}