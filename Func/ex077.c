#include<stdio.h>

void maxMin(int x, int y, int z, int* max, int* min);

main()
{
	int a, b, c;
	int max, min;

	printf("�������R���́F");
	scanf("%d%d%d", &a, &b, &c);

	maxMin(a, b, c, &max, &min);

	printf("�ő�l = %d\t�ŏ��l = %d\n", max, min);
}

void maxMin(int x, int y, int z, int* max, int* min)
{
	*max = (x > y) ? (x > z ? x : z) : (y > z ? y : z);
	*min = (x < y) ? (x < z ? x : z) : (y < z ? y : z);
	return;
}