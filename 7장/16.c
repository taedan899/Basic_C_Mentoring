#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d ", &num);


	do {
	
		printf("%d", num % 10);

		num /= 10;

	} while (num);

	return 0;

}