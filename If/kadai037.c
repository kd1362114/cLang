#include<stdio.h>
main()
{
	int a;

	printf("�O�`100 �܂ł̐��l����́F");
	scanf("%d", &a);

	if (a >= 90)
	{
		printf("����\t�T\n");
	}
	else if (a >= 80)
	{
		printf("����\t�S\n");
	}
	else if (a >= 50)
	{
		printf("����\t�R\n");
	}
	else if (a >= 30)
	{
		printf("����\t�Q\n");
	}
	else
	{
		printf("����\t�P\n");
	}
}