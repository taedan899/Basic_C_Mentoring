#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y, z, min;

	printf("���� 3���� �Է��Ͻÿ� :");
	scanf("%d %d %d",&x, &y, &z);

	min = 0;


	if (x > y)
		min = y;
	else
		min = x;



	if (z > min)
		printf("���� ���� ������ %d�Դϴ�", min);
	else
		printf("���� ���� ������ %d�Դϴ�", z);

	return 0;


}