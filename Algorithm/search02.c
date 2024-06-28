#include<stdio.h>
main()
{
	int d[11] = { 10,5,30,77,16,3,47,29,37,33 };
	int i;

	printf("’Tõ’lF");
	scanf("%d", &d[10]);

	for (i = 0; d[i] != d[10]; i++);

	if (i < 10)
	{
		printf("d[%d]\n", i);
	}
	else
	{
		printf("‚ ‚è‚Ü‚¹‚ñ\n");
	}
}