#include<stdio.h>
main()
{
	int d[10] = { 10,5,30,77,16,3,47,29,37,33 };
	int s, i;

	printf("探索値：");
	scanf("%d", &s);

	for (i = 0; i < 10; i++)
	{
		if (s == d[i])
		{
			break;
		}
	}
	if (i < 10)
	{
		printf("d[%d]\n", i);
	}
	else
	{
		printf("ありません\n");
	}
}