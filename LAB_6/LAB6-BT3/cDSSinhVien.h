// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#pragma once
#ifndef _cDSSinhVien
#define _cDSSinhVien

#include "cSinhVien.h"
#include "cSinhVienDaiHoc.h"
#include "cSinhVienCaoDang.h"

class cDSSinhVien {
private:   
    cSinhVien** p;
    int n;       
public:
    cDSSinhVien();

    void Nhap(); 
    void Xuat() const; 

    void DSDuDKTN() const;
    void DSKDuDKTN() const;

    void SoLuongSinhVienKDuDKTN() const;

    const cSinhVien* SinhVienCaoDangDTBCaoNhat() const;
    const cSinhVien* SinhVienDaiHocDTBCaoNhat() const; 
};

#endif