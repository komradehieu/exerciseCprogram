#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void count_vowel(char* hello)
{
    int NguyenAm = 0;
    int i;
    char ch;
    for(i=0; hello[i]!='\0';i++)
    {
        ch = hello[i];
        if    (ch == 'a' || ch == 'e'|| ch == 'i' || ch == 'o'|| ch == 'u' || ch == 'A'|| ch == 'E' || ch == 'I'|| ch == 'O' || ch == 'U')
        {
            NguyenAm++;
        }
    }
    printf("\n\nSố nguyên âm trong chuỗi ''%s'' bạn đã nhập là : %d\n\n",hello,NguyenAm);
}
int main()
{   char* hello[1000];
    int NguyenAm = 0;
    int i;
    char ch;
    SetConsoleOutputCP(65001);
    printf("Chuỗi bạn cần nhập: ");
    fflush(stdin);
    gets(hello);
    count_vowel(hello);
    printf("\n\n\n\n\n\n\n\n\ ►Hiếu◄  \n\n\n");


}
