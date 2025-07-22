#include "cClassSession.h"

cClassSession::cClassSession() : cHoatDong(), courseCode(""), Subject("") {}

void cClassSession::Nhap() {
    cHoatDong::Nhap();
    cin >> courseCode >> Subject;

    string TienTo = courseCode.substr(0,2);
    if (TienTo == "SE") Priority = Duration * 2;
    else Priority = Duration * 1.5;

    string Gio = startTime.substr(0,2), Phut = startTime.substr(3,2);
    long long TongGiay = stoll(Gio) * 3600 + stoll(Phut) * 60;
    if (TongGiay >= 18000 && TongGiay <= 43200) Buoi = "Sang";
    else if (TongGiay <= 64800) Buoi = "Chieu";
    else if (TongGiay <= 82800) Buoi = "Toi";
}

char cClassSession::LoaiHoatDong() const {
    return '0';
}

void cClassSession::Xuat() const {
    cout << "[Class] " << Title << " (" << courseCode << ")" << " - " << startTime << " - " << "Uu tien: " << Priority << '\n';
}