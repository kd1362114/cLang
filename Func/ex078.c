#include<stdio.h>

int tbl_gokei1(int*);
int tbl_gokei2(int[]);

main()
{
	int a[] = { 10,20,30,40,-999 };
	int gokei;

	gokei = tbl_gokei1(a);
	printf("gokei = %d\n", gokei);

	gokei = tbl_gokei2(a);
	printf("gokei = %d\n", gokei);
}

int tbl_gokei1(int* p)
{
	int gokei = 0;
	while (*p != -999)
	{
		gokei += *p;
		p++;
	}
	return(gokei);
}

int tbl_gokei2(int tbl[])
{
	int gokei = 0;
	for (int i = 0; tbl[i] != -999; i++)
	{
		gokei += tbl[i];
	}
	return(gokei);
}