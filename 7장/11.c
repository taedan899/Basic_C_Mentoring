#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char op;
	int f, L, i;

	f = 100;

	printf("현재 연료량: %d\n", f);
	for (i = 0; i < 1000; i++)

	{	

		printf("연료 충전은 +, 소모는 -로 입력해주세요: ");
		scanf("%c %d",&op,&L);
		printf("\n");

		if (op == '+')
		{
			f = f + L;
			printf("현재 연료량: %d\n", f);
		}

		else if (op == '-')

		{
			f = f - L;
			printf("현재 연료량: %d\n", f);
		}

		

		if (f < 20 && f > 0)
		{
			printf("(경고) 연료가 20리터 미만입니다.\n");
		}



		L = 0;

	}
		



	return 0;

}