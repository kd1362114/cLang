#include<stdio.h>
main()
{
	int a = 0;
	int sum = 0;

	while (1)
	{
		printf("数値を入力：");
		scanf("%d", &a);
		if (a == -999)
		{
			break;
		}
		sum += a;
	}
	printf("\n合計 = %d\n", sum);
}