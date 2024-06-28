#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int a;

	srand(time(0));
	
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			a = rand() % 300 + 1;
			printf("%d\t", a);
		}
		printf("\n");
	}
}