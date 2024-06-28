#include<stdio.h>
#include<string.h>

#define SIZE 8

void syo(int*);
void kou(int*);

main()
{
	int data[SIZE] = { 6,10,8,2,9,5,1,7 };
	char handan[128];

	printf("ソート方向：");
	scanf("%s", handan);

	if (strcmp(handan, "昇順") == 0)
	{
		syo(data);
	}
	else if (strcmp(handan, "降順") == 0)
	{
		kou(data);
	}
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", data[i]);
	}
	printf("\n");
}

void syo(int* p)
{
	int keep;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i + 1; j < SIZE; j++)
		{
			if (*(p + i) > *(p + j))
			{
				keep = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = keep;
			}
		}
	}
}

void kou(int* p)
{
	int keep;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i + 1; j < SIZE; j++)
		{
			if (*(p + i) < *(p + j))
			{
				keep = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = keep;
			}
		}
	}
}