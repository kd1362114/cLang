#include<stdio.h>
main()
{
	int sey;

	printf("あなたが生まれた西暦を入力：");
	scanf("%d", &sey);

	if (sey <= 1988)
	{
		printf("あなたは昭和うまれ！\n");
	}
	else
	{
		printf("あなたは平成うまれ！\n");
	}
}