#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	double x, y;

	printf("x, y좌표를 입력하시오 : ");
	scanf("%lf %lf", &x, &y);

	if (x > 0 && y > 0)
		printf("1사분면입니다.");

	else if (x < 0 && y > 0)
		printf("2사분면입니다.");
	else if (x < 0 && y < 0)
		printf("3사분면입니다.");
	else if (x > 0 && y < 0)
		printf("4사분면입니다.");
	else
		printf("선 위에 있습니다.");

	return 0;


}
