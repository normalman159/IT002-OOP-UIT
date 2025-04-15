// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cTamGiac.h"

bool pytagoTriple(double a, double b, double c){
    return a * a + b * b == c*c || a * a + c*c == b*b || b*b + c*c == a*a; 
}
cTamGiac::cTamGiac() : A(0,0), B(1,0), C(0,1) {}
cTamGiac::cTamGiac(const cDiem& A, const cDiem& B, const cDiem& C){
    this->A = A;
    this->B = B;
    this->C = C;
}
cTamGiac::~cTamGiac(){
    cout << "Da huy mot tam giac \n";
}
void cTamGiac::Nhap(){
    A.Nhap();
    B.Nhap();
    C.Nhap();
}
void cTamGiac::Xuat() const{
    cout << "Toa do dinh A: "; A.Xuat();
    cout << "Toa do dinh B: "; B.Xuat();
    cout << "Toa do dinh C: "; C.Xuat();
}
double cTamGiac::TinhChuVi() const{
    double AB = A.TinhKhoangCach(B);
    double BC = B.TinhKhoangCach(C);
    double AC = A.TinhKhoangCach(C);
    return AB + BC + AC;
}
double cTamGiac::TinhDienTich() const{
    double AB = A.TinhKhoangCach(B);
    double BC = B.TinhKhoangCach(C);
    double AC = A.TinhKhoangCach(C);
    double p = this->TinhChuVi() / 2;
    return sqrt(p * (p - AB) * (p - BC) * (p - AC));
}
void cTamGiac::TinhTien(double dX, double dY){
    A.TinhTien(dX, dY);
    B.TinhTien(dX, dY);
    C.TinhTien(dX, dY);
}
void cTamGiac::Quay(double Alpha){
    A.Quay(Alpha);
    B.Quay(Alpha);
    C.Quay(Alpha);
}
string cTamGiac::PhanLoaiTamGiac() const{
    double AB = A.TinhKhoangCach(B);
    double BC = B.TinhKhoangCach(C);
    double AC = A.TinhKhoangCach(C);

    if (AB == BC && BC == AC) return "Tam giac deu";
    if (AB == BC || AB == AC || BC == AC){
        if (pytagoTriple(AB,BC,AC)) return "Tam giac vuong can";
        return "Tam giac can";
    }
    if (pytagoTriple(AB,BC,AC)) return "Tam giac vuong";
    return "Tam giac thuong";
}
void cTamGiac::PhongTo(double Alpha){
    A.setXY(A.getX() * Alpha , A.getY() * Alpha);
    B.setXY(B.getX() * Alpha , B.getY() * Alpha);
    C.setXY(C.getX() * Alpha , C.getY() * Alpha);
}