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

	// �搶
	printf("�����搶���V\n");
	p_tbl = tbl[0];
	for (int i = 0; i < (3 * 3); i++)
	{
		if (i % 3 == 1)
		{
			printf("%d\t", *p_tbl);
		}
		p_tbl++;
	}
	printf("\n\n");

	// ����
	printf("�q���������V\n");
	p_tbl = &tbl[0][1];
	for (int i = 0; i < 3; i++)
	{
		printf("%d\t", *p_tbl);
		p_tbl += 3;
	}
	printf("\n");
}