#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char x;

	printf("���ڸ� �Է��Ͻÿ�: ");
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
			printf("���� �Դϴ� ");
			break;

		default:
			printf("���� �Դϴ�. ");
			break;
			
			return 0;

	}
}