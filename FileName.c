#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

void pri(char s[], int a)
{
	printf("난 %s고  %d살이야",s,a);


}


void cal(int a, int b);

double power(double num, double n);

void main()
{	
	int i = 20;
	
	int a, b, c = 0;

	double num, n;


	printf(">> "); scanf_s("%d", &a);
	printf(">> "); scanf_s("%d", &b);

	cal(a, b);

	printf("\n");
	printf(">> "); scanf_s("%lf", &num);
	printf(">> "); scanf_s("%lf", &n);

	printf("\n%.3lf^%.3lf = %.3lf", num, n, power(num,n));

}

int add(int a, int b) { return a + b; }

int sub(int a, int b) { return a - b; }

int mul(int a, int b) { return a * b; }

double dev(int a, int b) { return (double)a / b; }



void cal(int a, int b) {

	printf("%d + %d = %3d\n", a, b, add(a, b));
	printf("%d - %d = %3d\n", a, b, sub(a, b));
	printf("%d * %d = %3d\n", a, b, mul(a, b));
	printf("%d / %d = %3f", a, b, dev(a, b));



}

double power(double num, double n)
{	
	double result = 1;

	for (int i = 0; i < n; i++)
	{
		result *= num;

	}

	return result;
}