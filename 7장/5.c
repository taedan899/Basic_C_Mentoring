#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int r, n;
	double result = 1.0;
	
	printf("�Ǽ��� ���� �Է��Ͻÿ�: ");
	scanf("%d", &r);

	printf("�ŵ����� Ƚ���� �Է��Ͻÿ�: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
		result = result * r;

	printf("������� %lf", result);

		
}