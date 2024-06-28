#include<stdio.h>
main()
{
	int a;

	printf("‚O`100 ‚Ü‚Å‚Ì”’l‚ð“ü—ÍF");
	scanf("%d", &a);

	if (a >= 90)
	{
		printf("”»’è\t‚T\n");
	}
	else if (a >= 80)
	{
		printf("”»’è\t‚S\n");
	}
	else if (a >= 50)
	{
		printf("”»’è\t‚R\n");
	}
	else if (a >= 30)
	{
		printf("”»’è\t‚Q\n");
	}
	else
	{
		printf("”»’è\t‚P\n");
	}
}