#include <stdio.h>

int factorial(int n);
int power(int n, int x);
double tr(int n, int x);

int main()
{
	int n;
	int x;

	printf("정수를 입력하세요 : ");
	scanf_s("%d", &n);

	printf("x를 입력하세요 : ");
	scanf_s("%d", &x);

	printf("\n");
	printf("%f", tr(n, x));

	return 0;
}

int power(int n, int x)
{
	int r = 1;

	for (int i = 0; i < n; i++)
	{
		r *= x;
	}

	return r;
}

int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}
	else
	{
		return n * factorial(n - 1);
	}
}

double tr(int n, int x)
{
	static int c = 0;

	if (c > n)
	{
		return 0;
	}

	printf("%d/%d! + ", power(x, c), c);

	double result = power(x, c) / factorial(c);

	c++;

	return result + tr(n, x);
}