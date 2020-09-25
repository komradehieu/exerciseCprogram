#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main()

{   char Hoten[100][30];
    char Gioitinh[100][10];
    int Namsinh[100];
    float ToanRoiRac[100];
    float TinDaiCuong[100];
    float TB[100];
    float maximum;
    int i,j,m,n;


    printf("----Bai toan ve diem cua hoc sinh----\n\n\n\n");

    printf("\nNhap so sinh vien can khai bao thong tin:");
    scanf("%d",&m);

    for(i=1;i<=m;i++)
    {


             printf("\nNhap ho va ten cua sinh vien thu %d:",i);
             fflush(stdin);
             gets(Hoten[i]);
             printf("\nNhap gioi tinh ( nhap 'nam'\'nu') cua sinh vien thu %d:",i);
             fflush(stdin);
             gets(Gioitinh[i]);
             printf("\nNhap nam sinh cua sinh vien thu %d:",i);
             scanf("%d",&Namsinh[i]);
             printf("\nNhap diem toan rr cua sinh vien thu %d:",i);
             scanf("%f",&ToanRoiRac[i]);
             printf("\nNhap diem tin hoc cua sinh vien thu %d:",i);
             scanf("%f",&TinDaiCuong[i]);









    }
    printf("\nDanh sach sinh vien da nhap co thong tin nhu sau:");
    for(i=1;i<=m;i++)
    {    TB[i]=(TinDaiCuong[i]+ToanRoiRac[i])/2;
         printf("\n\n----Sinh vien %s___co diem trung binh la: %f\n",Hoten[i],TB[i]);

    };

    for(i=1;i<=m;i++)
    {
        if(maximum<TB[i])
        {
            maximum=TB[i];
        }
        printf("\nSinh vien co diem trung binh cao nhat la: %s",Hoten[i]);



    printf("\n\n\n\n\n");





























    printf("\n\n\n\n\n");

}}
