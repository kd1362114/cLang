#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int a;

	srand(time(0));
	
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			a = rand() % 301 - 100;
			printf("%d\t", a);
		}
		printf("\n");
	}
}