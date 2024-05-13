#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int number, solution,digit1, digit2, digit3, digit4;
	srand(time(NULL));

	
	printf("복권 번호를 입력하시오(0에서 99사이): ");
	scanf("%d", &number);

	
	digit3 = number / 10;
	digit4 = number % 10;

	solution = rand() % 100;
	digit1 = solution / 10;
	digit2 = solution % 10;

	

	printf("당첨 번호는 %d입니다.\n", solution);

	if (digit1 == digit3 && digit2 == digit4)
		printf("당첨 금액은 100만원입니다.");
	else if (digit1 == digit3 && digit2 != digit4)
		printf("당첨금액은 50만원입니다.");
	else if (digit1 != digit3 && digit2 == digit4)
		printf("당첨금액은 50만원입니다.");
	else
		printf("상금은 없습니다. ");

	return 0;





	
	
	
	
}