#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>

void Input(char Name[100][30], char Sex[100][30], int YOB[100], float AVG_Point[100], int n)
    {

        for(int i=1; i<=n;i++)
        {
        printf("\nTen cua nguoi thu %d la: ",i);
        fflush(stdin);
        gets(Name[i]);
        printf("Gioi tinh cua nguoi thu %d la: ",i);
        scanf("%s",Sex[i]);
        printf("Nam sinh cua nguoi thu %d la: ",i);
        scanf("%d",&YOB[i]);
        printf("Diem cua nguoi thu %d la: ",i);
        scanf("%f",&AVG_Point[i]);

        }
    }

void Output(char Name[100][30], char Sex[100][30], int YOB[100], float AVG_Point[100], int n)
    {   int i;
        printf("\n\xB2\xB2\xB2\xB2\xB2  DANH SACH SINH VIEN DA NHAP LA \xB2\xB2\xB2\xB2\xB2");
        printf("\n%-25s%-20s%-20s%-20s","TEN","GIOI TINH","NAM SINH","DIEM");

        for (i=0;i<n;i++);
        {
        printf("\n%-25s%-20s%-20d%-20.2f",Name[i],Sex[i],YOB[i],AVG_Point[i]);
        }
    }
int main(void)
{
    char HoTen[100][30];
    int NamSinh[100];
    char GioiTinh[100][30];
    float Diem[100];
    int n;
    printf("Lop ban co bao nhieu sinh vien? :");
    scanf("%d",&n);
    Input(HoTen,GioiTinh,NamSinh,Diem,n);
    Output(HoTen,GioiTinh,NamSinh,Diem,n);
    return 0;
}


#include <stdio.h>
#include <string.h>

struct canbo
{
    char hoten[100];
    int tuoi,gioitinh;
    float hsl,thuong,baohiem,thunhap;
};

void khaibao(canbo cb[50],int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("Nhap ho ten can bo thu %d : ",i);
        fflush(stdin);
        gets(cb[i].hoten);
        printf("Nhap gioi tinh can bo thu %d (1 la nam, 0 la nu) : ",i);
        scanf("%d",&cb[i].gioitinh);
        printf("Nhap tuoi can bo thu %d : ",i);
        scanf("%d",&cb[i].tuoi);
        printf("Nhap he so luong can bo thu %d : ",i);
        scanf("%f",&cb[i].hsl);
        printf("Nhap thuong can bo thu %d : ",i);
        scanf("%f",&cb[i].thuong);
        printf("Nhap bao hiem can bo thu %d : ",i);
        scanf("%f",&cb[i].baohiem);
    }
}

void tienluong(canbo cb[50],int n)
{
    for(int i=1;i<=n;i++)
    {
        cb[i].thunhap=cb[i].hsl*1150000 + cb[i].thuong - cb[i].baohiem;
    }
}

int trungnien(canbo cb[50],int n)
{
    int dem,i;
    for(i=1;i<=n;i++)
    {
        if((cb[i].gioitinh==1)&&(cb[i].tuoi>60))
        {
            dem++;
        }
    }
    return dem;
}


void sapxep(canbo cb[50],int n)
{
    canbo tg;
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(cb[i].thunhap>cb[j].thunhap)
            {
                tg=cb[i];
                cb[i]=cb[j];
                cb[j]=tg;
            }
        }
    }
}

void gioinhat(canbo cb[50],int n)
{
    printf("\nNguoi co thu nhap cao nhat la : %s",cb[1].hoten);
}

void xuatdulieu(canbo cb[50],int n)
{
    int i;
    printf("\n\n\n| STT |       Ho va ten       |  Tuoi  |   Thu nhap   |");
    printf("\n=======================================================");
    for(i=1;i<=n;i++)
    {
        printf("\n|%-5d|%-23s|%8d|%14.2f|",i,cb[i].hoten,cb[i].tuoi,cb[i].thunhap);
        printf("\n-------------------------------------------------------");
    }
}
int main()
{
    int n,i,j,dem;
    canbo cb[50];
    printf("Nhap so can bo : ");
    scanf("%d",&n);
    khaibao(cb,n);
    tienluong(cb,n);
    sapxep(cb,n);
    gioinhat(cb,n);
    dem=trungnien(cb,n);
    printf("\n\nSo can bo nam tren 60 tuoi la : %d",dem);
    xuatdulieu(cb,n);
    return 0;
}
