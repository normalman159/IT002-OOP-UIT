#include "cClassSession.cpp"
#include "cDSHoatDong.cpp"
#include "cHoatDong.cpp"
#include "cMeeting.cpp"
#include "cSelfStudy.cpp"

int main() {  
    cDSHoatDong dshd;

    dshd.Nhap();
    dshd.Xuat();

    cout << "--- Hoat dong co do uu tien cao nhat moi buoi ---\n";
    const cHoatDong* HD_1 = dshd.HoatDongBuoiSangCaoNhat();
    if (HD_1 == NULL){
        cout << "Khong co hoat dong buoi sang\n";
    }
    else HD_1->Xuat();
    
    const cHoatDong* HD_2 = dshd.HoatDongBuoiChieuCaoNhat();
    if (HD_2 == NULL){
        cout << "Khong co hoat dong buoi chieu\n";
    }
    else HD_2->Xuat();

    const cHoatDong* HD_3 = dshd.HoatDongBuoiToiCaoNhat();
    if (HD_3 == NULL){
        cout << "Khong co hoat dong buoi toi\n";
    }
    else HD_3->Xuat();
}