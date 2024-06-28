#include<stdio.h>
main()
{
	int n, m, keep;

	printf("”’l‚ğ“ü—ÍF");
	scanf("%d", &n);
	keep = n + 1;

	do
	{
		m = 0;
		do
		{
			printf("*");
			m++;
		} while (m < (keep - n));

		printf("\n");
		n--;
	} while (n > 0);
}