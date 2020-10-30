#include <stdio.h>
#include <windows.h>

void hieu(char* hello)
{
	char *pointer, *daonguoc;

	pointer = hello;

	while (*pointer != '\0')
    {
		++pointer;
	}
        --pointer;

	for (daonguoc = hello; pointer >= daonguoc;)
        {
		if (*pointer == *daonguoc) {
			--pointer;
			  daonguoc++;
		}
		else
			break;
	}

	if (daonguoc > pointer)
		printf("\n    Chuỗi %s đối xứng!!!\n\n\n",hello);
	else
		printf("\n    Chuỗi %s không đối xứng!!!\n\n\n",hello);
}

// Driver code
int main()
{   SetConsoleOutputCP(65001);
    printf("▬▬▬ Kiểm tra chuỗi đối xứng dùng pointer ▬▬▬\n");
    printf("    Có phân biệt chữ hoa chữ thường\n");
    printf("    Có thể nhập chữ, số, kí tự đặc biệt...\n\n\n\n");
	char hello[1000];
	printf("    Chuỗi của bạn là gì ??:");
	scanf("%s",hello);

	hieu(hello);

	return 0;
}
