#include<stdio.h>

void error_msg(void);

main()
{
	int a, b;
	printf("�������Q���́F");
	scanf("%d%d", &a, &b);

	if (b == 0)
	{
		error_msg();
	}
	else
	{
		printf("%d / %d = %d �c %d\n", a, b, a / b, a % b);
	}
}

void error_msg(void)
{
	printf("�O�Ŋ���؂�܂���!!!\n");
	return;
}