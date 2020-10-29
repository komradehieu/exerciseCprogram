#include <stdio.h>
#include <stdlib.h>
struct comrade
{
    char ten[100];
    int namsinh;
    float hspc;
    float hsl;
    float thuong;
    float baohiem;
    float thunhap;
    float thue;
};

void Input(struct comrade canbo[100],int n)
{
    int i;
    for (i = 1; i <=n; i++)
    {   printf("\n");
        printf("Thong tin can bo thu #%d\n",i);
        printf("Ten can bo: ");
        fflush(stdin);
        gets(canbo[i].ten);
        printf("Nam sinh can bo: ");
        scanf("%d",&canbo[i].namsinh);
        printf("He so luong can bo: ");
        scanf("%f",&canbo[i].hsl);
        printf("He so phu cap can bo: ");
        scanf("%f",&canbo[i].hspc);
        printf("Thuong can bo: ");
        scanf("%f",&canbo[i].thuong);
        printf("Bao hiem can bo: ");
        scanf("%f",&canbo[i].baohiem);



    }
}

void tienduoclinh(struct comrade canbo[100],int n)
{
    int i;
    for (i = 1; i <=n; i++)
    {
        canbo[i].thunhap =(canbo[i].hsl+canbo[i].hspc)*2+canbo[i].thuong-canbo[i].baohiem;
    }
}

void thuethunhap(struct comrade canbo[100],int n)
{   int i;
    for (i = 1; i <=n; i++)
    {
        if(canbo[i].thunhap>10000000)
        {
            canbo[i].thue = 0.1*canbo[i].thunhap;
        }
        else{
            canbo[i].thue = 0;
        }
    }

}
void output(struct comrade canbo[100],int n)
{
    int i;
        printf("\n%-5s%-25s%-25s%-25s","STT","HO VA TEN","TIEN DUOC LINH","THUE TNCN");
    for (i = 1; i <=n; i++)
    {

       printf("\n%-5d%-25s%-25.2f%-25.2f",i,canbo[i].ten,canbo[i].thunhap,canbo[i].thue);
}}

void sapxep(struct comrade canbo[100],int n)
{
 int i,j;
 struct comrade temp;
 for(i = 1; i<=n; i++)
 {
     for (j=1;j<=n;j++)
     {
        if(canbo[i].thunhap>canbo[j].thunhap)
        {
            temp = canbo[i];
            canbo[i]= canbo[j];
            canbo[j]= temp;
        }
     }
 }
}
int main()
{
    int n;
    struct comrade canbo[100];
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BAI TOAN QUAN LY CAN BO \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\nSo can bo la:");
    scanf("%d",&n);
    Input(canbo,n);
    tienduoclinh(canbo,n);
    thuethunhap(canbo,n);
    sapxep(canbo,n);
    output(canbo,n);

    return 0;
}
