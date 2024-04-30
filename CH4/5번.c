#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SQMETER 3.3058

int main()
{

	int p;

	printf("평을 입력하시오.");

	scanf("%d", &p);

	printf("%lf평방미터입니다.", p * SQMETER);

	return 0;

	


}