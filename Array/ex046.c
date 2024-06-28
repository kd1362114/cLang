#include<stdio.h>
main()
{
	int sum;

	//配列の戦闘要素のみ省略可
	int a[][3] = {
		{10,20,30},
		{1,2,3}
	};

	for (int i = 0; i < 2; i++)
	{
		sum = 0;
		for (int j = 0; j < 3; j++)
		{
			printf("a[%d][%d] = %d\n", i, j, a[i][j]);
			sum += a[i][j];
		}
		printf("%d行目の合計= %d\n\n", i, sum);
	}
}