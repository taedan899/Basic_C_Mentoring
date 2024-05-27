#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2, bigdiv1;
	
	printf("정수 2개를 입력하시오: ");
	scanf("%d %d", &num1, &num2);
	
	bigdiv1 = 0;

	for (int i = 1; i <= num1 + num2; i++)
		if (num1 % i == 0 && num2 % i == 0)
			bigdiv1 = i;


	printf("최소 공배수는 %d입니다.", bigdiv1 * (num1 / bigdiv1) * (num2 / bigdiv1) );







}