#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    float delta, a, b, c;
    float x1, x2;

    printf("\n\n\n\nPhuong trinh bac 2 : ax^2 + bx + c = 0\n\n\n\n\n");

    printf("Nhap vao he so a:");
    scanf("%f",&a);
    printf("--------------------------------------\n\n");

    printf("\nNhap vao he so b:");
    scanf("%f",&b);
    printf("--------------------------------------\n\n");

    printf("\nNhap vao he so c:");
    scanf("%f",&c);

    printf("--------------------------------------\n\n");

    delta=b*b - 4*a*c;

    if (a==0)
    {
        x1=-b/c;
        x2=-b/c;
        printf("\n Phuong trinh co nghiem la %f\n\n\n\n\n",x1);
    }

    else if ( delta==0)
    {
        x1=-b/(2*a);
        x2=-b/(2*a);
        printf("\n Phuong trinh co nghiem kep x1=x2=%f\n\n\n\n\n",x1);
    }

    else if ( delta < 0)
    {
        printf("\n Phuong trinh vo nghiem\n\n\n\n\n");
    }

    else if ( delta> 0)
    {
        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);
        printf("\nPhuong trinh co 2 nghiem phan biet la x1: %f va x2:%f\n\n\n\n\n", x1, x2);
    }




}
