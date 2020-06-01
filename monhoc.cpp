#include "Monhoc.h"
void Monhoc::Nhap()
{
    fflush(stdin);
    cout<<"\nNhap ten mon hoc: ";
    getline(cin,tenmonhoc);
    cout<<"\nNhap so chi cua mon hoc: ";
    cin>>sochi;
    cout<<"\nNhap diem mon hoc: ";
    cin>>diem;
}
void Monhoc::Xuat()
{
    cout<<"\nTen mon hoc: "<<tenmonhoc;
    cout<<"\nTin chi mon hoc: "<<sochi;
    cout<<"\nDiem mon hoc: "<<diem;
}
