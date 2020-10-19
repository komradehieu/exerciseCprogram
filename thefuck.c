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
