#include<stdio.h>
main()
{
	int a;

	printf("���l����́F");
	scanf("%d", &a);

	while (0 < a)
	{
		printf("*");
		a--;
	}
	printf("\n");
}