#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int A, B;
	
	printf("������ �Է��Ͻÿ� :");
	scanf("%d", &A);

	printf("������ �Է��Ͻÿ� :");
	scanf("%d", &B);

	if (A % B == 0)
		printf("����Դϴ�.");
	else
		printf("����� �ƴմϴ�");

	return 0;

}