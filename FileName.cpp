#include <stdio.h>

int main()
{
	int arr[] = { 1,9,2,8,3,7,4,5, };

	int size = sizeof(arr) / sizeof(arr[0]);

	int temp;

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{	
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}


		}

	}

	for (int k = 0; k < size; k++)
	{
		printf("%d ", arr[k]);
	}

	return 0;



}