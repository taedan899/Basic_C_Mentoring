#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int height, age;

	printf("Ű�� �Է��Ͻÿ� : ");
	scanf("%d", &height);
	
	printf("���̸� �Է��Ͻÿ� : ");
	scanf("%d", &age);

	if (age >= 10 && height >= 140)
		printf("Ÿ�� �����ϴ�.");

	else
		printf("�˼��մϴ�. ");

	return 0;

}