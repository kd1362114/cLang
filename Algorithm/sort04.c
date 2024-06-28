#include<stdio.h>

#define SIZE 8

main()
{
	int d[SIZE] = { 70,60,80,50,40,20,30,10 };
	int keep;
	int half;

	printf("ソート前\n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d\t", d[i]);
	}
	printf("\n\n");

	half = SIZE / 2;

	while (half > 0)
	{
		for (int i = half; i < SIZE; i++)
		{
			for (int j = i - half; j >= 0; j -= half)
			{
				// 確認表示
				printf("確認\n");
				for (int k = 0; k < SIZE; k++)
				{
					printf("%d\t", d[k]);
				}
				printf("\n\n");

				if (d[j + half] < d[j])
				{
					keep = d[j];
					d[j] = d[j + half];
					d[j + half] = keep;
				}
				else
				{
					break;
				}
			}
		}
	}
	half = half / 2;

	printf("ソート前\n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d\t", d[i]);
	}
	printf("\n\n");
}