#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>


struct book
{
    char tens[100];
    char tentg[100];
    char nxb[100];
    int yxb;
    float gia;
    float tong;
    int count1;

};

void Input(struct book bk[100], int n)
{
    int i;
    for(i=1;i<=n;i++)
    {   printf("\n_______________________________________________________");
        printf("\n - Thong tin cua sach thu #%d\n",i);
        printf("\n + Ten sach: ");
        fflush(stdin);
        gets(bk[i].tens);
        printf("\n + Ten TG: ");
        fflush(stdin);
        gets(bk[i].tentg);
        printf("\n + Ten NXB: ");
        fflush(stdin);
        gets(bk[i].nxb);
        printf("\n + Nam xuat ban: ");
        scanf("%d",&bk[i].yxb);
        printf("\n + Gia: ");
        scanf("%f",&bk[i].gia);
    }
    printf("\n_______________________________________________________");
}

void sum(struct book bk[100], int n)
{
    int i;
    bk->tong = 0;
    for(i=1;i<=n;i++)
    {
        bk->tong = bk->tong+ bk[i].gia;
    }
}

void sau2010(struct book bk[100], int n)
{
    int i;
    bk->count1 = 0;
    for(i=1;i<=n;i++)
    {
        if(bk[i].yxb>2010)
        {
            bk->count1 = bk->count1 + 1;
        }
    }

}

int giatiencaonhat(struct book bk[100], int n)
{
    int i;
    int dem = 0;
    float max1 =0;
    max1 = bk[1].gia;
    for(i=2;i<=n;i++)
    {
        if(bk[i].gia > max1)
        {
            max1 = bk[i].gia;
        }
    }
    for(i=1;i<=n;i++)
    {
        if(bk[i].gia == max1)
        {
          dem++;
        }
    }
    return dem;

}
void minimum(struct book bk[100], int n)
{
    int i,j;
    struct book temp;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(bk[i].gia>bk[j].gia)
            {
                temp = bk[i];
                bk[i] = bk[j];
                bk[j] = temp;
            }
        }
    }
}

void same(struct book bk[100], int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(bk[i].gia==bk[1].gia)
        {
            int i;
     printf("\n +-----+---------------+---------------+----------+");
     printf("\n |%5s|%15s|%15s|%10s|","STT","TEN SACH","NAM XB","GIA");

     for(i=1;i<=n;i++)
     {   printf("\n +-----+---------------+---------------+----------+");
         printf("\n |%5d|%15s|%15d|%10.2f|",i,bk[i].tens,bk[i].yxb,bk[i].gia);
     }
     printf("\n +-----+---------------+---------------+----------+");
        }
    }
}



void sx(struct book bk[100], int n)
{
    int i,j;
    struct book temp;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(bk[i].gia>bk[j].gia)
            {
                temp = bk[i];
                bk[i] = bk[j];
                bk[j] = temp;
            }
        }
    }
}
void output(struct book bk[100], int n)
 {
     int i;
     printf("\n +-----+---------------+---------------+----------+");
     printf("\n |%5s|%15s|%15s|%10s|","STT","TEN SACH","NAM XB","GIA");

     for(i=1;i<=n;i++)
     {   printf("\n +-----+---------------+---------------+----------+");
         printf("\n |%5d|%15s|%15d|%10.2f|",i,bk[i].tens,bk[i].yxb,bk[i].gia);
     }
     printf("\n +-----+---------------+---------------+----------+");
 }

int main()
{
    int i;
    int n;
    int dem = 0;
    struct book bk[100];
    scanf("%d",&n);
    Input(bk,n);
    sum(bk,n);
    sau2010(bk,n);
    printf("\n + Tong so tien cua %d quyen sach la %.1f ",n,bk->tong);
    printf("\n + co %d quyen sau 2010",bk->count1);

    sx(bk,n);
    dem = giatiencaonhat(bk,n);
    output(bk,dem);


    printf("\n\n\n\n\n");
    output(bk,n);

    printf("\n\n\n\n\n");
    sx(bk,n);
    output(bk,n);
    printf("\n\n\n\n\n");









}
