#include<stdio.h>

int tbl_gokei3(int[], int);

main()
{
	int a[] = { 10,20,30,40,50 };
	int gokei;

	gokei = tbl_gokei3(a, 5);

	printf("gokei = %d\n", gokei);
}

// ������
int tbl_gokei3(int tbl[], int num)
{
	int gokei = 0;
	while (num > 0)
	{
		gokei += tbl[num - 1];
		num--;
	}
	return(gokei);
}


// �搶��
//int tbl_gokei3(int tbl[], int num)
//{
//	int gokei = 0;
//	for (int i = 0; i < num; i++)
//	{
//		gokei += tbl[i];
//	}
//	return(gokei);
//}