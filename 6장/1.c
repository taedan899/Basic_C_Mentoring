#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int A, B;
	
	printf("정수를 입력하시오 :");
	scanf("%d", &A);

	printf("정수를 입력하시오 :");
	scanf("%d", &B);

	if (A % B == 0)
		printf("약수입니다.");
	else
		printf("약수가 아닙니다");

	return 0;

}