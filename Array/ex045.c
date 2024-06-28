#include<stdio.h>
main()
{
	int i, gokei;

	//配列の先頭要素のみ省略可
	int a[][3] = {
		{10,20,30},
		{1,2,3}
	};

	gokei = 0;
	for (i = 0; i <= 2; i++)
	{
		printf("a[0][%d] = %d\n", i, a[0][i]);
		gokei += a[0][i];
	}
	printf("０行目の合計 = %d\n\n", gokei);

	gokei = 0;
	for (i = 0; i <= 2; i++)
	{
		printf("a[1][%d] = %d\n", i, a[1][i]);
		gokei += a[1][i];
	}
	printf("１行目の合計 = %d\n", gokei);
}