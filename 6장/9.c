#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x, formula1, formula2;
	
	printf("x���� �Է��Ͻÿ� : ");
	scanf("%lf", &x);
	
	formula1 = x * x - 9 * x + 2;
	formula2 = 7 * x + 2;

	if (x <= 0)
		printf("f(x)�� ���� %.2lf�Դϴ�.", formula1);
	else
		printf("f(x)�� ���� %.2lf�Դϴ�.", formula2);

	return 0;

}