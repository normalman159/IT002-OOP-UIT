#include "cHoatDong.h"

cHoatDong::cHoatDong() : Title(""), startTime(""), Duration(0), Priority(0), Buoi("") {}

void cHoatDong::Nhap() {
    cin.ignore();
    getline(cin, Title);
    getline(cin, startTime);
    cin >> Duration;
}

string cHoatDong::getBuoi() const {
    return Buoi;
}

double cHoatDong::getPriority() const {
    return Priority;
}