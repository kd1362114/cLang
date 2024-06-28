
#include<stdio.h>
main()
{
	int a;

	printf("”’l‚ğ“ü—ÍF");
	scanf("%d", &a);

	do
	{
		for (int m = 0; m < 5; m++)
		{
			printf("*");
		}
		printf("\n");
		a--;
	} while (a > 0);
}