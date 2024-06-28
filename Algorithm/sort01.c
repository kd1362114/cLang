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

	for (int i = 0; i < SIZE - 1; i++)
	{
		for (int j = i + 1; j < SIZE; j++)
		{
			if (d[i] > d[j])
			{
				keep = d[i];
				d[i] = d[j];
				d[j] = keep;
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