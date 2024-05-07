#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x, formula1, formula2;
	
	printf("x값을 입력하시오 : ");
	scanf("%lf", &x);
	
	formula1 = x * x - 9 * x + 2;
	formula2 = 7 * x + 2;

	if (x <= 0)
		printf("f(x)의 값은 %.2lf입니다.", formula1);
	else
		printf("f(x)의 값은 %.2lf입니다.", formula2);

	return 0;

}