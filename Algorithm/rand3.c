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
			printf("%d\t’ÊíUŒ‚\n", kaisin);
		}
	}
	printf("%d\t‚©‚¢‚µ‚ñ‚Ì‚¢‚¿‚°‚«I\n", kaisin);
}