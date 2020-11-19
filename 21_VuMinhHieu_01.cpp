#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct covid
{
    char ma[100];
    char ten[100];
    float nguoinhiem;
    float nguoituvong;
    float nguoikhoibenh;
    float sum;
    float tyletuvong;
};

void Input(struct covid cv[100],int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("\n ___________________________________________________________");
        printf("\n - Thong tin  tinh hinh covid cua tinh #%d : ",i);
        printf("\n + Ma tinh: ");
        fflush(stdin);
        gets(cv[i].ma);
        printf(" + Ten tinh: ");
        fflush(stdin);
        gets(cv[i].ten);
        printf(" + So nguoi nhiem trong tinh: ");
        scanf("%f",&cv[i].nguoinhiem);
        printf(" + So nguoi tu vong trong tinh: ");
        scanf("%f",&cv[i].nguoituvong);
        printf(" + So nguoi khoi benh trong tinh: ");
        scanf("%f",&cv[i].nguoikhoibenh);

    }
    printf("\n ___________________________________________________________");
}
void tinhtong(struct covid cv[100],int n)
{
    int i;
    cv->sum = 0;
    for(i=1;i<=n;i++)
    {
        cv->sum = cv->sum + cv[i].nguoinhiem;
    }

}

void tuvongcaonhat(struct covid cv[100],int n)
{
    int i,j;
    struct covid temp;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(cv[i].nguoituvong>cv[j].nguoituvong)
            {
                temp = cv[i];
                cv[i] = cv[j];
                cv[j] = temp;
            }
        }

    }

}
int sx(struct covid cv[100],int n)
{
    int i;
    int dem = 0;
    float maximum = 0;
    maximum = cv[1].nguoituvong;
    for(i=2;i<=n;i++)
    {
        if(cv[i].nguoituvong>maximum)
        {
            maximum = cv[i].nguoituvong;
        }

    }
    for(i=1;i<=n;i++)
    {
        if(cv[i].nguoituvong == maximum)
        {
            dem++;
        }
    }
    return dem;

}

void tyletuvong(struct covid cv[100],int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        cv[i].tyletuvong = (cv[i].nguoituvong/cv[i].nguoinhiem)*100;

    }
}

void outputtyletuvong(struct covid cv[100],int n)
{
    int i;
    printf("\n +---------------+-----------------------------------+");
    printf("\n |%-15s|%35s|","Ten Tinh","Ty le (%) tu vong / nguoi nhiem");
    for(i=1;i<=n;i++)
    {
        printf("\n +---------------+-----------------------------------+");
        printf("\n |%-15s|%35.1f|",cv[i].ten,cv[i].tyletuvong);
    }
    printf("\n +---------------+-----------------------------------+");
}

void outputnguoituvongcaonhat(struct covid cv[100],int n)
{
    int i;
    printf("\n +---------------+---------------+");
    printf("\n |%-15s|%15s|","TEN TINH","SO TU VONG");
    for(i=1;i<=n;i++)
    {
        printf("\n +---------------+---------------+");
        printf("\n |%-15s|%15.0f|",cv[i].ten,cv[i].nguoituvong);
    }
    printf("\n +---------------+---------------+");
}

void sapxepgiamdantheonguoinhiem(struct covid cv[100],int n)
{
    int i,j;
    struct covid temp;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(cv[i].nguoinhiem>cv[j].nguoinhiem)
            {
                temp = cv[i];
                cv[i] = cv[j];
                cv[j] = temp;
            }
        }

    }

}

void Output(struct covid cv[100],int n)
{
    int i;
    printf("\n +----------+---------------+-------------------------+");
    printf("\n |%-10s|%-15s|%25s|","Ma Tinh","Ten tinh","So nguoi nhiem COVID");
    for(i=1;i<=n;i++)
    {
        printf("\n +----------+---------------+-------------------------+");
        printf("\n |%-10s|%-15s|%25.0f|",cv[i].ma,cv[i].ten,cv[i].nguoinhiem);
    }
    printf("\n +----------+---------------+-------------------------+");
    printf("\n |          |%-15s|%25.0f|","Tong so nguoi",cv->sum);
    printf("\n +----------+---------------+-------------------------+");
}
int main()
{
   struct covid cv[100];
   int i;
   int n;
   int dem =0;
   int maximum = 0;
   //cau 1
   printf("\n - Nhap so tinh can luu du lieu :");
   scanf("%d",&n);
   Input(cv,n);
   //cau 2
   tinhtong(cv,n);

   printf("\n\n\n + Tong so ca nhiem benh COVID cua tat ca cac tinh la : %.0f",cv->sum);
   //cau 3
   tuvongcaonhat(cv,n);
   printf("\n\n_____________________________________________________________________________________");
   printf("\n\n");
   printf("\n ===== CAC TINH CO NGUOI TU VONG CAO NHAT =====\n\n");
   sapxepgiamdantheonguoinhiem(cv,n);
   dem = sx(cv,n);
   outputnguoituvongcaonhat(cv,dem);
   printf("\n\n_____________________________________________________________________________________");
   printf("\n\n\n");
   //cau 4

   printf("\n\n ======= TY LE (%%) TU VONG/SO NGUOI NHIEM DO COVID ====== \n\n");
   tyletuvong(cv,n);
   outputtyletuvong(cv,n);
   printf("\n\n_____________________________________________________________________________________");
   //cau5
   printf("\n\n\n");

   printf("\n\n ===== BANG THONG TIN COVID CAC TINH THEO THU TU GIAM DAN CUA SO NGUOI NHIEM ======= \n\n");
   sapxepgiamdantheonguoinhiem(cv,n);
   Output(cv,n);
   printf("\n\n\n");
   printf("\n\n_____________________________________________________________________________________");
}
