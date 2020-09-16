#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>



int main()
{
   int months, years;


 printf("---Bai toan dua ra so ngay trong thang---\n");




       do   {
                    printf("\n\n\n Nhap vao thang bat ki trong nam:");
                    scanf("%d",&months);


                    if ((months > 12) || (months < 1))
                        {
                    printf("\n !!!Khong co thang %d, nhap 1 so tu 1 - 12 !!! ",months);
                        }
            }
       while (months>12 || months < 1);


                    printf("\n\n\nNhap vao 1 nam bat ki:");
                    scanf("%d",&years);


                    if ((years%4 ==0) && (years%100 !=0))

                    {
                       printf("Nam %d la nam nhuan",years);
                       printf("\n\n-------------------------------------------");
                       switch (months)
                        {
                            case 1: printf("\n\nThang %d nam %d co 31 ngay",months, years); break;
                            case 3: printf("\n\nThang %d nam %d co 31 ngay",months, years); break;
                            case 5: printf("\n\nThang %d nam %d co 31 ngay",months, years); break;
                            case 7: printf("\n\nThang %d nam %d co 31 ngay",months, years); break;
                            case 8: printf("\n\nThang %d nam %d co 31 ngay",months, years); break;
                            case 10: printf("\n\nThang %d nam %d co 31 ngay",months, years); break;
                            case 12: printf("\n\nThang %d nam %d co 31 ngay",months, years); break;
                            case 2: printf("\n\nThang %d nam %d co 29 ngay",months, years); break;
                            case 4: printf("\n\nThang %d nam %d co 30 ngay",months, years); break;
                            case 6: printf("\n\nThang %d nam %d co 30 ngay",months, years); break;
                            case 9: printf("\n\nThang %d nam %d co 30 ngay",months, years); break;
                            case 11: printf("\n\nThang %d nam %d co 30 ngay",months, years); break;

                        }

                    }

                    else if (years%4 !=0)

                    {
                       printf("Nam %d la nam khong nhuan",years);
                       printf("\n\n-------------------------------------------");



                       switch (months)
                        {
                            case 1: printf("\n\nThang %d nam %d co 31 ngay",months, years); break;
                            case 3: printf("\n\nThang %d nam %d co 31 ngay",months, years); break;
                            case 5: printf("\n\nThang %d nam %d co 31 ngay",months, years); break;
                            case 7: printf("\n\nThang %d nam %d co 31 ngay",months, years); break;
                            case 8: printf("\n\nThang %d nam %d co 31 ngay",months, years); break;
                            case 10: printf("\n\nThang %d nam %d co 31 ngay",months, years); break;
                            case 12: printf("\n\nThang %d nam %d co 31 ngay",months, years); break;
                            case 2: printf("\n\nThang %d nam %d co 28 ngay",months, years); break;
                            case 4: printf("\n\nThang %d nam %d co 30 ngay",months, years); break;
                            case 6: printf("\n\nThang %d nam %d co 30 ngay",months, years); break;
                            case 9: printf("\n\nThang %d nam %d co 30 ngay",months, years); break;
                            case 11: printf("\n\nThang %d nam %d co 30 ngay",months, years); break;

                        }

                    }

                    printf("\n\n\n\n\n-------------------------------------");

                    printf("\n\n\n\n\n------------Vu Minh Hieu HTTTQL 61a-----------------");







}




