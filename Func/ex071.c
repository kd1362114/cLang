#include<stdio.h>

int gokei(int a, int b, int c);
float heikin(int sum);

main()
{
	int a, b, c, sum = 0;
	float ave = 0;

	printf("整数を３つ入力：");
	scanf("%d%d%d", &a, &b, &c);

	printf("合計 = %d\t平均 = %.2f\n", sum = gokei(a, b, c), heikin(sum));
}

// 合計
int gokei(int a, int b, int c)
{
	return(a + b + c);
}

// 平均
float heikin(int sum)
{
	return((float)sum / 3);
}