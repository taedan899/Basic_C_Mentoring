#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Dice();

int main()
{	
	srand(time(NULL));

	int a = Dice();
	
	int b = Dice();


	if (a > b)
	{
		printf("a∞° ¿Ã±Ë");
	}
	else if (a == b)
		printf("∫Ò±Ë");
	else
		printf("b∞° ¿Ã±Ë");
	printf("\na¿« «’¿∫ %d ",a);
	printf("b¿« «’¿∫ %d", b);


}

int Dice()
{
	int sum = 0;
	int s;


	for (int i = 0; i < 3; i++)
	{	
		s = rand() % 6 + 1;
		printf("%d ", s);
		sum += s;
	}
	printf("\n");
	
	return sum;

}