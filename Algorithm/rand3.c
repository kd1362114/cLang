#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int kaisin = 31;

	srand(time(0));

	while (kaisin > 30)
	{

		kaisin = rand() % 100 + 1;
		if (kaisin > 30)
		{
			printf("%d\t通常攻撃\n", kaisin);
		}
	}
	printf("%d\tかいしんのいちげき！\n", kaisin);
}