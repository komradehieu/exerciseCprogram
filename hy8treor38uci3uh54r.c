#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>

struct comrade
{
    char Name[100];
    int YOB;
    char Gender;
    float HSCV;
    float HSL;
    float Thuong;
    float BaoHiem;
    float ThuNhap;
    float Thue;


};

void Input(struct comrade list[100],int n)
{
    int i;
    for (i=1;i<=n;i++)
    {
       printf("\nThong tin can bo thu #%d la :",i);
       printf("\nCan bo ten la: ");
       fflush(stdin);
       gets(list[i].Name);
       printf("Nam sinh cua can bo la:");
       scanf("%d",&list[i].YOB);
       printf("HSCV cua can bo la:");
       scanf("%f",&list[i].HSCV);
       printf("HSL cua can bo la: ");
       scanf("%f",&list[i].HSL);
       list[i].ThuNhap = (list[i].HSCV+list[i].HSL)*2+ list[i].Thuong - list[i].BaoHiem;
       
       if (list[i].ThuNhap > 9000000)
       {
           list[i].Thue = (10/100)*list[i].ThuNhap;
       }
       else

       {
           list[i].Thue = 0;
       }


    }
}

void Output(struct comrade list[100], int n)
{
    int i;
    printf("\n\xB2\xB2\xB2\xB2\xB2  DANH SACH SINH VIEN DA NHAP LA \xB2\xB2\xB2\xB2\xB2");
    printf("\n%-10s %-25s %-10s %-25s %-25s %-25s %-25s","STT","TEN CAN BO","NAM SINH", "HSCV", "HSL","THU NHAP", "THUE");
    for (i=1;i<=n;i++)
    {
        printf("\n%-10d %-25s %-10d %-25.2f %-25.2f %-25.1f %-25.1f",i,list[i].Name,list[i].YOB,list[i].HSCV,list[i].HSL,list[i].ThuNhap,list[i].Thue);
    }
}

void sxtheoluong(struct comrade list[100], int n)
{
    int i;
    int j;
    struct comrade temp;
    for (i=1;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(list[i].HSL>list[j].HSL)
            {
                temp = list[i];
                list[i]= list[j];
                list[j]= temp;
            }
        }
    }

}



int main()
{
    struct comrade list[100];
    int n;
    scanf("%d",&n);
    Input(list,n);
    Output(list,n);
    sxtheoluong(list,n);

}
