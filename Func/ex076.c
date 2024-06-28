#include<stdio.h>

void gouhei(int x, int y, int* sum, float* ave);

main()
{
	int a, b, c;
	float d;
	printf("整数を２つ入力：");
	scanf("%d%d", &a, &b);

	gouhei(a, b, &c, &d);

	printf("合計 = %d\t平均 = %.2f\n", c, d);
}

// 合計、平均を求める
void gouhei(int x, int y, int* sum, float* ave)
{
	*sum = x + y;
	*ave = (float)*sum / 2;
	return;
}