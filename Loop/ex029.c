#include<stdio.h>
main()
{
	int a, b = 0;
	
	printf("数値を入力：");
	scanf("%d", &a);

	while (b < a)
	{
		printf("*");
		b++;
	}
	printf("\n");
}