#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

int main()
{
	int sec;


	printf("ī������ �ʱⰪ�� �Է��Ͻÿ�(����: ��)");
	scanf("%d", &sec);



	for (int i = sec; i > 0; i--)
	{
		printf("%d ", i);
		printf("\a");
		Sleep(1000);
		
	}


	return 0;

}