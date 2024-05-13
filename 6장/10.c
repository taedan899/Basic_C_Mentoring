#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y;

	printf("x좌표와 y좌표를 입력하십시오.");
	scanf("%d &d", &x, &y);
	
	if (x > 0 && y > 0)
		printf("1사분면입니다.");
	else if (x < 0 && y > 0)
		printf("2사분면입니다.");
	else if (x < 0 && y < 0)
		printf("3사분면입니다.");
	else if (x > 0 && y < 0)
		printf("4사분면입니다.");

	else
		printf("선위에 존재합니다");

	return 0;


	
}