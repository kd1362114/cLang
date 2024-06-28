#include<stdio.h>
main()
{
	int a, h, m, s;

	printf("秒数を入力：");
	scanf("%d", &a);

	if (a <= 5000 && a >= 0)
	{
		h = a / 3600;
		m = a % 3600 / 60;
		s = a % 3600 % 60;

		printf("%d時間%d分%d秒です\n", h, m, s);
	}
	else if (a < 0)
	{
		printf("規定外の数値です (マイナス非対応)\n");
	}
	else
	{
		printf("規定外の数値です (5000まで)\n");
	}
}