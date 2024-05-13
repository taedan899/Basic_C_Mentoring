#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char x;

	printf("문자를 입력하시오: ");
	scanf("%c", &x);

	switch (x)
	{
		case 'a':
		case 'i':
		case 'u':
		case 'e':
		case 'o':
		case 'y':
		case 'w':
			printf("모음 입니다 ");
			break;

		default:
			printf("자음 입니다. ");
			break;
			
			return 0;

	}
}