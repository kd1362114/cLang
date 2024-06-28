#include<stdio.h>

void maxMin(int x, int y, int z, int* max, int* min);

main()
{
	int a, b, c;
	int max, min;

	printf("®”‚ð‚R‚Â“ü—ÍF");
	scanf("%d%d%d", &a, &b, &c);

	maxMin(a, b, c, &max, &min);

	printf("Å‘å’l = %d\tÅ¬’l = %d\n", max, min);
}

void maxMin(int x, int y, int z, int* max, int* min)
{
	*max = (x > y) ? (x > z ? x : z) : (y > z ? y : z);
	*min = (x < y) ? (x < z ? x : z) : (y < z ? y : z);
	return;
}