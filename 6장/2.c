#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y, z, min;

	printf("정수 3개를 입력하시오 :");
	scanf("%d %d %d",&x, &y, &z);

	min = 0;


	if (x > y)
		min = y;
	else
		min = x;



	if (z > min)
		printf("가장 작은 정수는 %d입니다", min);
	else
		printf("가장 작은 정수는 %d입니다", z);

	return 0;


}