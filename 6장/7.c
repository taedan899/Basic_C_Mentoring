#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double w, h;
	double b;
	
	printf("ü�߰� Ű�� �Է��Ͻÿ� : ");
	scanf("%d %d", &w, &h);

	b = (h - 100) * 0.9;

	if (w < b)
		printf("��ü���Դϴ�.");
	else if (w > b)
		printf("��ü���Դϴ�.");
	else
		printf("����ü���Դϴ�.");

	return 0;









}