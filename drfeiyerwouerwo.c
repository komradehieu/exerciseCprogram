#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <string.h>
main()
{
     //khai bao
     int n,i;
     char HT[100][30], GT[100][3];
     int NS[100];
     float diemTRR[100], diemTDC[100], diemtb[100];

     //nhap du lieu
     printf("nhap so sinh vien cua lop HTTTQL61:");
     scanf("%d",&n);
     for (i=1;i<=n;i++)
     {
         printf("Ho ten cua sinh vien thu %d la: ",i);
         scanf("%s", HT[i]);
         printf("Gioi tinh cua sinh vien thu %d la:",i);
         scanf("%s", GT[i]);
         printf("Nam sinh cua sinh vien thu %d la:",i);
         scanf("%d", &NS[i]);
         printf("Diem toan roi rac cua sinh vien thu %d la:",i);
         scanf("%f", &diemTRR[i]);
         printf("Diem tin dai cuong cua sinh vien thu %d la:", i);
         scanf("%f", &diemTDC[i]);
     }

         //CAU 2: tinh diem trung binh 2 mon
        for (i=1;i<=n;i++)  diemtb[i] = (diemTRR[i] + diemTDC[i])/2;


         // in thong tin cua sinh vien do
         printf("DANH SACH SINH VIEN LA:\n");
          for (i=1;i<=n;i++) printf("\n%-3d%-25s%3.1f",i,HT[i],diemtb[i]);


    // tim ra sv co diem tb lon nhat
    printf("\nDanh sach sinh vien co diem trung binh cao nhat");
    float max1 = diemtb[1];
    for (i=2;i<=n;i++)
            if (diemtb[i]> max1) max1 = diemtb[i];

     for (i=1;i<=n;i++)
            if (diemtb[i]==max1) printf("\n%-3d%-25s%3.1f",i,HT[i],diemtb[i]);

}
