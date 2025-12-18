#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
using namespace std;
struct NgaySinh
{
    int Ngay,Thang,Nam;
};
struct MonHoc
{
    int SoLuongMondaHoc;
    float DiemSo;
};
struct SinhVien
{
    char MSSV[10];
    char HoTen[30];
    NgaySinh ngaysinh;
    bool GioiTinh;
    MonHoc Tong;
};
int Nhapn();
void Nhap1Ngay(int n, NgaySinh A[] );
void Xuat1Ngay(int n, NgaySinh A[]);
void NhapnNgay(int n, NgaySinh A[]);
void XuatnNgay(int n, NgaySinh A[]);
MonHoc Nhap1MonHoc();
int main()
{
    NgaySinh A[50];
    MonHoc B[50];
    SinhVien C[50];
    int n=Nhapn();
    NhapnNgay( n, A);
    XuatnNgay( n,  A);
    return 0;
}
int Nhapn()
{
    int n;
    do
    {
        printf ("Nhap so sinh vien can nhap : ");
        scanf ("%d",n);
        if (!(n>0))
            printf ("\n Nhap sai roi nhap lai di\n");
    }
    while (!(n>0));
    return n;
}
NgaySinh Nhap1Ngay()
{
    NgaySinh f;
    printf ("\n Nhap ngay sinh cua sinh vien : ");
    scanf (" %d",f.Ngay);
    printf ("\n Nhap thang sinh cua sinh vien : ");
    scanf ("%d",f.Thang);
    printf ("\n Nhap nam sinh cua sinh vien : ");
    scanf ("%d",f.Nam);
    return f;
}
void Xuat1Ngay(int n, NgaySinh A[])
{
    NgaySinh f;
    printf ("\n Ngay-thang-nam sinh cua sinh vien : %d-%d-%d",&f.Ngay,&f.Thang,&f.Nam);
}
/*void NhapnNgay(int n, NgaySinh A[])
{
    for (int i=0; i<n; i++)
    {
        printf ("\n Hay Nhap ngay sinh Thu %d ",i+1);
        A[i]=Nhap1Ngay();
    }
}
void XuatnNgay(int n, NgaySinh A[])
{
    for (int i=0; i<n; i++)
    {
        printf (" \n Vay ngay vua nhap la : ");
        Xuat1Ngay(n,A);
    }
}*/
MonHoc Nhap1MonHoc()
{
    MonHoc f;
    printf ("Hay nhap ten 1 Mon hoc : ");
    getchar();
    fgets(f.SoLuongMondaHoc,sizeof(f.SoLuongMondaHoc),stdin);
    f.SoLuongMondaHoc[strcspn(f.SoLuongMondaHoc,"\n")]=0;
    printf("Nhập điểm số của môn học: ");
    scanf("%f", &f.DiemSo);
    return f;

}
void Xuat1MonHoc(int n, MonHoc A[])
{
    printf ("Ten mon hoc : %s "f.SoLuongMondaHoc);
    printf("Điểm số: %.2f\n", f.DiemSo);

}

