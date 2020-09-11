#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()

{

    char HoTen[30];
    int NamSinh;
    char DonViCongTac[30];
    int GioiTinh;
    float HeSoLuong, Thuong, BaoHiem, Tien;


    printf("\n---------------------------------------------------------------------");

    printf("\n--Nhap ho ten cua can bo:");

    fflush(stdin); // xoa di bo nho tam thoi cua chuong trinh de tranh ton tai nhung gia tri rac lam cho lenh gets() khong chay duoc
    gets(HoTen);




    printf("\n---------------------------------------------------------------------");
    printf("\n--Nhap gioi tinh cua can bo(Nu la 1/ Nam la 2):");



    scanf("%d",&GioiTinh);
    printf("\n---------------------------------------------------------------------");
    printf("\nNhap don vi cong tac cua can bo:");
    fflush(stdin);
    gets(DonViCongTac);









    printf("\n---------------------------------------------------------------------");

    printf("\n--Nhap he so luong cua can bo:");
    scanf("%f",&HeSoLuong);



    printf("\n---------------------------------------------------------------------");

    printf("\n--Nhap thuong cua can bo:");
    scanf("%f",&Thuong);

    printf("\n---------------------------------------------------------------------");

    printf("\n--Nhap bao hiem cua can bo:");
    scanf("%f",&BaoHiem);


    printf("\n---------------------------------------------------------------------");

    Tien=(HeSoLuong*2000000)+Thuong-BaoHiem;

    //printf("\nSo tien duoc linh cua can bo la ( tien duoc linh = he so luong x 2000000 + thuong - bao hiem): %f", Tien);




    printf("\n---------------------------------------------------------------------");
    printf("\n---------------------------------------------------------------------");
    printf("\n----------------------Thong tin can bo-------------------------------");
    printf("\n---------------------------------------------------------------------");
    printf("\n---------------------------------------------------------------------");
    printf("\n---------------------------------------------------------------------");


    printf("\n\n++ Ho ten cua can bo la: %s \n",HoTen);

    if(GioiTinh== 1){
        printf("\n++ Gioi tinh cua can bo la Nu \n",GioiTinh);
    }else if(GioiTinh== 2)

        printf("\n++ Gioi tinh cua can bo la Nam \n",GioiTinh);
        else printf("++ Gioi tinh cua can bo la : dit con me thang gay!!!");

        printf("\n\n++ Don vi cong tac cua can bo la: %s \n",DonViCongTac);



    printf("\n++ So tien duoc linh cua can bo la ( tien duoc linh = he so luong x 2000000 + thuong - bao hiem): %f\n\n\n\n\n\n\n\n\n", Tien);






    printf("\nVu Minh Hieu - HTTTQL 61a lop Co So lap trinh 120_03\n\n\n\n\n");
















}
