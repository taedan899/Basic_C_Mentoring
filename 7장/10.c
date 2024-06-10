#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{


	int n,i ;

	n = 1;




	while (n <= 100)
	{
		for (i = 2; i < n; i++)
		{
			if (n % i == 0)
				break;

		}
		if( n==i )
		printf("%d ", n);


			n++;
	}

	return 0;


}