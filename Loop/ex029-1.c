#include<stdio.h>
main()
{
	int a;

	printf("数値を入力：");
	scanf("%d", &a);

	while (0 < a)
	{
		printf("*");
		a--;
	}
	printf("\n");
}