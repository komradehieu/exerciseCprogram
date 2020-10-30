#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

struct hello
{
    char ten[100];
    int sonha;
    int songuoi;
    float dientichcanho;
    float tiendv;
};

void Input(struct hello KH[100],int n)
{   int i;
    for(i=1;i<=n;i++)
    {
    printf("\n");
    printf(" - Thong tin HGD thu %d la :",i);
    printf("\n + Ten chu ho: ");
    fflush(stdin);
    gets(KH[i].ten);
    printf(" + So nha : ");
    scanf("%d",&KH[i].sonha);
    printf(" + So nguoi o : ");
    scanf("%d",&KH[i].songuoi);
    printf(" + Dien tich can ho : ");
    scanf("%f",&KH[i].dientichcanho);
    }
}
void tiendichvu(struct hello KH[100], int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        KH[i].tiendv = KH[i].dientichcanho*10000;
    }
}
void tongtiendichvu(struct hello KH[100],int n)
{   float tongtien = 0;
    int i;
    for(i=1;i<=n;i++)
    {
        tongtien = tongtien + KH[i].tiendv;
    }
    printf("\n Tong tien dv chu dau tu thu duoc la : %f",tongtien);

}
void sapxep(struct hello KH[100], int n)
{
    int i,j;
    struct hello temp;
    for( i= 1; i<=n; i++)
    {
        for (j=1; j<=n; j++)
        {
            if(KH[i].tiendv>KH[j].tiendv)
            {
                temp = KH[i];
                KH[i] = KH[j];
                KH[j] = temp;
            }
        }
    }
}
void output(struct hello KH[100], int n)
{   int i;
    printf("\n\n========= BANG THONG TIN NHA ========= ");
    printf("\n%-25s%-25s%-25s%-25s","STT","TEN CHU HO","DIEN TICH","TIEN DV");
    for(i=1; i<=n;i++)
    {
        printf("\n%-25d%-25s%-25.2f%-25.2f",i,KH[i].ten,KH[i].dientichcanho,KH[i].tiendv);
    }
}
int main()
{
    int n;
    struct hello KH[100];
    printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BAI TOAN QUAN LY NHA DAT \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n - So ho gia dinh can luu thong tin : ");
    scanf("%d",&n);
    Input(KH,n);
    tiendichvu(KH,n);
    tongtiendichvu(KH,n);
    sapxep(KH,n);
    output(KH,n);
    printf("\n\n\n\n\n");
}
