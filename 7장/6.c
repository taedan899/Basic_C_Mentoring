#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int  n, i, sum;

	sum = 0;

	printf("n�� ���� �Է��Ͻÿ�: ");
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++)
	{
		sum += i * i;

	}

	printf("��갪�� %d�Դϴ�.", sum);

	return 0;
}