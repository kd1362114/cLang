#include<stdio.h>

#define SIZE 8

int get_max(int*);
int get_min(int*);

main()
{
	int data[SIZE] = { 6,10,8,2,9,5,1,7 };

	printf("MAX = %d\n", get_max(data));
	printf("MIN = %d\n", get_min(data));
}

int get_max(int* p)
{
	int max = *p;

	for (int i = 1; i < SIZE - 1; i++)
	{
		if (max < *(p + i))
		{
			max = *(p + i);
		}
	}
	return(max);
}

int get_min(int* p)
{
	int min = *p;

	for (int i = 1; i < SIZE - 1; i++)
	{
		if (min > *(p + i))
		{
			min = *(p + i);
		}
	}
	return(min);
}