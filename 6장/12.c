#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int number, solution,digit1, digit2, digit3, digit4;
	srand(time(NULL));

	
	printf("���� ��ȣ�� �Է��Ͻÿ�(0���� 99����): ");
	scanf("%d", &number);

	
	digit3 = number / 10;
	digit4 = number % 10;

	solution = rand() % 100;
	digit1 = solution / 10;
	digit2 = solution % 10;

	

	printf("��÷ ��ȣ�� %d�Դϴ�.\n", solution);

	if (digit1 == digit3 && digit2 == digit4)
		printf("��÷ �ݾ��� 100�����Դϴ�.");
	else if (digit1 == digit3 && digit2 != digit4)
		printf("��÷�ݾ��� 50�����Դϴ�.");
	else if (digit1 != digit3 && digit2 == digit4)
		printf("��÷�ݾ��� 50�����Դϴ�.");
	else
		printf("����� �����ϴ�. ");

	return 0;





	
	
	
	
}