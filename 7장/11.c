#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char op;
	int f, L, i;

	f = 100;

	printf("���� ���ᷮ: %d\n", f);
	for (i = 0; i < 1000; i++)

	{	

		printf("���� ������ +, �Ҹ�� -�� �Է����ּ���: ");
		scanf("%c %d",&op,&L);
		printf("\n");

		if (op == '+')
		{
			f = f + L;
			printf("���� ���ᷮ: %d\n", f);
		}

		else if (op == '-')

		{
			f = f - L;
			printf("���� ���ᷮ: %d\n", f);
		}

		

		if (f < 20 && f > 0)
		{
			printf("(���) ���ᰡ 20���� �̸��Դϴ�.\n");
		}



		L = 0;

	}
		



	return 0;

}