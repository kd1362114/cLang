#include<stdio.h>

void error_msg(void);

main()
{
	int a, b;
	printf("整数を２つ入力：");
	scanf("%d%d", &a, &b);

	if (b == 0)
	{
		error_msg();
	}
	else
	{
		printf("%d / %d = %d … %d\n", a, b, a / b, a % b);
	}
}

void error_msg(void)
{
	printf("０で割り切れません!!!\n");
	return;
}