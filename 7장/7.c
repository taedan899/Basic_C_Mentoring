#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i,o,p;
	
	for (i = 1; i <= 7; i++)
	{
		for (o = 1; o <= 7 - i; o++)
			printf(" ");
		for (p = 1; p <= i; p++)
			printf("*");

		printf("\n");
	}

	return 0;

}