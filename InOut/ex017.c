#include<stdio.h>
main()
{
	float a, b, c;

	printf("整数１を入力：");
	scanf("%f", &a);
	printf("整数２を入力：");
	scanf("%f", &b);
	printf("整数３を入力：");
	scanf("%f", &c);

	printf("合計：%1.3f\t平均：%1.3f", a + b + c, (a + b + c) / 3);
}