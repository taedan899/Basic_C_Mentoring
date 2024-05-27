#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int r, n;
	double result = 1.0;
	
	printf("실수의 값을 입력하시오: ");
	scanf("%d", &r);

	printf("거듭제곱 횟수를 입력하시오: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
		result = result * r;

	printf("결과값은 %lf", result);

		
}