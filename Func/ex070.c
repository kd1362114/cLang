#include<stdio.h>

int add(int a, int b);
int hiku(int a, int b);

main()
{
	int a, b;

	printf("®”‚ğ‚Q‚Â“ü—ÍF");
	scanf("%d%d", &a, &b);

	printf("‘« = %d\n", add(a, b));
	printf("ˆø = %d\n", hiku(a, b));
}

// ‘«‚µZ
int add(int a, int b)
{
	return(a + b);
}

// ˆø‚«Z
int hiku(int a, int b)
{
	return(a - b);
}