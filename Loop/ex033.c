#include<stdio.h>
main()
{
	int n, a = 0, sum = 0;

	for (n = 0; a != -999; n++)
	{
		sum += a;
		printf("数値を入力：");
		scanf("%d", &a);
	}
	if (n != 1)
	{
		printf("\n");
		printf("合計 = %d\n", sum);
		printf("平均 = %.2f\n", sum / (float)(n - 1));
	}
}