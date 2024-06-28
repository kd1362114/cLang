#include<stdio.h>
main()
{
	int a, b, c, ret;

	printf("数値を３つ入力：");
	ret = scanf("%d%d%d", &a, &b, &c);

	printf("ret\t: %d\n", ret);
	printf("a\t: %d\n", a);
	printf("b\t: %d\n", b);
	printf("c\t: %d\n", c);

	printf("\n");
	printf("数値を１つ入力：");
	while (scanf("%d", &a) != EOF)
	{
		printf("数値：%d\n\n", a);
		printf("数値を１つ入力：");
	}
}