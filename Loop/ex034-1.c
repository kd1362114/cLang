#include<stdio.h>
main()
{
	int a;

	printf("数値を入力：");
	scanf("%d", &a);

	do
	{
		printf("*****\n");
		a--;
	} while (a > 0);
}