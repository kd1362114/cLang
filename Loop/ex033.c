#include<stdio.h>
main()
{
	int n, a = 0, sum = 0;

	for (n = 0; a != -999; n++)
	{
		sum += a;
		printf("���l����́F");
		scanf("%d", &a);
	}
	if (n != 1)
	{
		printf("\n");
		printf("���v = %d\n", sum);
		printf("���� = %.2f\n", sum / (float)(n - 1));
	}
}