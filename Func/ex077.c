#include<stdio.h>

void maxMin(int x, int y, int z, int* max, int* min);

main()
{
	int a, b, c;
	int max, min;

	printf("整数を３つ入力：");
	scanf("%d%d%d", &a, &b, &c);

	maxMin(a, b, c, &max, &min);

	printf("最大値 = %d\t最小値 = %d\n", max, min);
}

void maxMin(int x, int y, int z, int* max, int* min)
{
	*max = (x > y) ? (x > z ? x : z) : (y > z ? y : z);
	*min = (x < y) ? (x < z ? x : z) : (y < z ? y : z);
	return;
}