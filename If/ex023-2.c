#include<stdio.h>
main()
{
	int sey;

	printf("西暦を入力：");
	scanf("%d", &sey);

	if (sey % 4 == 0 && (sey % 100 != 0 || sey % 400 == 0))
	{
		printf("うるう年です\n");
	}
	else
	{
		printf("うるう年ではありません\n");
	}
}