#include<stdio.h>
main()
{
	int a, n, m;

	printf("数値を入力：");
	scanf("%d", &a);

	for (n = 0; n < a; n++)
	{
		for (m = a; m > n; m--)
		{
			printf(" ");
		}
		for (m = 0; m < (n + 1); m++)
		{
			printf("*");
		}
		printf("\n");
	}
}