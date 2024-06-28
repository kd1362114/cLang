#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int work, data[20];

	for (int i = 0; i < 20; i++)
	{
		data[i] = i + 1;
	}

	int target;
	srand(time(0));
	for (int i = 19; i > 0; i--)
	{
		target = rand() % i;

		work = data[i];
		data[i] = data[target];
		data[target] = work;
	}

	for (int i = 0; i < 20; i++)
	{
		printf("%d\n", data[i]);
	}
}