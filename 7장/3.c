#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int sum, i, number; \


		sum = 0;
	
	for (i = 0; i < 3; i++)
	{    

		printf("���ڸ� �Է��Ͻÿ�: ");
		scanf("%d", &number);

		if (number < 0)
		{   

			i--;
			continue;
		}
		else
			sum += number;


	}

	printf("�հ�� %d�Դϴ�.", sum);

		return 0;


}

