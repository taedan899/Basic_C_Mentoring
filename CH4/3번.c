#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x;
	int y;
	int temp;

	x = 10;
	y = 20;

	printf("x = %d y = %d\n", x, y);

	temp = x;
	x = y;
	y = temp;

	printf("x = %d y = %d", x, y);

	return 0;


		







	return 0;
}