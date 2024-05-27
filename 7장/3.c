#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int sum, i, number; \


		sum = 0;
	
	for (i = 0; i < 3; i++)
	{    

		printf("숫자를 입력하시오: ");
		scanf("%d", &number);

		if (number < 0)
		{   

			i--;
			continue;
		}
		else
			sum += number;


	}

	printf("합계는 %d입니다.", sum);

		return 0;


}

