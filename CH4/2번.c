#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;

	printf("16������ �Է��ϼ���.");
	scanf("%x", &a);

	printf("8�����δ� %#o�Դϴ�.\n 10�����δ� %d�Դϴ�.\n 16�����δ� %#x�Դϴ�.\n ", a, a, a);

	return 0;

}