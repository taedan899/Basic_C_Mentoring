#include <stdio.h>

void check_prime(int a,int b);

int main()
{
	int a, b;

	printf("a와 b를 입력하시오 : ");

	scanf_s("%d %d", &a, &b);

	check_prime(a, b);

	return 0;
}

void check_prime(int a, int b)
{		
	if (a > b)
		return;

	int c = 0;

	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0)
			c++;

	}

	if (c == 2)
		printf("%d ", a);

	return check_prime(a + 1,b);

}