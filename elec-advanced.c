#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct elect
{
    char ten[100];
    float s9;
    float s10;
    float tieuthu10;
    float money10;
    float sum;
};

void input(struct elect dien[100], int n)
{
    int i;
    for(i=1;i<=n;i++)
    {   printf("\n _____________________________________");
        printf("\n - KHACH HANG %d",i);
        printf("\n  + Ten : ");
        fflush(stdin);
        gets(dien[i].ten);
        printf("\n  + so dien thang 9: ");
        scanf("%f",&dien[i].s9);
        printf("\n  + so dien thang 10: ");
        scanf("%f",&dien[i].s10);

    }
    printf("\n _____________________________________");
}

void calc(struct elect dien[100], int n)
{
    int i;
    dien->sum=0;
    for(i=1;i<=n;i++)
    {
        dien[i].tieuthu10 = dien[i].s10 - dien[i].s9;
        dien[i].money10= dien[i].tieuthu10*8000;
        dien->sum = dien->sum + dien[i].money10;
    }
}

void sapxeptulondenbe(struct elect dien[100], int n)
{
    int i,j;
    struct elect temp;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(dien[i].tieuthu10>dien[j].tieuthu10)
            {
                temp = dien[i];
                dien[i] = dien[j];
                dien[j] = temp;
            }
        }
    }
}

void sapxepbedenlon(struct elect dien[100], int n)
{
    int i,j;
    struct elect temp;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(dien[i].money10<dien[j].money10)
            {
                temp = dien[i];
                dien[i] = dien[j];
                dien[j] = temp;
            }
        }
    }
}

int chisocaonhat(struct elect dien[100], int n)
{
    int i;
    int dem = 0;
    float maximum = 0;
    maximum = dien[1].tieuthu10;
    for(i=2;i<=n;i++)
    {
        if(dien[i].tieuthu10>maximum)
        {
            maximum= dien[i].tieuthu10;
        }
    }
    for(i=1;i<=n;i++)
    {
        if(dien[i].tieuthu10==maximum)
        {
            dem++;
        }
    }
    return dem;
}

void output(struct elect dien[100], int n)
{   printf("\n +-----+---------------+---------------+----------+");
    printf("\n |%5s|%15s|%15s|%10s|","STT","HO TEN","TIEU THU","SO TIEN");
    int i;
    for(i=1;i<=n;i++)
    {
        printf("\n +-----+---------------+---------------+----------+");
        printf("\n |%5d|%15s|%15.1f|%10.1f|",i,dien[i].ten,dien[i].tieuthu10,dien[i].money10);
    }
    printf("\n +-----+---------------+---------------+----------+");
}

int main()
{
    int i;
    int n;
    struct elect dien[100];
    int dem = 0;


    scanf("%d",&n);
    printf("\n\n\n");


    input(dien,n);
    calc(dien,n);
    printf("\n\n\n");
    printf(" + Tong so tien nha san xuat dop duoc la %f ", dien->sum);


    sapxeptulondenbe(dien,n);
    dem = chisocaonhat(dien,n);
    output(dien,dem);
    printf("\n\n\n");

    sapxepbedenlon(dien,n);
    output(dien,n);


}
