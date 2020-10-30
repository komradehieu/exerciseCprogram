#include <stdio.h>
#include <stdlib.h>
void Input(char ten[100][50], int ns[100], float hspc[100], float hsl[100], float thuong[100], float baohiem[100], float thunhap[100],float thue[100], int n )
{
    int i;
    for (i = 1; i <=n; i++)
    {   printf("\n");
        printf("Thong tin can bo thu #%d\n",i);
        printf("Ten can bo: ");
        fflush(stdin);
        gets(ten[i]);
        printf("Nam sinh can bo: ");
        scanf("%d",&ns[i]);
        printf("He so luong can bo: ");
        scanf("%f",&hsl[i]);
        printf("He so phu cap can bo: ");
        scanf("%f",&hspc[i]);
        printf("Thuong can bo: ");
        scanf("%f",&thuong[i]);
        printf("Bao hiem can bo: ");
        scanf("%f",&baohiem[i]);



    }
}

void tienduoclinh(char ten[100][50], int ns[100], float hspc[100], float hsl[100], float thuong[100], float baohiem[100], float thunhap[100],float thue[100], int n)
{
    int i;
    for (i = 1; i <=n; i++)
    {
        thunhap[i]= (hsl[i]+hspc[i])*2+thuong[i]-baohiem[i];
    }
}

void thuetncn(char ten[100][50], int ns[100], float hspc[100], float hsl[100], float thuong[100], float baohiem[100], float thunhap[100],float thue[100], int n)
{
    int i;
    for (i = 1; i <=n; i++)
    {
      if(thunhap[i]>10000000)
      {
          thue[i]= 0.1*thunhap[i];
      }
      else
        {
         thue[i] = 0;
        }

    }
}

void output(char ten[100][50], int ns[100], float hspc[100], float hsl[100], float thuong[100], float baohiem[100], float thunhap[100],float thue[100], int n)
{
    int i;
        printf("\n%-5s%-25s%-25s%-25s","STT","HO VA TEN","TIEN DUOC LINH","THUE TNCN");
    for (i = 1; i <=n; i++)
    {

       printf("\n%-5d%-25s%-25.2f%-25.2f",i,ten[i],thunhap[i],thue[i]);
    }
}

void sapxep(char ten[100][50], int ns[100], float hspc[100], float hsl[100], float thuong[100], float baohiem[100], float thunhap[100],float thue[100], int n)
{
    int i,j;
    float temp;
    for (i = 1; i <=n; i++)
    { for(j=1;j<=n;j++)
     if (thunhap[i]<thunhap[j])
    {
        temp = thunhap[i];
        thunhap[i] = thunhap[j];
        thunhap[j] = temp;
    }

    }

}

int main()
{   int n;
    char ten[100][50];
    int ns[100];
    float hspc[100];
    float hsl[100];
    float thuong[100];
    float baohiem[100];
    float thue[100];
    float thunhap[100];
    scanf("%d",&n);

    Input(ten,ns,hspc,hsl,thuong,baohiem,thunhap,thue,n);
    tienduoclinh(ten,ns,hspc,hsl,thuong,baohiem,thunhap,thue,n);
    thuetncn(ten,ns,hspc,hsl,thuong,baohiem,thunhap,thue,n);
    sapxep(ten,ns,hspc,hsl,thuong,baohiem,thunhap,thue,n);
    output(ten,ns,hspc,hsl,thuong,baohiem,thunhap,thue,n);


    printf("Hello world!\n");
    return 0;
}
