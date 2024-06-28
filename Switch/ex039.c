#include<stdio.h>
main()
{
	char flg;
	int a, b, c;
	int max = 0, min = 0;

	//処理、値の入力
	printf("処理を入力：");
	scanf("%c", &flg);
	printf("整数を入力：");
	scanf("%d%d%d",&a,&b,&c);

	//大文字を小文字に変換
	if (flg >= 65 && flg <= 90)
	{
		flg += 32;
	}

	//処理
	switch (flg)
	{
	case 'd':
		if (a > b)
		{
			max = a;
		}
		else
		{
			max = b;
		}
		if (c > max)
		{
			max = c;
		}
		printf("最大値 = %d\n", max);
		break;
	case 's':
		if (a < b)
		{
			min = a;
		}
		else
		{
			min = b;
		}
		if (c < max)
		{
			min = c;
		}
		printf("最小値 = %d\n", min);
		break;
	case 'g':
		printf("合計 = %d\n", a + b + c);
		break;
	case 'h':
		printf("平均 = %.2f\n", (a + b + c) / (float)3);
		break;
	default:
		printf("規定外の数値です\n");
	}
}