#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;

	printf("16진수를 입력하세요.");
	scanf("%x", &a);

	printf("8진수로는 %#o입니다.\n 10진수로는 %d입니다.\n 16진수로는 %#x입니다.\n ", a, a, a);

	return 0;

}