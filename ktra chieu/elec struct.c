#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

struct hello
{
 char name[100];
 char add[100];
 char id[100];
 float tr;
 float sau;
 float used;
 float tien;
 float tong;

};


void Input(struct hello KH[100], int n)
{   int i;
    for( i = 1; i<=n;i++)
    {
    printf("\n");
    printf("Thong tin khach hang thu #%d ",i);
    printf("\nTen khach hang la :");
    fflush(stdin);
    gets(KH[i].name);
    printf("\nMa khach hang la :");
    fflush(stdin);
    gets(KH[i].id);
    printf("\nDia chi khach hang la :");
    fflush(stdin);
    gets(KH[i].add);
    printf("So tieu thu thang truoc :");
    scanf("%f",&KH[i].tr);
    printf("So tieu thu thang sau :");
    scanf("%f",&KH[i].sau);


    }

}

void sotieuthu(struct hello KH[100],int n)
{   int i;
    for(i = 1; i<=n;i++)
    {
        KH[i].used = KH[i].sau - KH[i].tr;
        KH[i].tien = (KH[i].used)*3000;

    }
}


void tieuthucaonhat(struct hello KH[100], int n)
{
    int i,j;
    struct hello maximum;
    for ( i =1; i<=n;i++)
    {
        for ( j = 1; j <=n; j++)
        {
            if(KH[i].used>KH[j].used)
            {
                maximum = KH[i];
                KH[i]= KH[j];
                KH[j] = maximum;
            }
        }
    }
}

void sudungnhieunhat(struct hello KH[100],int n)
{
    printf("\n\nKH su dung it nhat la : %s voi %f so dien", KH[n].name, KH[n].used);
}

void tongtiennccdopdc(struct hello KH[100],int n, float tong)
{

        int i;
        for(i = 1; i<=n;i++)
    {

            tong = tong + KH[i].tien;
    }
    printf("\nNHA cung cap dop duoc %.2f dong ", tong);
}

void Output(struct hello KH[100], int n)
{
    int i;
    printf("\n%-10s%-25s%-25s%-25s","STT","TEN","SO TIEU THU","TIEN PHAI TRA");
    for ( i = 1; i<=n; i++)
    {
        printf("\n%-10d%-25s%-25.2f%-25.2f",i,KH[i].name,KH[i].used,KH[i].tien);
    }
}
int main()
{   int n;
    float stt,tong;
    struct hello KH[100];
    do{
      printf("So khach hang la ? : ");
      scanf("%d",&n);

      if (n<=0)
      {
          printf("\nThang ngu!!! Cut!! Nhap LAI\n");
      }
    }

    while(n<=0);




    Input(KH,n);
    sotieuthu(KH,n);


    tieuthucaonhat(KH,n);
    Output(KH,n);
    sudungnhieunhat(KH,n);
    tongtiennccdopdc(KH,n,tong);




    printf("Hello world!\n");
    return 0;
}
