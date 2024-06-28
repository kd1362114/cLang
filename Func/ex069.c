#include<stdio.h>
main()
{
	int a, sum = 0, i = 0;
	//a = 0;

	printf("整数：");
	while (scanf("%d", &a) != EOF)
	{
		sum += a;
		i++;
		printf("整数：");
	}

	//for (i = 0; a != EOF; i++)
	//{
	//	printf("整数：");
	//	scanf("%d", &a);
	//	sum += a;
	//}

	printf("合計：%d\t平均：%.2f\n", sum, (float)sum / i);
}