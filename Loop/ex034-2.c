
#include<stdio.h>
main()
{
	int a;

	printf("数値を入力：");
	scanf("%d", &a);

	do
	{
		for (int m = 0; m < 5; m++)
		{
			printf("*");
		}
		printf("\n");
		a--;
	} while (a > 0);
}