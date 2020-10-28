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
