#include <stdio.h>
#include <conio.h>


void hieu(char* hieu2)
{
	char *pointer, *daonguoc;

	pointer = hieu2;

	while (*pointer != '\0')
    {
		++pointer;
	}
        --pointer;

	for (daonguoc = hieu2; pointer >= daonguoc;)
        {
		if (*pointer == *daonguoc) {
			--pointer;
			  daonguoc++;
		}
		else
			break;
	}

	if (daonguoc > pointer)
		printf("\n    Chuoi %s doi xung!!!\n\n\n",hieu2);
	else
		printf("\n    Chuoi %s khong doi xung!!!\n\n\n",hieu2);
}


int main()
{   //SetConsoleOutputCP();
    printf("▬▬▬ Kiem tra chuoi doi xung dung pointer ▬▬▬\n");
    printf("    Có phân biệt chữ hoa chữ thường\n");
    printf("    Có thể nhập chữ, số, kí tự đặc biệt...\n\n\n\n");
	char hieu2[1000];
	printf("    Chuỗi của bạn là gì ??:");
	scanf("%s",hieu2);

	hieu(hieu2);

	return 0;
}
//bachieu



#include <stdio.h>
#include <stdlib.h>
// nhớ đổi hết tiếng việt về không dấu

void count_vowel(char* hieu)
{
    int NguyenAm = 0;
    int i;
    char ch;
    for(i=0; hieu[i]!='\0';i++)
    {
        ch = hieu[i];
        if    (ch == 'a' || ch == 'e'|| ch == 'i' || ch == 'o'|| ch == 'u' || ch == 'A'|| ch == 'E' || ch == 'I'|| ch == 'O' || ch == 'U')
        {
            NguyenAm++;
        }
    }
    printf("\n\nSố nguyên âm trong chuỗi ''%s'' bạn đã nhập là : %d\n\n",hieu,NguyenAm);
}
int main()
{   char* hieu[1000];
    int NguyenAm = 0;
    int i;
    char ch;
    printf("Chuỗi bạn cần nhập: ");
    fflush(stdin);
    gets(hieu);
    count_vowel(hieu);
    printf("\n\n\n\n\n\n\n\n\ ►Hiếu◄  \n\n\n");


}
