#include<stdio.h>
main()
{
	int a = 0;
	int sum = 0;

	while (1)
	{
		printf("”’l‚ğ“ü—ÍF");
		scanf("%d", &a);
		if (a == -999)
		{
			break;
		}
		sum += a;
	}
	printf("\n‡Œv = %d\n", sum);
}