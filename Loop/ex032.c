#include<stdio.h>
main()
{
	int a;

	printf("整数を入力：");
	scanf("%d", &a);

	for (int n = 1; n <= 5; n++)
	{
		printf("%d\n", a * n);
	}
}