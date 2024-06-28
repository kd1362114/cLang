#include<stdio.h>

#define SIZE 5

main()
{
	int d[SIZE] = { 30,7,25,16,10 };
	int keep;

	printf("ソート前\n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d\t", d[i]);
	}
	printf("\n\n");

	for (int i = SIZE - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (d[j] > d[j + 1])
			{
				keep = d[j];
				d[j] = d[j + 1];
				d[j + 1] = keep;
			}
		}
	}

	printf("ソート後\n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d\t", d[i]);
	}
	printf("\n");
}