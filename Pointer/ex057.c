#include<stdio.h>
main()
{
	int tbl[][3] =
	{
		{10,20,30},
		{40,50,60},
		{70,80,90}
	};
	int* p_tbl;

	p_tbl = tbl[0];
	printf("２次元配列 tbl の内容\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t", *p_tbl++);
		}
		printf("\n");
	}
}