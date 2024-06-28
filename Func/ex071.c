#include<stdio.h>

int gokei(int a, int b, int c);
float heikin(int sum);

main()
{
	int a, b, c, sum = 0;
	float ave = 0;

	printf("®”‚ğ‚R‚Â“ü—ÍF");
	scanf("%d%d%d", &a, &b, &c);

	printf("‡Œv = %d\t•½‹Ï = %.2f\n", sum = gokei(a, b, c), heikin(sum));
}

// ‡Œv
int gokei(int a, int b, int c)
{
	return(a + b + c);
}

// •½‹Ï
float heikin(int sum)
{
	return((float)sum / 3);
}