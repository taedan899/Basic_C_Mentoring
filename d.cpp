#include <stdio.h>

void findMax(int a[], int size);

int searchIndex(int a[], int size,int n);

void toBinary(int n);

int Max = -1;

int index = -1;

int main()
{
	int a[] = { 1,2,3,5,4 };

	int n;

	int n2;

	int size = sizeof(a) / sizeof(a[0]);

	findMax(a, size);

	printf("최대 값은 %d입니다.", Max);

	printf("\n찾을 값을 입력하시오 : ");
	scanf_s("%d", &n);

	searchIndex(a,size,n);

	printf("\n10진수를 입력하시오 : ");
	scanf_s("%d", &n2);

	toBinary(n2);

	return 0;

}

void findMax(int a[], int size)
{	
	if (size == 0)
		return;

	if (a[size - 1] > Max){
		Max = a[size - 1];
		 findMax(a, size - 1);
	}
		
	else
		 findMax(a, size - 1);


	
}

int searchIndex(int a[], int size,int n)
{	
	index++;
	if (index == size)
	{
		printf("수를 찾지 못했습니다.");
		return 0;
	}

	else if (a[index] != n)
	{	
		return searchIndex(a, size, n);
	}

	else
	{	
		printf("%d의 index는 %d입니다. ", n, index);
		return 0;
	}

}

void toBinary(int n)
{
	
	if (n == 0)
		return;

		toBinary(n / 2);

		printf("%d", n % 2);



}