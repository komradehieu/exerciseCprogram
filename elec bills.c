#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

struct tenKH
{
    char hodem[100];
    char ten[100];
};
struct customer
{   struct tenKH hovaten;
    char id[100];
    char add[100];
    int tr;
    int sau;
    int sodien;
    float money;
};

void Input(struct customer KH[100],int n)
{
    int i;
    for(i=1;i<=n;i++)
    {   printf("____________________________________________");
        printf("\nThong tin cua khach hang thu #%d  ",i);
        printf("\nTen ho dem cua khach hang :");
        fflush(stdin);
        gets(KH[i].hovaten.hodem);
        printf("Ten cua khach hang :");
        fflush(stdin);
        gets(KH[i].hovaten.ten);
        printf("Dia chi cua khach hang :");
        fflush(stdin);
        gets(KH[i].add);
        printf("Ma khach hang :");
        fflush(stdin);
        gets(KH[i].id);
        printf("So dung thang truoc :");
        scanf("%d",&KH[i].tr);
        printf("So dung thang sau :");
        scanf("%d",&KH[i].sau);

    }
}
void calculate(struct customer KH[100],int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        KH[i].sodien= (KH[i].sau - KH[i].tr);
        KH[i].money = KH[i].sodien*3000;
    }
}

void tongtien(struct customer KH[100],int n)
{
    float SUM = 0;
    int i;
    for(i=1;i<=n;i++)
    {
        SUM = SUM + KH[i].money;
    }
    printf("\n\n\nTong tien ma nha cung cap dien dop duoc la : %f \n\n\n",SUM);

}
void sapxep(struct customer KH[100],int n)
{   struct customer temp;
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(KH[i].money>KH[j].money)
            {
                temp = KH[i];
                KH[i] = KH[j];
                KH[j] = temp;
            }
        }
    }
}

void sapxeptheoten(struct customer KH[100],int n)
{
    int i,j;
    struct customer temp;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(strcmp((KH[i].hovaten.ten),(KH[j].hovaten.ten)) <0)
            {
                temp = KH[i];
                KH[i] = KH[j];
                KH[j] = temp;
            }
        }
    }


}

void findmax(struct customer KH[100],int n)
{
    int i;
    int sttmax = 0;
    if(n>0)
    {
        sttmax  = KH[0].sodien;
        for(i=1;i<=n;i++)
        {
            if(KH[i].sodien>sttmax)
            {
                sttmax = KH[i].sodien;
            }
        }
    }
}

void Output(struct customer KH[100],int n)
{
    printf("\n========== BANG THONG TIN KHACH HANG ==========");
    printf("\n____________________________________________________________________________________________");
    printf("\n|%5s|%20s|%15s|%15s|%15s|%15s|","STT","HO DEM","TEN","MA KH","SO TIEU THU","TIEN");
    //printf("\n____________________________________________________________________________________________");

    int i;
    for(i=1;i<=n;i++)
    {   printf("\n____________________________________________________________________________________________");
        printf("\n|%5d|%20s|%15s|%15s|%15d|%15.2f|",i,KH[i].hovaten.hodem,KH[i].hovaten.ten,KH[i].id,KH[i].sodien,KH[i].money);
    }
    printf("\n____________________________________________________________________________________________");


}



int main()
{   int n;
    printf("---------------------------------- BAI TOAN TIEN DIEN ----------------------------------");
    printf("\nSo khach hang... :");
    scanf("%d",&n);
    printf("Ban da chon %d khach hang\n",n);
    struct tenKH hovaten;
    struct customer KH[100];
    Input(KH,n);
    calculate(KH,n);
    Output(KH,n);
    tongtien(KH,n);
    printf("\nBANG THONG TIN XEP THEO SO TIEN KHACH HANG\n");
    sapxep(KH,n);
    Output(KH,n);
    printf("\n\nKHACH HANG CO SO TIEU THU CAO NHAT\n\n");
    findmax(KH,n);
    Output(KH,n);
    printf("\nKhach hang %s %s la khach hang co so tieu thu cao nhat.", KH[1].hovaten.hodem, KH[1].hovaten.ten);
    printf("\n\nBANG THONG TIN KHACH HANG SAP XEP THEO TEN\n\n");
    sapxeptheoten(KH,n);
    Output(KH,n);


    return 0;
}
