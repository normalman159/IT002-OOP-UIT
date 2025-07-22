#include "cSelfStudy.h"

cSelfStudy::cSelfStudy() : cHoatDong(), Topic(""), Location("") {}

void cSelfStudy::Nhap() {
    cHoatDong::Nhap();
    cin.ignore();
    getline(cin, Topic);
    getline(cin, Location);

    string Gio = startTime.substr(0,2), Phut = startTime.substr(3,2);
    long long TongGiay = stoll(Gio) * 3600 + stoll(Phut) * 60;
    if (TongGiay > 64800) Priority = Duration * 2;
    else Priority = Duration;

    if (TongGiay >= 18000 && TongGiay <= 43200) Buoi = "Sang";
    else if (TongGiay <= 64800) Buoi = "Chieu";
    else if (TongGiay <= 82800) Buoi = "Toi";
}

char cSelfStudy::LoaiHoatDong() const {
    return '2';
}

void cSelfStudy::Xuat() const {
    cout << "[Tu hoc] " << Title << " tai " << Location << " - " << startTime << " - " << "Uu tien: " << Priority << '\n';
}