#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int lamlai=1;
    while(lamlai!=0)
    {
        float delta=0, a=0, b=0, c=0;
        float x1=0, x2=0;
        printf("Phuong trinh bac 2 co dang ax^2 + bx + c = 0\n");
        printf("Nhap a:");
        scanf("%f",&a);
        printf("Nhap b:");
        scanf("%f",&b);
        printf("Nhap c:");
        scanf("%f",&c);
        delta=b*b-4*a*c;
        if (a==0)
        {
            x1=-b/c;
            printf("\nPhuong trinh co nghiem la %.2f",x1);
        }
        if(delta==0)
        {
            x1=-b/2*a;
            x2=-b/2*a;
            printf("\nPhuong trinh co nghiem kep x1=x2=%.2f",x1);
        }
        else if(delta<0)
        {
            printf("\nPhuong trinh vo nghiem");
        }
        else
        {
            x1=(-b+sqrt(delta))/(2*a);
            x2=(-b-sqrt(delta))/(2*a);
            printf("\nPhuong trinh co 2 nghiem phan biet la x1: %.2f va x2:%.2f", x1, x2);
        }
        printf("\nBan co muon thu tiep ko ??? (1/0)");
        scanf("%d",&lamlai);
    }
}
