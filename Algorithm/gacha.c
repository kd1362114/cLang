#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int R;

	srand(time(0));

	for (int i = 0; i < 10; i++)
	{
		R = rand() % 100;
		if (R < 3)
		{
			printf("☆☆☆☆☆\tスーパーレア\n");
		}
		else
		{
			printf("☆☆☆\tレア\n");
		}
	}
}