// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#pragma one
#ifndef _cListCandidate
#define _cListCandidate

#include "cCandidate.h"

class cListCandidate: private cCandidate{
private:
    int n;
    cCandidate *A;

public:
    cListCandidate();
    cListCandidate(int);
    ~cListCandidate();
    void Nhap();
    void Xuat() const;
    
    void DSDiemLonHon15() const;
    void SapXepGiamDan();
};

#endif