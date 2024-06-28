#include<stdio.h>

int hikaku(int x, int y);

main()
{
	int a, b;

	printf("®”‚ğ‚Q‚Â“ü—ÍF");
	scanf("%d%d", &a, &b);

	printf("max = %d\n", hikaku(a, b));
}

// ”äŠr
int hikaku(int x, int y)
{
	int max = x;
	if (max < y)
	{
		max = y;
	}
	return(max);
}