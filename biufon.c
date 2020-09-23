#include <iostream>

using namespace std;

int main()
{
    int m,n,sodcchon,a[10][10],i,j,tong=0,lonnhat=0;
    printf("Nhap so dong ngang : ");
    scanf("%d",&m);
    printf("Nhap so cot doc    : ");
    scanf("%d",&n);
    printf("\n");
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("Nhap phan tu A[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    label:
        printf("\nCo cac lua chon sau :");
        printf("\n1 : Xem ma tran theo 1 chieu");
        printf("\n2 : Xem ma tran theo 2 chieu");
        printf("\n3 : Tinh tong cac phan tu trong ma tran");
        printf("\n4 : Tim phan tu lon nhat trong ma tran");
        printf("\n5 : Tinh tong duong cheo chinh trong ma tran");
        printf("\n0 : Tam dung\n");
        printf("So ban chon la :");
        scanf("%d",&sodcchon);

        if((sodcchon>5)||(sodcchon<0))
        {
            printf("\nMoi ban nhap lai !!! (chon tu 0 --> 5) \n");
            goto label;
        }

        while (sodcchon!=0)
        {
            if(sodcchon==1)
            {
                printf("\nDay cac phan tu la :\t");
                for(i=1;i<=m;i++)
                    {
                        for(j=1;j<=n;j++)
                            printf("%d    ",a[i][j]);
                    }
                printf("\n");
                goto label;
            }

            if(sodcchon==2)
            {
                printf("Ma tran la :\n");
                for(i=1;i<=m;i++)
                    {
                        for(j=1;j<=n;j++)
                           {
                                printf("  %d ",a[i][j]);
                           }
                        printf("\n");
                    }
                goto label;
            }

            if(sodcchon==3)
            {

                for(i=1;i<=m;i++)
                    {
                        for(j=1;j<=n;j++)
                            tong=tong+a[i][j];
                    }
                printf("\nTong cac phan tu trong ma tran la : %d",tong);
                printf("\n");
                goto label;
            }

            if(sodcchon==4)
            {

                for(i=1;i<=m;i++)
                    {
                        for(j=1;j<=n;j++)
                            if(lonnhat<a[i][j])
                                lonnhat=a[i][j];
                    }
                printf("\nGia tri lon nhat cua ma tran la : %d\n",lonnhat);
                goto label;
            }

            if(sodcchon==5)
            {
                if(m==n)
                {
                    for(i=1;i<=m;i++)
                    tong=tong+a[i][i];
                    printf("\nTong duong cheo chinh trong ma tran la : %d",tong);
                    printf("\n");
                }
                goto label;
            }
        }
    return 0;
}
