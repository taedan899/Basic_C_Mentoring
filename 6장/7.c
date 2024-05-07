#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double w, h;
	double b;
	
	printf("체중과 키를 입력하시오 : ");
	scanf("%d %d", &w, &h);

	b = (h - 100) * 0.9;

	if (w < b)
		printf("저체중입니다.");
	else if (w > b)
		printf("과체중입니다.");
	else
		printf("정상체중입니다.");

	return 0;









}