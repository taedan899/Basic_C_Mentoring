#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int sum, i;
	sum = 0;
	i = 0;

	while (1)
	{
		i++;
		sum = sum + i;

		if (sum >= 10000)
			break;
		else if (sum < 10000)
			continue;


	}
	sum = sum - i;
	i = i - 1;
	
	printf("1���� %d������ ���� %d�Դϴ�.", i, sum);

	return 0;


}