#include "cMeeting.h"

cMeeting::cMeeting() : cHoatDong(), Partner(""), Platform("") {}

void cMeeting::Nhap() {
    cHoatDong::Nhap();
    cin >> Platform;
    cin.ignore();
    getline(cin, Partner);

    if (Platform == "Zoom" || Platform == "Teams") Priority = Duration + 10;
    else Priority = Duration;

    string Gio = startTime.substr(0,2), Phut = startTime.substr(3,2);
    long long TongGiay = stoll(Gio) * 3600 + stoll(Phut) * 60;
    if (TongGiay >= 18000 && TongGiay <= 43200) Buoi = "Sang";
    else if (TongGiay <= 64800) Buoi = "Chieu";
    else if (TongGiay <= 82800) Buoi = "Toi";
}

char cMeeting::LoaiHoatDong() const {
    return '1';
}

void cMeeting::Xuat() const {
    cout << "[Meeting] " << Title << " (" << Platform << ")" << " - " << startTime << " - " << "Uu tien: " << Priority << '\n';
}