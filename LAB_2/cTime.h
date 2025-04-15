// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#pragma one
#ifndef _cTime
#define _cTime

#include <iostream>
using namespace std;

class cTime{
private:
    int iNgay, iThang, iNam; //Ngay, thang, nam

public:
    cTime(int = 0, int = 0, int = 0);
    bool valid() const;

    void Nhap();
    void Xuat() const;
    cTime NgayThangNamTiepTheo() const;

    friend ostream& operator<<(ostream&, const cTime&);
    friend istream& operator>>(istream&, cTime&);
};

#endif