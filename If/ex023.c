#include<stdio.h>
main()
{
	int a, h, m, s;

	printf("秒数を入力：");
	scanf("%d", &a);

	if (a > 5000)
	{
		printf("規定外の数値です (5000まで)\n");
	}
	else
	{
		h = a / 3600;
		m = a % 3600 / 60;
		s = a % 3600 % 60;

		printf("%d時間%d分%d秒です\n", h, m, s);
	}
}