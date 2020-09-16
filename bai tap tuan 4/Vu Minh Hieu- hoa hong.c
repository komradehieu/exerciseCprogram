#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>

int main()
{
    float commission;
    float revenue;

    printf("\n\n+ Nhap vao doanh thu cua nhan vien do:");
    scanf("%f", &revenue);

    printf("\n-----------------------------------------------");
    printf("\n+ Doanh thu cua nhan vien do la:%.3f dong",revenue);

    printf("\n-----------------------------------------------");
    printf("\n-----------------------------------------------");
    printf("\n-----------------------------------------------");

    if (revenue > 10000000)
    {   commission = 0.1*revenue;
        printf("\n\n+ Doanh thu cua nhan vien lon hon 10 trieu dong");
        printf("\n\n+ Nhan vien co duoc 10 phan tram tien hoa hong");
        printf("\n\n+ So tien nhan vien duoc linh la: %.3f dong",commission);
    }
    else
    {   commission = 0*revenue;
        printf("\n\n+ Doanh thu cua nhan vien khong lon hon 10 trieu dong");
        printf("\n\n+ Nhan vien khong duoc 10 phan tram tien hoa hong");
        printf("\n\n+ So tien hoa hong nhan vien duoc linh la: %.3f dong",commission);

    }
    printf("\n\n\n\n\n\n\n\n\n\n-----------------------------------------------");




    printf("\n\n\n\n\nVu Minh Hieu htttql 61a");


}
