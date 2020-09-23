#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main()
{   char g;
    int maximum=0;
    int m,n,i,j,a[600][600],alll=0;

    do {




    printf("\n\n\n\n\n-----Bai toan nhap ma tran-----\n\n\n\n\n");
    printf("-------------------------------");
    printf("\nMa tran can nhap co dang m x n ( m hang va n cot, toi da la 600x600)");
    printf("\n-------------------------------");
    do {
    printf("\nHay nhap so hang va so cot cua ma tran");
    printf("\n-------------------------------");
    printf("\nSo hang cua ma tran se la ...? : m = ");
    scanf("%d",&m);
    printf("\nSo cot cua ma tran se la ...? : n = ");
    scanf("%d",&n);
    if ((m<=0||n<=0) || (m>600||n>600))
    {   printf("\n----------------------------------------------------------------");
        printf("\nSo hang va so cot cua ma tran khong hop le !!! Moi nhap lai\n");
        printf("------------------------------------------------------------------");
    }
    }

    while (m<=0||n<=0|| m>600||n>600);


    printf("\nMa tran ban da nhap co dang %d x %d",m,n);
    printf("\n-------------------------------");





    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)

        {
            printf("\n---Gia tri cua phan tu a[%d][%d] la...:",i,j);
            scanf("%d",&a[i][j]);

        }
    }

    printf("\n-------------------------------");
    printf("\nMa tran vua nhap in theo thu tu nhap tu a[1][1] den a[%d][%d] la: ",m,n);

    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d ",a[i][j]);
        }
    }
    printf("\n-------------------------------");
    printf("\nMa tran vua nhap co hinh anh nhu sau:\n");
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("\t%d         ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n-------------------------------");

    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(maximum<a[i][j])
            {
                maximum=a[i][j];
            }
        }

    }
    printf("\nMa tran vua nhap co phan tu co gia tri lon nhat la: %d",maximum);
    printf("\n-------------------------------");

    if(m==n)
    {
        for(i=1;i<=m;i++)
      {

            alll=alll+a[i][i];


      }
    printf("\nMa tran vua nhap co tong cac phan tu nam tren duong cheo chinh la la:%d",alll);
    }
    else
    {
        printf("\nMa tran khong phai ma tran vuong, khong tinh duoc tong cua cac phan tu tren duong cheo chinh!!!");
    }




    printf("\n\n\n\n\n\n-------------------------------");
    printf("\nNhap ma tran khac: ( co la 1 ,nhap ki tu bat ki de ket thuc chuong trinh):");
    scanf("%d",&g);



    }
    while(g==1);



// Vu Minh Hieu - htttql 61A
}
