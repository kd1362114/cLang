#include<stdio.h>
main()
{
	int a;
	
	printf("数値を入力：");
	scanf("%d", &a);

	switch (a / 10)
	{
	case 1:
		printf("10点台\n");
		break;
	case 2:
		printf("20点台\n");
		break;
	case 3:
		printf("30点台\n");
		break;
	case 4:
		printf("40点台\n");
		break;
	default:
		printf("規定外の数値です\n");
		break;
	}
}