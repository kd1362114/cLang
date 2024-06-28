#include<stdio.h>
main()
{
	int a;

	printf("整数を入力：");
	scanf("%d", &a);

	if (a >= 0)
	{
		printf("入力値はプラスです\n");
	}
	else
	{
		printf("入力値はマイナスです\n");
	}
}