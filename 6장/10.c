#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	double x, y;

	printf("x, y��ǥ�� �Է��Ͻÿ� : ");
	scanf("%lf %lf", &x, &y);

	if (x > 0 && y > 0)
		printf("1��и��Դϴ�.");

	else if (x < 0 && y > 0)
		printf("2��и��Դϴ�.");
	else if (x < 0 && y < 0)
		printf("3��и��Դϴ�.");
	else if (x > 0 && y < 0)
		printf("4��и��Դϴ�.");
	else
		printf("�� ���� �ֽ��ϴ�.");

	return 0;


}
