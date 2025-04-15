// =========================================
// Họ và tên sinh viên: Trần Phước Thanh Nhân
// MSSV: 24521241
// Lớp học: IT002.P212
// =========================================

#include "cDiem.h"
cDiem::cDiem(double X, double Y){
    this->X = X, this->Y = Y;
}

cDiem::~cDiem(){
    // cout << "Da huy mot diem! \n";
}

void cDiem::setX(double X){
    this->X = X;
}

void cDiem::setY(double Y){
    this->Y = Y;
}

void cDiem::setXY(double X, double Y){
    this->setX(X);
    this->setY(Y);
}

void cDiem::Nhap(){
    cout << "Nhap toa do X: "; cin >> X;
    cout << "Nhap toa do Y: "; cin >> Y;
}

void cDiem::Xuat() const{
    cout<< "( " << X <<" , " << Y <<" )" << '\n';
}

double cDiem::TinhKhoangCach(const cDiem& A) const{
    return sqrt(pow(X - A.X, 2) + pow(Y - A.Y, 2));
}

void cDiem::TinhTien(double dX, double dY){
    X += dX;
    Y += dY;
}

void cDiem::Quay(double Alpha){
    this->setXY(X * cos(Alpha) + Y * sin(Alpha), X * sin(Alpha) + Y * cos(Alpha));
}

double cDiem::getX() const{
    return X;
}
double cDiem::getY() const{
    return Y;
}