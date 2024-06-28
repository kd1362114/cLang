#include<stdio.h>

void error_msg(void);

main()
{
	int a, b;
	printf("®”‚ğ‚Q‚Â“ü—ÍF");
	scanf("%d%d", &a, &b);

	if (b == 0)
	{
		error_msg();
	}
	else
	{
		printf("%d / %d = %d c %d\n", a, b, a / b, a % b);
	}
}

void error_msg(void)
{
	printf("‚O‚ÅŠ„‚èØ‚ê‚Ü‚¹‚ñ!!!\n");
	return;
}