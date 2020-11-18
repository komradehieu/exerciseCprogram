#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 struct sinhvien
 {
     char ten[100];
     char id[100];
     float diem;
 };

 void input(struct sinhvien sv[100],int n)
 {
     int i;
     for(i=1;i<=n;i++)
     {   printf("\n _______________________________");
         printf("\n - Thong tin sv %d",i);
         printf(" + Ho ten:");
         fflush(stdin);
         gets(sv[i].ten);
         printf(" + Id:");
         fflush(stdin);
         gets(sv[i].id);
         printf(" + Diem:");
         scanf("%f",&sv[i].diem);
     }
     printf("\n_______________________________");
 }

 int sx(struct sinhvien sv[100],int n)
 {
     int i;
     int dem = 0;
     float maximum = 0;
     maximum = sv[1].diem;
     for(i=2;i<=n;i++)
     {
         if(sv[i].diem > maximum)
         {
             maximum = sv[i].diem;
         }
     }
     for(i=1;i<=n;i++)
     {
         if(sv[i].diem== maximum)
         {
             dem++;
         }
     }
     return dem;
 }

 void sapxep(struct sinhvien sv[100],int n)
 {
     int i,j;
     struct sinhvien temp;
     for(i=1;i<=n;i++)
     {
         for(j=1;j<=n;j++)
         {
             if(sv[i].diem>sv[j].diem)
             {
                 temp = sv[i];
                 sv[i] = sv[j];
                 sv[j] = temp;
             }
         }
     }
 }

 void output(struct sinhvien sv[100],int n)
 {
     int i;
     printf("\n +-----+---------------+----------+");
     printf("\n |%5s|%15s|%10s|","STT","TEN","DIEM");
     for(i=1;i<=n;i++)
     {
         printf("\n +-----+---------------+----------+");
         printf("\n |%5d|%15s|%10.2f|",i,sv[i].ten,sv[i].diem);
     }
       printf("\n +-----+---------------+----------+");
 }

int main()
{
    int i;
    int n;
    int dem = 0;
    struct sinhvien sv[100];
    scanf("%d",&n);
    printf("\n\n\n\n");

    printf("\n - BANG THONG TIN SV CO DIEM CAO NHAT -");
    input(sv,n);
    sapxep(sv,n);
    dem = sx(sv,n);
    output(sv,dem);

    printf("\n\n\n\n");

    printf("\n - BANG THONG TIN SV CO THU TU GIAM DAN -");
    sapxep(sv,n);
    output(sv,n);
}
