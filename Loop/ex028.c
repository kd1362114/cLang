#include<stdio.h>
main()
{
	int ia = 0, goukei = 0;

	while (ia != -999)
	{
		goukei += ia;
		printf("数値を入力：");
		scanf("%d", &ia);
	}
	printf("合計 = %d\n", goukei);
}