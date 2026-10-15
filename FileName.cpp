#include <stdio.h>

int baesu(int n, int x);

int main()
{
	int x, n,result;
	printf("n과x를 순서대로 입력하시오 : ");
	scanf_s("%d %d",&n,&x);
	
	x = x / n * n;


	result = baesu(n,x);
	printf("1~%d까지 %d의 배수의 합 = %d", x, n, result);



}


int baesu(int n, int x)
{	

	if (x == n)
		printf(" %d   ",x);
	else if(x > n)
		printf(" %d +", x);

	if (x < n)
		return 0;
	else
		return x + baesu(n, x - n);


}

int yaksu(int n, int x)
{

	if (x == n)
		printf(" %d   ", x);
	else if (x > n)
		printf(" %d +", x);

	if (x < n)
		return 0;
	else
		return x + baesu(n, x - n);


}