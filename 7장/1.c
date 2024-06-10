#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

int main()
{
	int sec;


	printf("카운터의 초기값을 입력하시오(단위: 초)");
	scanf("%d", &sec);



	for (int i = sec; i > 0; i--)
	{
		printf("%d ", i);
		printf("\a");
		Sleep(1000);
		
	}


	return 0;

}