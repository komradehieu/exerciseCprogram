#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>

struct good
{
    char ten[100];
    char id[100];
    int soluong;
    float gianhap;
    float tiennhap;
    float tong;
};

void Input(struct good HH[100], int n)
{
    int i;
    for( i=1;i<=n;i++)
    {   printf("\n______________________________");
        printf("\n - Thong tin mat hang thu #%d\n",i);
        printf(" + Ten hang: ");
        fflush(stdin);
        gets(HH[i].ten);
        printf(" + Ma hang: ");
        fflush(stdin);
        gets(HH[i].id);
        printf(" + So luong: ");
        scanf("%d",&HH[i].soluong);
        printf(" + Tien nhap hang: ");
        scanf("%f",&HH[i].gianhap);


    }
    printf("\n______________________________");
}



void sum(struct good HH[100], int n)
{
    int i;
    HH->tong=0;
    for( i=1;i<=n;i++)
    {
        HH[i].tiennhap = HH[i].gianhap*HH[i].soluong;
        HH->tong= HH->tong+ HH[i].tiennhap;
    }


}
void caonhat(struct good HH[100], int n)
{   struct good temp;
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(HH[i].tiennhap<HH[j].tiennhap)
            {
                temp = HH[i];
                HH[i] = HH[j];
                HH[j] = temp;
            }
        }
    }
}

void Output(struct good HH[100],int n)
{
    printf("\n=====BANG THONG TIN HANG HOA=====");
    printf("\n______________________________________________________");
    printf("\n|%10s|%20s|%20s|","MA HANG","TEN HANG","TIEN NHAP HANG");

    int i;
    for(i=1;i<=n;i++)
    {   printf("\n______________________________________________________");
        printf("\n|%10s|%20s|%20.2f|",HH[i].id,HH[i].ten,HH[i].tiennhap);
    }
    printf("\n______________________________________________________");
    printf("\n\n|%31s|%20.2f|","TONG",HH->tong);
    printf("\n______________________________________________________");
}

int main()
{
    struct good HH[100];
    int n;
    float tong;
    printf("So mat hang: ");
    scanf("%d",&n);
    Input(HH,n);
    sum(HH,n);
    printf("\n\n + Tong tien nhap cua tat ca cac mat hang la : %f ",HH->tong);
    caonhat(HH,n);
    printf("\n\n + Mat hang co tien nhap cao nhat la '%s' voi gia %f",HH[n].ten,HH[n].tiennhap);
    printf("\n\n + Mat hang co tien nhap thap nhat la '%s' voi gia %f",HH[1].ten,HH[1].tiennhap);
    printf("\n\n + Chenh lech gia giua '%s' va '%s' la %f ",HH[n].ten,HH[1].ten,HH[n].tiennhap - HH[1].tiennhap);
    caonhat(HH,n);
    Output(HH,n);



}
