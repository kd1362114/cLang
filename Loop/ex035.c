#include<stdio.h>
main()
{
	int a = 0;
	int sum = 0;

	while (1)
	{
		printf("���l����́F");
		scanf("%d", &a);
		if (a == -999)
		{
			break;
		}
		sum += a;
	}
	printf("\n���v = %d\n", sum);
}